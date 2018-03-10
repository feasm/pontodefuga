using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuSlowerScroll : MonoBehaviour {
    public ScrollRect scrollRect;
    RectTransform thisRect;
    public float intensity = 0.1f;
    Vector2 startPosition;
	// Use this for initialization
	void Start () {
        thisRect = GetComponent<RectTransform>();
        if(thisRect != null)
            startPosition = thisRect.anchoredPosition;
	}
	
	// Update is called once per frame
	void LateUpdate () {
        if (thisRect == null) return;

        var calculatedPos = startPosition;
        calculatedPos.y += scrollRect.content.anchoredPosition.y * intensity;
        thisRect.anchoredPosition = calculatedPos;
	}
}
