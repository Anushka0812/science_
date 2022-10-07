using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;

public class AnimationMoverW : MonoBehaviour
{
    public Animator animatorL;
    public Animator animatorT;
    public GameObject canvas;
    bool flag = true;
    bool flag1 = false;

    // Start is called before the first frame update
    void Start()
    {
        flag = true;
    }

    // Update is called once per frame
    void Update()
    {
        if(SenseInput.GetButtonDown("A") || SenseInput.GetButtonDown("B") || Input.GetKeyDown(KeyCode.B) || Input.GetKeyDown(KeyCode.A) )
        {
            if (flag)
            {
                animatorT.enabled = true;
                animatorL.enabled = false;
                flag = false;
            }
            else
            {
                animatorL.enabled = true;
                animatorT.enabled = false;
                flag = true;
            }
        }
        if (SenseInput.GetButtonDown("C") || Input.GetKeyDown(KeyCode.C))
        {
            if (!flag1)
            {
                canvas.SetActive(true);
                flag1 = true;
            }
            else
            {
                canvas.SetActive(false);
                flag1 = false;
            }
        }
    }
}
