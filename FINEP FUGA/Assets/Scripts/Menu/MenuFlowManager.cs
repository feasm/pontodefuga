using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

[System.Serializable]
public class MenuPanel {
    public GameObject panel;
    public RectTransform content;
    public int prevPanelID;
}

public class MenuFlowManager : MonoBehaviour {
    static bool gameJustBegun = true;
    static int lastPanel = -1;
    static Vector2 lastContentPos;

    public static void SetLastPanel(int id) {
        lastPanel = id;
        lastContentPos = Vector2.zero;
    }

    public RectTransform canvas, panel_title, panel_sky, panel_levels;//itens para a transição de título para transição de fases

    public Image[] fadeImages;
    public MenuPanel[] panels;

    public AudioClip[] tipClips;//os audio clips que tocam, explicando as fases
    public string[] tipTexts;//os textos que aparecem enquanto os audios de tiptocam
    public Transform tipPanel;//o painel que revela os textos de tips
    public Text tipText;

    bool changing = false, fadingTitle = false, fadingTipPanel = false, goBack = false;//barras pretas estão em transição
    int currPanel = -1;//qual o painel atual?

    public AudioSource aSrc;
    public AudioClip clickClip;
    public MenuNotification notification;

    void Start() {
        Setup();
    }

    void Setup() {
        if (!gameJustBegun)//apenas mostra o title caso o aplicativo tenha sido acabado de ser aberto
            HideTitle(100f);
        gameJustBegun = false;

        ChangePanel(lastPanel);
        if (currPanel >= 0 && currPanel < panels.Length && panels[currPanel].content != null)
            panels[currPanel].content.anchoredPosition = lastContentPos;


        //esconde as baras pretas
        for (int i = 0; i < fadeImages.Length; i++)
            StartCoroutine(IFadeImage(fadeImages[i], 0f));
    }

    void Update() {
        if (!changing && !fadingTitle && (Input.GetKeyDown(KeyCode.Escape) || goBack)) {
            if (currPanel < 0) {
                Application.Quit();
            }
            if (currPanel >= 0)
                FadeAndChangePanel(panels[currPanel].prevPanelID);

            if (currPanel < 0)
                ShowTitle();            

            PlayClickSound();

            HideTipPanel();
            StopTipClip();
        }

        //set do contentX pra posição ancorada do content do painel atual
        if (currPanel >= 0 && currPanel < panels.Length && panels[currPanel].content != null)
            lastContentPos = panels[currPanel].content.anchoredPosition;

        goBack = false;
    }

    public void ChangePanel(int id) {
        if (id >= 0 && id < panels.Length) {
            for (int i = 0; i < panels.Length; i++)
                panels[i].panel.SetActive(false);
        }

        if (id >= 0 && id < panels.Length)
            panels[id].panel.SetActive(true);

        currPanel = id;
        lastPanel = currPanel;
    }

    public void FadeAndChangePanel(int id) {
        if (changing || fadingTitle) return;

        StartCoroutine(IFadeAndChangePanel(id));
    }

	public void SelectLevel(int id) {
		if (changing) return;
        var scene = "mainStage";
        if (Application.CanStreamedLevelBeLoaded(scene)) {
            StageInfo.instance.SetStageID(id);
            StartCoroutine(ISelectLevel(scene));
        }
	}

    IEnumerator ISelectLevel(string name){
        for (int i = 0; i < fadeImages.Length; i++)//fade da tela antes de carregar a cena
            StartCoroutine(IFadeImage(fadeImages[i], canvas.sizeDelta.y / 2f));
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
                StartCoroutine(IFadeImage(fadeImages[i], canvas.sizeDelta.y / 2f));
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
        float timer = 0f;

        yield return new WaitForEndOfFrame();//wait inicial para evitar erros quando a cena está travada
        while (timer < 1f) {
            yield return new WaitForEndOfFrame();
            timer += speed * Time.deltaTime;
            timer = Mathf.Clamp01(timer);
            var rect = image.rectTransform.sizeDelta;
            rect.y = Mathf.Lerp(rect.y, height, timer);
            image.rectTransform.sizeDelta = rect;
        }
    }

    public void ShowTitle() {
        ShowTitle(0.75f);
    }

    public void ShowTitle(float speed) {
        if (fadingTitle) return;

        StartCoroutine(IMoveTitle(0f, 0f, -panel_levels.sizeDelta.y, speed));
    }

    public void HideTitle() {
        HideTitle(0.75f);
    }

    public void HideTitle(float speed = 0.75f) {
        if (fadingTitle) return;

        StartCoroutine(IMoveTitle(canvas.sizeDelta.y, panel_sky.sizeDelta.y / 2, 0f, speed));
    }

    IEnumerator IMoveTitle(float pos_title, float pos_sky, float pos_levels, float speed = 0.75f) {
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
            lerp += Time.deltaTime * speed;

            var diff = Mathf.Abs(panel_title.anchoredPosition.y - dPos_title.y);
            if (!fadingTitle || diff < 5f)
                lerp = 1f;

            panel_title.anchoredPosition = Vector3.Lerp(panel_title.anchoredPosition, dPos_title, lerp);
            panel_sky.anchoredPosition = Vector3.Lerp(panel_sky.anchoredPosition, dPos_sky, lerp);
            panel_levels.anchoredPosition = Vector3.Lerp(panel_levels.anchoredPosition, dPos_levels, lerp);

            yield return new WaitForEndOfFrame();
        }

        fadingTitle = false;
    }

    public void PlayClickSound() {
        AudioPlayer.instance.PlayAudio(AudioSFX.Click, Random.Range(.9f, 1f));
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

    public void GoBack() {
        goBack = true;
    }

    public void CheatUnlockLevel() {
        var si = StageInfo.instance;
        si.UnlockNextLevel(true);

        if (si.LevelExists(si.GetWorldID().ToString("00") + "_" + (si.GetStageID() + 1).ToString("00")))
            si.SetStageID(StageInfo.instance.GetStageID() + 1);
    }
}
