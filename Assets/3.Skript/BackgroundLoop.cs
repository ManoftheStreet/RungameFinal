﻿using UnityEngine;

// 왼쪽 끝으로 이동한 배경을 오른쪽 끝으로 재배치하는 스크립트
public class BackgroundLoop : MonoBehaviour {
    private float width; // 배경의 가로 길이
    Player player;
    private void Awake() {
        BoxCollider2D backgroundboxCollider = GetComponent<BoxCollider2D>();
        width = backgroundboxCollider.size.x;
        //Debug.Log(width);//백그라운드 40 발판 35.1
        //player = GameObject.Find("Player").GetComponent<Player>();
    }

    private void Update() {

        if (transform.position.x <= -width)
        {
            Reposition();
        }
    }

    // 위치를 리셋하는 메서드
    private void Reposition() {
        Vector2 offset = new Vector2(width * 2f, 0);
        transform.position = (Vector2)transform.position + offset;
    }

}