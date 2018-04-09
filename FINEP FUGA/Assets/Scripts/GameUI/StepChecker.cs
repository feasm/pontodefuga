using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepChecker : MonoBehaviour {
    static StepChecker manager;
    public RectTransform[] checkRects;

    void Awake() {
        manager = this;
    }

    public static void CheckMarkAtIndex(int index) {
        manager.CheckMark(index);
    }

    public void CheckMark(int index) {
        if (index < 0 || index >= checkRects.Length) return;

        checkRects[index].gameObject.SetActive(true);
        StartCoroutine(IPopMark(index));
    }

    IEnumerator IPopMark(int index, float normal = 1f, float pop = 2f, float speed = 2.5f) {
        if (index >= 0 && index < checkRects.Length) {
            var rect = checkRects[index];

            float lerp = 0f;
            while (lerp < 1f) {
                lerp += Time.deltaTime * speed;

                rect.localScale = Vector3.Lerp(rect.localScale, Vector3.one * (lerp < 0.5f ? pop : normal), lerp);

                yield return new WaitForEndOfFrame();
            }
        }
    }
}
