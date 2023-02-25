using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float smoothValue = 0.2f;
    public float currentVelocity = 2.0f;

    private Vector3 instantVelocity;
    private Vector3 refVelocity = Vector3.zero;
    
    void Start()
    {
        instantVelocity = new Vector3(0.0f, 0.0f, 0.0f);
        Debug.Log("Entered Player Controller.");
    }
    
    void Update()
    {

        Vector3 targetVelocity;
        float xVelocity = 0.0f;
        float zVelocity = 0.0f;

        if (Input.GetKey(KeyCode.UpArrow))
            zVelocity = 1.0f;
        if (Input.GetKey(KeyCode.DownArrow))
            zVelocity = -1.0f;
        if (Input.GetKey(KeyCode.LeftArrow))
            xVelocity = -1.0f;
        if (Input.GetKey(KeyCode.RightArrow))
            xVelocity = 1.0f;

        targetVelocity = new Vector3(xVelocity, 0.0f, zVelocity);
        targetVelocity.Normalize();
        targetVelocity *= currentVelocity;
        instantVelocity = Vector3.SmoothDamp(instantVelocity, targetVelocity, ref refVelocity, smoothValue);

        transform.position += (instantVelocity * Time.deltaTime);
        
    }
}
