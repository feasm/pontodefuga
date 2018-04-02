using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

[System.Serializable]
public class MenuPanel {
    public GameObject panel;
    public int prevPanelID;
}

public class MenuFlowManager : MonoBehaviour {
    public RectTransform panel_title, panel_sky, panel_levels;//itens para a transição de título para transição de fases

    public Image[] fadeImages;
    public MenuPanel[] panels;

    public AudioClip[] tipClips;//os audio clips que tocam, explicando as fases
    public string[] tipTexts;//os textos que aparecem enquanto os audios de tiptocam
    public Transform tipPanel;//o painel que revela os textos de tips
    public Text tipText;

    bool changing = false, fadingTitle = false, fadingTipPanel = false, onTitle = true;//barras pretas estão em transição
    int currPanel = 0;//qual o painel atual?

    public AudioSource aSrc;
    public AudioClip clickClip;
    AudioSource clickAsrc = null;
    public MenuNotification notification;

    void Start() {
        Setup();
    }

    void Setup() {
        if (clickAsrc == null) {
            clickAsrc = gameObject.AddComponent<AudioSource>();
            clickAsrc.spatialBlend = 0f;
        }
    }

    void Update() {
        if (!changing && !fadingTitle && Input.GetKeyDown(KeyCode.Escape)) {
            if (currPanel < 0)
                Application.Quit();
            if (currPanel >= 0 && panels[currPanel].prevPanelID < 0)
                ShowTitle();

            FadeAndChangePanel(panels[currPanel].prevPanelID);
            PlayClickSound();

            HideTipPanel();
            StopTipClip();
        }
    }

    void ChangePanel(int id) {
        for (int i = 0; i < panels.Length; i++)
            panels[i].panel.SetActive(false);

        if (id >= 0 || id < panels.Length)
            panels[id].panel.SetActive(true);
        currPanel = id;
    }

    public void FadeAndChangePanel(int id) {
        if (changing || fadingTitle) return;

        if(id >= 0 && id < panels.Length)
            StartCoroutine(IFadeAndChangePanel(id));
    }

	public void SelectLevel(int id) {
		if (changing) return;
        var scene = "Stage" + StageInfo.instance.GetWorldID().ToString("00") + "_" + id.ToString("00");
        if (Application.CanStreamedLevelBeLoaded(scene)) {
            StageInfo.instance.SetStageID(id);
            StartCoroutine(ISelectLevel(scene));
        }
	}

    IEnumerator ISelectLevel(string name){
        for (int i = 0; i < fadeImages.Length; i++)//fade da tela antes de carregar a cena
            StartCoroutine(IFadeImage(fadeImages[i], Screen.currentResolution.height / 2));
        yield return new WaitForSeconds(0.5f);
        SceneManager.LoadScene(name);
    }

    public void SelectWorld(int id) {
        StageInfo.instance.SetWorldID(id);

        //toca o clipe de dicas do grupo de fases caso seja a primeira vez acessndo ele
        var value = PlayerPrefs.GetInt("audioTipsPlayed", 0);
        if (((value >> id) & 1) == 0) {
            value |= (1 << id);
            PlayerPrefs.SetInt("audioTipsPlayed", value);
            PlayTipClip(id, 1.5f);
            ShowTipPanel();
        }
    }

    public void PlayTipClip() {
        PlayTipClip(StageInfo.instance.GetWorldID(), 0f);
    }

    public void StopTipClip() {
        aSrc.Stop();
    }

    public void PlayTipClip(int groupID, float delay) {
        if (aSrc != null && aSrc.isPlaying)
            notification.ShowMessage("Mensagem já está tocando!");
        else
            StartCoroutine(IPlayDelayedTip(groupID - 1, delay));//contagem dos clips inicia no 0, portando é necessário corrigir
    }

    IEnumerator IPlayDelayedTip(int tipID, float delay) {
        yield return new WaitForSeconds(delay);
        if (aSrc != null && tipID >= 0 && tipID < tipClips.Length && tipClips[tipID] != null) {
            aSrc.PlayOneShot(tipClips[tipID], 1f);
        }
    }

