using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class MeleeEffect : MonoBehaviour
{
    public Player player;  // �÷��̾� ������Ʈ�� �����մϴ�.
    void OnE()
    {
        // ���� �ݶ��̴��� ��ġ�� �÷��̾��� ���� ��ġ�� �����մϴ�.
        transform.position = new Vector2(player.transform.position.x, player.transform.position.y);
    }
}

