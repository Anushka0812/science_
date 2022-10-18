using UnityEngine;

public class LookAtCamera : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
    }

    // Update is called once per frame
    void Update()
    {

        transform.LookAt(Camera.main.transform.position);
        //Vector3 newRotation = transform.localEulerAngles;
        //transform.localEulerAngles = new Vector3(0, newRotation.y +90f, 0);
    }

    public void InfoPanelButton(GameObject panelGO)
    {
        panelGO.SetActive(!panelGO.activeSelf);
    }
}
