using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private float smoothValue = 0.5f;
    private float currentVelocity = 5.0f;
    private float rotationStep = 30.0f;

    private Vector3 instantVelocity;
    private Vector3 refVelocity = Vector3.zero;
    
    void Start()
    {
        instantVelocity = new Vector3(0.0f, 0.0f, 0.0f);
        Debug.Log("Entered Player Controller.");
    }

    void Look() {
        // Basic Rotate Camera
        if (Input.GetKey(KeyCode.LeftArrow))
            transform.eulerAngles -= new Vector3(0, rotationStep, 0) * Time.deltaTime;
        if (Input.GetKey(KeyCode.RightArrow))
            transform.eulerAngles += new Vector3(0, rotationStep, 0) * Time.deltaTime;
    }

    void Move() {
        Vector3 targetVelocity;
        float xVelocity = 0.0f;
        float zVelocity = 0.0f;

        // Smooth Move Object
        if (Input.GetKey(KeyCode.W))
            zVelocity = 1.0f;
        if (Input.GetKey(KeyCode.A))
            xVelocity = -1.0f;
        if (Input.GetKey(KeyCode.S))
            zVelocity = -1.0f;
        if (Input.GetKey(KeyCode.D))
            xVelocity = 1.0f;

        targetVelocity = new Vector3(xVelocity, 0.0f, zVelocity);
        targetVelocity.Normalize();
        targetVelocity *= currentVelocity;
        instantVelocity = Vector3.SmoothDamp(instantVelocity, targetVelocity, ref refVelocity, smoothValue);
        transform.position += (instantVelocity * Time.deltaTime);
    }
    
    void Update()
    {
        Look();
        Move();
    }
}
