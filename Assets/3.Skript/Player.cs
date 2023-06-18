using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Player : MonoBehaviour
{
    
    public float speed = 5f;
    public float jumpForce = 5f;
    public CapsuleCollider2D capsuleCollider;
    public GameObject jumpEffect;
    public GameObject meleeRange;

    private Rigidbody2D rb;
    private Animator anim;
    private SpriteRenderer spriteRenderer; //������ �ֱ�
    

    public float moveKey; // �̵� �Ǽ� Ÿ��
    public bool isPlayerMoving=false;

    bool jumpKey; //����Ű : ��Ÿ �Է�Ű�� �� Ÿ��
    private bool isGrounded = false; // �ٴڿ� ��Ҵ��� ��Ÿ��
    private float jumpCount = 0;

    bool attKey;

    public GameObject hideSkillButton;
    public UnityEngine.UI.Image hideskillImage;
    bool isHideSkill = false;
    private float attackCooldown = 1f;
    private float attackTimer = 0f;

    bool isDead=false;

    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }
    private void Start()
    {
        hideSkillButton.SetActive(false);
    }
    void input()
    {
        moveKey = Input.GetAxisRaw("Horizontal");
        jumpKey = Input.GetKeyDown(KeyCode.Space);
        attKey = Input.GetKeyDown(KeyCode.J);
    }

    // Update is called once per frame
    void Update()
    {
        input();
        //Move();
        Jump();
        Atack();
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
                spriteRenderer.flipX = moveKey == -1f; //�����̸� -1 �̿��� ��� ������ �������̸� �������� false��ȯ


                anim.SetBool("isRun", true);
            }
        }
        //float horizontalVelocity = moveKey * speed;
        //rb.velocity = new Vector2(horizontalVelocity, rb.velocity.y);
        if (moveKey > 0 && isGrounded)
        {
            speed = 13;
            transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);

        }
        else
        {
            speed = 5;
            transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);
        }
        transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);

    }
    public void Jump()
    {

        if (jumpKey && jumpCount < 2 && !isDead)
        {
            jumpCount++;
            rb.velocity = Vector2.zero;
            rb.AddForce(new Vector2(0f, jumpForce));
            if (jumpCount == 2)
            {
                Vector3 offset = new Vector3(-0.2f, -0.3f, 0);
                GameObject jumpEffect = ObjectPooler.instance.GetPooledJumpEffect();
                jumpEffect.transform.position = transform.position + offset;
            }


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
    public void JumpButton()
    {
        jumpKey = true;
        Jump();
        jumpKey = false;

    }


    public void Atack()
    {
        attackTimer += Time.deltaTime;

        if (attKey && attackTimer >= attackCooldown)
        {
            anim.SetTrigger("Att1");
            attackTimer = 0; // Reset attackTimer
            StartCoroutine(ActivateMeleeRange());
            hideSkillButton.SetActive(true);
            isHideSkill = true;
            StartCoroutine(skillTimeChk());
        }
    }
    IEnumerator ActivateMeleeRange()
    {
        meleeRange.SetActive(true);
        yield return new WaitForSeconds(0.5f); // Wait for 0.5 seconds
        meleeRange.SetActive(false);

    }
    public void AttackButton()
    {
        attKey = true;
        Atack();
        attKey = false;
    }

    private void HideSkillChk()
    {
        if (isHideSkill)
        {
            StartCoroutine(skillTimeChk());
        }
    }

    IEnumerator skillTimeChk()
    {
        yield return null;  // ���� �������� ��ٸ��ϴ�.

        if (attackTimer > 0.0f) // dodgeTime�� 2.0f �̸��� ���� ����
        {
            attackTimer -= Time.deltaTime;

            if (attackTimer < 0.0f) // ���� dodgeTime�� 2.0f �̻��̶��
            {
                attackTimer = 0.0f; // dodgeTime�� 2.0f�� �����ϰ�
                hideSkillButton.SetActive(false); // ��ư�� ��Ȱ��ȭ�մϴ�.
                isHideSkill = false;
            }

            float time = attackTimer / attackCooldown;
            hideskillImage.fillAmount = time;
        }
    }
    public void DeactivateAllActiveEffects2()
    {
        meleeRange.SetActive(false);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.contacts[0].normal.y > 0.7f)
        {

            isGrounded = true;
            jumpCount = 0;
            jumpKey = false;
            //speed = 13f;

        }
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        isGrounded = false;
        //speed = 5f;
        
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
        if ((other.tag == "Dead" || other.tag == "Wall") && !isDead)
        {
            Die();
        }

    }
}


