using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.XR;

public class VelocityToMaterial : MonoBehaviour
{
    public Material CubeMaterial;
    public Material GroundMaterial;

    private Vector3 lastTrackerPos;

    public TextMeshPro textMesh;

    private const float C = 6.0f;
	
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(isXR());
        Debug.Log("IsXR");
        lastTrackerPos = InputTracking.GetLocalPosition(UnityEngine.XR.XRNode.Head);
    }

    // Update is called once per frame
    void Update()
    {
        PassSpeed();
    }

    void PassSpeed() {
        Vector3 trackerPos = InputTracking.GetLocalPosition(UnityEngine.XR.XRNode.Head);//TrackerAnchor.position;
        Vector3 trackerVelocity = (trackerPos - lastTrackerPos) / Time.deltaTime;

        textMesh.text = trackerVelocity.magnitude.ToString("0.000");
        // Passes the instantaneous velocity to the materials;
        float v = trackerVelocity.magnitude;
        Debug.Log(v);
        float beta = v / C;
        CubeMaterial.SetFloat("_Beta", beta);
        GroundMaterial.SetFloat("_Beta", beta);

        lastTrackerPos = InputTracking.GetLocalPosition(XRNode.Head);
    }

    private bool isXR() {
        var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
        SubsystemManager.GetInstances<XRDisplaySubsystem>(xrDisplaySubsystems);
        foreach (var xrDisplay in xrDisplaySubsystems)
        {
            if (xrDisplay.running)
            {
                return true;
            }
        }
        return false;
    }
}
