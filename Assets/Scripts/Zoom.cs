using UnityEngine;
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
        if (Input.GetKeyDown(KeyCode.A))
            IsZoomedIn = true;
        if (Input.GetKeyDown(KeyCode.B))
            IsZoomedIn = false;
    }
}
