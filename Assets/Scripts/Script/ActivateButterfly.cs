using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateButterfly : MonoBehaviour
{
    public Transform buttrefly;
    private void OnEnable()
    {
        for (int i = 0; i < buttrefly.childCount; i++)
        {
            buttrefly.GetChild(i).gameObject.SetActive(true);
        }
    }
}
