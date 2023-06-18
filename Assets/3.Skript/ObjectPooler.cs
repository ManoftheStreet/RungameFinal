using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour
{
    public static ObjectPooler instance;
    public GameObject jumpEffectPrefab;
    public int poolSize = 10;

    public List<GameObject> jumpEffectPool;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        }

        jumpEffectPool = new List<GameObject>();

        for (int i = 0; i < poolSize; i++)
        {
            GameObject obj = Instantiate(jumpEffectPrefab);
            obj.SetActive(false);
            jumpEffectPool.Add(obj);
        }
    }

    public GameObject GetPooledJumpEffect()
    {
        foreach (GameObject obj in jumpEffectPool)
        {
            if (!obj.activeInHierarchy)
            {
                obj.SetActive(true);
                return obj;
            }
        }

        // if all objects are in use, expand the pool
        GameObject newObj = Instantiate(jumpEffectPrefab);
        jumpEffectPool.Add(newObj);
        return newObj;
    }

}
