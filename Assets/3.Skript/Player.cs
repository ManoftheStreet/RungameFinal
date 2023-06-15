using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    
    public float speed = 5f;
    public float jumpForce = 5f;
    public CapsuleCollider2D capsuleCollider;

    private Rigidbody2D rb;
    private Animator anim;
    private SpriteRenderer spriteRenderer; //반전을 주기
    

    public float moveKey; // 이동 실수 타입
    public bool isPlayerMoving=false;
    bool jumpKey; //점프키 : 기타 입력키는 불 타입
    private bool isGrounded = false; // 바닥에 닿았는지 나타냄
    private float jumpCount = 0;

    bool isDead=false;

    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }
    void input()
    {
        moveKey = Input.GetAxisRaw("Horizontal");
        jumpKey = Input.GetKeyDown(KeyCode.Space);

    }

    // Update is called once per frame
    void Update()
    {
        input();
        Move();
        Jump();
    }

    void Move()
    {

        if (moveKey == 0)
        {
            anim.SetBool("isRun", false);
            isPlayerMoving = false;
        }
        else
        {
            if (!isDead)
            {
                isPlayerMoving = true;
                spriteRenderer.flipX = moveKey == -1f; //왼쪽이면 -1 이여서 양수 나오고 오른쪽이면 음수여서 false반환
                transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);
                anim.SetBool("isRun", true);
            }
        }
        
    }
    public void Jump()
    {
        
        if (jumpKey && jumpCount < 2 && !isDead)
        {
            jumpCount++;
            rb.velocity = Vector2.zero;
            speed =5f;
            rb.AddForce(new Vector2(0f, jumpForce));

        }
        else if (jumpKey && rb.velocity.y > 0)
        {
            rb.velocity = rb.velocity * 0.5f;
            
        }

        if (rb.velocity.y < 0f)
        {
            anim.SetBool("isFall", true);
        }
        else
        {
            anim.SetBool("isFall", false);
            anim.SetBool("isJump", !isGrounded);
        }
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.contacts[0].normal.y > 0.7f)
        {

            isGrounded = true;
            jumpCount = 0;
            speed = 9f;

        }
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        isGrounded = false;
        
    }
    private void Die()
    {
        anim.SetTrigger("doDie");

        rb.velocity = Vector2.zero;
        isDead = true;

        GameManager.instance.OnPlayerDead();

    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Dead" && !isDead)
        {
            Die();
        }

    }
}


