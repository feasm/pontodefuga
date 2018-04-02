using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageInfo : MonoBehaviour {
    public static StageInfo instance = null;

    float stageTime = 0f;
    float difficultyMultiplier = 1f;
    public float[] starTimes;//tempos para ganhar cada quantia de estrelas
    int worldID = 0, stageID = 0;
	
	void Awake () {
        if (instance == null)
            instance = this;
        else if (instance != this)
            Destroy(this.gameObject);

        DontDestroyOnLoad(this.gameObject);
	}

    public void SetStageInfo(float time) {
        stageTime = time;
    }

    public void SetDifficultyMultiplier(float multiplier) {
        difficultyMultiplier = multiplier;
    }

    public void SetWorldID(int id) {
        worldID = id;
    }

    public int GetWorldID() {
        return worldID;
    }

    public void SetStageID(int id) {
        stageID = id;
    }

    public int GetStageID() {
        return stageID;
    }
}
