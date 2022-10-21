using UnityEngine;
using TechXR.Core.Sense;
public class Zoom : MonoBehaviour
{
    // Start is called before the first frame update
    public float duration = 1;
    public float ZoomScale = 2;
    bool IsZoomedIn = true;
    void Update()
    {
        if (!IsZoomedIn)
            transform.localScale = Vector3.MoveTowards(transform.localScale, Vector3.one * ZoomScale, (ZoomScale / duration) * Time.deltaTime);
        else
            transform.localScale = Vector3.MoveTowards(transform.localScale, Vector3.one, (ZoomScale / duration) * Time.deltaTime);
        if (SenseInput.GetButtonDown("B"))
            IsZoomedIn = true;
        if (SenseInput.GetButtonDown("A"))
            IsZoomedIn = false;
    }
}
