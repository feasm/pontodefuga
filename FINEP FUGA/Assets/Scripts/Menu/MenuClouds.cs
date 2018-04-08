using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuClouds : MonoBehaviour {
    public Image[] clouds;
	// Use this for initialization
	void Start () {
        Setup();
	}

    void Setup() {
        for (int i = 0; i < clouds.Length; i++)
            StartCoroutine(IAnimateCloud(clouds[i], 0f, Screen.currentResolution.width, 0, Screen.currentResolution.height));
    }

    IEnumerator IAnimateCloud(Image cloud, float xMin, float xMax, float yMin, float yMax) {
        while (true) {
            var pos = cloud.rectTransform.anchoredPosition;
            pos.x = Random.Range(xMin, xMax);
            pos.y = Random.Range(yMin, yMax);
            cloud.rectTransform.anchoredPosition = pos;

            float timer = Random.Range(2f, 7f);
            float speed = Random.Range(10f, 30f);
            speed *= Random.Range(0, 2) == 0 ? 1f : -1f;
            float transparency = 0f;

            while (timer > 0f) {
                timer -= Time.deltaTime;
                transparency += Time.deltaTime;
                if (timer < 1f)
                    transparency = timer;

                Color c = cloud.color;
                c.a = Mathf.Clamp01(transparency);
                cloud.color = c;

                pos = cloud.rectTransform.anchoredPosition;
                pos.x += Time.deltaTime * speed;
                cloud.rectTransform.anchoredPosition = pos;
                
                yield return new WaitForEndOfFrame();
            }
        }
    }
}
