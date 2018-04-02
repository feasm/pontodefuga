using System.Collections;
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

	public int PFCount;

	public GameObject PF1;
	public GameObject PF2;
	public GameObject PF3;
	public GameObject PF4;
	private GameObject PF;

	public GameObject PF1Indicator;
	public GameObject PF2Indicator;
	public GameObject PFIndicator;

	private bool PFSelected;

	private Vector3 InitialPF;
	private Vector3 InitialPF1;
	private Vector3 InitialPF2;

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
		if (PF1) {
			InitialPF1 = PF1.transform.position;
			PF1.SetActive (false);
		}

		if (PF2) {
			InitialPF2 = PF2.transform.position;
			PF2.SetActive (false);
		}

		if (PF3) {
			PF3.SetActive (false);
		}

		if (PF4) {
			PF4.SetActive (false);
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
		// horizonBalloon.color = color;
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

		var hourChar = hourCount < 10 ? "0" + hourCount.ToString() : hourCount.ToString();
		var minuteChar = minuteCount < 10 ? "0" + minuteCount.ToString() : minuteCount.ToString();
		var secondsChar = secondsCount < 10 ? "0" + ((int)secondsCount).ToString() : ((int)secondsCount).ToString();

		timeText.text = hourChar +":"+ minuteChar +":"+secondsChar;

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
		switch(index) {
		case 1:
			PF = PF1;
			InitialPF = InitialPF1;
			break;

		case 2:
			PF = PF2;
			InitialPF = InitialPF2;
			break;

		case 3:
			PF = PF3;
			break;

		case 4:
			PF = PF4;
			break;

		default:
			Debug.Log ("Default");
			break;
		}

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
