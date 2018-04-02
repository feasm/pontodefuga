using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuRelativePosition : MonoBehaviour {
    public RectTransform targetRect, xRelative, yRelative;
    public float xOffset = 0f, yOffset = 0f, xMultiplier = 1f, yMultiplier = 1f;
    Vector3 startingPos;
    float sXOffset = 0f, sYOffset = 0f;

    void Start() {
        startingPos = new Vector3();
        if(!targetRect.Equals(null))
            startingPos = targetRect.position;
        if (!xRelative.Equals(null))
            sXOffset = xRelative.position.x;
        if (!yRelative.Equals(null))
            sYOffset = yRelative.position.y;
    }

	void LateUpdate () {
        if (targetRect.Equals(null)) return;

        var pos = targetRect.position;

        if (!xRelative.Equals(null)) {
            pos.x = startingPos.x + xOffset + xRelative.position.x * xMultiplier - sXOffset;
        }
        if (!yRelative.Equals(null)) {
            pos.y = startingPos.y + yOffset + yRelative.position.y * yMultiplier - sYOffset;
        }

        targetRect.position = pos;
	}
}
