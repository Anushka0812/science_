using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;

public class animationMover : MonoBehaviour
{
    Animator animator;
    static Animator arrowMovement;
    public GameObject arrow;
    public GameObject canvas;
    bool flag = false;
    
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        arrowMovement = arrow.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (SenseInput.GetButtonDown("A") || Input.GetKeyDown(KeyCode.A))
        {
            animator.SetTrigger("Next");
        }
        if (SenseInput.GetButtonDown("B") || Input.GetKeyDown(KeyCode.B))
        {
            animator.SetTrigger("Prev");
        }
        if (SenseInput.GetButtonDown("C") || Input.GetKeyDown(KeyCode.C))
        {
            if (!flag)
            {
                canvas.SetActive(true);
                flag = true;
            }
            else
            {
                canvas.SetActive(false);
                flag = false;
            }
        }
    }

    public static void startRinging()
    {
        arrowMovement.SetTrigger("Start");
    }

    public static void stopRinging()
    {
        arrowMovement.SetTrigger("Stop");
    }
}
