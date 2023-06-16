using UnityEngine;
using UnityEngine.Tilemaps;

// 발판을 생성하고 주기적으로 재배치하는 스크립트
public class PlatformSpawner : MonoBehaviour {
    public GameObject platformPrefab; // 생성할 발판의 원본 프리팹
    public int count = 3; // 생성할 발판의 개수

    public float timeBetSpawnMin = 4f; // 다음 배치까지의 시간 간격 최솟값
    public float timeBetSpawnMax = 5f; // 다음 배치까지의 시간 간격 최댓값
    private float timeBetSpawn; // 다음 배치까지의 시간 간격

    public float yMin = 3.8f; // 배치할 위치의 최소 y값
    public float yMax = 4.5f; // 배치할 위치의 최대 y값
    //private float xMin = 15f; // 배치할 위치의 x 값
    //private float xMax = 22f; // 배치할 위치의 x 값

    public GameObject[] platforms; // 미리 생성한 발판들
    public int currentIndex = 0; // 사용할 현재 순번의 발판

    private Vector2 poolPosition = new Vector2(0, -25); // 초반에 생성된 발판들을 화면 밖에 숨겨둘 위치
    private float lastSpawnTime; // 마지막 배치 시점


    void Start() {
        platforms = new GameObject[count];

        for(int i = 0; i < count; i++)
        {
            GameObject grid = Instantiate(platformPrefab, poolPosition, Quaternion.identity);

            // Grid 하위의 Tilemap을 찾아서 platforms에 저장
            platforms[i] = grid.GetComponentInChildren<Tilemap>().gameObject;
            //platforms[i] = Instantiate(platformPrefab,poolPosition,Quaternion.identity);
        }

        lastSpawnTime = 0f;
        timeBetSpawn = 0f;
    }

    void FixedUpdate() {
        if (GameManager.instance.isGameover)
        {
            return;
        }
        if(Time.time >= lastSpawnTime+ timeBetSpawn)
        {
            lastSpawnTime = Time.time;

            timeBetSpawn = Random.Range(timeBetSpawnMin,timeBetSpawnMax);

            float yPos = Random.Range(yMin,yMax);
            //float xPos = Random.Range(xMin,xMax);
            float xPos = 50;


            platforms[currentIndex].SetActive(false);
            platforms[currentIndex].SetActive(true);

            platforms[currentIndex].transform.position = new Vector2(xPos, yPos);

            currentIndex++;

            if(currentIndex >= count)
            {
                currentIndex = 0;
            }
        }
    }
}