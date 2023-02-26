using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerController : MonoBehaviour
{
    public Material CubeMaterial;
    public Material GroundMaterial;

    public TextMeshProUGUI speedDisplay;

    private CharacterController controller;

    private const float C = 5.0f;

    private float smoothValue = 0.5f;
    private float peakVelocity = 4.0f;
    private float xRotation = 0.0f;
    private float yRotation = 0.0f;

    private float maxXRotation = 40.0f;
    private float sensitivity = 750.0f;

    private int bufferSize = 100;
    private Vector4[] positionBuffer;
    private int bufferHead = 0;
    private float timeKeeper = 0.0f;
    private float timeResolution = 0.05f;

    private Vector3 instantVelocity;
    private Vector3 refVelocity = Vector3.zero;
    
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        controller = this.gameObject.GetComponent<CharacterController>();
        instantVelocity = new Vector3(0.0f, 0.0f, 0.0f);
        ClearBuffer();
    }

    void UpdateDisplay() {
        float beta = (instantVelocity / C).magnitude * 100;
        speedDisplay.text = beta.ToString("0.00") + "% of light speed";
    }

    void ClearBuffer() {
        positionBuffer = new Vector4[bufferSize];
        for (int i=0; i<bufferSize; i++)
            positionBuffer[i] = new Vector4(transform.position.x, transform.position.y + 0.5f, transform.position.z, 1.0f);
    }

    void TrackPosition() {
        // Pass all prior positions of player back to array at timeResolution time intervals
        // In shader script, convert original position of player to camera basis 
        // Update positions of mesh vertices accordingly
        if (timeKeeper >= timeResolution) {
            bufferHead = (bufferHead + 1) % bufferSize;
            positionBuffer[bufferHead] = new Vector4(transform.position.x, transform.position.y + 0.5f, transform.position.z, 1.0f);
            timeKeeper -= timeResolution;
        }
        timeKeeper += Time.deltaTime;
    }

    void PassKinematics() {
        // Pass the instantaneous velocity to shader
        // float v = instantVelocity.magnitude;
        Vector3 beta = instantVelocity / C;
        Vector4 paddedBeta = new Vector4(beta.x, beta.y, beta.z, 0.0f);
        Shader.SetGlobalFloat("_C", C);
        Shader.SetGlobalVector("_Beta", paddedBeta);
        // Pass the previous positions to shader
        // Debug.Log(positionBuffer[bufferHead] + " " + bufferHead);
        Shader.SetGlobalFloat("_TimeResolution", timeResolution);
        Shader.SetGlobalInt("_BufferHead", bufferHead);
        Shader.SetGlobalVectorArray("_PositionBuffer", positionBuffer);
    }

    // Returns the Look Direction
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
        targetVelocity *= peakVelocity;
        instantVelocity = Vector3.SmoothDamp(instantVelocity, targetVelocity, ref refVelocity, smoothValue);
        controller.Move(instantVelocity * Time.deltaTime);
    }
    
    void Update()
    {
        Look();
        Move();
        TrackPosition();
        PassKinematics();
        UpdateDisplay();
    }
}
