using UnityEngine;

// 게임 오브젝트를 계속 왼쪽으로 움직이는 스크립트
public class ScrollingObject : MonoBehaviour {
    public float speed = 5f; // 이동 속도
    Player player;
    private void Awake()
    {
        //player = GameObject.Find("Player").GetComponent<Player>();

    }
    private void Update() {
        if (!GameManager.instance.isGameover)
        {
         
            transform.Translate(Vector3.left * speed * Time.deltaTime); 

        }
        /*else
        {
            if (player.moveKey > 0)
            {
                transform.Translate(Vector3.left * speed * (1 + player.moveKey) * Time.deltaTime);// 게임 오브젝트를 왼쪽으로 일정 속도로 평행 이동하는 처리
            }
            else
            {
                transform.Translate(Vector3.right * speed * (1 + player.moveKey*-1) * Time.deltaTime);
            }
        }*/
        
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.transform.CompareTag("Enermy"))
        {
            collision.transform.SetParent(transform);
        }
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.transform.CompareTag("Enermy"))
        {
            collision.transform.SetParent(null);
        }
    }
}