using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace EasyTransition
{


    public class SceneMove : MonoBehaviour
    {
        public string introScene;
        public string gameScene;
        public GameObject tutorial;
        public AudioSource[] playSounds;
        public TransitionSettings transition;
        public float startDelay;

        public GameObject stopPanel;
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                if (stopPanel.activeInHierarchy) // ���� stopPanel�� �̹� Ȱ��ȭ�Ǿ� �ִٸ�
                {
                    ResumeGame();  // ������ �ٽ� �����մϴ�.
                }
                else  // stopPanel�� ��Ȱ��ȭ�Ǿ� �ִٸ�
                {
                    PauseGame();  // ������ �Ͻ������մϴ�.
                }
            }
            if (Input.GetMouseButtonDown(0))
            {
                SceneManager.LoadScene(gameScene);
            }
 
        }

        public void GameStart()
        {
            StartCoroutine(GameSceneLoad());
        }


        private IEnumerator GameSceneLoad()
        {
            AudioSource selectedSound = playSounds[Random.Range(0, playSounds.Length)];
            selectedSound.Play();
            TransitionManager.Instance().Transition(gameScene, transition, startDelay);
            yield return new WaitForSeconds(selectedSound.clip.length);  // ������ �Ҹ��� ���̸�ŭ ���
            //SceneManager.LoadScene(gameScene);
            //TransitionManager.Instance().Transition(gameScene, transition, startDelay);
        }

        public void MainMenu()
        {
            StartCoroutine(IntroSceneLoad());
        }

        private IEnumerator IntroSceneLoad()
        {
            AudioSource selectedSound = playSounds[Random.Range(0, playSounds.Length)];
            selectedSound.Play();
            TransitionManager.Instance().Transition(introScene, transition, startDelay);
            yield return new WaitForSeconds(selectedSound.clip.length);  // ������ �Ҹ��� ���̸�ŭ ���
            //SceneManager.LoadScene(introScene);
            //TransitionManager.Instance().Transition(introScene, transition, startDelay);
        }
        public void PauseGame()
        {
            Time.timeScale = 0f;  // ������ �Ͻ�����
            stopPanel.SetActive(true);  // stopPanel�� Ȱ��ȭ
        }
        public void ResumeGame()
        {
            Time.timeScale = 1f;  // ������ �簳
            stopPanel.SetActive(false);  // stopPanel�� ��Ȱ��ȭ
        }

        public void EndGame()
        {
            Application.Quit();
        }
    }
}