using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum AudioSFX {
    Click,
    ReleaseLine,
    StageClear,
    Error,
    Star1,
    Star2,
    Star3
};

public class AudioPlayer : MonoBehaviour {
    public static AudioPlayer instance;
    public AudioSource aSrc;
    public AudioClip[] audioClips;

    void Awake() {
        if (instance == null)
            instance = this;
        else if (instance != this)
            Destroy(this.gameObject);

        DontDestroyOnLoad(this.gameObject);
    }
	
	public void PlayAudio(AudioSFX id, float pitch = 1f){
        int cID = (int)id;//id convertido da enum para um int
        if (cID >= 0 && cID < audioClips.Length && aSrc != null) {
            aSrc.pitch = pitch;
            aSrc.PlayOneShot(audioClips[cID]);
        }
    }
}
