using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuLevelButton : MonoBehaviour {
    public GameObject[] activeStars;
    public GameObject[] inactiveStars;
    public Image title;
    public GameObject activePanel;
    public string levelKeyPrefix = "stars_world_00_stage_00";
    public int level = 1;
    public string inactiveMessage;
    public MenuNotification notificationManager;
    public MenuFlowManager flowManager;

	// Use this for initialization
	void Start () {
        Setup();
	}

    void Setup() {
        //TODO; Chamar ShowStarts com o número de estrelas ganhas no nível
        ShowStarts(PlayerPrefs.GetInt(levelKeyPrefix + level.ToString("00"), 0));
        ActivateSelf(level <= 3);
    }

    void ActivateSelf(bool value = true) {
        Color c = Color.white;
        c.a = value ? 1.0f : 0.5f;
        if(title != null)
            title.color = c;

        if(activePanel != null)
            activePanel.SetActive(value);
    }

    void ShowStarts(int amount) {
        for (int i = 0; i < activeStars.Length; i++) {
            activeStars[i].SetActive(i < amount);
        }
        for (int i = 0; i < inactiveStars.Length; i++) {
            inactiveStars[i].SetActive(i >= amount);
        }
    }

    public void Click() {
        if (activePanel != null && !activePanel.activeSelf)
            notificationManager.ShowMessage(inactiveMessage);
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
}
