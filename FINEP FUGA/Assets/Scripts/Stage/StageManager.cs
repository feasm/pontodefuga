﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StageManager : MonoBehaviour {
	enum GameState {
		HorizonLine,
		EscapePoint,
		ChangingState
	};

	// TODO: Deixar esta variável proporcional a SCREEN_SIZE
	public static float HIT_RANGE = .2f;
	public static float CHANGE_STATE_SPEED = 5;

	GameState state;

	public GameObject image;
	public Vector2 initialImagePosition;

	public RectTransform imageHeader;
	public Vector3 initialImageHeaderPosition;
	public RectTransform canvasCenter;

	public SpriteRenderer horizonLine;
	public SpriteRenderer horizonBalloon;
	public GameObject horizonLineHit;

	public float horizonLineSpeed;

	private bool canMoveLine;
	private bool horizonLineMoving;
	private bool stageCompleted;
	private int hitErrors;

	public Text StageCompleted;
	public Text timeText;
	public Text errorsText;

	private float secondsCount;
	private int minuteCount;
	private int hourCount;

	public CanvasGroup scrollView;

	private int PFCount;

	[Header("PF")]
	public PF PFPrefab;
	public List<PF> PFs;
	public List<Vector3> initialPFsPosition;
	private GameObject PF;

	private bool PFSelected;

	private Vector3 InitialPF;
	private Vector3 InitialPF1;
	private Vector3 InitialPF2;

	public GameObject PF1Indicator;
	public GameObject PF2Indicator;
	public GameObject PFIndicator;

	private StageData stageData;

	void Awake () {
		LoadResourceTextfile ("stages");
		SetupHLFromJSON ();
		SetupPFsFromJSON ();
	}

	void LoadResourceTextfile(string path)
	{
		TextAsset file = Resources.Load(path) as TextAsset;
		string content = file.ToString ();
	
		stageData = JsonUtility.FromJson<StageData>(content);
	}

	private void SetupHLFromJSON () {
		horizonLineHit.transform.localPosition = stageData.stages [0].horizonLineHit;
		Debug.Log (horizonLineHit.transform.position);
	}

	private void SetupPFsFromJSON() {
		foreach (Point pf in stageData.stages[0].pfs) {
			PF newPF = Instantiate(PFPrefab, image.transform.position, Quaternion.identity) as PF;
			newPF.transform.position = new Vector3 (pf.pf.position.x, pf.pf.position.y, pf.pf.position.z);

			setLine (newPF.line1, pf.line1);
			setLine (newPF.line2, pf.line2);

			initialPFsPosition.Add (newPF.transform.position);
			PFs.Add (newPF);
		}

		PFCount = stageData.stages [0].pfs.Length;
	}

	private void setLine(GameObject line, Element jsonLine) {
		var line2Pos = jsonLine.position;
		var line2Rotation = jsonLine.rotation;
		var line2Scale = jsonLine.scale;

		line.transform.localPosition = new Vector3 (line2Pos.x, line2Pos.y, line2Pos.z);
		line.transform.localEulerAngles = new Vector3 (line2Rotation.x, line2Rotation.y, line2Rotation.z);
		line.transform.localScale = new Vector3 (line2Scale.x, line2Scale.y, line2Scale.z);
	}

	void Start () {
		Setup ();
	}

	void Update () {
		HandleInput ();
		UpdateTimerUI ();
	}

	private void HandleInput() {
		switch(state) {
		case GameState.HorizonLine:
			if (canMoveLine) {
				if (Input.GetMouseButtonDown (0)) {
					horizonLineMoving = true;
					SetHorizonLineAlpha (1);
				} else if (Input.GetMouseButtonUp (0)) {
					horizonLineMoving = false;
					SetHorizonLineAlpha (0);

					CheckHorizonLineHit ();
				}

				if (Input.GetMouseButton (0)) {
					OnMouseMove ();
				}
			}
			break;
		case GameState.EscapePoint:
			if (PFSelected) {
				if (Input.GetMouseButton (0)) {
					OnPFMove ();
				} else {
					CheckPFHit ();
				}
			}
			break;
		case GameState.ChangingState:
			ChangingGameState ();
			break;
		}
	}

	private void Setup() {
		SetHorizonLineAlpha (0);
		hitErrors = 0;
		canMoveLine = true;
		horizonLineMoving = false;
		stageCompleted = false;
		state = GameState.HorizonLine;

		PFSelected = false;

		setupPFs ();

		initialImagePosition = image.transform.position;
		image.transform.position = new Vector3(0, image.transform.position.y, image.transform.position.z);
		horizonLine.transform.position = new Vector3(0, horizonLine.transform.position.y, horizonLine.transform.position.z);

		setupCanvas ();
	}

	private void setupPFs() {
		foreach (PF pf in PFs) {
			pf.gameObject.SetActive (false);
		}
	}

	private void setupCanvas() {
		scrollView.alpha = 0;

		initialImageHeaderPosition = imageHeader.anchoredPosition;
		imageHeader.anchoredPosition = new Vector2(canvasCenter.anchoredPosition.x, imageHeader.anchoredPosition.y);
	}

	private void SetHorizonLineAlpha(float alpha) {
		var color = horizonLine.color;
		color.a = alpha;

		horizonLine.color = color;
		var children = horizonLine.GetComponentsInChildren<SpriteRenderer> ();
		foreach (SpriteRenderer child in children) {
			color = child.color;
			color.a = alpha;
			child.color = color;
		}
	}

	private void SetActive(GameObject target, bool active) {
		target.SetActive (active);
	}

	private void OnMouseMove() {
		var mousePosition = Input.mousePosition;
		mousePosition.z = 10.0f;
		mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);

		var newPosition = new Vector3 (
			horizonLine.transform.position.x,
			mousePosition.y,
			-5
		);

		horizonLine.transform.position = Vector3.Lerp(
			horizonLine.transform.position, 
			newPosition, 
			10 * Time.deltaTime
		);
	}

	private void OnPFMove() {
		var mousePosition = Input.mousePosition;
		mousePosition.z = 10.0f;
		mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);

		var newPosition = new Vector3 (
			mousePosition.x,
			mousePosition.y,
			PF.transform.position.z
		);

		PF.transform.position = Vector3.Lerp(
			PF.transform.position, 
			newPosition, 
			10 * Time.deltaTime
		);
	}

	private void CheckPFHit() {
		var difference = PF.transform.position.y - InitialPF.y;

		if (Mathf.Abs (difference) < HIT_RANGE) {
			LockPF (true);
		} else {
			LockPF (false);
			// hitErrors += 1;
			// errorsText.text = "Errors: " + hitErrors;
		}
	}

	private void LockPF(bool hit) {
		// TODO: Animar linha do horizonte se ajustando no ponto correto
		PF.transform.position = InitialPF;
		PFSelected = false;

		if (hit) {
			PFCount -= 1;
			if (PFCount == 0) {
				CompleteStage ();
			}
		}
		if (!hit) {
			PF.SetActive (false);
		}
	}

	private void CheckHorizonLineHit() {
		var difference = horizonLine.gameObject.transform.position.y - horizonLineHit.transform.position.y;

		if (Mathf.Abs (difference) < HIT_RANGE) {
			LockHorizonLine ();
		} else {
			// TODO: Remover se realmente não houver erros
			// hitErrors += 1;
			// errorsText.text = "Errors: " + hitErrors;
		}
	}

	private void LockHorizonLine() {
		canMoveLine = false;
		SetHorizonLineAlpha (1);

		// TODO: Animar linha do horizonte se ajustando no ponto correto
		var newPosition = horizonLineHit.transform.position;
		horizonLine.gameObject.transform.position = new Vector3(horizonLine.gameObject.transform.position.x, newPosition.y, -5);

		ChangeGameState ();
		// CompleteStage ();
	}

	private void CompleteStage() {
		stageCompleted = true;

		// TODO: Animar aparição do Stage Completed
		var color = StageCompleted.color;
		color.a = 1;
		StageCompleted.color = color;

		// TODO: Chamar StageInfo
		// StageInfo.instance.SetStageInfo(hourCount * 360 + minuteCount * 60 + secondsCount)

		StartCoroutine (BackToMenu());
	}

	private void UpdateTimerUI() {
		if (stageCompleted)
			return;

		secondsCount += Time.deltaTime;

		// var hourChar = hourCount < 10 ? "0" + hourCount.ToString() : hourCount.ToString();
		// var minuteChar = minuteCount < 10 ? "0" + minuteCount.ToString() : minuteCount.ToString();
		var minuteChar = minuteCount == 0 ? "" : minuteCount.ToString() + "m ";
		var secondsChar = secondsCount < 10 ? "0" + ((int)secondsCount).ToString() : ((int)secondsCount).ToString();

		// timeText.text = hourChar +":"+ minuteChar +":"+secondsChar;
		timeText.text = minuteChar + secondsChar + "s";

		if(secondsCount >= 60){
			minuteCount++;
			secondsCount = 0;
		}else if(minuteCount >= 60){
			hourCount++;
			minuteCount = 0;
		}    
	}

	private IEnumerator BackToMenu() {
		yield return new WaitForSeconds (2);

		// TODO: Animar volta ao Menu
		SceneManager.LoadScene ("menu");
	}

	public void SelectPF(int index) {
		PF = PFs [index].gameObject;
		InitialPF = initialPFsPosition [index];
		SetActive (PF, true);
		PFSelected = true;
	}

	private void ChangeGameState() {
		if (PFCount > 0) {
			state = GameState.ChangingState;
			ChangeToEscapePoint ();
		} else {
			CompleteStage ();
		}
	}

	private void ChangingGameState() {
		image.transform.position = Vector3.Lerp(
			image.transform.position, 
			new Vector3(initialImagePosition.x, image.transform.position.y, image.transform.position.z), 
			CHANGE_STATE_SPEED * Time.deltaTime
		);

		horizonLine.transform.position = Vector3.Lerp(
			horizonLine.transform.position, 
			new Vector3(initialImagePosition.x, horizonLine.transform.position.y, horizonLine.transform.position.z), 
			CHANGE_STATE_SPEED * Time.deltaTime
		);

		imageHeader.anchoredPosition = Vector2.Lerp (
			imageHeader.anchoredPosition, 
			initialImageHeaderPosition, 
			CHANGE_STATE_SPEED * Time.deltaTime
		);
	}

	private void ChangeToEscapePoint() {
//		StartCoroutine ();
		StartCoroutine (FadeIn (scrollView));
	}

	private IEnumerator FadeIn(CanvasGroup canvasObj) {
		float alpha = 0;

		while (alpha < 1) {
			alpha += .03f;
			canvasObj.alpha = alpha;
			yield return new WaitForEndOfFrame();
		}

		state = GameState.EscapePoint;
	}
}
