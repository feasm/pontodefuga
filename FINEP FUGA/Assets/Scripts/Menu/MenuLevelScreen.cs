using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuLevelScreen : MonoBehaviour {
    public MenuLevelButton[] buttons;
    public RectTransform scrollRect;
    public float defaultScroll = 300f;
    public float scrollIncrement = 500f;

    //Organiza os botões de acesso as fases(remove botões inexistentes e ajusta o limite do scroll)
    public void OrganizeLevelScreen() {
        float scrollSum = defaultScroll;

        for (int i = 0; i < buttons.Length; i++) {
            var scene = "Stage" + StageInfo.instance.GetWorldID().ToString("00") + "_" + (i + 1).ToString("00");
            var exists = Application.CanStreamedLevelBeLoaded(scene);
            if (exists)
                scrollSum += scrollIncrement;
            buttons[i].gameObject.SetActive(exists);

            buttons[i].SetLevelKeyPrefix("stars_world_" + StageInfo.instance.GetWorldID().ToString("00") + "_stage_");
            buttons[i].Setup();
        }

        var size = scrollRect.sizeDelta;
        size.y = scrollSum;
        scrollRect.sizeDelta = size;
    }
}
