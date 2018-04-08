using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HelpBubble : MonoBehaviour {
    public UnityEngine.UI.Text bubbleText;
    public UnityEngine.UI.Image bubbleImage;
    bool shown = false;

    public void SetBubbleText(string text){
        bubbleText.text = text;
    }

    public void ToggleBubble() {
        StartCoroutine(IShowBubble(!shown));
    }

    IEnumerator IShowBubble(bool show, float speed = 5f) {
        shown = show;
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            Color c = bubbleImage.color;
            c.a = Mathf.Lerp(c.a, show ? 1f : 0f, lerp * 1.1f);
            bubbleImage.color = c;
            bubbleImage.rectTransform.localScale = Vector3.Lerp(bubbleImage.rectTransform.localScale, show ? Vector3.one : Vector3.zero, lerp);

            c = bubbleText.color;
            c.a = Mathf.Lerp(c.a, show ? 1f : 0f, lerp * 1.1f);
            bubbleText.color = c;

            yield return new WaitForEndOfFrame();
        }
    }
}
