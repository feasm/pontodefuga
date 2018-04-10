using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ScrollManager : MonoBehaviour {

	public GameObject scrollContent;

	[Header("Prefabs")]
	public Option optionPF1;
	public Option optionPF2;

	[Header("Test")]
	public PF PF1;
	public PF PF2;

	[Header("Managers")]
	public StageManager stageManager;

	void Start () {
		loadPFs ();
	}

	void Update () {
		
	}

	private void loadPFs() {
		var index = 0;

		foreach (PF pf in stageManager.PFs) {
			var newPF = Instantiate (optionPF1, scrollContent.transform) as Option;
			setPF (newPF, pf);
			addEventTrigger (newPF, index);

			index++;
		}
	}

	private void setPF(Option newPF, PF scenePF) {
		var worldXPercentLine1 = scenePF.line1.transform.localPosition.x * 100f / 7f;
		var worldYPercentLine1 = scenePF.line1.transform.localPosition.y * 100f / 3f;

		var worldXPercentLine2 = scenePF.line2.transform.localPosition.x * 100f / 7f;
		var worldYPercentLine2 = scenePF.line2.transform.localPosition.y * 100f / 3f;

		var line1XPos = 65f / 100f * worldXPercentLine1;
		var line1YPos = 48f / 100f * worldYPercentLine1;

		var line2XPos = 65f / 100f * worldXPercentLine2;
		var line2YPos = 48f / 100f * worldYPercentLine2;


		newPF.line1.transform.localEulerAngles = scenePF.line1.gameObject.transform.localEulerAngles;
		newPF.line1.anchoredPosition = new Vector2 (line1XPos, line1YPos);

		newPF.line2.transform.localEulerAngles = scenePF.line2.gameObject.transform.localEulerAngles;
		newPF.line2.anchoredPosition = new Vector2 (line2XPos, line2YPos);
	}

	private void addEventTrigger (Option newPF, int index) {
		EventTrigger trigger = newPF.GetComponentInChildren<EventTrigger>();
		EventTrigger.Entry entry = new EventTrigger.Entry();
		entry.eventID = EventTriggerType.PointerDown;
		entry.callback.AddListener( (eventData) => { selectOption(index); } );
		trigger.triggers.Add(entry);
	}

	private void selectOption (int index) {
		StageManager stagerManager = GameObject.Find ("Manager").GetComponent<StageManager> ();
		stageManager.SelectPF (index);
	}
}
