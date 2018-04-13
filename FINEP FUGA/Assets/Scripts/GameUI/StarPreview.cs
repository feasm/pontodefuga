using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StarPreview : MonoBehaviour {
    public RectTransform[] activeStarRects;
    public RectTransform[] inactiveStarRects;
    public RectTransform textRect;
    int starAmount = 3;//estrelas começam no 3, aí o loop checa por mudanças através do Stageinfo

    void Update() {
        var currStars = StageInfo.instance.GetStartAmount();
        if (currStars != starAmount) {//perdeu alguma estrela
            starAmount = currStars;
            UncheckStar(starAmount);
        }
    }

    public void UncheckStar(int index) {
        if (index < 0 || index >= activeStarRects.Length) return;

        inactiveStarRects[index].gameObject.SetActive(true);
        StartCoroutine(IHideStar(index));
    }

    IEnumerator IHideStar(int index, float normal = 0f, float pop = 2f, float speed = 2.5f) {
        StartCoroutine(IPopRect(textRect, 1f, 2f, 0.75f));
        yield return new WaitForSeconds(0.5f);

        StartCoroutine(IPopRect(activeStarRects[index]));
        yield return new WaitForSeconds(0.2f);
        
        activeStarRects[index].gameObject.SetActive(false);
    }

    IEnumerator IPopRect(RectTransform rect, float normal = 0f, float pop = 2f, float speed = 1f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            rect.localScale = Vector3.Lerp(rect.localScale, Vector3.one * (lerp < 0.5f ? pop : normal), lerp);

            yield return new WaitForEndOfFrame();
        }
    }
}
