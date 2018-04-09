using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;

public class EditorManager : MonoBehaviour {

	public SpriteRenderer image;
	public Transform horizontalLineHit;
	public PF[] PFs;

	private Stage stage;

	public string helpMessage;

	void Start () {
		
	}

	public void BuildStage() {
		stage = new Stage ();
		stage.horizonLineHit = horizontalLineHit.localPosition;
		stage.name = image.sprite.texture.name;

		List<Point> pfs = new List<Point>();

		foreach (PF pf in PFs) {
			Point point = new Point ();

			point.pf = new Element ();
			point.pf.position = pf.gameObject.transform.localPosition;
			point.pf.scale = pf.gameObject.transform.localScale;
			point.pf.rotation = pf.gameObject.transform.eulerAngles;

			point.line1 = new Element ();
			point.line1.position = pf.line1.gameObject.transform.localPosition;
			point.line1.scale = pf.line1.gameObject.transform.localScale;
			point.line1.rotation = pf.line1.gameObject.transform.eulerAngles;

			point.line2 = new Element ();
			point.line2.position = pf.line2.gameObject.transform.localPosition;
			point.line2.scale = pf.line2.gameObject.transform.localScale;
			point.line2.rotation = pf.line2.gameObject.transform.eulerAngles;

			pfs.Add (point);
		}

		stage.pfs = pfs;

		StageData stages = JSONParser.LoadResources ();
		stages.stages.Add (stage);

		JSONParser.SaveResources (stages);
	}
}
