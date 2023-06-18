using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpEffect : MonoBehaviour
{

    public GameObject jumpEffect;
    public void DeactivateAllActiveEffects()
    {
        foreach (GameObject obj in ObjectPooler.instance.jumpEffectPool)
        {
            if (obj.activeInHierarchy)
            {
                obj.SetActive(false);
            }
        }
    }
    
}