    IEnumerator IFadeAndChangePanel(int id) {
        changing = true;

        if (currPanel >= 0 && currPanel < panels.Length && id >= 0 && id < panels.Length) {
            for (int i = 0; i < fadeImages.Length; i++)
                StartCoroutine(IFadeImage(fadeImages[i], Screen.currentResolution.height / 2));
            yield return new WaitForSeconds(0.5f);
        }
        ChangePanel(id);
        if (currPanel >= 0 && currPanel < panels.Length && id >= 0 && id < panels.Length) {
            for (int i = 0; i < fadeImages.Length; i++)
                StartCoroutine(IFadeImage(fadeImages[i], 0f));
            yield return new WaitForSeconds(0.5f);
        }

        changing = false;
    }

    IEnumerator IFadeImage(Image image, float height, float speed = 2f) {
        float startHeight = image.rectTransform.rect.height;
        float timer = 0f;
        while (timer < 1f) {
            timer += speed * Time.deltaTime;
            timer = Mathf.Clamp01(timer);
            var rect = image.rectTransform.sizeDelta;
            rect.y = Mathf.Lerp(rect.y, height, timer);
            image.rectTransform.sizeDelta = rect;
            yield return new WaitForEndOfFrame();
        }
    }

    public void ShowTitle() {
        if (fadingTitle) return;

        StartCoroutine(IMoveTitle(0f, 0f, -panel_levels.sizeDelta.y, true, 0.75f));
    }

    public void HideTitle() {
        if (fadingTitle) return;

        StartCoroutine(IMoveTitle(Screen.height * 1.5f, panel_sky.sizeDelta.y / 2, 0f, false, 0.75f));
    }

    IEnumerator IMoveTitle(float pos_title, float pos_sky, float pos_levels, bool toTitle, float speed = 0.75f) {
        float lerp = 0f;
        fadingTitle = true;

        Vector3 sPos_title = panel_title.anchoredPosition;
        Vector3 sPos_sky = panel_sky.anchoredPosition;
        Vector3 sPos_levels = panel_levels.anchoredPosition;

        Vector3 dPos_title = sPos_title;
        dPos_title.y = pos_title;
        Vector3 dPos_sky = sPos_sky;
        dPos_sky.y = pos_sky;
        Vector3 dPos_levels = sPos_levels;
        dPos_levels.y = pos_levels;

        while (lerp < 1f) {
            yield return new WaitForEndOfFrame();
            lerp += Time.deltaTime * speed;

            var diff = Mathf.Abs(panel_title.anchoredPosition.y - dPos_title.y);
            if (!fadingTitle || diff < 5f)
                lerp = 1f;

            panel_title.anchoredPosition = Vector3.Lerp(panel_title.anchoredPosition, dPos_title, lerp);
            panel_sky.anchoredPosition = Vector3.Lerp(panel_sky.anchoredPosition, dPos_sky, lerp);
            panel_levels.anchoredPosition = Vector3.Lerp(panel_levels.anchoredPosition, dPos_levels, lerp);
        }

        fadingTitle = false;
        onTitle = toTitle;
    }

    public void PlayClickSound() {
        if (clickClip == null || clickAsrc == null) return;

        clickAsrc.pitch = Random.Range(.9f, 1.0f);
        clickAsrc.PlayOneShot(clickClip, 1f);
    }

    public void ShowTipPanel() {
        if (fadingTipPanel) return;

        var worldID = StageInfo.instance.GetWorldID();
        if (worldID - 1 >= 0 && worldID - 1 < tipTexts.Length) {
            tipText.text = tipTexts[worldID - 1];
            StartCoroutine(ISetTipPanel(1f));
        }
    }

    public void HideTipPanel() {
        if (fadingTipPanel) return;

        StartCoroutine(ISetTipPanel(0f));
    }

    IEnumerator ISetTipPanel(float destScale) {
        fadingTipPanel = true;

        float lerp = 0;
        float currScale = tipPanel.localScale.x;
        while (lerp < 1f) {
            lerp += Time.deltaTime * 2f;

            tipPanel.localScale = Vector3.one * Mathf.Lerp(tipPanel.localScale.x, destScale, lerp);
            yield return new WaitForEndOfFrame();
        }

        fadingTipPanel = false;
    }
}
