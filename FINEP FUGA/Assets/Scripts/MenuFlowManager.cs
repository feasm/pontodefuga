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
    public Image[] fadeImages;
    public MenuPanel[] panels;
    bool changing = false;//barras pretas estão em transição
    int currPanel = 0;//qual o painel atual?

    int worldID = 0;

	string[] stages = {
		"Stage01_01",
		"Stage01_02",
		"Stage01_03",
		"Stage01_04"
	};

    void Update() {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            if (!changing && panels[currPanel].prevPanelID == -1)
                Application.Quit();
            else
                FadeAndChangePanel(panels[currPanel].prevPanelID);
        }
    }

    void ChangePanel(int id) {
        if (id < 0 || id >= panels.Length) return;

        for (int i = 0; i < panels.Length; i++)
            panels[i].panel.SetActive(false);
        panels[id].panel.SetActive(true);
        currPanel = id;
    }

    public void FadeAndChangePanel(int id) {
        if (changing) return;
        StartCoroutine(IFadeAndChangePanel(id));
    }

	public void SelectLevel(int id) {
		if (changing) return;
        var scene = "Stage" + worldID.ToString("00") + "_" + id.ToString("00");
        if(Application.CanStreamedLevelBeLoaded(scene))
            StartCoroutine(ISelectLevel(scene));
	}

    IEnumerator ISelectLevel(string name){
        for (int i = 0; i < fadeImages.Length; i++)//fade da tela antes de carregar a cena
            StartCoroutine(IFadeImage(fadeImages[i], Screen.height / 2f));
        yield return new WaitForSeconds(0.5f);
        SceneManager.LoadScene(name);
    }

    public void SelectWorld(int id) {
        worldID = id;
    }

    IEnumerator IFadeAndChangePanel(int id) {
        changing = true;
        for (int i = 0; i < fadeImages.Length; i++ )
            StartCoroutine(IFadeImage(fadeImages[i], Screen.height / 2f));
        yield return new WaitForSeconds(0.5f);
        ChangePanel(id);
        for (int i = 0; i < fadeImages.Length; i++)
            StartCoroutine(IFadeImage(fadeImages[i], 0f));
        yield return new WaitForSeconds(0.5f);
        changing = false;
    }

    IEnumerator IFadeImage(Image image, float height, float speed = 2f) {
        float startHeight = image.rectTransform.rect.height;
        float timer = 0f;
        while (timer < 1f) {
            timer += speed * Time.deltaTime;
            timer = Mathf.Clamp01(timer);
            var rect = image.rectTransform.sizeDelta;
            rect.y = Mathf.Lerp(startHeight, height, timer);
            image.rectTransform.sizeDelta = rect;
            yield return new WaitForEndOfFrame();
        }
    }
}
