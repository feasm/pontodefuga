using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StagePhoto : MonoBehaviour {

	public Camera camera;

	void Start () {
		Setup ();
	}

	void Update () {
		
	}

	private void Setup() {
		SetWidthToCamera ();
	}

	private void SetWidthToCamera() {
		var width = Camera.main.orthographicSize / 2 * Screen.width / Screen.height;

		var spriteRenderer = GetComponent<SpriteRenderer> ();
		Sprite s = spriteRenderer.sprite;
		float unitWidth = s.textureRect.width / s.pixelsPerUnit;

		transform.localScale = new Vector3((float)width / unitWidth * 4, (float)width / unitWidth * 4);
	}
}
