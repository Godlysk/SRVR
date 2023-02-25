using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    private CharacterController controller;

    private float smoothValue = 0.2f;
    private float currentVelocity = 5.0f;
    private float xRotation = 0.0f;
    private float yRotation = 0.0f;

    private float maxXRotation = 40.0f;
    private float sensitivity = 750.0f;

    private Vector3 instantVelocity;
    private Vector3 refVelocity = Vector3.zero;
    
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        controller = this.gameObject.GetComponent<CharacterController>();
        instantVelocity = new Vector3(0.0f, 0.0f, 0.0f);
    }

    void Look() {
        float mouseX = Input.GetAxis("Mouse X") * sensitivity * Time.deltaTime;
        float mouseY = Input.GetAxis("Mouse Y") * sensitivity * Time.deltaTime;
        xRotation -= mouseY;
        yRotation += mouseX;
        xRotation = Mathf.Clamp(xRotation, -maxXRotation, maxXRotation);
        transform.localRotation = Quaternion.Euler(xRotation, yRotation, 0.0f);
    }

    void Move() {
        Vector3 targetVelocity;
        float xVelocity = 0.0f;
        float zVelocity = 0.0f;
        if (Input.GetKey(KeyCode.W))
            zVelocity = 1.0f;
        if (Input.GetKey(KeyCode.A))
            xVelocity = -1.0f;
        if (Input.GetKey(KeyCode.S))
            zVelocity = -1.0f;
        if (Input.GetKey(KeyCode.D))
            xVelocity = 1.0f;
        targetVelocity = (xVelocity * Vector3.Scale(transform.right, new Vector3(1, 0, 1)) + zVelocity * Vector3.Scale(transform.forward, new Vector3(1, 0, 1)));
        targetVelocity.Normalize();
        targetVelocity *= currentVelocity;
        instantVelocity = Vector3.SmoothDamp(instantVelocity, targetVelocity, ref refVelocity, smoothValue);
        controller.Move(instantVelocity * Time.deltaTime);
    }
    
    void Update()
    {
        Look();
        Move();
    }
}
