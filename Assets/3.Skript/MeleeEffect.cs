using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class MeleeEffect : MonoBehaviour
{
    public Player player;  // 플레이어 오브젝트를 참조합니다.
    void OnE()
    {
        // 공격 콜라이더의 위치를 플레이어의 현재 위치로 설정합니다.
        transform.position = new Vector2(player.transform.position.x, player.transform.position.y);
    }
}

