using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PF : MonoBehaviour {

	public GameObject line1;
	public GameObject line2;
	int id;

	string color1 = "0B65D4FF";
	string color2 = "D7BF07FF";
	string color3 = "D76007FF";
	string color4 = "D70707FF";

	public void Setup(int id) {
		this.id = id;

		SetColor ();
	}

	void SetColor() {
		Color color = new Color ();

		switch (id) {
		case 1:
			ColorUtility.TryParseHtmlString (color1, out color);
			break;
		case 2:
			ColorUtility.TryParseHtmlString (color2, out color);
			break;
		case 3:
			ColorUtility.TryParseHtmlString (color3, out color);
			break;
		case 4:
			ColorUtility.TryParseHtmlString (color4, out color);
			break;
		default:
			Debug.Log ("Id not found");
			break;
		}

		SetColorOnComponents (color);
	}

	void SetColorOnComponents(Color color) {
		line1.GetComponent<SpriteRenderer> ().color = color;
		line2.GetComponent<SpriteRenderer> ().color = color;
	}
}
