using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class setactive : MonoBehaviour
{
    public GameObject particle;
    public void setActivetrue()
    {
        particle.gameObject.SetActive(true);
    }
    public void setActivefalse()
    {
        particle.gameObject.SetActive(false);
    }
}
