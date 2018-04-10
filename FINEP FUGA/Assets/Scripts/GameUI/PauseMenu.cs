using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class PauseMenuButton {
    public UnityEngine.UI.Image image;
    public Vector2 shownPosition;
    public Vector2 hiddenPosition;
    public float normalScale = 1f;
    public float poppedScale = 1.1f;
}

public class PauseMenu : MonoBehaviour {
    public GameObject pausePanel;
    public UnityEngine.UI.Image background;
    public PauseMenuButton[] menuButtons;

    void Update() {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            if(pausePanel.activeSelf)
                HideMenu();
            else
                ShowMenu();
        }

        //TODO: REMOVER DAQUI PRA BAIXO, TESTE!!
        if (Input.GetKeyDown(KeyCode.Space)) {
            EndPanel.PlayEndAnimation(0f);
        }
        for (int i = 48; i < 58; i++) {
            if (Input.GetKeyDown((KeyCode)i)) {
                StepChecker.CheckMarkAtIndex(i - 48);
            }
        }
    }
	
    public void ShowMenu() {
        StartCoroutine(IHidePanel(false, 0f));
        StartCoroutine(IFadeBG(.95f));
        for (int i = 0; i < menuButtons.Length; i++)
            StartCoroutine(IMoveButton(menuButtons[i], true));
    }

    public void HideMenu() {
        StartCoroutine(IHidePanel(true, .2f));
        StartCoroutine(IFadeBG(0f));
        for (int i = 0; i < menuButtons.Length; i++)
            StartCoroutine(IMoveButton(menuButtons[i], false));
    }

    IEnumerator IHidePanel(bool value, float time = .2f) {
        yield return new WaitForSeconds(time);
        pausePanel.SetActive(!value);
    }

    IEnumerator IFadeBG(float alpha, float speed = 5f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            var c = background.color;
            c.a = Mathf.Lerp(c.a, alpha, lerp);
            background.color = c;

            yield return new WaitForEndOfFrame();
        }
    }

    IEnumerator IMoveButton(PauseMenuButton button, bool show, float speed = 2.5f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            var pos = Vector2.Lerp(button.image.rectTransform.anchoredPosition, show ? button.shownPosition : button.hiddenPosition, lerp);
            button.image.rectTransform.anchoredPosition = pos;

            var scale = Mathf.Lerp(button.image.rectTransform.localScale.x, lerp < 0.5f ? button.poppedScale : button.normalScale, lerp);
            button.image.rectTransform.localScale = Vector3.one * scale;

            var c = button.image.color;
            c.a = Mathf.Lerp(c.a, show ? 1f : 0f, lerp);
            button.image.color = c;
           
            yield return new WaitForEndOfFrame();
        }
    }
}
