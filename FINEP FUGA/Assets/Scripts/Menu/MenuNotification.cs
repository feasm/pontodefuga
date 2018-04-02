using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuNotification : MonoBehaviour {
    public RectTransform notificationPanel;
    public Text notificationText;

    bool moving = false, popping = false;

    public void ShowMessage(string text) {
        notificationText.text = text;
        if (!moving)
            StartCoroutine(IShowPanel());
        else if(!popping)
            StartCoroutine(IPopPanel());
    }

    IEnumerator IShowPanel() {
        moving = true;

        StartCoroutine(IMovePanel(notificationPanel.sizeDelta.y / 2));
        yield return new WaitForSeconds(0.1f);
        if (!popping)
            StartCoroutine(IPopPanel());
        yield return new WaitForSeconds(2.0f);
        if (!popping)
            StartCoroutine(IPopPanel());
        yield return new WaitForSeconds(0.1f);
        StartCoroutine(IMovePanel(-notificationPanel.sizeDelta.y / 2));
        yield return new WaitForSeconds(0.1f);
        

        moving = false;
    }

    IEnumerator IPopPanel() {
        popping = true;

        StartCoroutine(IScalePanel(1.05f, 10f));
        yield return new WaitForSeconds(0.1f);
        StartCoroutine(IScalePanel(1f, 10f));
        yield return new WaitForSeconds(0.1f);

        popping = false;
    }

    IEnumerator IMovePanel(float height, float speed = 10f) {
        var lerp = 0f;

        var startPos = notificationPanel.anchoredPosition;
        var endPos = startPos;
        endPos.y = height;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;
            notificationPanel.anchoredPosition = Vector2.Lerp(startPos, endPos, lerp); 
            yield return new WaitForEndOfFrame();
        }
    }

    IEnumerator IScalePanel(float scale, float speed = 4f) {
        var lerp = 0f;

        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;
            notificationPanel.localScale = Vector2.Lerp(Vector3.one, Vector3.one * scale, lerp);
            yield return new WaitForEndOfFrame();
        }
    }
}
