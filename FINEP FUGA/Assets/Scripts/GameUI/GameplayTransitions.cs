using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameplayTransitions : MonoBehaviour {
    public RectTransform[] fadeRects;
    public RectTransform canvas;

    void Start() {
        for (int i = 0; i < fadeRects.Length; i++)
            StartCoroutine(IFadeRect(fadeRects[i], 0f, 2f));
    }

    public void FadeAndLoadScene(string sceneName) {
        StartCoroutine(IFadeAndLoadScene(sceneName));
    }

    public void FadeAndReloadScene() {
        FadeAndLoadScene(SceneManager.GetActiveScene().name);
    }

    IEnumerator IFadeAndLoadScene(string sceneName) {
        for (int i = 0; i < fadeRects.Length; i++)
            StartCoroutine(IFadeRect(fadeRects[i], canvas.sizeDelta.y / 2f, 2f));

        yield return new WaitForSeconds(0.5f);
        SceneManager.LoadScene(sceneName);
    }

    IEnumerator IFadeRect(RectTransform rect, float height, float speed = 2f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            Vector2 sizeDelta = rect.sizeDelta;
            sizeDelta.y = Mathf.Lerp(sizeDelta.y, height, lerp);
            rect.sizeDelta = sizeDelta;

            yield return new WaitForEndOfFrame();
        }
    }
}
