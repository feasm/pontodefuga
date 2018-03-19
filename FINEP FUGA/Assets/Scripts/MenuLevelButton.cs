using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuLevelButton : MonoBehaviour {
    public Image[] starImages;
    public Color starInactiveColor = Color.gray, starActiveColor = Color.white;
    Image selfImage;
    public Color selfInactiveColor = Color.gray, selfActiveColor = Color.white;
    public string levelKey = "";

	// Use this for initialization
	void Start () {
        Setup();
	}

    void Setup() {
        //TODO; Chamar ShowStarts com o número de estrelas ganhas no nível
        ShowStarts(2);
    }

    void ActivateSelf(bool value = true) {
        selfImage.color = value ? selfActiveColor : selfInactiveColor;
    }

    void ShowStarts(int amount) {
        for (int i = 0; i < starImages.Length; i++)
            starImages[i].color = i < amount ? starActiveColor : starInactiveColor;
    }
}
