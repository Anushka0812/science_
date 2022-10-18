using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using TechXR.Core.Sense;

public class Manager : MonoBehaviour
{
    int _index = 0;
    public TMP_Text screenName;
    private GameObject nowActive;

    // Start is called before the first frame update
    void Start()
    {
        nowActive = transform.GetChild(0).gameObject;
        screenName.text = nowActive.name;
    }

    public void ChangeExperience(int _change)
    {
        if (_index == transform.childCount - 1 && _change == 1)
            _index = 0;
        else if (_index == 0 && _change == -1)
            _index = transform.childCount - 1;
        else
            _index += _change;

        //ChangeText(_index);

        for (int i = 0; i < transform.childCount; i++)
        {
            
            if (i == _index)
            {
                nowActive = transform.GetChild(i).gameObject;
                nowActive.SetActive(true);
                screenName.text = nowActive.name;
            }
            else
            {
                transform.GetChild(i).gameObject.SetActive(false);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (SenseInput.GetButtonDown("L") || Input.GetKeyDown(KeyCode.N))
        {
            ChangeExperience(1);
            screenName.text = nowActive.name;

        }
        if (SenseInput.GetButtonDown("U") || Input.GetKeyDown(KeyCode.B))
        {
            ChangeExperience(-1);
            screenName.text = nowActive.name;
        }
    }
}
