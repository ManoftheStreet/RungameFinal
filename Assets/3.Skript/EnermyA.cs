using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnermyA : MonoBehaviour
{
    [SerializeField] private float moveSpeed = 10f;
    [SerializeField] private float attackRange = 15f;
    private Animator animator;
    private Transform player;
    private Rigidbody2D rb;
    public LayerMask deadLayer;

    bool isDead = false;

    void Start()
    {
        animator = GetComponent<Animator>();
        player = GameObject.FindGameObjectWithTag("Player").transform;
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        Attack();
    }
    void Attack()
    {
        float distanceToPlayer = Vector2.Distance(transform.position, player.position);

        if (!isDead && distanceToPlayer < attackRange)
        {
            // 공격 애니메이션 플레이
            animator.SetTrigger("doAtt");
        }
        else
        {
            // Player를 향해 걷기
           if (!isDead) 
            {
                rb.velocity = new Vector2(-moveSpeed, -2);
            }

        }
    }
    void Die()
    {
        isDead = true;
        animator.SetTrigger("doDie");
        gameObject.layer = 6;
        rb.velocity = Vector2.zero;
        StartCoroutine(DeactivateAfterDelay(3f));

    }
    IEnumerator DeactivateAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        gameObject.SetActive(false);
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
      
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if ((other.tag == "Wall" || other.tag == "Melee") && !isDead)
        {

            Die();
        }

    }
}
