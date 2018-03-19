using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StageManager : MonoBehaviour {

	// TODO: Deixar esta variável proporcional a SCREEN_SIZE
	public static int HIT_RANGE = 2;

	public SpriteRenderer horizonLine;
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

	void Start () {
		Setup ();
	}

	void Update () {
		HandleInput ();
		UpdateTimerUI ();
	}

	private void HandleInput() {
		if (canMoveLine) {
			if (Input.GetMouseButtonDown (0)) {
				horizonLineMoving = true;
				SetHorizonLineAlpha (1);
			} else if (Input.GetMouseButtonUp (0)) {
				horizonLineMoving = false;
				SetHorizonLineAlpha (0);

				CheckHorizonLineHit ();
			}

			if ( Input.GetMouseButton(0) ) {
				OnMouseMove ();
			}
		}
	}

	private void Setup() {
		SetHorizonLineAlpha (0);
		hitErrors = 0;
		canMoveLine = true;
		horizonLineMoving = false;
		stageCompleted = false;
	}

	private void SetHorizonLineAlpha(float alpha) {
		var color = horizonLine.color;
		color.a = alpha;

		horizonLine.color = color;
	}

	private void OnMouseMove() {
		var mousePosition = Input.mousePosition;
		mousePosition.z = 10.0f;
		mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);

		horizonLine.transform.Translate (
			0,
			mousePosition.y - horizonLine.transform.position.y,
			0
		);
	}

	private void CheckHorizonLineHit() {
		var difference = horizonLine.gameObject.transform.position.y - horizonLineHit.transform.position.y;

		if (Mathf.Abs (difference) < HIT_RANGE) {
			LockHorizonLine ();
		} else {
			hitErrors += 1;
			errorsText.text = "Errors: " + hitErrors;
		}
	}

	private void LockHorizonLine() {
		canMoveLine = false;
		SetHorizonLineAlpha (1);

		// TODO: Animar linha do horizonte se ajustando no ponto correto
		horizonLine.gameObject.transform.position = horizonLineHit.transform.position;

		CompleteStage ();
	}

	private void CompleteStage() {
		stageCompleted = true;

		// TODO: Animar aparição do Stage Completed
		var color = StageCompleted.color;
		color.a = 1;
		StageCompleted.color = color;

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
}
