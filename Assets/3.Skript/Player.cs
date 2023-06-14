using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    
    public float Speed = 5f;
    public float jumpForce = 5f;
    

    private Rigidbody2D rb;
    private CapsuleCollider2D capsuleCollider;
    private Animator anim;
    private SpriteRenderer spriteRenderer;
    private float jumpCount = 0;
   // private bool isGrounded = false; // 바닥에 닿았는지 나타냄

    bool jumpKey;
    float moveKey;
    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        capsuleCollider = GetComponent<CapsuleCollider2D>();
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

        if (moveKey==0)
        {
            anim.SetBool("isRun", false);
        }
        else
        {
            spriteRenderer.flipX = moveKey == -1; //왼쪽이면 -1 이여서 양수 나오고 오른쪽이면 음수여서 false반환
            transform.Translate(Vector3.right * moveKey * Speed * Time.deltaTime);
            anim.SetBool("isRun", true);
        }
        
    }
    public void Jump()
    {
        if (jumpKey && jumpCount < 2)
        {
            jumpCount++;
            rb.velocity = Vector2.zero;

            rb.AddForce(new Vector2(0f, jumpForce));
            
        }

        else if (jumpKey && rb.velocity.y > 0)
        {
            rb.velocity = rb.velocity * 0.5f;
        }

        //anim.SetTrigger("doJump");
        //anim.SetBool("Grounded", isGrounded);

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.contacts[0].normal.y > 0.7f)
        {
            //isGrounded = true;
            jumpCount = 0;
        }
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        //isGrounded = false;
    }
}
    

