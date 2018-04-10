using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuLevelButton : MonoBehaviour {
    public GameObject[] activeStars;
    public GameObject[] inactiveStars;
    public Image title;
    public Text completedLevelsText;
    public GameObject activePanel, inactivePanel;
    public string levelKeyPrefix = "world_00_stage_00";
    public int level = 1;
    public string inactiveMessage;
    public MenuNotification notificationManager;
    public MenuFlowManager flowManager;

    bool pulse = false;
    public float pulseScale = 1f, normalScale= 1f;
    Coroutine pulseCoroutine;//mantém referência da pulse coroutine, pra pará-la depois

	// Use this for initialization
	void Start () {
        Setup();
	}

    public void Setup() {
        print("unlocked_" + levelKeyPrefix + level.ToString("00") + " == " + PlayerPrefs.GetInt("unlocked_" + levelKeyPrefix + level.ToString("00"), level)); 
        var unlocked = PlayerPrefs.GetInt("unlocked_" + levelKeyPrefix + level.ToString("00"), level) == 1;
        var stars = PlayerPrefs.GetInt("stars_" + levelKeyPrefix + level.ToString("00"), -1);

        ActivateSelf(unlocked);
        ShowStarts(stars);
        ShowLevelCount();

        pulse = true;
    }

    void Update() {
        if (pulse) {
            var unlocked = PlayerPrefs.GetInt("unlocked_" + levelKeyPrefix + level.ToString("00"), level) == 1;
            var stars = PlayerPrefs.GetInt("stars_" + levelKeyPrefix + level.ToString("00"), -1);

            if (stars < 0 && unlocked)
                StartPulse();
            else
                StopPulse();
        }
        pulse = false;
    }

    void ActivateSelf(bool value = true) {
        Color c = Color.white;
        c.a = value ? 1.0f : 0.5f;
        if(title != null)
            title.color = c;

        if(activePanel != null)
            activePanel.SetActive(value);
        if (inactivePanel != null)
            inactivePanel.SetActive(!value);
    }

    void ShowStarts(int amount) {
        for (int i = 0; i < activeStars.Length; i++) {
            activeStars[i].SetActive(i < amount);
        }
        for (int i = 0; i < inactiveStars.Length; i++) {
            inactiveStars[i].SetActive(i >= amount && (amount >= 0 || completedLevelsText != null));
        }
    }

    void ShowLevelCount() {
        if(completedLevelsText == null) return;

        var levelCount = StageInfo.instance.GetLevelCount(level);
        var completed = 0;

        for (int i = 0; i < levelCount; i++) {
            var stars = PlayerPrefs.GetInt("stars_world_" + level.ToString("00") + "_stage_" + (i + 1).ToString("00"), -1);
            if (stars > 0)
                completed++;
        }

        completedLevelsText.text = completed.ToString("00") + "/<color=#AAAAAA>" + levelCount.ToString("00") + "</color>";
    }

    public void Click() {
        if (activePanel != null && !activePanel.activeSelf) {
            notificationManager.ShowMessage(inactiveMessage);
            DoSinglePulse();
        }
    }

    public void SelectWorld(){
        if (activePanel == null || activePanel.activeSelf)
            flowManager.SelectWorld(level);
    }

    public void SelectLevel() {
        if (activePanel == null || activePanel.activeSelf)
            flowManager.SelectLevel(level);
    }

    public void FadeToPanel(int id) {
        if (activePanel == null || activePanel.activeSelf)
            flowManager.FadeAndChangePanel(id);
    }

    public void SetLevelKeyPrefix(string pref) {
        levelKeyPrefix = pref;
    }

    public void DoSinglePulse() {
        StartCoroutine(IPulse(10f, false));
    }

    public void StartPulse() {
        StopPulse();
        if(gameObject.activeSelf)
            pulseCoroutine = StartCoroutine(IPulse(2f));
    }

    public void StopPulse() {
        this.transform.localScale = Vector3.one * normalScale;
        if (pulseCoroutine != null)
            StopCoroutine(pulseCoroutine);
    }

    public IEnumerator IPulse(float speed, bool loop = true) {
        float lerp = 0f;
        Transform trf = this.transform;
        do {
            lerp = 0f;
            while (lerp < 1f) {//crescendo
                lerp += Time.deltaTime * speed;
                trf.localScale = Vector3.Lerp(trf.localScale, Vector3.one * pulseScale, lerp);
                yield return new WaitForEndOfFrame();
            }
            lerp = 0f;
            while (lerp < 1f) {//diminuindo
                lerp += Time.deltaTime * speed;
                trf.localScale = Vector3.Lerp(trf.localScale, Vector3.one * normalScale, lerp);
                yield return new WaitForEndOfFrame();
            }
        } while (loop);
    }
}
