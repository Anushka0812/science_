using UnityEngine;
using UnityEngine.UI;
using TMPro;
using TechXR.Core.Sense;

public class ExperiencesManager : MonoBehaviour
{
    //public TMP_Text nametext;
    int _index = 0;
    public Animator Butterfly;
    public bool isButterflyl;

    private void Start()
    {
        ChangeExperience(0);
    }

    public void ChangeExperience(int _change)
    {
        if (_index == transform.childCount-1 && _change == 1)
            _index = 0;
        else if (_index == 0 && _change == -1)
            _index = transform.childCount-1;
        else
            _index += _change;

        //ChangeText(_index);

        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).gameObject.SetActive(i == _index);
        }
    }

/*    void ChangeText(int Index)
    {
        nametext.text = transform.GetChild(Index).name;
    }*/

    private void Update()
    {
        if (SenseInput.GetButtonDown("A"))
        {
            ChangeExperience(1);
            if (isButterflyl)
            {
                Butterfly.SetTrigger("Next");
            }
        }
        else if (SenseInput.GetButtonDown("B"))
        {
            ChangeExperience(-1);
            if (isButterflyl)
            {
                Butterfly.SetTrigger("Prev");
            }
        }


    }


}