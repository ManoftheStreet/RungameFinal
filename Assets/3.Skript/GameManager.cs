using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// 게임 오버 상태를 표현하고, 게임 점수와 UI를 관리하는 게임 매니저
// 씬에는 단 하나의 게임 매니저만 존재할 수 있다.
public class GameManager : MonoBehaviour {
    public static GameManager instance; // 싱글톤을 할당할 전역 변수

    public float scoreIncreaseInterval = 0.1f;
    public bool isGameover = false; // 게임 오버 상태

    public Text scoreText; // 점수를 출력할 UI 텍스트
    public GameObject gameoverUI; // 게임 오버시 활성화 할 UI 게임 오브젝트
    public Text recordText;
    public Text gameoverScoreText;

    private float score = 0; // 게임 점수

 
    Player player;
    bool isGameOver;

    //BGM
    public AudioSource endSound;
    public AudioSource gameSound;
    public AudioSource winSound;

    void Awake() {
        if (instance == null)
        {
            instance = this;
        }
        else
        {

            Debug.LogWarning("씬에 두개 이상의 게임 매니저가 존재합니다!");
            Destroy(gameObject);
        }
        player = FindObjectOfType<Player>();
    }

    void Update() {
        if(isGameover && Input.GetMouseButtonDown(0))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
        AddScore();
    }

    // 점수를 증가시키는 메서드
    public void AddScore()
    {
        // add score directly in the Update function
        if (!isGameover)
        {
            score += 100 * Time.deltaTime; // Increase by 100 per second
            int roundedScore = Mathf.RoundToInt(score / 10) * 10;  // Round to nearest 10
            scoreText.text = roundedScore.ToString("N0");
        }
    }
  
    /*public void Win()
    {
        isGameOver = true;
        player.gameObject.SetActive(false);
        winText.SetActive(true);
        timeText.gameObject.SetActive(false);
        gameSound.Stop();
        winSound.Play();
        GameObject joypad = GameObject.Find("FloatingJoystick"); // 이름으로 게임 오브젝트 찾기
        if (joypad != null)
        { // 찾았을 경우
            joypad.SetActive(false); // DodgeButton을 비활성화
        }
        GameObject DodgeButton = GameObject.Find("DodgeButton"); // 이름으로 게임 오브젝트 찾기
        if (DodgeButton != null)
        { // 찾았을 경우
            DodgeButton.SetActive(false); // DodgeButton을 비활성화
        }

        float bestTime = PlayerPrefs.GetFloat("Best Time");
        if (surviveTime > bestTime)
        {
            bestTime = surviveTime;
            PlayerPrefs.SetFloat("Best Time", bestTime);
        }
       
    }*/

    // 플레이어 캐릭터가 사망시 게임 오버를 실행하는 메서드
    public void OnPlayerDead() {
        isGameover = true;
        gameoverUI.SetActive(true);
        scoreText.gameObject.SetActive(false);
        gameSound.Stop();
        endSound.Play();

        float bestScore = PlayerPrefs.GetFloat("Best Time");
        if (score > bestScore)
        {
            bestScore = score;
            PlayerPrefs.SetFloat("Best Time", bestScore);
        }
        int roundedScore = Mathf.RoundToInt(score / 10) * 10;  // Round to nearest 10
        int roundedBestScore = Mathf.RoundToInt(bestScore / 10) * 10;  // Round to nearest 10
        recordText.text = "최고 점수: " + roundedBestScore.ToString("N0");
        gameoverScoreText.text = "현재 점수: " + roundedScore.ToString("N0");
        GameObject joypad = GameObject.Find("JumpButton (1)"); // 이름으로 게임 오브젝트 찾기
        if (joypad != null)
        { // 찾았을 경우
            joypad.SetActive(false); // DodgeButton을 비활성화
        }
        GameObject DodgeButton = GameObject.Find("AttButton"); // 이름으로 게임 오브젝트 찾기
        if (DodgeButton != null)
        { // 찾았을 경우
            DodgeButton.SetActive(false); // DodgeButton을 비활성화
        }

    }
    
}



