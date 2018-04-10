using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndPanel : MonoBehaviour {
    static EndPanel manager;//o manager encontrado nesta cena, para ser chamado estaticamente

    public GameObject endPanel;

    public Image background;//BG, que dá fade pra ficar 100% opaco

    public Image stageImage;//a imagem do estágio, que aparece à esquerda da tela
    public Image bgPanel;//painel da dreita que mostra as ops de saída
    public Image exitOp1, exitOp2;//opções de saída

    public RectTransform totalTimeOb, nextStarOb;//objetos que carregam os timers, o nextStar é desativado em caso de 3 estrelas
    public Text totalTimeText, nextStarText;//tempos de texto, que serão preenchidos pelas infos do StageInfo

    public RectTransform[] disabledStars, enabledStars;//estrelas ganhas pelo jogador, definidas pelo stageInfo
    public AudioSFX[] starSounds;

    public Image stampImage;//imagem do carimbo, desce rodando e diminuindo escala

    bool playing = false;

    void Awake() {
        manager = this;
    }

    public static void PlayEndAnimation(float delay = 2f) {
        if (manager != null)
            manager.PlayAnimation(delay);
    }

    //toca a animação final de jogo, assume que StageInfo.instance.SetStageInfo foi chamado
    public void PlayAnimation(float delay = 2f) {
        if (playing) return;

        playing = true;
        StartCoroutine(IPlayEndSequence(delay));
    }

    IEnumerator IPlayEndSequence(float delay) {
        yield return new WaitForSeconds(delay);
        //FUNDO
        endPanel.SetActive(true);
        StartCoroutine(IFadeImage(background, 1f));
        yield return new WaitForSeconds(0.1f);

        //IMAGEM DA FASE
        StartCoroutine(IMoveRect(stageImage.rectTransform, new Vector2(100, 0)));
        StartCoroutine(IFadeImage(stageImage, 1f));

        //PAINEL DE OPÇÕES DE SAÍDA
        StartCoroutine(IMoveRect(bgPanel.rectTransform, new Vector2(0f, 0f)));
        //StartCoroutine(IFadeImage(bgPanel, 1f));
        yield return new WaitForSeconds(0.3f);

        //TEXTOS DE TEMPO
        var stars = StageInfo.instance.GetStartAmount();//ve se tem todas stars
        if (stars < 3) {
            var timeToStar = StageInfo.instance.GetTimeForStar(stars  + 1);
            nextStarText.text = StageInfo.instance.GetTimeString(timeToStar);
        }
        nextStarOb.gameObject.SetActive(stars < 3);

        totalTimeText.text = StageInfo.instance.GetTimeString();

        StartCoroutine(IMoveRect(totalTimeOb, new Vector2(-500f, 175f)));
        StartCoroutine(IMoveRect(nextStarOb, new Vector2(-500f, -135f)));
        yield return new WaitForSeconds(0.2f);
        StartCoroutine(IPopScale(totalTimeOb, 1f, 1.5f));
        yield return new WaitForSeconds(0.1f);
        StartCoroutine(IPopScale(nextStarOb, 1f, 1.5f));

        //ESTRELAS
        for (int i = 0; i < stars; i++) {
            yield return new WaitForSeconds(0.6f);
            enabledStars[i].gameObject.SetActive(true);
            disabledStars[i].gameObject.SetActive(false);

            StartCoroutine(IPopScale(enabledStars[i], 1f, 3f));
            AudioPlayer.instance.PlayAudio(starSounds[i]);
        }
        yield return new WaitForSeconds(0.6f);

        //CARIMBO
        StartCoroutine(IScaleRect(stampImage.rectTransform, 1f));
        StartCoroutine(IFadeImage(stampImage, 1f));
        yield return new WaitForSeconds(0.5f);

        //OPCOES DE SAÍDA
        StartCoroutine(IMoveRect(exitOp1.rectTransform, new Vector2(-135f, 125f)));
        StartCoroutine(IFadeImage(exitOp1, 1f));
        yield return new WaitForSeconds(0.1f);

        StartCoroutine(IMoveRect(exitOp2.rectTransform, new Vector2(-135f, -125f)));
        StartCoroutine(IFadeImage(exitOp2, 1f));
        yield return new WaitForSeconds(0.1f);

        StartCoroutine(IPopScale(exitOp1.rectTransform, 1f, 0.95f));
        yield return new WaitForSeconds(0.1f);
        StartCoroutine(IPopScale(exitOp2.rectTransform, 1f, 0.95f));
        yield return new WaitForSeconds(0.3f);
    }

    IEnumerator IMoveRect(RectTransform rect, Vector2 destination, float speed = 2.5f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            rect.anchoredPosition = Vector2.Lerp(rect.anchoredPosition, destination, lerp);

            yield return new WaitForEndOfFrame();
        }
    }

    IEnumerator IScaleRect(RectTransform rect, float scale, float speed = 2.5f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            rect.localScale = Vector3.Lerp(rect.localScale, Vector3.one * scale, lerp);

            yield return new WaitForEndOfFrame();
        }
    }

    IEnumerator IFadeImage(Image image, float alpha, float speed = 2.5f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            var c = image.color;
            c.a = Mathf.Lerp(c.a, alpha, lerp);
            image.color = c;

            yield return new WaitForEndOfFrame();
        }
    }

    IEnumerator IPopScale(RectTransform rect, float normal, float pop, float speed = 2.5f) {
        float lerp = 0f;
        while (lerp < 1f) {
            lerp += Time.deltaTime * speed;

            rect.localScale = Vector3.Lerp(rect.localScale, Vector3.one * (lerp < 0.5f ? pop : normal), lerp);

            yield return new WaitForEndOfFrame();
        }
    }

    /*
    IEnumerator IRotateZ(RectTransform rect, float from, float to) {

    }
*/
}
