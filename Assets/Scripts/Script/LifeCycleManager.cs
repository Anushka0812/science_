using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LifeCycleManager : MonoBehaviour
{
    public Button Next, Previous;

    public void DisableButton()
    {
        ButtonStatus(false);
    }

    public void EnableButton()
    {
        ButtonStatus(true);
    }
    public void ButtonStatus(bool status)
    {
        ButtonInt(Next, status);
        ButtonInt(Previous, status);
    }

    private void ButtonInt(Button button, bool isInteractable)
    {
        button.interactable = isInteractable;
    }
}
