using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuLevelScreen : MonoBehaviour {
    public MenuLevelButton[] buttons;
    public RectTransform scrollRect;
    public float defaultScroll = 300f;
    public float scrollIncrement = 500f;

    void Start() {
        OrganizeLevelScreen();
    }

    //Organiza os botões de acesso as fases(remove botões inexistentes e ajusta o limite do scroll)
    public void OrganizeLevelScreen() {
        float scrollSum = defaultScroll;

        for (int i = 0; i < buttons.Length; i++) {
            var jsonKey = StageInfo.instance.GetWorldID().ToString("00") + "_" + (i + 1).ToString("00");
            var exists = LevelExists(jsonKey);
            if (exists)
                scrollSum += scrollIncrement;
            buttons[i].gameObject.SetActive(exists);

            buttons[i].SetLevelKeyPrefix("world_" + StageInfo.instance.GetWorldID().ToString("00") + "_stage_");
            buttons[i].Setup();
        }

        if (scrollRect != null) {
            var size = scrollRect.sizeDelta;
            size.y = scrollSum;
            scrollRect.sizeDelta = size;
        }
    }

    bool LevelExists(string levelName) {
        var data = JSONParser.LoadResources();
        for (int i = 0; i < data.stages.Count; i++) {
            if (string.Compare(data.stages[i].name, levelName) == 0)
                return true;
        }
        return false;
    }
}
