using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class EnemySpawner : MonoBehaviour
{
    public static EnemySpawner instance; 
    
    [SerializeField] private GameObject[] enemyPrefabs;
    [SerializeField] private Transform spawnPosition;
    [SerializeField] private int poolSize = 40;

    private List<GameObject> enemyPool;
    private float spawnInterval = 1.5f; 
    private float timer = 0f;
    public LayerMask deadLayer;

    void Awake()
    {
        if (instance != null)
        {
            return;
        }
        instance = this;
    }
    
    void Start()
    {
        enemyPool = new List<GameObject>();

        for (int i = 0; i < poolSize; i++)
        {
            foreach (var enemy in enemyPrefabs)
            {
                GameObject instance = Instantiate(enemy, spawnPosition.position, Quaternion.identity);
                instance.SetActive(false);
                enemyPool.Add(instance);
            }
        }
    }

    void Update()
    {
        timer += Time.deltaTime; // 이전 프레임과 현재 프레임 사이의 시간을 더합니다

        if (timer >= spawnInterval) // 타이머가 설정된 스포닝 간격을 초과하면
        {
            SpawnEnemy(); // 적을 스포닝합니다
            timer = 0f; // 타이머를 다시 0으로 설정합니다
        }
    }
    public GameObject GetPooledEnemy()
    {
        foreach (var enemy in enemyPool)
        {
            if (!enemy.activeInHierarchy)
            {
                return enemy;
            }
        }
        return null;
    }

    public void SpawnEnemy()
    {
        var enemy = GetPooledEnemy();
        if (enemy == null) return;
     
        
        enemy.transform.position = spawnPosition.position;
        enemy.SetActive(true);
        enemy.gameObject.layer = 7;
    }
}
