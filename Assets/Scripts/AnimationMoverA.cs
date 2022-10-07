using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;

public class AnimationMoverA : MonoBehaviour
{
    public GameObject canvas;
    Animator animator;
    bool flag = false;
    
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
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
        if(SenseInput.GetButtonDown("C") || Input.GetKeyDown(KeyCode.C))
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
}
