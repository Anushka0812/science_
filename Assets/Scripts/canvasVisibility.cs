using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;

public class canvasVisibility : MonoBehaviour
{
    public GameObject canvas;
    bool flag = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
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
}
