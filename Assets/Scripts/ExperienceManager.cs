using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TechXR.Core.Sense;

public class ExperienceManager : MonoBehaviour
{
    int index = 0;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(SenseInput.GetButtonDown("L") || Input.GetKeyDown(KeyCode.L))
        {
            ChangeExperience(1);
        }

        if(SenseInput.GetButtonDown("U") || Input.GetKeyDown(KeyCode.U))
        {
            ChangeExperience(-1);
        }
    }

    public void ChangeExperience(int change)
    {
        if(index == transform.childCount - 1 && change == 1)
        {
            index = 0;
        }
        else if(index == 0 && change == -1)
        {
            index = transform.childCount - 1;
        }
        else
        {
            index += change;
        }

        for(int i = 0; i < transform.childCount; i++)
        {
            if(i == index)
            {
                transform.GetChild(i).gameObject.SetActive(true);
            }
            else
            {
                transform.GetChild(i).gameObject.SetActive(false);
            }
        }
    }
}
