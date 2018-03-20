using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuLevelButton : MonoBehaviour {
    public GameObject[] activeStars;
    public GameObject[] inactiveStars;
    public Image title;
    public GameObject activePanel;
    public string levelKey = "";
    public int level = 1;

	// Use this for initialization
	void Start () {
        Setup();
	}

    void Setup() {
        //TODO; Chamar ShowStarts com o número de estrelas ganhas no nível
        ShowStarts(2);
        ActivateSelf(level <= 1);
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
}
