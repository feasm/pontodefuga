﻿using System.Collections;
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

    //pega o número de estrelas ganhas no stage atual, assume que SetWorldID e SetStageID foram chamados
    public int GetStartAmount() {
        for (int i = 0; i < starTimes.Length; i++) {
            if (stageTime < starTimes[i] * difficultyMultiplier)
                return starTimes.Length - i;
        }
        return 0;
    }

    //retorna o número de estrelas salvas para determinato nível em determinado mundo, retorna -1 se nunca setado
    public int GetSavedStarAmount(int world, int stage) {
        return PlayerPrefs.GetInt("stars_world_" + world.ToString("00") + "_stage_" + stage.ToString("00"), -1);
    }

    //Salva no playerprefs do mundo e nível carregado o número de estrelas. 
    public void SaveLevelStarAmount() {
        int stars = GetStartAmount();
        if (GetSavedStarAmount(worldID, stageID) < stars )//Só salva se o número for maior que o anterior
            PlayerPrefs.SetInt("stars_world_" + worldID.ToString("00") + "_stage_" + stageID.ToString("00"), stars);
    }

    
}
