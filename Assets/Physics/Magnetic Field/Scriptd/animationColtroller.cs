using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animationColtroller : MonoBehaviour
{
    public GameObject spreadParticle;
    public GameObject sprinkleParticle;
    public GameObject magneticParticle;
    public GameObject arrows;
    public static int prevState = 0;
    static Animator spread;
    static Animator sprinkle;
    static Animator magnetic;
    public static Animator arrow;
    
    // Start is called before the first frame update
    void Start()
    {
        spread = spreadParticle.GetComponent<Animator>();
        sprinkle = sprinkleParticle.GetComponent<Animator>();
        magnetic = magneticParticle.GetComponent<Animator>();
        arrow = arrows.GetComponent<Animator>();

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public static void startAnimations()
    {
        spread.SetTrigger("start");
        sprinkle.SetTrigger("start");
        magnetic.SetTrigger("start");
    }

    public static void adjustParticles()
    {
        magnetic.SetTrigger("adjust");
        arrow.SetTrigger("start");
        Debug.Log("IF KE BAHAR");
    }

    public static void stopAnimations()
    {
        magnetic.SetTrigger("stop");
        spread.SetTrigger("stop");
        sprinkle.SetTrigger("stop");

    }

    public static void revertAnimations()
    {
        magnetic.SetTrigger("revert");
        arrow.SetTrigger("stop");
        /*spread.SetTrigger("stop");
        sprinkle.SetTrigger("stop");*/
    }
}
