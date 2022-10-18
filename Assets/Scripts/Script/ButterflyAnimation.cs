using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;
public class ButterflyAnimation : MonoBehaviour
{
    Animator animator;
    private void Start()
    {
        animator = GetComponent<Animator>();
    }
    private void Update()
    {
        if (SenseInput.GetButtonDown("A"))
        {

            animator.SetTrigger("Next");

        }
        else if (SenseInput.GetButtonDown("B"))
        {
            animator.SetTrigger("Prev");
        }
    }
}
