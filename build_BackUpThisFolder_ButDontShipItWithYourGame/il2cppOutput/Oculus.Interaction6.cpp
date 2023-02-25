#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Oculus.Interaction.IInteractorView>
struct Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5;
// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513;
// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>
struct Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E;
// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Locomotion.TeleportInteractor>
struct EnumerableHashSet_1_t0BC7DC57D412B97195C855CF761E9CF04EB6863F;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<Oculus.Interaction.Locomotion.TeleportInteractable>
struct Func_1_t562FD0C34DB93F8749DF15C26E40E5B8F2331EAE;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct IDataSource_1_t64076376CABC9460F59D2C56BDC13312CE38E57E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>
struct IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>
struct IReadOnlyList_1_tC7DD1BE89315F84F5AC3EEB0F716D812AC1732CB;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct InteractableRegistry_2_tB199C81A401B99479A9CC2A60CA960A449606DA2;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>
struct InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>
struct InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>
struct InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>
struct InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>
struct InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8;
// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E;
// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter>
struct List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<Oculus.Interaction.Tween/TweenCurve>
struct List_1_tA3DDB8C7A7F18B23A830E60EE4869349D0C75546;
// Oculus.Interaction.MultiAction`1<System.Object>
struct MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.Locomotion.TeleportInteractable>
struct MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.Locomotion.TeleportInteractor>
struct MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3;
// System.Collections.Generic.Queue`1<System.Boolean>
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// Oculus.Interaction.ProgressCurve[]
struct ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[]
struct FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface
struct BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13;
// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData
struct BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface
struct ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface
struct CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821;
// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData
struct CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
struct DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D;
// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
struct DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93;
// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual
struct DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI
struct FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI
struct FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832;
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI
struct FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1;
// Oculus.Interaction.GrabAPI.FingerRawPinchInjector
struct FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3;
// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054;
// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787;
// Oculus.Interaction.HandGrab.HandGrabTarget
struct HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2;
// Oculus.Interaction.Input.HandJointCache
struct HandJointCache_t8BDBDA97A57F7D39288F80C40A225C050A05116B;
// Oculus.Interaction.GrabAPI.HandPinchData
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C;
// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733;
// Oculus.Interaction.Input.HandSkeleton
struct HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A;
// Oculus.Interaction.IActiveState
struct IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Oculus.Interaction.Input.IAxis1D
struct IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803;
// Oculus.Interaction.Surfaces.IBounds
struct IBounds_t7F88A5A6E8266F0A0D1DDCA39C672622986118CE;
// Oculus.Interaction.Input.IDataSource
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
// Oculus.Interaction.IDistanceInteractor
struct IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661;
// Oculus.Interaction.IFingerAPI
struct IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209;
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface
struct IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7;
// Oculus.Interaction.Input.IHand
struct IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5;
// Oculus.Interaction.HandGrab.IHandGrabState
struct IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB;
// Oculus.Interaction.Grab.IHandGrabber
struct IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561;
// Oculus.Interaction.IHandVisual
struct IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558;
// Oculus.Interaction.Input.IHmd
struct IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D;
// Oculus.Interaction.IInteractorView
struct IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76;
// Oculus.Interaction.IRelativeToRef
struct IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE;
// Oculus.Interaction.DistanceReticles.IReticleData
struct IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18;
// Oculus.Interaction.ISelector
struct ISelector_t67FC626DAEE009248843EA2CE7425D5CDFBEE730;
// Oculus.Interaction.Surfaces.ISurface
struct ISurface_t2252B442B6309192CFC6B5CC5849C4C4859E638E;
// Oculus.Interaction.Locomotion.ITeleportArc
struct ITeleportArc_tF7AF068F826E967898738EBE2281905D29AE5492;
// Oculus.Interaction.Input.ITrackingToWorldTransformer
struct ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Oculus.Interaction.PolylineRenderer
struct PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0;
// Oculus.Interaction.ProgressCurve
struct ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401;
// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Oculus.Interaction.DistanceReticles.ReticleDataGhost
struct ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC;
// Oculus.Interaction.DistanceReticles.ReticleDataIcon
struct ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF;
// Oculus.Interaction.DistanceReticles.ReticleDataMesh
struct ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E;
// Oculus.Interaction.DistanceReticles.ReticleDataTeleport
struct ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B;
// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer
struct ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A;
// Oculus.Interaction.DistanceReticles.ReticleIconDrawer
struct ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA;
// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer
struct ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface
struct SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4;
// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData
struct SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D;
// System.String
struct String_t;
// Oculus.Interaction.Input.SyntheticHand
struct SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185;
// Oculus.Interaction.Locomotion.TeleportInteractable
struct TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470;
// Oculus.Interaction.Locomotion.TeleportInteractor
struct TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC;
// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
struct TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Oculus.Interaction.Tween
struct Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967;
// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tCB8CA9C3108FCE2F15F8E433F1E9362BF9C8D625;
// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
struct DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838;
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData
struct FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9;
// Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator
struct PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tC7DD1BE89315F84F5AC3EEB0F716D812AC1732CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7C643EBB219C9960D2043A540482240133DB77BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0;
IL2CPP_EXTERN_C const RuntimeMethod* BoxGrabSurface_MinimalRotationPoseAtSurface_mC0336B400380C84518895FDF115A4D5D7F5A0F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoxGrabSurface_MinimalTranslationPoseAtSurface_m4611D30944973C698142DE21A921448DA2736A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CylinderGrabSurface_MinimalRotationPoseAtSurface_mEFCC99A691B6C19380742DEC273DB3C9B20EB68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CylinderGrabSurface_MinimalTranslationPoseAtSurface_mFE675C06C5C64F29795CA723279AAA9C5C71FFA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B_m27E3594C73DA99F326F0E4D3F349C7C56F79BE5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_OnDisable_m81401E228C5FD4D0A24EB885B55ECF921F9FDBA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_OnEnable_mDA3129C991C07AC623D4FA8AE194843BDFE96350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReticleGhostDrawer_U3CStartU3Eb__22_0_m293BFF1DE80FD34877203F1F6B667F1392666221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReticleMeshDrawer_U3CStartU3Eb__24_0_m0F92C52B5741E25A8BB9EF736DFF30091E3D79B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SphereGrabSurface_MinimalRotationPoseAtSurface_m3474E575E4FF13FE1B7DFB2E50E26D79479D938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SphereGrabSurface_MinimalTranslationPoseAtSurface_mB1A98BDC00A8F8CE2419C9BE2CFDCA9A397534E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportReticleDrawer_HandleLocomotionDenied_mC5F7855575347499DC2D17564F51E2178F141DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportReticleDrawer_HandleLocomotionPerformed_m850B1C9512EF24248D4EFBC941AFC5766A2D9C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportReticleDrawer_U3CStartU3Eb__18_0_mFC3B4767B36C23B6665AB33FC1E33B94C5B50D08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838;;
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke;
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke;;
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C;;
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke;
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke;;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI
struct FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::apiHandle_
	int32_t ___apiHandle__0;
	// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::handData_
	HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* ___handData__1;
};

// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI
struct FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::_fingerPinchGrabAPIHandle
	int32_t ____fingerPinchGrabAPIHandle_0;
	// Oculus.Interaction.GrabAPI.HandPinchData Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::_pinchData
	HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* ____pinchData_1;
	// Oculus.Interaction.Input.IHmd Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::_hmd
	RuntimeObject* ____hmd_2;
};

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI
struct FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1  : public RuntimeObject
{
	// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[] Oculus.Interaction.GrabAPI.FingerRawPinchAPI::_fingersPinchData
	FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* ____fingersPinchData_0;
};

// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.HandDataSourceConfig::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_0;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::<TrackingToWorldTransformer>k__BackingField
	RuntimeObject* ___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandDataSourceConfig::<HandSkeleton>k__BackingField
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___U3CHandSkeletonU3Ek__BackingField_2;
};

// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandGrab.HandPose::_handedness
	int32_t ____handedness_0;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::_fingersFreedom
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____fingersFreedom_1;
	// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::_jointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____jointRotations_2;
};

// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551  : public RuntimeObject
{
	// UnityEngine.Pose[] Oculus.Interaction.Input.ReadOnlyHandJointPoses::_poses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____poses_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
struct DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761  : public RuntimeObject
{
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::<Target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTargetU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Oculus.Interaction.Grab.GrabPoseScore
struct GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 
{
	// System.Single Oculus.Interaction.Grab.GrabPoseScore::_translationScore
	float ____translationScore_0;
	// System.Single Oculus.Interaction.Grab.GrabPoseScore::_rotationScore
	float ____rotationScore_1;
	// System.Single Oculus.Interaction.Grab.GrabPoseScore::_rotationWeight
	float ____rotationWeight_2;
};

// Oculus.Interaction.GrabAPI.GrabbingRule
struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D 
{
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_thumbRequirement
	int32_t ____thumbRequirement_0;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_indexRequirement
	int32_t ____indexRequirement_1;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_middleRequirement
	int32_t ____middleRequirement_2;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_ringRequirement
	int32_t ____ringRequirement_3;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_pinkyRequirement
	int32_t ____pinkyRequirement_4;
	// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::_unselectMode
	int32_t ____unselectMode_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Oculus.Interaction.InteractorStateChangeArgs
struct InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78 
{
	// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_0;
	// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::<NewState>k__BackingField
	int32_t ___U3CNewStateU3Ek__BackingField_1;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// Oculus.Interaction.Grab.PoseMeasureParameters
struct PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 
{
	// System.Single Oculus.Interaction.Grab.PoseMeasureParameters::_positionRotationWeight
	float ____positionRotationWeight_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9__padding[96];
	};
};

// System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 
{
	// T1 System.ValueTuple`2::Item1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item2_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData
struct BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6  : public RuntimeObject
{
	// System.Single Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::widthOffset
	float ___widthOffset_0;
	// UnityEngine.Vector4 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::snapOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___snapOffset_1;
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size_2;
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::eulerAngles
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles_3;
};

// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData
struct CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621  : public RuntimeObject
{
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::startPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_0;
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::endPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPoint_1;
	// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::arcOffset
	float ___arcOffset_2;
	// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::arcLength
	float ___arcLength_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Oculus.Interaction.GrabAPI.HandPinchData
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C  : public RuntimeObject
{
	// System.Single[] Oculus.Interaction.GrabAPI.HandPinchData::_jointPositions
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____jointPositions_1;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.GrabAPI.HandPinchData
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke
{
	float ____jointPositions_1[72];
};
// Native definition for COM marshalling of Oculus.Interaction.GrabAPI.HandPinchData
struct HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_com
{
	float ____jointPositions_1[72];
};

// Oculus.Interaction.Input.JointFreedom
struct JointFreedom_tF6851AF256BDF4B02750F92160070BDF1F3B14A9 
{
	// System.Int32 Oculus.Interaction.Input.JointFreedom::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData
struct SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D  : public RuntimeObject
{
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::centre
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centre_0;
};

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838  : public RuntimeObject
{
	// System.Single[] Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::jointValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___jointValues_1;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootRotX
	float ____rootRotX_2;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootRotY
	float ____rootRotY_3;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootRotZ
	float ____rootRotZ_4;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootRotW
	float ____rootRotW_5;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootPosX
	float ____rootPosX_6;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootPosY
	float ____rootPosY_7;
	// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_rootPosZ
	float ____rootPosZ_8;
	// System.Int32 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::_handedness
	int32_t ____handedness_9;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke
{
	float ___jointValues_1[168];
	float ____rootRotX_2;
	float ____rootRotY_3;
	float ____rootRotZ_4;
	float ____rootRotW_5;
	float ____rootPosX_6;
	float ____rootPosY_7;
	float ____rootPosZ_8;
	int32_t ____handedness_9;
};
// Native definition for COM marshalling of Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
struct HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_com
{
	float ___jointValues_1[168];
	float ____rootRotX_2;
	float ____rootRotY_3;
	float ____rootRotZ_4;
	float ____rootRotW_5;
	float ____rootPosX_6;
	float ____rootPosY_7;
	float ____rootPosZ_8;
	int32_t ____handedness_9;
};

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData
struct FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandFinger Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::_finger
	int32_t ____finger_0;
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::_tipId
	int32_t ____tipId_1;
	// System.Single Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::PinchStrength
	float ___PinchStrength_2;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::IsPinching
	bool ___IsPinching_3;
	// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::<IsPinchingChanged>k__BackingField
	bool ___U3CIsPinchingChangedU3Ek__BackingField_4;
	// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::<TipPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CTipPositionU3Ek__BackingField_5;
};

// Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 
{
	// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::tangentPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangentPoint_1;
	// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::disconnected
	bool ___disconnected_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_pinvoke
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangentPoint_1;
	int32_t ___disconnected_2;
};
// Native definition for COM marshalling of Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_com
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangentPoint_1;
	int32_t ___disconnected_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDataValid
	bool ___IsDataValid_0;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsConnected
	bool ___IsConnected_1;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsTracked
	bool ___IsTracked_2;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::Root
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___Root_3;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::RootPoseOrigin
	int32_t ___RootPoseOrigin_4;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.HandDataAsset::Joints
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Joints_5;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsHighConfidence
	bool ___IsHighConfidence_6;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerPinching
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerPinching_7;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerHighConfidence
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerHighConfidence_8;
	// System.Single[] Oculus.Interaction.Input.HandDataAsset::FingerPinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___FingerPinchStrength_9;
	// System.Single Oculus.Interaction.Input.HandDataAsset::HandScale
	float ___HandScale_10;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::PointerPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PointerPose_11;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::PointerPoseOrigin
	int32_t ___PointerPoseOrigin_12;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDominantHand
	bool ___IsDominantHand_13;
	// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.HandDataAsset::Config
	HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* ___Config_14;
};

// Oculus.Interaction.HandGrab.HandGrabTarget
struct HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2  : public RuntimeObject
{
	// Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor Oculus.Interaction.HandGrab.HandGrabTarget::<Anchor>k__BackingField
	int32_t ___U3CAnchorU3Ek__BackingField_0;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabTarget::_isHandPoseValid
	bool ____isHandPoseValid_1;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabTarget::_handPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____handPose_2;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabTarget::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_3;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabTarget::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_4;
	// Oculus.Interaction.HandGrab.HandAlignType Oculus.Interaction.HandGrab.HandGrabTarget::_handAlignment
	int32_t ____handAlignment_5;
};

// Oculus.Interaction.Locomotion.LocomotionEvent
struct LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 
{
	// System.Int32 Oculus.Interaction.Locomotion.LocomotionEvent::<Identifier>k__BackingField
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	// UnityEngine.Pose Oculus.Interaction.Locomotion.LocomotionEvent::<Pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField_1;
	// Oculus.Interaction.Locomotion.LocomotionEvent/TranslationType Oculus.Interaction.Locomotion.LocomotionEvent::<Translation>k__BackingField
	int32_t ___U3CTranslationU3Ek__BackingField_2;
	// Oculus.Interaction.Locomotion.LocomotionEvent/RotationType Oculus.Interaction.Locomotion.LocomotionEvent::<Rotation>k__BackingField
	int32_t ___U3CRotationU3Ek__BackingField_3;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Oculus.Interaction.PolylineRenderer
struct PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0  : public RuntimeObject
{
	// UnityEngine.Vector4[] Oculus.Interaction.PolylineRenderer::_positions
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____positions_0;
	// System.Boolean Oculus.Interaction.PolylineRenderer::_positionsNeedUpdate
	bool ____positionsNeedUpdate_1;
	// UnityEngine.Color[] Oculus.Interaction.PolylineRenderer::_colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____colors_2;
	// System.Boolean Oculus.Interaction.PolylineRenderer::_colorsNeedUpdate
	bool ____colorsNeedUpdate_3;
	// UnityEngine.Bounds Oculus.Interaction.PolylineRenderer::_bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ____bounds_4;
	// UnityEngine.Mesh Oculus.Interaction.PolylineRenderer::_baseMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____baseMesh_5;
	// UnityEngine.Material Oculus.Interaction.PolylineRenderer::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_6;
	// System.Boolean Oculus.Interaction.PolylineRenderer::_renderSinglePass
	bool ____renderSinglePass_7;
	// UnityEngine.ComputeBuffer Oculus.Interaction.PolylineRenderer::_positionBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____positionBuffer_8;
	// UnityEngine.ComputeBuffer Oculus.Interaction.PolylineRenderer::_colorBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____colorBuffer_9;
	// UnityEngine.ComputeBuffer Oculus.Interaction.PolylineRenderer::_argsBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____argsBuffer_10;
	// System.UInt32[] Oculus.Interaction.PolylineRenderer::_argsData
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____argsData_11;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_positionBufferShaderID
	int32_t ____positionBufferShaderID_12;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_colorBufferShaderID
	int32_t ____colorBufferShaderID_13;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_localToWorldShaderID
	int32_t ____localToWorldShaderID_14;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_scaleShaderID
	int32_t ____scaleShaderID_15;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_maxLineCount
	int32_t ____maxLineCount_16;
	// UnityEngine.Matrix4x4 Oculus.Interaction.PolylineRenderer::_matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____matrix_17;
	// System.Single Oculus.Interaction.PolylineRenderer::_lineScaleFactor
	float ____lineScaleFactor_18;
};

// Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 
{
	// System.Single Oculus.Interaction.HandGrab.PoseTravelData::_travelSpeed
	float ____travelSpeed_0;
	// System.Boolean Oculus.Interaction.HandGrab.PoseTravelData::_useFixedTravelTime
	bool ____useFixedTravelTime_1;
	// UnityEngine.AnimationCurve Oculus.Interaction.HandGrab.PoseTravelData::_travelCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____travelCurve_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_pinvoke
{
	float ____travelSpeed_0;
	int32_t ____useFixedTravelTime_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ____travelCurve_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_com
{
	float ____travelSpeed_0;
	int32_t ____useFixedTravelTime_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ____travelCurve_2;
};

// Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E 
{
	// UnityEngine.Transform Oculus.Interaction.Locomotion.TeleportHit::relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo_0;
	// System.Single Oculus.Interaction.Locomotion.TeleportHit::<SnapRadius>k__BackingField
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	// UnityEngine.Pose Oculus.Interaction.Locomotion.TeleportHit::_localPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo_0;
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_2;
};
// Native definition for COM marshalling of Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo_0;
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_2;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Tween
struct Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Oculus.Interaction.Tween/TweenCurve> Oculus.Interaction.Tween::_tweenCurves
	List_1_tA3DDB8C7A7F18B23A830E60EE4869349D0C75546* ____tweenCurves_0;
	// UnityEngine.Pose Oculus.Interaction.Tween::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_1;
	// UnityEngine.Pose Oculus.Interaction.Tween::_startPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____startPose_2;
	// System.Single Oculus.Interaction.Tween::_maxOverlapTime
	float ____maxOverlapTime_3;
	// System.Single Oculus.Interaction.Tween::_tweenTime
	float ____tweenTime_4;
	// UnityEngine.AnimationCurve Oculus.Interaction.Tween::_animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____animationCurve_5;
};

// Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tCB8CA9C3108FCE2F15F8E433F1E9362BF9C8D625  : public RuntimeObject
{
	// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::start
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___start_0;
	// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::tangent
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent_1;
	// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::end
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___end_2;
	// System.Single Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::positionT
	float ___positionT_3;
	// System.Single Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::rotationT
	float ___rotationT_4;
};

// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513  : public MulticastDelegate_t
{
};

// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>
struct Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator
struct PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8  : public MulticastDelegate_t
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::<Started>k__BackingField
	bool ___U3CStartedU3Ek__BackingField_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_5;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_6;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_7;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataSource`1::_updateAfter
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____updateAfter_8;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_9;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_10;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_11;
};

// Oculus.Interaction.Interactable`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct Interactable_2_t5D00069D26553652703166DED5F31151F7A8C426  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_9;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	EnumerableHashSet_1_t0BC7DC57D412B97195C855CF761E9CF04EB6863F* ____interactors_10;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	EnumerableHashSet_1_t0BC7DC57D412B97195C855CF761E9CF04EB6863F* ____selectingInteractors_11;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_12;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_13;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewAdded_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewRemoved_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewAdded_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewRemoved_17;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenInteractorAdded_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenInteractorRemoved_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenSelectingInteractorAdded_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenSelectingInteractorRemoved_21;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>
struct InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>
struct InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>
struct InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>
struct InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_7;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ____computeCandidateOverride_8;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_9;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_10;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_11;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_13;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_14;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_15;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_16;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_17;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_18;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_19;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_20;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_21;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	RuntimeObject* ____candidate_22;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	RuntimeObject* ____interactable_23;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	RuntimeObject* ____selectedInteractable_24;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSet_25;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnset_26;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSelected_27;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnselected_28;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_29;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_30;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_31;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_32;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_33;
};

// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_7;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_t562FD0C34DB93F8749DF15C26E40E5B8F2331EAE* ____computeCandidateOverride_8;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_9;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_10;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_11;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_13;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_14;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_15;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_16;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_17;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_18;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_19;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_20;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_21;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* ____candidate_22;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* ____interactable_23;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* ____selectedInteractable_24;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableSet_25;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableUnset_26;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableSelected_27;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableUnselected_28;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_29;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_30;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_31;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_32;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_33;
};

// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface
struct BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::_data
	BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ____data_4;
	// UnityEngine.Transform Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_5;
	// UnityEngine.Transform Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::_referencePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____referencePoint_6;
};

// Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface
struct ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____collider_4;
};

// Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface
struct CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::_data
	CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ____data_4;
	// UnityEngine.Transform Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_5;
	// UnityEngine.Transform Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::_referencePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____referencePoint_6;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
struct DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_distanceInteractor
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____distanceInteractor_4;
	// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::<DistanceInteractor>k__BackingField
	RuntimeObject* ___U3CDistanceInteractorU3Ek__BackingField_5;
	// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_visualOffset
	float ____visualOffset_6;
	// UnityEngine.Vector3[] Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_linePoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____linePoints_7;
	// System.Boolean Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_visibleDuringNormal
	bool ____visibleDuringNormal_8;
	// Oculus.Interaction.DistanceReticles.IReticleData Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_target
	RuntimeObject* ____target_9;
	// System.Int32 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_numLinePoints
	int32_t ____numLinePoints_10;
	// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_targetlessLength
	float ____targetlessLength_11;
	// System.Boolean Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_started
	bool ____started_12;
	// System.Boolean Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_shouldDrawLine
	bool ____shouldDrawLine_13;
	// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_dummyTarget
	DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* ____dummyTarget_14;
};

// Oculus.Interaction.GrabAPI.FingerRawPinchInjector
struct FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.GrabAPI.FingerRawPinchInjector::_handGrabAPI
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* ____handGrabAPI_4;
};

// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.GrabAPI.HandGrabAPI::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_5;
	// UnityEngine.MonoBehaviour Oculus.Interaction.GrabAPI.HandGrabAPI::_hmd
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hmd_6;
	// Oculus.Interaction.Input.IHmd Oculus.Interaction.GrabAPI.HandGrabAPI::<Hmd>k__BackingField
	RuntimeObject* ___U3CHmdU3Ek__BackingField_7;
	// Oculus.Interaction.IFingerAPI Oculus.Interaction.GrabAPI.HandGrabAPI::_fingerPinchGrabAPI
	RuntimeObject* ____fingerPinchGrabAPI_8;
	// Oculus.Interaction.IFingerAPI Oculus.Interaction.GrabAPI.HandGrabAPI::_fingerPalmGrabAPI
	RuntimeObject* ____fingerPalmGrabAPI_9;
	// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::_started
	bool ____started_10;
};

// Oculus.Interaction.DistanceReticles.ReticleDataGhost
struct ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataGhost::_targetPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetPoint_4;
};

// Oculus.Interaction.DistanceReticles.ReticleDataIcon
struct ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer Oculus.Interaction.DistanceReticles.ReticleDataIcon::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_4;
	// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleDataIcon::_customIcon
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____customIcon_5;
	// UnityEngine.Collider[] Oculus.Interaction.DistanceReticles.ReticleDataIcon::_colliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____colliders_6;
	// System.Single Oculus.Interaction.DistanceReticles.ReticleDataIcon::_snappiness
	float ____snappiness_7;
};

// Oculus.Interaction.DistanceReticles.ReticleDataMesh
struct ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleDataMesh::_filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____filter_4;
};

// Oculus.Interaction.DistanceReticles.ReticleDataTeleport
struct ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_snapPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____snapPoint_4;
	// UnityEngine.Renderer Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____renderer_5;
	// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_reticleMode
	int32_t ____reticleMode_7;
};

// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface
struct SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::_data
	SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ____data_4;
	// UnityEngine.Transform Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_5;
	// UnityEngine.Transform Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::_referencePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____referencePoint_6;
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Input.HandDataAsset>
struct DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5  : public DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Input.DataModifier`1::_iModifyDataFromSourceMono
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____iModifyDataFromSourceMono_12;
	// Oculus.Interaction.Input.IDataSource`1<TData> Oculus.Interaction.Input.DataModifier`1::_modifyDataFromSource
	RuntimeObject* ____modifyDataFromSource_13;
	// System.Boolean Oculus.Interaction.Input.DataModifier`1::_applyModifier
	bool ____applyModifier_14;
	// TData Oculus.Interaction.Input.DataModifier`1::_thisDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____thisDataAsset_16;
	// TData Oculus.Interaction.Input.DataModifier`1::_currentDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____currentDataAsset_17;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
struct DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D  : public DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93
{
	// UnityEngine.LineRenderer Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::_lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ____lineRenderer_15;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual
struct DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487  : public DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93
{
	// UnityEngine.Color Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_15;
	// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_lineWidth
	float ____lineWidth_16;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_linePointsVec4
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____linePointsVec4_17;
	// UnityEngine.Material Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_lineMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____lineMaterial_18;
	// Oculus.Interaction.PolylineRenderer Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_polylineRenderer
	PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* ____polylineRenderer_19;
};

// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer
struct ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A  : public InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_handGrabber
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____handGrabber_8;
	// Oculus.Interaction.Grab.IHandGrabber Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<HandGrabber>k__BackingField
	RuntimeObject* ___U3CHandGrabberU3Ek__BackingField_9;
	// Oculus.Interaction.HandGrab.IHandGrabState Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<HandGrabSource>k__BackingField
	RuntimeObject* ___U3CHandGrabSourceU3Ek__BackingField_10;
	// Oculus.Interaction.Input.SyntheticHand Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_syntheticHand
	SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ____syntheticHand_11;
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_handVisual
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____handVisual_12;
	// Oculus.Interaction.IHandVisual Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::HandVisual
	RuntimeObject* ___HandVisual_13;
	// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_areFingersFree
	bool ____areFingersFree_14;
	// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_isWristFree
	bool ____isWristFree_15;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_16;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Transformer
	RuntimeObject* ___Transformer_17;
};

// Oculus.Interaction.DistanceReticles.ReticleIconDrawer
struct ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA  : public InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_distanceInteractor
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____distanceInteractor_8;
	// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.ReticleIconDrawer::<DistanceInteractor>k__BackingField
	RuntimeObject* ___U3CDistanceInteractorU3Ek__BackingField_9;
	// UnityEngine.MeshRenderer Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_10;
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_centerEye
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____centerEye_11;
	// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_defaultIcon
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____defaultIcon_12;
	// System.Boolean Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_constantScreenSize
	bool ____constantScreenSize_13;
	// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_originalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____originalScale_14;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleIconDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_15;
};

// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer
struct ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B  : public InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_handGrabber
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____handGrabber_8;
	// Oculus.Interaction.Grab.IHandGrabber Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<HandGrabber>k__BackingField
	RuntimeObject* ___U3CHandGrabberU3Ek__BackingField_9;
	// Oculus.Interaction.HandGrab.IHandGrabState Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<HandGrabSource>k__BackingField
	RuntimeObject* ___U3CHandGrabSourceU3Ek__BackingField_10;
	// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____filter_11;
	// UnityEngine.MeshRenderer Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_12;
	// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_travelData
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ____travelData_13;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_14;
	// Oculus.Interaction.Tween Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_tween
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* ____tween_15;
};

// Oculus.Interaction.Locomotion.TeleportInteractable
struct TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470  : public Interactable_2_t5D00069D26553652703166DED5F31151F7A8C426
{
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_allowTeleport
	bool ____allowTeleport_23;
	// System.Int32 Oculus.Interaction.Locomotion.TeleportInteractable::_equalDistanceToBlockerOverride
	int32_t ____equalDistanceToBlockerOverride_24;
	// System.Int32 Oculus.Interaction.Locomotion.TeleportInteractable::_tieBreakerScore
	int32_t ____tieBreakerScore_25;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Locomotion.TeleportInteractable::_surface
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____surface_26;
	// Oculus.Interaction.Surfaces.ISurface Oculus.Interaction.Locomotion.TeleportInteractable::<Surface>k__BackingField
	RuntimeObject* ___U3CSurfaceU3Ek__BackingField_27;
	// Oculus.Interaction.Surfaces.IBounds Oculus.Interaction.Locomotion.TeleportInteractable::<SurfaceBounds>k__BackingField
	RuntimeObject* ___U3CSurfaceBoundsU3Ek__BackingField_28;
	// UnityEngine.Transform Oculus.Interaction.Locomotion.TeleportInteractable::_targetPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetPoint_29;
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_faceTargetDirection
	bool ____faceTargetDirection_30;
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_eyeLevel
	bool ____eyeLevel_31;
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_started
	bool ____started_32;
};

// Oculus.Interaction.Locomotion.TeleportInteractor
struct TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC  : public Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Locomotion.TeleportInteractor::_selector
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____selector_34;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Locomotion.TeleportInteractor::_hmd
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hmd_35;
	// Oculus.Interaction.Input.IHmd Oculus.Interaction.Locomotion.TeleportInteractor::<Hmd>k__BackingField
	RuntimeObject* ___U3CHmdU3Ek__BackingField_36;
	// UnityEngine.Transform Oculus.Interaction.Locomotion.TeleportInteractor::_arcOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____arcOrigin_37;
	// UnityEngine.MonoBehaviour Oculus.Interaction.Locomotion.TeleportInteractor::_teleportArc
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____teleportArc_38;
	// Oculus.Interaction.Locomotion.ITeleportArc Oculus.Interaction.Locomotion.TeleportInteractor::<TeleportArc>k__BackingField
	RuntimeObject* ___U3CTeleportArcU3Ek__BackingField_39;
	// System.Single Oculus.Interaction.Locomotion.TeleportInteractor::_equalDistanceThreshold
	float ____equalDistanceThreshold_40;
	// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportInteractor::_arcEnd
	TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E ____arcEnd_41;
	// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> Oculus.Interaction.Locomotion.TeleportInteractor::_whenLocomotionPerformed
	Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* ____whenLocomotionPerformed_42;
	// System.Action Oculus.Interaction.Locomotion.TeleportInteractor::_whenLocomotionDenied
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____whenLocomotionDenied_43;
};

// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
struct TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4  : public InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8
{
	// Oculus.Interaction.Locomotion.TeleportInteractor Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_interactor
	TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ____interactor_8;
	// UnityEngine.Renderer Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_validTargetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____validTargetRenderer_9;
	// UnityEngine.Renderer Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_invalidTargetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____invalidTargetRenderer_10;
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_progress
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____progress_11;
	// Oculus.Interaction.Input.IAxis1D Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Progress
	RuntimeObject* ___Progress_12;
	// UnityEngine.MonoBehaviour Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_highlightState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____highlightState_13;
	// Oculus.Interaction.IActiveState Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::HighlightState
	RuntimeObject* ___HighlightState_14;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::WhenPerformLocomotion
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___WhenPerformLocomotion_15;
	// UnityEngine.Events.UnityEvent Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::WhenDenyLocomotion
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___WhenDenyLocomotion_16;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_17;
};

// Oculus.Interaction.Input.Hand
struct Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A  : public DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5
{
	// Oculus.Interaction.Input.HandJointCache Oculus.Interaction.Input.Hand::_jointPosesCache
	HandJointCache_t8BDBDA97A57F7D39288F80C40A225C050A05116B* ____jointPosesCache_18;
	// System.Action Oculus.Interaction.Input.Hand::WhenHandUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenHandUpdated_19;
};

// Oculus.Interaction.Input.SyntheticHand
struct SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185  : public Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A
{
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristPositionLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristPositionLockCurve_21;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristPositionUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristPositionUnlockCurve_22;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristRotationLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristRotationLockCurve_23;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristRotationUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristRotationUnlockCurve_24;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_jointLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____jointLockCurve_25;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_jointUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____jointUnlockCurve_26;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_spreadAllowance
	float ____spreadAllowance_27;
	// System.Action Oculus.Interaction.Input.SyntheticHand::UpdateRequired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRequired_28;
	// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.SyntheticHand::_lastStates
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____lastStates_29;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_wristPositionOverrideFactor
	float ____wristPositionOverrideFactor_30;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_wristRotationOverrideFactor
	float ____wristRotationOverrideFactor_31;
	// System.Single[] Oculus.Interaction.Input.SyntheticHand::_jointsOverrideFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____jointsOverrideFactor_32;
	// Oculus.Interaction.ProgressCurve[] Oculus.Interaction.Input.SyntheticHand::_jointLockProgressCurves
	ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D* ____jointLockProgressCurves_33;
	// Oculus.Interaction.ProgressCurve[] Oculus.Interaction.Input.SyntheticHand::_jointUnlockProgressCurves
	ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D* ____jointUnlockProgressCurves_34;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_desiredWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____desiredWristPose_35;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_wristPositionLocked
	bool ____wristPositionLocked_36;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_wristRotationLocked
	bool ____wristRotationLocked_37;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_constrainedWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____constrainedWristPose_38;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_lastWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____lastWristPose_39;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_desiredJointsRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____desiredJointsRotation_40;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_constrainedJointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____constrainedJointRotations_41;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_lastSyntheticRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____lastSyntheticRotation_42;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.Input.SyntheticHand::_jointsFreedomLevels
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____jointsFreedomLevels_43;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_hasConnectedData
	bool ____hasConnectedData_44;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI

// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI

// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI

// Oculus.Interaction.Input.HandDataSourceConfig

// Oculus.Interaction.Input.HandDataSourceConfig

// Oculus.Interaction.HandGrab.HandPose

// Oculus.Interaction.HandGrab.HandPose

// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551_StaticFields
{
	// Oculus.Interaction.Input.ReadOnlyHandJointPoses Oculus.Interaction.Input.ReadOnlyHandJointPoses::<Empty>k__BackingField
	ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* ___U3CEmptyU3Ek__BackingField_1;
};

// Oculus.Interaction.Input.ReadOnlyHandJointPoses

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// Oculus.Interaction.Grab.GrabPoseScore
struct GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82_StaticFields
{
	// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabPoseScore::Max
	GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 ___Max_3;
};

// Oculus.Interaction.Grab.GrabPoseScore

// Oculus.Interaction.GrabAPI.GrabbingRule
struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields
{
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPalmRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPalmRuleU3Ek__BackingField_6;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPinchRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPinchRuleU3Ek__BackingField_7;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<FullGrab>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CFullGrabU3Ek__BackingField_8;
};

// Oculus.Interaction.GrabAPI.GrabbingRule

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Oculus.Interaction.InteractorStateChangeArgs

// Oculus.Interaction.InteractorStateChangeArgs

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// Oculus.Interaction.Grab.PoseMeasureParameters
struct PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363_StaticFields
{
	// Oculus.Interaction.Grab.PoseMeasureParameters Oculus.Interaction.Grab.PoseMeasureParameters::DEFAULT
	PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___DEFAULT_1;
};

// Oculus.Interaction.Grab.PoseMeasureParameters

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>

// System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783
	__StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 ___6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17 <PrivateImplementationDetails>::D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78_34;
};

// <PrivateImplementationDetails>

// UnityEngine.Bounds

// UnityEngine.Bounds

// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData

// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData

// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData

// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData

// Oculus.Interaction.GrabAPI.HandPinchData

// Oculus.Interaction.GrabAPI.HandPinchData

// Oculus.Interaction.Input.JointFreedom

// Oculus.Interaction.Input.JointFreedom

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData

// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData

// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData

// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData

// Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
struct BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_StaticFields
{
	// Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::DEFAULT
	BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 ___DEFAULT_3;
};

// Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Oculus.Interaction.Input.HandDataAsset

// Oculus.Interaction.Input.HandDataAsset

// Oculus.Interaction.HandGrab.HandGrabTarget

// Oculus.Interaction.HandGrab.HandGrabTarget

// Oculus.Interaction.Locomotion.LocomotionEvent

// Oculus.Interaction.Locomotion.LocomotionEvent

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// Oculus.Interaction.PolylineRenderer

// Oculus.Interaction.PolylineRenderer

// Oculus.Interaction.HandGrab.PoseTravelData

// Oculus.Interaction.HandGrab.PoseTravelData

// Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E_StaticFields
{
	// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportHit::DEFAULT
	TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E ___DEFAULT_3;
};

// Oculus.Interaction.Locomotion.TeleportHit

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// Oculus.Interaction.Tween

// Oculus.Interaction.Tween

// Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0

// Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0

// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>

// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>

// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>

// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>

// System.Action

// System.Action

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator

// Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>

// Oculus.Interaction.Interactor`2<System.Object,System.Object>

// Oculus.Interaction.Interactor`2<System.Object,System.Object>

// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>

// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>

// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface

// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface

// Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface

// Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface

// Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface

// Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual

// Oculus.Interaction.GrabAPI.FingerRawPinchInjector

// Oculus.Interaction.GrabAPI.FingerRawPinchInjector

// Oculus.Interaction.GrabAPI.HandGrabAPI

// Oculus.Interaction.GrabAPI.HandGrabAPI

// Oculus.Interaction.DistanceReticles.ReticleDataGhost

// Oculus.Interaction.DistanceReticles.ReticleDataGhost

// Oculus.Interaction.DistanceReticles.ReticleDataIcon

// Oculus.Interaction.DistanceReticles.ReticleDataIcon

// Oculus.Interaction.DistanceReticles.ReticleDataMesh

// Oculus.Interaction.DistanceReticles.ReticleDataMesh

// Oculus.Interaction.DistanceReticles.ReticleDataTeleport
struct ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_StaticFields
{
	// System.Int32 Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_highlightShaderID
	int32_t ____highlightShaderID_6;
};

// Oculus.Interaction.DistanceReticles.ReticleDataTeleport

// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface

// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface

// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual

// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer

// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer

// Oculus.Interaction.DistanceReticles.ReticleIconDrawer

// Oculus.Interaction.DistanceReticles.ReticleIconDrawer

// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer

// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer

// Oculus.Interaction.Locomotion.TeleportInteractable

// Oculus.Interaction.Locomotion.TeleportInteractable

// Oculus.Interaction.Locomotion.TeleportInteractor

// Oculus.Interaction.Locomotion.TeleportInteractor

// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
struct TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields
{
	// System.Int32 Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_progressKey
	int32_t ____progressKey_18;
	// System.Int32 Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_highlightKey
	int32_t ____highlightKey_19;
};

// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer

// Oculus.Interaction.Input.SyntheticHand

// Oculus.Interaction.Input.SyntheticHand
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[]
struct FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* m_Items[1];

	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke(const HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838& unmarshaled, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke_back(const HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke& marshaled, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838& unmarshaled);
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke_cleanup(HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke(const HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C& unmarshaled, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke_back(const HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke& marshaled, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C& unmarshaled);
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke_cleanup(HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke& marshaled);

// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_gshared (ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD_gshared (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<System.Object>::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared (InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared (InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_Interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorReticle_1_OnEnable_mDAF063F8634703D5F9FD1567755ED471BB48FED0_gshared (InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m7B41A12CA19DEF03C183426EB56C5DC7005508D1_gshared (Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorReticle_1_OnDisable_m2C37C7BA74F0AE4FC5DF2DB32EBA2220C912C4EE_gshared (InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface::EvaluateBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BezierGrabSurface_EvaluateBezier_m8F7FE36D4530726E92C2130C758AF6E0599941E1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_middle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_end, float ___3_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::Multiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_Multiply_m916DD99BA41A0F0CEA71F4BED6124AD55FB19983 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_a, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::WorldSpacePose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BezierControlPoint_WorldSpacePose_m3EE35D7101D43818079F24CB0E6EC0A88D6A7AE2 (BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_relativePose, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurfaceData__ctor_mB6A01FD7B138071BDC220D8574CAB99E71979B6A (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* __this, const RuntimeMethod* method) ;
// System.Object Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxGrabSurfaceData_Clone_m3686549110D064CBC2FBC8931CB0D3EEA2D36250 (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_get_Direction_m7BD5C0D5E3654F3F07D979EBB06857FE38CA8BEA (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::MirrorPoseRotation(UnityEngine.Pose&,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_MirrorPoseRotation_m0F4E6DD5661B752CE896089B11F9483DF19E5C5F (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_normal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_tangent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface>()
inline BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* BoxGrabSurfaceData_Mirror_m6250D02427651C4E0DE754F59AA13366C8AB0323 (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::set_Data(Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_set_Data_m0FF7CD1CB31BE7191C55ED912AC2CEBD3974B9E8_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821 (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabPoseHelper::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&,Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator,Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 GrabPoseHelper_CalculateBestPoseAtSurface_m9AD42BA98779DDDA2011780D4F6E57690D4F2DA5 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_desiredPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* ___4_minimalTranslationPoseCalculator, PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* ___5_minimalRotationPoseCalculator, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_onNormal, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_inNormal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_inPoint, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float* ___1_enter, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_NearestPointInSurface_mAB1631E441BCF302FF3E909E1304C8A6EB8D7CB4 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxGrabSurface_MinimalTranslationPoseAtSurface_m4611D30944973C698142DE21A921448DA2736A1F (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::NearestPointAndAngleInSurface(UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_NearestPointAndAngleInSurface_m5011F35BD15A2C7AFD63F3F8994379709D51C2E4 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_surfacePoint, float* ___2_angle, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CalculateCorners(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_CalculateCorners_m2959EF8678030C80076DBB7074CC1B483F774CDC (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_bottomLeft, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_bottomRight, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_topLeft, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_topRight, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_SnapOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F (ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_gshared)(__this, ___0_item1, ___1_item2, method);
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::ProjectOnSegment(UnityEngine.Vector3,System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 ___1_segment, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::RotationalScore(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxGrabSurface_RotationalScore_mDD90D2C880D8ECD6473E47DAAD29BF9ADD65781A (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::RotateUp(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxGrabSurface_RotateUp_mE3F150C1E392DB5F8B3E971338382533596D3C85 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_baseRot, float ___1_angle, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectData(Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectData_mC40729907CEC1F88F32820ACC59C5DADC29BB5C8_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_data, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectRelativeTo_m01F9C6D14B136CBDFBBA03CDDB0D897A84456FD2_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectReferencePoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectReferencePoint_mCDAABA54F79FF25B5F30EF39CFB7677D55876DDC_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 BoxGrabSurface_CalculateBestPoseAtSurface_m43F6EA356FC411B796BAC8166CA379F585D839E9 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxGrabSurface_CalculateBestPoseAtSurface_mF47E4B462CFDE55DE5D112BBE465734464331838 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxGrabSurface_MirrorPose_m27EF20126F379DEAF7750EA3391B04858C3DEC52 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ColliderGrabSurface_NearestPointInSurface_mC3F09A6F5D80220EE33DF662FFFF55DABCC44A6A (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabPoseScore::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPoseScore__ctor_m51EAD17BED3A12FB99565B029697E1FC0B9447E8 (GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toPoint, bool ___2_isInside, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderGrabSurface_CreateDuplicatedSurface_m60A74705EEC1F54088C4C0A77AEA9288FB6CE9A2 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface>()
inline ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* GameObject_AddComponent_TisColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B_m27E3594C73DA99F326F0E4D3F349C7C56F79BE5F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::InjectAllColliderSurface(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderGrabSurface_InjectAllColliderSurface_mF6FDB45FEC88518F5F236A5AEB3F4CAC31549056 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::InjectCollider(UnityEngine.Collider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderGrabSurface_InjectCollider_mA55588B4ED169F6DEB8A682036E73AA7DCE18A6B_inline (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 ColliderGrabSurface_CalculateBestPoseAtSurface_m8E7B81CB3194482985C9E4DF91D2EAE562CD6EA7 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderGrabSurface_CalculateBestPoseAtSurface_mC74CC13711959679E08A788353C23F5CEEDAA287 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ColliderGrabSurface_MirrorPose_m8FF7DE80DAD8C245A56B6AE5F7AC9C3F0E66ED8D (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_gripPose, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurfaceData__ctor_m73FD3357EF20BEAA5CE32DB2030F53E41BB0670E (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* __this, const RuntimeMethod* method) ;
// System.Object Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderSurfaceData_Clone_m6C0353A4C95FA5FFFB4BED59C88FBC939FF54DB7 (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_ArcOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_ArcOffset_mB20CAB5B119E5F16C30836EDC37885344B7B5D83 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_OriginalDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_OriginalDir_mE80F6A33E1F335004D8E483B61F57FFF7803134A (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_ArcLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_StartArcDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_StartArcDir_m03162AB1826B0889B15025D3F137B7F9097134A6 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_EndPoint_m917F57388DB44EEFF0BE4F0FC4D6342111536CC3 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface>()
inline CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* CylinderSurfaceData_Mirror_m26B457E4EDCCD92A7503F6B2646F4B051B3A1BEB (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::set_Data(Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_Data_m5E7A4E2FC935B25F971B68A73BEE3BF1D5037765_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_value, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_Height_m89BC5F637A4C66B24DC6C56DDD7DF1177D64B042 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_EndArcDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_EndArcDir_m08548394CB1E551422A9CF1A445FDFB93EF3BDA7 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_NearestPointInSurface_mD1171C9D6A1FC315A50B686E41FE080BAED63002 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderGrabSurface_MinimalTranslationPoseAtSurface_mFE675C06C5C64F29795CA723279AAA9C5C71FFA9 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderGrabSurface_get_Rotation_mCEF4AB176D9711B08910CEA5EDA7CFC06C41FF6D (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::PointAltitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_PointAltitude_mD6D14BAA7CDAD0B0C62315BF6D7B5E0A25CF210F (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CalculateRotationOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderGrabSurface_CalculateRotationOffset_mABCFA6CEFAE469ACC6C892739AA33A555DD3FEED (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_surfacePoint, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectData(Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectData_m0BE519A812B2A6567FDAC0F22CAEAF6A71082E65_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_data, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectRelativeTo_m8FA19D27064438C03AC47A0B45F9D9FE91377446_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectReferencePoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectReferencePoint_mF08274A44753D10213D38F2CEDBF450EBB436FF1_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 CylinderGrabSurface_CalculateBestPoseAtSurface_m7DAD153C46685FFA3C9CB2527E9CAA190DF4D28B (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CylinderGrabSurface_CalculateBestPoseAtSurface_m7BEBB9A1236058AA4C80DA7C5AC174099FE5D3EA (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderGrabSurface_MirrorPose_m9A6D48E248066B1E2D3D2ED37F5890A6BF1ADEEC (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurfaceData__ctor_m1F207B8BA8D8DDEEAACD6F8C4FD883664238118B (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* __this, const RuntimeMethod* method) ;
// System.Object Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereGrabSurfaceData_Clone_m9CBCCD15C66B5DB0A66D4FE6407F774153399D60 (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Centre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereGrabSurface_get_Direction_m603378D2225E5B3B8EDB264CAD7706842CFD64B7 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereGrabSurface_NearestPointInSurface_mF01451FB7E7359AFA2EE575559DDECBF69B980C5 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereGrabSurface_MinimalTranslationPoseAtSurface_mB1A98BDC00A8F8CE2419C9BE2CFDCA9A397534E6 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface>()
inline SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* SphereGrabSurfaceData_Mirror_mDD32DBF6170C535D110CB6728798C0B1FD661910 (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::set_Data(Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_set_Data_m30CB7472817AC3C243663BF6B8705EC941918018_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::RotationAtPoint(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SphereGrabSurface_RotationAtPoint_m4549DF6A29A185F1455618800700E4BCFA91EA1F (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_surfacePoint, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_baseRot, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_desiredRotation, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectData(Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectData_m8CBCCD9F215A7AE521215CC0508E7025567C7429_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_data, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectRelativeTo_mEF76E321D71BCC17C4EAB9122357565A05C43EF4_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectReferencePoint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectReferencePoint_m57F1BF8C73A295D759666FE8BD1C56109803EDA0_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 SphereGrabSurface_CalculateBestPoseAtSurface_m57DD768C4748D351ED68BD53CFC776455B5EB5B0 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereGrabSurface_CalculateBestPoseAtSurface_mD1D0D144B9007BF01C26D0170AF47DAEF524A038 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereGrabSurface_MirrorPose_mA07DDD7F46BDD7BEE2337289D0DCC0B2A8A5EE09 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandData__ctor_m55028A6E15F20DF35BE715477001DA3D2AC94ECF (HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_Create_mD84A75FC6E5FFB89ED896E8F66A136D8215C0783 (const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbing(System.Int32,Oculus.Interaction.Input.HandFinger,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerIsGrabbing_m9F08BEC4570330E8771B154A4600A7C2642EE9A8 (int32_t ___0_handle, int32_t ___1_finger, bool* ___2_grabbing, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged(System.Int32,Oculus.Interaction.Input.HandFinger,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged_mE851ACAF85F9D6B6BC14743A1ADEEEFFE580009D (int32_t ___0_handle, int32_t ___1_finger, bool ___2_targetGrabState, bool* ___3_changed, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerGrabScore(System.Int32,Oculus.Interaction.Input.HandFinger,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerGrabScore_m7242D7376811C76C7E56BA692DBA8DBB42727460 (int32_t ___0_handle, int32_t ___1_finger, float* ___2_score, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::SetData(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>,UnityEngine.Pose,Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandData_SetData_mBF464CEC0E7A98FBEC45562AD7A7B98782680E8B (HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* __this, RuntimeObject* ___0_joints, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_root, int32_t ___2_handedness, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_UpdateHandData(System.Int32,Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_UpdateHandData_mDFA0CD8B4B33EBE8BF8E260C760F641CA6E6A9F8 (int32_t ___0_handle, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* ___1_data, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetCenterOffset(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetCenterOffset_m0E938F8311D3BA5ADD436B3F6776FB1A9207C83F (int32_t ___0_handle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_score, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandPinchData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPinchData__ctor_m0E36724E8B72AE853C4199A184A58523ECC18A52 (HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_Create_mA24D079BFAA6730B17301AF38068942B60AAF624 (const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbing(System.Int32,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbing_mD47E4419877C0AF7528FC1DAABAD350DCA090009 (int32_t ___0_handle, int32_t ___1_index, bool* ___2_grabbing, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetCenterOffset(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetCenterOffset_m52F8F047B0DF1C6DBA1590D5C582FEF6DFCB1025 (int32_t ___0_handle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_outCenter, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged(System.Int32,System.Int32,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8 (int32_t ___0_handle, int32_t ___1_index, bool ___2_targetState, bool* ___3_grabbing, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerGrabScore(System.Int32,Oculus.Interaction.Input.HandFinger,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerGrabScore_m226236F0AD6C4F0097C59E5290C741016D888570 (int32_t ___0_handle, int32_t ___1_finger, float* ___2_outScore, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Input.ReadOnlyHandJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyHandJointPoses_get_Count_m85C3D19C2B6A090455F9FA245BA35B400724EC0C (ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandPinchData::SetJoints(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPinchData_SetJoints_mA62F352CC5AB48C404622311FC5A632AC9A33076 (HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* __this, RuntimeObject* ___0_poses, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandWristHMDData(System.Int32,Oculus.Interaction.GrabAPI.HandPinchData,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_UpdateHandWristHMDData_m5A41AD577372AA546049889AC5F6972958EA2BD6 (int32_t ___0_handle, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* ___1_data, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_wristForward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_hmdForward, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_TipPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_IsPinchingChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI_ClearState_m22847F4F203CEEE8AB4F3A352044FA12ADC3C9B8 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateIsPinching(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateIsPinching_mF6AC20AE2029F842D68FFCCBD38F00E8CDDFD138 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_ClearState_mFC11EF56BB84EB4D7503C13F1C1385AD52336105 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, int32_t ___0_fingerId, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandJointId Oculus.Interaction.Input.HandJointUtils::GetHandFingerTip(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandJointUtils_GetHandFingerTip_m343D803AB845B68A891916B77AF415CC89366DF8 (int32_t ___0_finger, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_TipPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateTipPosition(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateTipPosition_m5B978AF1E9F2A7853F0FEFF4009C60C2F1A323A0 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_IsPinchingChanged(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerPinchAPI(Oculus.Interaction.IFingerAPI)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerPinchAPI_mB3FDF8702B1D8E3EE71C6D885264D546BA92F599_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerPinchAPI, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerGrabAPI(Oculus.Interaction.IFingerAPI)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerGrabAPI_m7AF1CEAF142B1414BB8F734FC495D1CA3ACBD1DE_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerGrabAPI, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::get_UnselectMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.GrabbingRule::get_SelectsWithOptionals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::get_Item(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___0_fingerID, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::set_Item(Oculus.Interaction.Input.HandFinger,Oculus.Interaction.GrabAPI.FingerRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___0_fingerID, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::StripIrrelevant(Oculus.Interaction.Input.HandFingerFlags&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t* ___0_fingerFlags, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::.ctor(Oculus.Interaction.Input.HandFingerFlags,Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___0_mask, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___1_otherRule, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::set_Hand(Oculus.Interaction.Input.IHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::set_Hmd(Oculus.Interaction.Input.IHmd)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hmd_m1BF086AD379F84F0FE525D96EE547C68F376CE82_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_monoBehaviour, bool* ___1_started, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_baseStart, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.IHmd Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hmd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hmd_m960DB0764735A16B21AAE5166B84572D24129D2C_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::.ctor(Oculus.Interaction.Input.IHmd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI__ctor_m12794700AD5FC57918BC30AF963A44F6C75F8539 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___0_hmd, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI__ctor_mC033897D9E80D5FC6BF9BE712495460B91A7CD99 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_monoBehaviour, bool* ___1_started, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandGrabbingFingers(Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandGrabbingFingers_mD8D207DB733885E2A0DC02F75D0A11C783403488 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerAPI, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPinchGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsSustainingGrab(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, int32_t ___1_grabbingFingers, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPalmGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectFingersChanged_mD2DED019EC45F71A15C9E469661E83BBC23AB7E1 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, RuntimeObject* ___1_fingerAPI, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectFingersChanged_mF9AF499104B2B1A9B15646C8929BADC3D91D5067 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, RuntimeObject* ___1_fingerAPI, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::WristOffsetToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandGrabScore(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean,Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandGrabScore_m6FBB0F4A7F87F3A23C091A11AA5C784075EBCFCD (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, bool ___1_includeGrabbing, RuntimeObject* ___2_fingerAPI, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectHand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectHand_m8D8F7F371C2A3E16C0C80D69E1052555FE28C17F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_NumLinePoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableSet(Oculus.Interaction.IRelativeToRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InteractableSet_m99688CB11A1A7993613DB80D70781A2151551F71 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableUnset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InteractableUnset_m3E91C521F531376D15BE0CA9F72A242FD8CFF30F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_positions, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InjectLineRenderer(UnityEngine.LineRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5_inline (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___0_lineRenderer, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_DistanceInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD_gshared)(__this, ___0_object, ___1_method, method);
}
// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::get_NewState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::get_PreviousState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::UpdateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_UpdateLine_m16134EB5F2305E2006C4A53D19A5B0C8165C6E78 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Oculus.Interaction.DistanceReticles.IReticleData>(T&)
inline bool Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::set_Target(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_VisualOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::TargetHit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_TargetHit_mCD88F8B136DA7856020262D52603821A8AA34868 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::EvaluateBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_EvaluateBezier_m8997CD36EB386CFFF676B1C929BC8F99DBE6B37B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_middle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_end, float ___3_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPointReticle__ctor_m1EC65D8B9BA15A0DD79DD955D69366BE020D176D (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PolylineRenderer::.ctor(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer__ctor_mC22B73C3821A6BE58B733254BCA060BB41613C3F (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_renderSinglePass, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_gshared)(__this, ___0_collection, method);
}
// System.Void Oculus.Interaction.PolylineRenderer::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer_Cleanup_m5A0AE8900DF293D647FEBEE4BBA559C64707332C (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
inline void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void Oculus.Interaction.PolylineRenderer::SetLines(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer_SetLines_m81F6012D448FE616DD7A2EDE10F257D90D9AD4E4 (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_positions, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PolylineRenderer::RenderLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer_RenderLines_m743CB16DDA07120C3731568D6D6C27D183928858 (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D_inline (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineMaterial(UnityEngine.Material)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731_inline (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.IHandGrabber Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_HandGrabber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabber_m9A6DA99F1AC409643B9E6C587AFA9B3730A9BDE0_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_HandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabber_m2EBEA85D6EEAD95C0EF43594D33D8C255DDDA430_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_HandGrabSource(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabSource_m7BECF82197BD23B23A897F819322D96E62EAABF9_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::GetData()
inline HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0 (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	return ((  HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::get_TrackingToWorldTransformer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeWrist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeWrist_mFBD0FE3A172C583999FB3E6048C903ACF82B0E78 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabTarget::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateFingers(Oculus.Interaction.HandGrab.HandPose,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateFingers_mDF8DB632340E7F93C70E64A526D8D3694DFE92AE (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___0_handPose, int32_t ___1_grabbingFingers, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabTarget::get_WorldGrabPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabTarget_get_WorldGrabPose_m922F71EA243F0FCF0AA0B8E8E1181E67BCE50508 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::GetWristPose(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReticleGhostDrawer_GetWristPose_mC07D666F8EF9AD3D09ACD6E2211A458782DE2C50 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_gripPoint, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_offset, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::LockWristPose(UnityEngine.Pose,System.Single,Oculus.Interaction.Input.SyntheticHand/WristLockMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_LockWristPose_mAC782FC91F436A63D7E0E01FDD5BE8B88F7E5BE3 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_wristPose, float ___1_overrideFactor, int32_t ___2_lockMode, bool ___3_worldPose, bool ___4_skipAnimation, const RuntimeMethod* method) ;
// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::get_JointRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::OverrideAllJoints(UnityEngine.Quaternion[]&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_OverrideAllJoints_m112B93989E6B93073B12D39FE25FD5361D93CC2D (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___0_jointRotations, float ___1_overrideFactor, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::get_FingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::SetFingerFreedom(Oculus.Interaction.Input.HandFinger&,Oculus.Interaction.Input.JointFreedom&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_SetFingerFreedom_mAD5CA90074DAA92F5D145AF40F861187C2CFB8D8 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, int32_t* ___0_finger, int32_t* ___1_freedomLevel, bool ___2_skipAnimation, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Invert(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Invert_m9971545F238582E9FCA24A1DFADCDDDDDE1723E9 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_a, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Premultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_a, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_b, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::FreeAllJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_FreeAllJoints_mEE570EF11E376D0E4487AA90EF853EE9D8FBF964 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::FreeWrist(Oculus.Interaction.Input.SyntheticHand/WristLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_FreeWrist_m2FD78586CE1880855ABB6C02BB0D657BB154C5E6 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, int32_t ___0_lockMode, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.IHandGrabState Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_HandGrabSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabSource_m25CFDF03C2589981D70AEE74C2F18651F1637FF4_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateHandPose(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateHandPose_m0366DC52AF67D12C000CE5AEC8621AF6AD8E5226 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_snapper, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectHandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectHandGrabber_m7FF1A7AA6235689873672FDA6C9F577B3D47AC6B (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_handGrabber, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___0_syntheticHand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectVisualHand(Oculus.Interaction.IHandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectVisualHand_mFD418FA8F74C3A3D25991AC526D87EFCA8CC3232 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_visualHand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::.ctor()
inline void InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15 (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::Start()
inline void InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_DistanceInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleDataIcon::get_CustomIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF_inline (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::GetTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_GetTargetSize_m5E69D80C03D174CEA801C41332DD295FDC033F49 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_ProcessHitPoint_m6C6BD7F6A4F2588A48DE69BFEB0CC6BFEF2D08B0 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldUp, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectDistanceInteractor_m90577A5451E7D28A48CFF2644BEACFC9E490C259 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_distanceInteractor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectCenterEye(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_centerEye, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::.ctor()
inline void InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::Start()
inline void InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// Oculus.Interaction.Grab.IHandGrabber Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_HandGrabber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabber_m5CFAE33DBC28EDF711D8ECF6EF15C7E532FC51E2_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_HandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabber_m1C37AB19714B6D60F0237F98D7DB5377310E825E_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_HandGrabSource(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabSource_m0A616E648EA73487D68021933419BD540E3AFEB8_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9_inline (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.IHandGrabState Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_HandGrabSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabSource_mBC1E12046641AFFECFF5978EB20F86DCE2F847E5_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::DestinationPose(Oculus.Interaction.DistanceReticles.ReticleDataMesh,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_data, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_worldSnapPose, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::GetPose(UnityEngine.Transform,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_GetPose_m33C9042AEC0A37063CC4EEF49E515DC7AEB4B1B9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, int32_t ___1_space, const RuntimeMethod* method) ;
// Oculus.Interaction.Tween Oculus.Interaction.HandGrab.PoseTravelData::CreateTween(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9 (PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_from, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_to, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_target, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Tween::get_Pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::SetPose(UnityEngine.Transform,UnityEngine.Pose&,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_SetPose_mAB343468EF0D5639215AD8F6898AD967B4A3DACA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, int32_t ___2_space, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::Delta(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_Delta_m62647EFB71E1076B0C44E3DBDE54782CDB4BA5E2 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_from, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_to, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectHandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectHandGrabber_mAECF72EF5B1BC92447CEB1675F922E590134667D (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_handGrabber, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectFilter(UnityEngine.MeshFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_filter, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.PoseTravelData::get_FAST()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 PoseTravelData_get_FAST_m0DFF02E35A779923D4E92166F75B38D453D916CA (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::.ctor()
inline void InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::Start()
inline void InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328 (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>::get_Interactable()
inline TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_inline (Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E* __this, const RuntimeMethod* method)
{
	return ((  TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* (*) (Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E*, const RuntimeMethod*))Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::OnEnable()
inline void InteractorReticle_1_OnEnable_mDA3129C991C07AC623D4FA8AE194843BDFE96350 (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*, const RuntimeMethod*))InteractorReticle_1_OnEnable_mDAF063F8634703D5F9FD1567755ED471BB48FED0_gshared)(__this, method);
}
// System.Void System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7B41A12CA19DEF03C183426EB56C5DC7005508D1 (Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m7B41A12CA19DEF03C183426EB56C5DC7005508D1_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor::add_WhenLocomotionPerformed(System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportInteractor_add_WhenLocomotionPerformed_mA372556B91B78A60C322E3F0C1B185274EF19EA9 (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor::add_WhenLocomotionDenied(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportInteractor_add_WhenLocomotionDenied_mB4CC0BC757126C0027E1B9EAE910841812563E1E (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor::remove_WhenLocomotionPerformed(System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportInteractor_remove_WhenLocomotionPerformed_m6955A5614F75EAD94985CAF307633FA9C036288A (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Locomotion.TeleportInteractor::remove_WhenLocomotionDenied(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportInteractor_remove_WhenLocomotionDenied_m43E6A48A5F1730DB9E621DA77B10AB14B108BEFE (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::OnDisable()
inline void InteractorReticle_1_OnDisable_m81401E228C5FD4D0A24EB885B55ECF921F9FDBA1 (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*, const RuntimeMethod*))InteractorReticle_1_OnDisable_m2C37C7BA74F0AE4FC5DF2DB32EBA2220C912C4EE_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, bool ___0_highlight, const RuntimeMethod* method) ;
// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Oculus.Interaction.DistanceReticles.ReticleDataTeleport::get_ReticleMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportInteractor::get_ArcEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Locomotion.TeleportHit::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TeleportHit_get_Point_mA410290D272135B53FDB860D1DF4195CF18411D0 (TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataTeleport::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataTeleport_ProcessHitPoint_m6AA685600FF1526EF57AAE397CDBDFE323D8B9AA (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Locomotion.TeleportHit::get_Normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TeleportHit_get_Normal_m80A0655F5E20349258BB9D1BF067A2CE5A9C6977 (TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleProgress(UnityEngine.Renderer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleProgress_m3870C0C3FA0B16F2F755DAB44EB0A9A604F671B3 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, float ___1_progress, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleHighlight(UnityEngine.Renderer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleHighlight_m69FBC72A3C86FFA89823B4D7EE551E43585F4EC1 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, bool ___1_highlight, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectInteractor(Oculus.Interaction.Locomotion.TeleportInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740_inline (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::.ctor()
inline void InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852 (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::Start()
inline void InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPalmGrabAPI_Create();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPalmGrabAPI_UpdateHandData(int32_t, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPalmGrabAPI_GetFingerIsGrabbing(int32_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged(int32_t, int32_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPalmGrabAPI_GetFingerGrabScore(int32_t, int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPalmGrabAPI_GetCenterOffset(int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_Create();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_UpdateHandData(int32_t, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_UpdateHandWristHMDData(int32_t, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL isdk_FingerPinchGrabAPI_GetString(int32_t, char*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_GetFingerIsGrabbing(int32_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged(int32_t, int32_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_GetFingerGrabScore(int32_t, int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_GetCenterOffset(int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_Common_GetVersion(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL isdk_FingerPinchGrabAPI_GetPinchHasGoodVisibility(int32_t, int32_t*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m336E4DA351B64C6D40389F2AB75C0D58EA22FC57 (U3CU3Ec__DisplayClass8_0_tCB8CA9C3108FCE2F15F8E433F1E9362BF9C8D625* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::<CalculateBestPoseAtSurface>b__0(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 U3CU3Ec__DisplayClass8_0_U3CCalculateBestPoseAtSurfaceU3Eb__0_mA16AACEDEEBACDB407C6B78CE4919C3E9B7BB93C (U3CU3Ec__DisplayClass8_0_tCB8CA9C3108FCE2F15F8E433F1E9362BF9C8D625* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_target, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_original, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// result.position = EvaluateBezier(start.position, tangent, end.position, positionT);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___start_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___tangent_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___end_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___position_0;
		float L_5 = __this->___positionT_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = BezierGrabSurface_EvaluateBezier_m8F7FE36D4530726E92C2130C758AF6E0599941E1(L_1, L_2, L_4, L_5, NULL);
		(&V_0)->___position_0 = L_6;
		// result.rotation = Quaternion.Slerp(start.rotation, end.rotation, positionT);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = (&__this->___start_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = (&__this->___end_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9->___rotation_1;
		float L_11 = __this->___positionT_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_8, L_10, L_11, NULL);
		(&V_0)->___rotation_1 = L_12;
		// return result;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface/<>c__DisplayClass8_0::<CalculateBestPoseAtSurface>b__1(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 U3CU3Ec__DisplayClass8_0_U3CCalculateBestPoseAtSurfaceU3Eb__1_m9327CA008BFFA34B4906907C51EA083B5196D3A5 (U3CU3Ec__DisplayClass8_0_tCB8CA9C3108FCE2F15F8E433F1E9362BF9C8D625* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_target, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_original, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// result.position = EvaluateBezier(start.position, tangent, end.position, rotationT);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___start_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___tangent_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___end_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___position_0;
		float L_5 = __this->___rotationT_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = BezierGrabSurface_EvaluateBezier_m8F7FE36D4530726E92C2130C758AF6E0599941E1(L_1, L_2, L_4, L_5, NULL);
		(&V_0)->___position_0 = L_6;
		// result.rotation = Quaternion.Slerp(start.rotation, end.rotation, rotationT);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = (&__this->___start_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = (&__this->___end_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9->___rotation_1;
		float L_11 = __this->___rotationT_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_8, L_10, L_11, NULL);
		(&V_0)->___rotation_1 = L_12;
		// return result;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
IL2CPP_EXTERN_C void BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshal_pinvoke(const BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006& unmarshaled, BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_pinvoke& marshaled)
{
	marshaled.___pose_0 = unmarshaled.___pose_0;
	marshaled.___tangentPoint_1 = unmarshaled.___tangentPoint_1;
	marshaled.___disconnected_2 = static_cast<int32_t>(unmarshaled.___disconnected_2);
}
IL2CPP_EXTERN_C void BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshal_pinvoke_back(const BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_pinvoke& marshaled, BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006& unmarshaled)
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 unmarshaledpose_temp_0;
	memset((&unmarshaledpose_temp_0), 0, sizeof(unmarshaledpose_temp_0));
	unmarshaledpose_temp_0 = marshaled.___pose_0;
	unmarshaled.___pose_0 = unmarshaledpose_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtangentPoint_temp_1;
	memset((&unmarshaledtangentPoint_temp_1), 0, sizeof(unmarshaledtangentPoint_temp_1));
	unmarshaledtangentPoint_temp_1 = marshaled.___tangentPoint_1;
	unmarshaled.___tangentPoint_1 = unmarshaledtangentPoint_temp_1;
	bool unmarshaleddisconnected_temp_2 = false;
	unmarshaleddisconnected_temp_2 = static_cast<bool>(marshaled.___disconnected_2);
	unmarshaled.___disconnected_2 = unmarshaleddisconnected_temp_2;
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
IL2CPP_EXTERN_C void BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshal_pinvoke_cleanup(BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
IL2CPP_EXTERN_C void BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshal_com(const BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006& unmarshaled, BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_com& marshaled)
{
	marshaled.___pose_0 = unmarshaled.___pose_0;
	marshaled.___tangentPoint_1 = unmarshaled.___tangentPoint_1;
	marshaled.___disconnected_2 = static_cast<int32_t>(unmarshaled.___disconnected_2);
}
IL2CPP_EXTERN_C void BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshal_com_back(const BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_com& marshaled, BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006& unmarshaled)
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 unmarshaledpose_temp_0;
	memset((&unmarshaledpose_temp_0), 0, sizeof(unmarshaledpose_temp_0));
	unmarshaledpose_temp_0 = marshaled.___pose_0;
	unmarshaled.___pose_0 = unmarshaledpose_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtangentPoint_temp_1;
	memset((&unmarshaledtangentPoint_temp_1), 0, sizeof(unmarshaledtangentPoint_temp_1));
	unmarshaledtangentPoint_temp_1 = marshaled.___tangentPoint_1;
	unmarshaled.___tangentPoint_1 = unmarshaledtangentPoint_temp_1;
	bool unmarshaleddisconnected_temp_2 = false;
	unmarshaleddisconnected_temp_2 = static_cast<bool>(marshaled.___disconnected_2);
	unmarshaled.___disconnected_2 = unmarshaleddisconnected_temp_2;
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint
IL2CPP_EXTERN_C void BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshal_com_cleanup(BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_marshaled_com& marshaled)
{
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::WorldSpacePose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BezierControlPoint_WorldSpacePose_m3EE35D7101D43818079F24CB0E6EC0A88D6A7AE2 (BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_relativePose, const RuntimeMethod* method) 
{
	{
		// return PoseUtils.Multiply(relativePose, pose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_relativePose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = (&__this->___pose_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_Multiply_m916DD99BA41A0F0CEA71F4BED6124AD55FB19983(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BezierControlPoint_WorldSpacePose_m3EE35D7101D43818079F24CB0E6EC0A88D6A7AE2_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_relativePose, const RuntimeMethod* method)
{
	BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = BezierControlPoint_WorldSpacePose_m3EE35D7101D43818079F24CB0E6EC0A88D6A7AE2(_thisAdjusted, ___0_relativePose, method);
	return _returnValue;
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BezierControlPoint::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierControlPoint__cctor_m42179EC0DD17B45975AD647B7E1FEF571154FA77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly BezierControlPoint DEFAULT = new BezierControlPoint()
		// {
		//     pose = Pose.identity,
		//     tangentPoint = new Vector3(0.1f, 0f, 0.1f)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006));
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		(&V_0)->___pose_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.100000001f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		(&V_0)->___tangentPoint_1 = L_1;
		BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 L_2 = V_0;
		((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_StaticFields*)il2cpp_codegen_static_fields_for(BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006_il2cpp_TypeInfo_var))->___DEFAULT_3 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxGrabSurfaceData_Clone_m3686549110D064CBC2FBC8931CB0D3EEA2D36250 (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxGrabSurfaceData clone = new BoxGrabSurfaceData();
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6*)il2cpp_codegen_object_new(BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoxGrabSurfaceData__ctor_mB6A01FD7B138071BDC220D8574CAB99E71979B6A(L_0, NULL);
		// clone.widthOffset = this.widthOffset;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_1 = L_0;
		float L_2 = __this->___widthOffset_0;
		NullCheck(L_1);
		L_1->___widthOffset_0 = L_2;
		// clone.snapOffset = this.snapOffset;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_3 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = __this->___snapOffset_1;
		NullCheck(L_3);
		L_3->___snapOffset_1 = L_4;
		// clone.size = this.size;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_5 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___size_2;
		NullCheck(L_5);
		L_5->___size_2 = L_6;
		// clone.eulerAngles = this.eulerAngles;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_7 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___eulerAngles_3;
		NullCheck(L_7);
		L_7->___eulerAngles_3 = L_8;
		// return clone;
		return L_7;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* BoxGrabSurfaceData_Mirror_m6250D02427651C4E0DE754F59AA13366C8AB0323 (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* V_0 = NULL;
	{
		// BoxGrabSurfaceData mirror = Clone() as BoxGrabSurfaceData;
		RuntimeObject* L_0;
		L_0 = BoxGrabSurfaceData_Clone_m3686549110D064CBC2FBC8931CB0D3EEA2D36250(__this, NULL);
		V_0 = ((BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6*)IsInstClass((RuntimeObject*)L_0, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var));
		// mirror.snapOffset = new Vector4(
		//     -mirror.snapOffset.y, -mirror.snapOffset.x,
		//     -mirror.snapOffset.w, -mirror.snapOffset.z);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_1 = V_0;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_2 = V_0;
		NullCheck(L_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = (&L_2->___snapOffset_1);
		float L_4 = L_3->___y_2;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_5 = V_0;
		NullCheck(L_5);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6 = (&L_5->___snapOffset_1);
		float L_7 = L_6->___x_1;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_8 = V_0;
		NullCheck(L_8);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_9 = (&L_8->___snapOffset_1);
		float L_10 = L_9->___w_4;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_11 = V_0;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12 = (&L_11->___snapOffset_1);
		float L_13 = L_12->___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_14), ((-L_4)), ((-L_7)), ((-L_10)), ((-L_13)), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___snapOffset_1 = L_14;
		// return mirror;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_15 = V_0;
		return L_15;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurfaceData__ctor_mB6A01FD7B138071BDC220D8574CAB99E71979B6A (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* __this, const RuntimeMethod* method) 
{
	{
		// public float widthOffset = 0.5f;
		__this->___widthOffset_0 = (0.5f);
		// public Vector3 size = new Vector3(0.1f, 0f, 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.100000001f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		__this->___size_2 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* BoxGrabSurface_get_Data_m0CD437D7C96E380FED77F811B7CC084F9580EB6C (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::set_Data(Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_set_Data_m0FF7CD1CB31BE7191C55ED912AC2CEBD3974B9E8 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_value, const RuntimeMethod* method) 
{
	{
		// _data = value;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = ___0_value;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_WidthOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxGrabSurface_get_WidthOffset_m71D875819EB10D2287FF16FE91952622FBCFBFCF (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// return _data.widthOffset;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		NullCheck(L_0);
		float L_1 = L_0->___widthOffset_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::set_WidthOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_set_WidthOffset_m5495D4ED0CDFE9CFA11283AE5DAB389D2F62D3BE (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _data.widthOffset = value;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		float L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___widthOffset_0 = L_1;
		// }
		return;
	}
}
// UnityEngine.Vector4 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_SnapOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// return _data.snapOffset;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = L_0->___snapOffset_1;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::set_SnapOffset(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_set_SnapOffset_mEA6EFDFC45382D8FC8297A8660B398B0EBC0E089 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// _data.snapOffset = value;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___snapOffset_1 = L_1;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_get_Size_m2AB9159ACF2B71DA8F6E80E529E632132A7459D4 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// return _data.size;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___size_2;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::set_Size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_set_Size_m27BFB053FFE3371FC22681798A8F55A7F1D894F5 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// _data.size = value;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___size_2 = L_1;
		// }
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// return _relativeTo.rotation * Quaternion.Euler(_data.eulerAngles);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_2 = __this->____data_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___eulerAngles_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_1, L_4, NULL);
		return L_5;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_set_Rotation_m7853C6F2767CBC686FA818DFD70A1E361E3BDA90 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _data.eulerAngles = (Quaternion.Inverse(_relativeTo.rotation) * value).eulerAngles;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____relativeTo_5;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		NullCheck(L_0);
		L_0->___eulerAngles_3 = L_6;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_get_Direction_m7BD5C0D5E3654F3F07D979EBB06857FE38CA8BEA (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// return Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_Reset_mCC52756FC2C1B8294EAAE5E002F887D2F8E58A4F (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B2_0 = NULL;
	BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* G_B2_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B1_0 = NULL;
	BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* G_B1_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* G_B3_1 = NULL;
	{
		// _referencePoint = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// _relativeTo = this.GetComponentInParent<Rigidbody>()?.transform;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D(__this, Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(G_B2_0, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_1);
		G_B3_1->____relativeTo_5 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____relativeTo_5), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_Start_m78B9BB57FAF8F1FA5385E7EC4DF8C74280FA408F (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxGrabSurface_MirrorPose_m27EF20126F379DEAF7750EA3391B04858C3DEC52 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = Quaternion.Inverse(_relativeTo.rotation) * Direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = BoxGrabSurface_get_Direction_m7BD5C0D5E3654F3F07D979EBB06857FE38CA8BEA(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 tangent = Quaternion.Inverse(_relativeTo.rotation) * (Rotation * Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____relativeTo_5;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_10, NULL);
		V_1 = L_11;
		// return pose.MirrorPoseRotation(normal, tangent);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___0_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = PoseUtils_MirrorPoseRotation_m0F4E6DD5661B752CE896089B11F9483DF19E5C5F(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxGrabSurface_CreateMirroredSurface_mED668B4A6FFB9D535CA9E4751E8E510364AD4637 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxGrabSurface surface = gameObject.AddComponent<BoxGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* L_1;
		L_1 = GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00(L_0, GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00_RuntimeMethod_var);
		// surface.Data = _data.Mirror();
		BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* L_2 = L_1;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_3 = __this->____data_4;
		NullCheck(L_3);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_4;
		L_4 = BoxGrabSurfaceData_Mirror_m6250D02427651C4E0DE754F59AA13366C8AB0323(L_3, NULL);
		NullCheck(L_2);
		BoxGrabSurface_set_Data_m0FF7CD1CB31BE7191C55ED912AC2CEBD3974B9E8_inline(L_2, L_4, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxGrabSurface_CreateDuplicatedSurface_mADECDBFC437664E7850EFF980EF6779810A45A8A (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoxGrabSurface surface = gameObject.AddComponent<BoxGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* L_1;
		L_1 = GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00(L_0, GameObject_AddComponent_TisBoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13_m2B223F9F3CFD7AD584061E325D3244911AF46A00_RuntimeMethod_var);
		// surface.Data = _data;
		BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* L_2 = L_1;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_3 = __this->____data_4;
		NullCheck(L_2);
		BoxGrabSurface_set_Data_m0FF7CD1CB31BE7191C55ED912AC2CEBD3974B9E8_inline(L_2, L_3, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 BoxGrabSurface_CalculateBestPoseAtSurface_m43F6EA356FC411B796BAC8166CA379F585D839E9 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxGrabSurface_MinimalRotationPoseAtSurface_mC0336B400380C84518895FDF115A4D5D7F5A0F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxGrabSurface_MinimalTranslationPoseAtSurface_m4611D30944973C698142DE21A921448DA2736A1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GrabPoseHelper.CalculateBestPoseAtSurface(targetPose, reference, out bestPose,
		//     scoringModifier, MinimalTranslationPoseAtSurface, MinimalRotationPoseAtSurface);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* L_4 = (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8*)il2cpp_codegen_object_new(PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821(L_4, __this, (intptr_t)((void*)BoxGrabSurface_MinimalTranslationPoseAtSurface_m4611D30944973C698142DE21A921448DA2736A1F_RuntimeMethod_var), NULL);
		PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* L_5 = (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8*)il2cpp_codegen_object_new(PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821(L_5, __this, (intptr_t)((void*)BoxGrabSurface_MinimalRotationPoseAtSurface_mC0336B400380C84518895FDF115A4D5D7F5A0F94_RuntimeMethod_var), NULL);
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_6;
		L_6 = GrabPoseHelper_CalculateBestPoseAtSurface_m9AD42BA98779DDDA2011780D4F6E57690D4F2DA5(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CalculateCorners(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_CalculateCorners_m2959EF8678030C80076DBB7074CC1B483F774CDC (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_bottomLeft, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_bottomRight, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_topLeft, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_topRight, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 rightRot = Rotation * Vector3.right;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		V_0 = L_2;
		// bottomLeft = _referencePoint.position - rightRot * _data.size.x * (1f - _data.widthOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___0_bottomLeft;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____referencePoint_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_7 = __this->____data_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&L_7->___size_2);
		float L_9 = L_8->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_9, NULL);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_11 = __this->____data_4;
		NullCheck(L_11);
		float L_12 = L_11->___widthOffset_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, ((float)il2cpp_codegen_subtract((1.0f), L_12)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_13, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_14;
		// bottomRight = _referencePoint.position + rightRot * _data.size.x * (_data.widthOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_bottomRight;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____referencePoint_6;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_19 = __this->____data_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&L_19->___size_2);
		float L_21 = L_20->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_21, NULL);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_23 = __this->____data_4;
		NullCheck(L_23);
		float L_24 = L_23->___widthOffset_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_25, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_15 = L_26;
		// Vector3 forwardOffset = Rotation * Vector3.forward * _data.size.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_27, L_28, NULL);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_30 = __this->____data_4;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&L_30->___size_2);
		float L_32 = L_31->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_32, NULL);
		V_1 = L_33;
		// topLeft = bottomLeft + forwardOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___2_topLeft;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___0_bottomLeft;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_37, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_34 = L_38;
		// topRight = bottomRight + forwardOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = ___3_topRight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = ___1_bottomRight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_42, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39 = L_43;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::ProjectOnSegment(UnityEngine.Vector3,System.ValueTuple`2<UnityEngine.Vector3,UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 ___1_segment, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 line = segment.Item2 - segment.Item1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_0 = ___1_segment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___Item2_1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_2 = ___1_segment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___Item1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// Vector3 projection = Vector3.Project(point - segment.Item1, line);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_point;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_6 = ___1_segment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___Item1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_8, L_9, NULL);
		V_1 = L_10;
		// if (Vector3.Dot(projection, line) < 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13;
		L_13 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_11, L_12, NULL);
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// projection = segment.Item1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_14 = ___1_segment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___Item1_0;
		V_1 = L_15;
		goto IL_0062;
	}

IL_003c:
	{
		// else if (projection.magnitude > line.magnitude)
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_17;
		L_17 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0055;
		}
	}
	{
		// projection = segment.Item2;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_18 = ___1_segment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18.___Item2_1;
		V_1 = L_19;
		goto IL_0062;
	}

IL_0055:
	{
		// projection += segment.Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_21 = ___1_segment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21.___Item1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_22, NULL);
		V_1 = L_23;
	}

IL_0062:
	{
		// return projection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxGrabSurface_CalculateBestPoseAtSurface_mF47E4B462CFDE55DE5D112BBE465734464331838 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Plane plane = new Plane(Rotation * Vector3.up, this.transform.position);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_0), L_2, L_4, NULL);
		// plane.Raycast(targetRay, out float rayDistance);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = ___0_targetRay;
		bool L_6;
		L_6 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_0), L_5, (&V_1), NULL);
		// Vector3 proximalPoint = targetRay.origin + targetRay.direction * rayDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_10, NULL);
		V_2 = L_11;
		// Vector3 surfacePoint = NearestPointInSurface(proximalPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = BoxGrabSurface_NearestPointInSurface_mAB1631E441BCF302FF3E909E1304C8A6EB8D7CB4(__this, L_12, NULL);
		V_3 = L_13;
		// Pose desiredPose = new Pose(surfacePoint, recordedPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = ___1_recordedPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_4), L_14, L_16, NULL);
		// bestPose = MinimalTranslationPoseAtSurface(desiredPose, recordedPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___2_bestPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = ___1_recordedPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = BoxGrabSurface_MinimalTranslationPoseAtSurface_m4611D30944973C698142DE21A921448DA2736A1F(__this, (&V_4), L_18, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_17 = L_19;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxGrabSurface_NearestPointInSurface_mAB1631E441BCF302FF3E909E1304C8A6EB8D7CB4 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// NearestPointAndAngleInSurface(targetPosition, out Vector3 surfacePoint, out float angle);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		BoxGrabSurface_NearestPointAndAngleInSurface_m5011F35BD15A2C7AFD63F3F8994379709D51C2E4(__this, L_0, (&V_0), (&V_1), NULL);
		// return surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::NearestPointAndAngleInSurface(UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_NearestPointAndAngleInSurface_m5011F35BD15A2C7AFD63F3F8994379709D51C2E4 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_surfacePoint, float* ___2_angle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		// Vector3 rightDir = Rotation * Vector3.right;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 forwardDir = Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		V_1 = L_5;
		// CalculateCorners(out bottomLeft, out bottomRight, out topLeft, out topRight);
		BoxGrabSurface_CalculateCorners_m2959EF8678030C80076DBB7074CC1B483F774CDC(__this, (&V_2), (&V_3), (&V_4), (&V_5), NULL);
		// Vector3 bottomP = ProjectOnSegment(targetPosition, (bottomLeft + rightDir * SnapOffset.y, bottomRight + rightDir * SnapOffset.x));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_10 = L_9.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_16 = L_15.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_17, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_19;
		memset((&L_19), 0, sizeof(L_19));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_19), L_12, L_18, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_6, L_19, NULL);
		V_6 = L_20;
		// Vector3 topP = ProjectOnSegment(targetPosition, (topLeft - rightDir * SnapOffset.x, topRight - rightDir * SnapOffset.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		L_24 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_25 = L_24.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		L_30 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_31 = L_30.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_32, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_34;
		memset((&L_34), 0, sizeof(L_34));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_34), L_27, L_33, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_21, L_34, NULL);
		V_7 = L_35;
		// Vector3 leftP = ProjectOnSegment(targetPosition, (bottomLeft - forwardDir * SnapOffset.z, topLeft - forwardDir * SnapOffset.w));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39;
		L_39 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_40 = L_39.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		L_45 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_46 = L_45.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_43, L_47, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_49;
		memset((&L_49), 0, sizeof(L_49));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_49), L_42, L_48, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_36, L_49, NULL);
		V_8 = L_50;
		// Vector3 rightP = ProjectOnSegment(targetPosition, (bottomRight + forwardDir * SnapOffset.w, topRight + forwardDir * SnapOffset.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54;
		L_54 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_55 = L_54.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60;
		L_60 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_61 = L_60.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_59, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_62, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_64;
		memset((&L_64), 0, sizeof(L_64));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_64), L_57, L_63, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_51, L_64, NULL);
		V_9 = L_65;
		// float bottomDistance = (bottomP - targetPosition).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_66, L_67, NULL);
		V_14 = L_68;
		float L_69;
		L_69 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_14), NULL);
		// float topDistance = (topP - targetPosition).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_70, L_71, NULL);
		V_14 = L_72;
		float L_73;
		L_73 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_14), NULL);
		V_10 = L_73;
		// float leftDistance = (leftP - targetPosition).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_74, L_75, NULL);
		V_14 = L_76;
		float L_77;
		L_77 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_14), NULL);
		V_11 = L_77;
		// float rightDistance = (rightP - targetPosition).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_78, L_79, NULL);
		V_14 = L_80;
		float L_81;
		L_81 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_14), NULL);
		V_12 = L_81;
		// float minDistance = Mathf.Min(bottomDistance, Mathf.Min(topDistance, Mathf.Min(leftDistance, rightDistance)));
		float L_82 = L_69;
		float L_83 = V_10;
		float L_84 = V_11;
		float L_85 = V_12;
		float L_86;
		L_86 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_84, L_85, NULL);
		float L_87;
		L_87 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_83, L_86, NULL);
		float L_88;
		L_88 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_82, L_87, NULL);
		V_13 = L_88;
		// if (bottomDistance == minDistance)
		float L_89 = V_13;
		if ((!(((float)L_82) == ((float)L_89))))
		{
			goto IL_019a;
		}
	}
	{
		// surfacePoint = bottomP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = ___1_surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_6;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_90 = L_91;
		// angle = 0f;
		float* L_92 = ___2_angle;
		*((float*)L_92) = (float)(0.0f);
		// return;
		return;
	}

IL_019a:
	{
		// if (topDistance == minDistance)
		float L_93 = V_10;
		float L_94 = V_13;
		if ((!(((float)L_93) == ((float)L_94))))
		{
			goto IL_01b0;
		}
	}
	{
		// surfacePoint = topP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_95 = ___1_surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_7;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_95 = L_96;
		// angle = 180f;
		float* L_97 = ___2_angle;
		*((float*)L_97) = (float)(180.0f);
		// return;
		return;
	}

IL_01b0:
	{
		// if (leftDistance == minDistance)
		float L_98 = V_11;
		float L_99 = V_13;
		if ((!(((float)L_98) == ((float)L_99))))
		{
			goto IL_01c6;
		}
	}
	{
		// surfacePoint = leftP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_100 = ___1_surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_8;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_100 = L_101;
		// angle = 90f;
		float* L_102 = ___2_angle;
		*((float*)L_102) = (float)(90.0f);
		// return;
		return;
	}

IL_01c6:
	{
		// surfacePoint = rightP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_103 = ___1_surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_9;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_103 = L_104;
		// angle = -90f;
		float* L_105 = ___2_angle;
		*((float*)L_105) = (float)(-90.0f);
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::MinimalRotationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxGrabSurface_MinimalRotationPoseAtSurface_mC0336B400380C84518895FDF115A4D5D7F5A0F94 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_userPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = referencePose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// Quaternion desiredRot = userPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___0_userPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4->___rotation_1;
		V_2 = L_5;
		// Vector3 up = Rotation * Vector3.up;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_7, NULL);
		V_3 = L_8;
		// Quaternion bottomRot = baseRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		V_4 = L_9;
		// Quaternion topRot = Quaternion.AngleAxis(180f, up) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((180.0f), L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_11, L_12, NULL);
		V_5 = L_13;
		// Quaternion leftRot = Quaternion.AngleAxis(90f, up) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((90.0f), L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_15, L_16, NULL);
		V_6 = L_17;
		// Quaternion rightRot = Quaternion.AngleAxis(-90f, up) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((-90.0f), L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_19, L_20, NULL);
		V_7 = L_21;
		// float bottomDot = RotationalScore(bottomRot, desiredRot);
		float L_22;
		L_22 = BoxGrabSurface_RotationalScore_mDD90D2C880D8ECD6473E47DAAD29BF9ADD65781A((&V_4), (&V_2), NULL);
		// float topDot = RotationalScore(topRot, desiredRot);
		float L_23;
		L_23 = BoxGrabSurface_RotationalScore_mDD90D2C880D8ECD6473E47DAAD29BF9ADD65781A((&V_5), (&V_2), NULL);
		V_8 = L_23;
		// float leftDot = RotationalScore(leftRot, desiredRot);
		float L_24;
		L_24 = BoxGrabSurface_RotationalScore_mDD90D2C880D8ECD6473E47DAAD29BF9ADD65781A((&V_6), (&V_2), NULL);
		V_9 = L_24;
		// float rightDot = RotationalScore(rightRot, desiredRot);
		float L_25;
		L_25 = BoxGrabSurface_RotationalScore_mDD90D2C880D8ECD6473E47DAAD29BF9ADD65781A((&V_7), (&V_2), NULL);
		V_10 = L_25;
		// Vector3 rightDir = Rotation * Vector3.right;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_26, L_27, NULL);
		V_11 = L_28;
		// Vector3 forwardDir = Rotation * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_29, L_30, NULL);
		V_12 = L_31;
		// CalculateCorners(out bottomLeft, out bottomRight, out topLeft, out topRight);
		BoxGrabSurface_CalculateCorners_m2959EF8678030C80076DBB7074CC1B483F774CDC(__this, (&V_13), (&V_14), (&V_15), (&V_16), NULL);
		// float maxDot = Mathf.Max(bottomDot, Mathf.Max(topDot, Mathf.Max(leftDot, rightDot)));
		float L_32 = L_22;
		float L_33 = V_8;
		float L_34 = V_9;
		float L_35 = V_10;
		float L_36;
		L_36 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_34, L_35, NULL);
		float L_37;
		L_37 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_33, L_36, NULL);
		float L_38;
		L_38 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_32, L_37, NULL);
		V_17 = L_38;
		// if (bottomDot == maxDot)
		float L_39 = V_17;
		if ((!(((float)L_32) == ((float)L_39))))
		{
			goto IL_0120;
		}
	}
	{
		// Vector3 projBottom = ProjectOnSegment(desiredPos, (bottomLeft + rightDir * SnapOffset.y, bottomRight + rightDir * SnapOffset.x));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		L_43 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_44 = L_43.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_42, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_41, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49;
		L_49 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_50 = L_49.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_53;
		memset((&L_53), 0, sizeof(L_53));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_53), L_46, L_52, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_40, L_53, NULL);
		// return new Pose(projBottom, bottomRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_56), L_54, L_55, /*hidden argument*/NULL);
		return L_56;
	}

IL_0120:
	{
		// if (topDot == maxDot)
		float L_57 = V_8;
		float L_58 = V_17;
		if ((!(((float)L_57) == ((float)L_58))))
		{
			goto IL_016c;
		}
	}
	{
		// Vector3 projTop = ProjectOnSegment(desiredPos, (topLeft - rightDir * SnapOffset.x, topRight - rightDir * SnapOffset.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62;
		L_62 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_63 = L_62.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_61, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_60, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_68;
		L_68 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_69 = L_68.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_66, L_70, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_72;
		memset((&L_72), 0, sizeof(L_72));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_72), L_65, L_71, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_59, L_72, NULL);
		// return new Pose(projTop, topRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74 = V_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_75), L_73, L_74, /*hidden argument*/NULL);
		return L_75;
	}

IL_016c:
	{
		// if (leftDot == maxDot)
		float L_76 = V_9;
		float L_77 = V_17;
		if ((!(((float)L_76) == ((float)L_77))))
		{
			goto IL_01b8;
		}
	}
	{
		// Vector3 projLeft = ProjectOnSegment(desiredPos, (bottomLeft - forwardDir * SnapOffset.z, topLeft - forwardDir * SnapOffset.w));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81;
		L_81 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_82 = L_81.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_80, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_79, L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_87;
		L_87 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_88 = L_87.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_86, L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_85, L_89, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_91;
		memset((&L_91), 0, sizeof(L_91));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_91), L_84, L_90, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_78, L_91, NULL);
		// return new Pose(projLeft, leftRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93 = V_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_94), L_92, L_93, /*hidden argument*/NULL);
		return L_94;
	}

IL_01b8:
	{
		// Vector3 projRight = ProjectOnSegment(desiredPos, (bottomRight + forwardDir * SnapOffset.w, topRight + forwardDir * SnapOffset.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98;
		L_98 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_99 = L_98.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_97, L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_96, L_100, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_104;
		L_104 = BoxGrabSurface_get_SnapOffset_m2CCF550151A0ABDA0317CAA73EFE57CBF61A0B67(__this, NULL);
		float L_105 = L_104.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_103, L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_102, L_106, NULL);
		ValueTuple_2_t4BC958336F5E31F49459112BAB22FC776AFF71C3 L_108;
		memset((&L_108), 0, sizeof(L_108));
		ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F((&L_108), L_101, L_107, /*hidden argument*/ValueTuple_2__ctor_m41CE20E70142B82CEDBBCAD27D3921746FCA615F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = BoxGrabSurface_ProjectOnSegment_m3A97E9A1CFCB25E57BC6996CA469F6B91EBE164E(__this, L_95, L_108, NULL);
		// return new Pose(projRight, rightRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_110 = V_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_111), L_109, L_110, /*hidden argument*/NULL);
		return L_111;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxGrabSurface_MinimalTranslationPoseAtSurface_m4611D30944973C698142DE21A921448DA2736A1F (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_userPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = referencePose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// NearestPointAndAngleInSurface(desiredPos, out surfacePoint, out surfaceAngle);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		BoxGrabSurface_NearestPointAndAngleInSurface_m5011F35BD15A2C7AFD63F3F8994379709D51C2E4(__this, L_4, (&V_2), (&V_3), NULL);
		// Quaternion surfaceRotation = RotateUp(baseRot, surfaceAngle);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_1;
		float L_6 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = BoxGrabSurface_RotateUp_mE3F150C1E392DB5F8B3E971338382533596D3C85(__this, L_5, L_6, NULL);
		V_4 = L_7;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_10), L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::RotateUp(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoxGrabSurface_RotateUp_mE3F150C1E392DB5F8B3E971338382533596D3C85 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_baseRot, float ___1_angle, const RuntimeMethod* method) 
{
	{
		// Quaternion offset = Quaternion.AngleAxis(angle, Rotation * Vector3.up);
		float L_0 = ___1_angle;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = BoxGrabSurface_get_Rotation_m7D7F0EF8075266AD3AF1E8F67993F930EAC9920A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_0, L_3, NULL);
		// return offset * baseRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_baseRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::RotationalScore(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoxGrabSurface_RotationalScore_mDD90D2C880D8ECD6473E47DAAD29BF9ADD65781A (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_to, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float forwardDifference = Vector3.Dot(from * Vector3.forward, to * Vector3.forward) * 0.5f + 0.5f;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___1_to;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_6, NULL);
		float L_8;
		L_8 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_3, L_7, NULL);
		// float upDifference = Vector3.Dot(from * Vector3.up, to * Vector3.up) * 0.5f + 0.5f;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_9 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_13 = ___1_to;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_14, L_15, NULL);
		float L_17;
		L_17 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_12, L_16, NULL);
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, (0.5f))), (0.5f)));
		// return (forwardDifference * upDifference);
		float L_18 = V_0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, (0.5f))), (0.5f))), L_18));
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectAllBoxSurface(Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectAllBoxSurface_mBD37C50E38D5286E81C6DBF70E5B019BE640D79D (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_data, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_relativeTo, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_gripPoint, const RuntimeMethod* method) 
{
	{
		// InjectData(data);
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = ___0_data;
		BoxGrabSurface_InjectData_mC40729907CEC1F88F32820ACC59C5DADC29BB5C8_inline(__this, L_0, NULL);
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_relativeTo;
		BoxGrabSurface_InjectRelativeTo_m01F9C6D14B136CBDFBBA03CDDB0D897A84456FD2_inline(__this, L_1, NULL);
		// InjectReferencePoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___2_gripPoint;
		BoxGrabSurface_InjectReferencePoint_mCDAABA54F79FF25B5F30EF39CFB7677D55876DDC_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectData(Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectData_mC40729907CEC1F88F32820ACC59C5DADC29BB5C8 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_data, const RuntimeMethod* method) 
{
	{
		// _data = data;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = ___0_data;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectRelativeTo_m01F9C6D14B136CBDFBBA03CDDB0D897A84456FD2 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_relativeTo;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::InjectReferencePoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectReferencePoint_mCDAABA54F79FF25B5F30EF39CFB7677D55876DDC (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) 
{
	{
		// _referencePoint = referencePoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_referencePoint;
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGrabSurface__ctor_m692FB611E9B5FD224AA06F1AE1623C509C40EEF0 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected BoxGrabSurfaceData _data = new BoxGrabSurfaceData();
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = (BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6*)il2cpp_codegen_object_new(BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoxGrabSurfaceData__ctor_mB6A01FD7B138071BDC220D8574CAB99E71979B6A(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 BoxGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_m22733922B083970A6723CAB0DCD5461DB6739BD8 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_4;
		L_4 = BoxGrabSurface_CalculateBestPoseAtSurface_m43F6EA356FC411B796BAC8166CA379F585D839E9(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_m6A995F200DA8A9DFBE21F0F6A012CABE0A7C52CF (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___0_targetRay;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		bool L_3;
		L_3 = BoxGrabSurface_CalculateBestPoseAtSurface_mF47E4B462CFDE55DE5D112BBE465734464331838(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.BoxGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BoxGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose_m0F6169108B2CE8532184F6A998636DF5B962F785 (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_gripPose, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = BoxGrabSurface_MirrorPose_m27EF20126F379DEAF7750EA3391B04858C3DEC52(__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderGrabSurface_Start_mD835C16B6B657D86118D9698954C1C3A4BEB1FA4 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ColliderGrabSurface_NearestPointInSurface_mC3F09A6F5D80220EE33DF662FFFF55DABCC44A6A (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_collider.bounds.Contains(targetPosition))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_4;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetPosition;
		bool L_3;
		L_3 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_0), L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// targetPosition = _collider.ClosestPointOnBounds(targetPosition);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->____collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_targetPosition;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952(L_4, L_5, NULL);
		___0_targetPosition = L_6;
	}

IL_0024:
	{
		// return _collider.ClosestPoint(targetPosition);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->____collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_targetPosition;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_7, L_8, NULL);
		return L_9;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 ColliderGrabSurface_CalculateBestPoseAtSurface_m8E7B81CB3194482985C9E4DF91D2EAE562CD6EA7 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 surfacePoint = NearestPointInSurface(targetPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = ColliderGrabSurface_NearestPointInSurface_mC3F09A6F5D80220EE33DF662FFFF55DABCC44A6A(__this, L_1, NULL);
		V_0 = L_2;
		// bestPose = new Pose(surfacePoint, targetPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___2_bestPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___0_targetPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_7), L_4, L_6, /*hidden argument*/NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_3 = L_7;
		// return new GrabPoseScore(surfacePoint, targetPose.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___0_targetPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___position_0;
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_11;
		memset((&L_11), 0, sizeof(L_11));
		GrabPoseScore__ctor_m51EAD17BED3A12FB99565B029697E1FC0B9447E8((&L_11), L_8, L_10, (bool)0, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderGrabSurface_CalculateBestPoseAtSurface_mC74CC13711959679E08A788353C23F5CEEDAA287 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_collider.Raycast(targetRay, out RaycastHit hit, Mathf.Infinity))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_4;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ___0_targetRay;
		NullCheck(L_0);
		bool L_2;
		L_2 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_0, L_1, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// bestPose.position = hit.point;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___2_bestPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		L_3->___position_0 = L_4;
		// bestPose.rotation = recordedPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___2_bestPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___1_recordedPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		L_5->___rotation_1 = L_7;
		// return true;
		return (bool)1;
	}

IL_0030:
	{
		// bestPose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___2_bestPose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_9;
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ColliderGrabSurface_MirrorPose_m8FF7DE80DAD8C245A56B6AE5F7AC9C3F0E66ED8D (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_gripPose, const RuntimeMethod* method) 
{
	{
		// return gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0);
		return L_1;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderGrabSurface_CreateMirroredSurface_mCE0692106B5DEF57B1426E433095CC416EB851E7 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	{
		// return CreateDuplicatedSurface(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		RuntimeObject* L_1;
		L_1 = ColliderGrabSurface_CreateDuplicatedSurface_m60A74705EEC1F54088C4C0A77AEA9288FB6CE9A2(__this, L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColliderGrabSurface_CreateDuplicatedSurface_m60A74705EEC1F54088C4C0A77AEA9288FB6CE9A2 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B_m27E3594C73DA99F326F0E4D3F349C7C56F79BE5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ColliderGrabSurface colliderSurface = gameObject.AddComponent<ColliderGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* L_1;
		L_1 = GameObject_AddComponent_TisColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B_m27E3594C73DA99F326F0E4D3F349C7C56F79BE5F(L_0, GameObject_AddComponent_TisColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B_m27E3594C73DA99F326F0E4D3F349C7C56F79BE5F_RuntimeMethod_var);
		// colliderSurface.InjectAllColliderSurface(_collider);
		ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* L_2 = L_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = __this->____collider_4;
		NullCheck(L_2);
		ColliderGrabSurface_InjectAllColliderSurface_mF6FDB45FEC88518F5F236A5AEB3F4CAC31549056(L_2, L_3, NULL);
		// return colliderSurface;
		return L_2;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::InjectAllColliderSurface(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderGrabSurface_InjectAllColliderSurface_mF6FDB45FEC88518F5F236A5AEB3F4CAC31549056 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	{
		// InjectCollider(collider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collider;
		ColliderGrabSurface_InjectCollider_mA55588B4ED169F6DEB8A682036E73AA7DCE18A6B_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::InjectCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderGrabSurface_InjectCollider_mA55588B4ED169F6DEB8A682036E73AA7DCE18A6B (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	{
		// _collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collider;
		__this->____collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderGrabSurface__ctor_m02B1FD0503D4AC4359FC7F2307A43640C8B87F64 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 ColliderGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_m4A48AF9E56FF28F03B99263F860B067A5DF96E6A (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_4;
		L_4 = ColliderGrabSurface_CalculateBestPoseAtSurface_m8E7B81CB3194482985C9E4DF91D2EAE562CD6EA7(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_m9DCBEB5D771D4925BA0A45AB69E50C5B58C0A37E (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___0_targetRay;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		bool L_3;
		L_3 = ColliderGrabSurface_CalculateBestPoseAtSurface_mC74CC13711959679E08A788353C23F5CEEDAA287(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ColliderGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose_m54C4218375B01A87D93C063AB8D39CA429481F00 (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_gripPose, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = ColliderGrabSurface_MirrorPose_m8FF7DE80DAD8C245A56B6AE5F7AC9C3F0E66ED8D(__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderSurfaceData_Clone_m6C0353A4C95FA5FFFB4BED59C88FBC939FF54DB7 (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderSurfaceData clone = new CylinderSurfaceData();
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621*)il2cpp_codegen_object_new(CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CylinderSurfaceData__ctor_m73FD3357EF20BEAA5CE32DB2030F53E41BB0670E(L_0, NULL);
		// clone.startPoint = this.startPoint;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___startPoint_0;
		NullCheck(L_1);
		L_1->___startPoint_0 = L_2;
		// clone.endPoint = this.endPoint;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___endPoint_1;
		NullCheck(L_3);
		L_3->___endPoint_1 = L_4;
		// clone.arcOffset = this.arcOffset;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_5 = L_3;
		float L_6 = __this->___arcOffset_2;
		NullCheck(L_5);
		L_5->___arcOffset_2 = L_6;
		// clone.arcLength = this.arcLength;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_7 = L_5;
		float L_8 = __this->___arcLength_3;
		NullCheck(L_7);
		L_7->___arcLength_3 = L_8;
		// return clone;
		return L_7;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* CylinderSurfaceData_Mirror_m26B457E4EDCCD92A7503F6B2646F4B051B3A1BEB (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderSurfaceData mirror = Clone() as CylinderSurfaceData;
		RuntimeObject* L_0;
		L_0 = CylinderSurfaceData_Clone_m6C0353A4C95FA5FFFB4BED59C88FBC939FF54DB7(__this, NULL);
		// return mirror;
		return ((CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621*)IsInstClass((RuntimeObject*)L_0, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurfaceData__ctor_m73FD3357EF20BEAA5CE32DB2030F53E41BB0670E (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 startPoint = new Vector3(0f, 0.1f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		__this->___startPoint_0 = L_0;
		// public Vector3 endPoint = new Vector3(0f, -0.1f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (-0.100000001f), (0.0f), /*hidden argument*/NULL);
		__this->___endPoint_1 = L_1;
		// public float arcLength = 360f;
		__this->___arcLength_3 = (360.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* CylinderGrabSurface_get_Data_m794A05C1D08307BC19F590ABDA597C87ED86456F (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = __this->____data_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::set_Data(Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_Data_m5E7A4E2FC935B25F971B68A73BEE3BF1D5037765 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_value, const RuntimeMethod* method) 
{
	{
		// _data = value;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = ___0_value;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_OriginalDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_OriginalDir_mE80F6A33E1F335004D8E483B61F57FFF7803134A (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_referencePoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____referencePoint_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		return L_2;
	}

IL_0014:
	{
		// return Vector3.ProjectOnPlane(_referencePoint.transform.position - StartPoint, Direction).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____referencePoint_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_7, L_8, NULL);
		V_0 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_StartArcDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_StartArcDir_m03162AB1826B0889B15025D3F137B7F9097134A6 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.AngleAxis(ArcOffset, Direction) * OriginalDir;
		float L_0;
		L_0 = CylinderGrabSurface_get_ArcOffset_mB20CAB5B119E5F16C30836EDC37885344B7B5D83(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CylinderGrabSurface_get_OriginalDir_mE80F6A33E1F335004D8E483B61F57FFF7803134A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_EndArcDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_EndArcDir_m08548394CB1E551422A9CF1A445FDFB93EF3BDA7 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.AngleAxis(ArcLength, Direction) * StartArcDir;
		float L_0;
		L_0 = CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CylinderGrabSurface_get_StartArcDir_m03162AB1826B0889B15025D3F137B7F9097134A6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_relativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return _relativeTo.TransformPoint(_data.startPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____relativeTo_5;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = __this->____data_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___startPoint_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return _data.startPoint;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_6 = __this->____data_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___startPoint_0;
		return L_7;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::set_StartPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_StartPoint_mF6C95E802F3A7747FC0D5E15E966D974F1BA01F2 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_relativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _data.startPoint = _relativeTo.InverseTransformPoint(value);
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_2 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____relativeTo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___startPoint_0 = L_5;
		return;
	}

IL_0026:
	{
		// _data.startPoint = value;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_6 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_value;
		NullCheck(L_6);
		L_6->___startPoint_0 = L_7;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_EndPoint_m917F57388DB44EEFF0BE4F0FC4D6342111536CC3 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_relativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return _relativeTo.TransformPoint(_data.endPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____relativeTo_5;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = __this->____data_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___endPoint_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return _data.endPoint;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_6 = __this->____data_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___endPoint_1;
		return L_7;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::set_EndPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_EndPoint_m559CD16A39C892BA6F8C2E41C60916C6541FECC1 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_relativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _data.endPoint = _relativeTo.InverseTransformPoint(value);
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_2 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____relativeTo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___endPoint_1 = L_5;
		return;
	}

IL_0026:
	{
		// _data.endPoint = value;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_6 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_value;
		NullCheck(L_6);
		L_6->___endPoint_1 = L_7;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_ArcOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_ArcOffset_mB20CAB5B119E5F16C30836EDC37885344B7B5D83 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// return _data.arcOffset;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = __this->____data_4;
		NullCheck(L_0);
		float L_1 = L_0->___arcOffset_2;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::set_ArcOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_ArcOffset_m3EBA2D54B745B3D9E7DE5716B6234354FFE5F2A2 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value != 0 && value % 360f == 0)
		float L_0 = ___0_value;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___0_value;
		if ((!(((float)(fmodf(L_1, (360.0f)))) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// _data.arcOffset = 360f;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_2 = __this->____data_4;
		NullCheck(L_2);
		L_2->___arcOffset_2 = (360.0f);
		return;
	}

IL_0027:
	{
		// _data.arcOffset = Mathf.Repeat(value, 360f);
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = __this->____data_4;
		float L_4 = ___0_value;
		float L_5;
		L_5 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_4, (360.0f), NULL);
		NullCheck(L_3);
		L_3->___arcOffset_2 = L_5;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_ArcLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// return _data.arcLength;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = __this->____data_4;
		NullCheck(L_0);
		float L_1 = L_0->___arcLength_3;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::set_ArcLength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_ArcLength_mA38F5F4CFECAEBA7B0E35D4C6FB47833896D42B7 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value != 0 && value % 360f == 0)
		float L_0 = ___0_value;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___0_value;
		if ((!(((float)(fmodf(L_1, (360.0f)))) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// _data.arcLength = 360f;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_2 = __this->____data_4;
		NullCheck(L_2);
		L_2->___arcLength_3 = (360.0f);
		return;
	}

IL_0027:
	{
		// _data.arcLength = Mathf.Repeat(value, 360f);
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = __this->____data_4;
		float L_4 = ___0_value;
		float L_5;
		L_5 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_4, (360.0f), NULL);
		NullCheck(L_3);
		L_3->___arcLength_3 = L_5;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_referencePoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____referencePoint_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0014:
	{
		// Vector3 start = StartPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		V_0 = L_2;
		// Vector3 projectedPoint = start + Vector3.Project(_referencePoint.position - start, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____referencePoint_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_9, NULL);
		// return Vector3.Distance(projectedPoint, _referencePoint.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->____referencePoint_6;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_10, L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 dir = (EndPoint - StartPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderGrabSurface_get_EndPoint_m917F57388DB44EEFF0BE4F0FC4D6342111536CC3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (dir.sqrMagnitude == 0f)
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// return _relativeTo ? _relativeTo.up : Vector3.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		return L_6;
	}

IL_0033:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____relativeTo_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_7, NULL);
		return L_8;
	}

IL_003f:
	{
		// return dir.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CylinderGrabSurface_get_Height_m89BC5F637A4C66B24DC6C56DDD7DF1177D64B042 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (EndPoint - StartPoint).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderGrabSurface_get_EndPoint_m917F57388DB44EEFF0BE4F0FC4D6342111536CC3(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderGrabSurface_get_Rotation_mCEF4AB176D9711B08910CEA5EDA7CFC06C41FF6D (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// if (_data.startPoint == _data.endPoint)
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = __this->____data_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___startPoint_0;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_2 = __this->____data_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___endPoint_1;
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// return Quaternion.LookRotation(Vector3.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		// return Quaternion.LookRotation(OriginalDir, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CylinderGrabSurface_get_OriginalDir_mE80F6A33E1F335004D8E483B61F57FFF7803134A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_Reset_m388F7CE5B3693268361741D5B4505CBE15CF501F (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B2_0 = NULL;
	CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* G_B2_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B1_0 = NULL;
	CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* G_B1_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* G_B3_1 = NULL;
	{
		// _referencePoint = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// _relativeTo = this.GetComponentInParent<Rigidbody>()?.transform;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D(__this, Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(G_B2_0, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_1);
		G_B3_1->____relativeTo_5 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____relativeTo_5), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_Start_m23D26EB3DF2441FA9CA45693FB2753868168A159 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderGrabSurface_MirrorPose_m9A6D48E248066B1E2D3D2ED37F5890A6BF1ADEEC (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = Quaternion.Inverse(_relativeTo.rotation) * OriginalDir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CylinderGrabSurface_get_OriginalDir_mE80F6A33E1F335004D8E483B61F57FFF7803134A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 tangent = Quaternion.Inverse(_relativeTo.rotation) * Direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____relativeTo_5;
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_8, NULL);
		V_1 = L_9;
		// return pose.MirrorPoseRotation(normal, tangent);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = ___0_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		L_13 = PoseUtils_MirrorPoseRotation_m0F4E6DD5661B752CE896089B11F9483DF19E5C5F(L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::PointAltitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_PointAltitude_mD6D14BAA7CDAD0B0C62315BF6D7B5E0A25CF210F (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 start = StartPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		V_0 = L_0;
		// Vector3 projectedPoint = start + Vector3.Project(point - start, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_6, NULL);
		// return projectedPoint;
		return L_7;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 CylinderGrabSurface_CalculateBestPoseAtSurface_m7DAD153C46685FFA3C9CB2527E9CAA190DF4D28B (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderGrabSurface_MinimalRotationPoseAtSurface_mEFCC99A691B6C19380742DEC273DB3C9B20EB68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderGrabSurface_MinimalTranslationPoseAtSurface_mFE675C06C5C64F29795CA723279AAA9C5C71FFA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GrabPoseHelper.CalculateBestPoseAtSurface(targetPose, reference, out bestPose,
		//     scoringModifier, MinimalTranslationPoseAtSurface, MinimalRotationPoseAtSurface);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* L_4 = (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8*)il2cpp_codegen_object_new(PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821(L_4, __this, (intptr_t)((void*)CylinderGrabSurface_MinimalTranslationPoseAtSurface_mFE675C06C5C64F29795CA723279AAA9C5C71FFA9_RuntimeMethod_var), NULL);
		PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* L_5 = (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8*)il2cpp_codegen_object_new(PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821(L_5, __this, (intptr_t)((void*)CylinderGrabSurface_MinimalRotationPoseAtSurface_mEFCC99A691B6C19380742DEC273DB3C9B20EB68E_RuntimeMethod_var), NULL);
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_6;
		L_6 = GrabPoseHelper_CalculateBestPoseAtSurface_m9AD42BA98779DDDA2011780D4F6E57690D4F2DA5(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderGrabSurface_CreateMirroredSurface_m9AC6B79236D62ED3403C6421698B4BAF566054EE (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderGrabSurface surface = gameObject.AddComponent<CylinderGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* L_1;
		L_1 = GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF(L_0, GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF_RuntimeMethod_var);
		// surface.Data = _data.Mirror();
		CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* L_2 = L_1;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = __this->____data_4;
		NullCheck(L_3);
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_4;
		L_4 = CylinderSurfaceData_Mirror_m26B457E4EDCCD92A7503F6B2646F4B051B3A1BEB(L_3, NULL);
		NullCheck(L_2);
		CylinderGrabSurface_set_Data_m5E7A4E2FC935B25F971B68A73BEE3BF1D5037765_inline(L_2, L_4, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CylinderGrabSurface_CreateDuplicatedSurface_mA71354756BD8FC8BDDBC06BA5B34D9438A3D9364 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CylinderGrabSurface surface = gameObject.AddComponent<CylinderGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* L_1;
		L_1 = GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF(L_0, GameObject_AddComponent_TisCylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821_m3D298974A0712DABD875E3B71B4FFE4819939EBF_RuntimeMethod_var);
		// surface.Data = _data;
		CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* L_2 = L_1;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_3 = __this->____data_4;
		NullCheck(L_2);
		CylinderGrabSurface_set_Data_m5E7A4E2FC935B25F971B68A73BEE3BF1D5037765_inline(L_2, L_3, NULL);
		// return surface;
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CylinderGrabSurface_NearestPointInSurface_mD1171C9D6A1FC315A50B686E41FE080BAED63002 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 start = StartPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		V_0 = L_0;
		// Vector3 dir = Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		V_1 = L_1;
		// Vector3 projectedVector = Vector3.Project(targetPosition - start, dir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_4, L_5, NULL);
		V_2 = L_6;
		// if (projectedVector.magnitude > Height)
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_8;
		L_8 = CylinderGrabSurface_get_Height_m89BC5F637A4C66B24DC6C56DDD7DF1177D64B042(__this, NULL);
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_003e;
		}
	}
	{
		// projectedVector = projectedVector.normalized * Height;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		float L_10;
		L_10 = CylinderGrabSurface_get_Height_m89BC5F637A4C66B24DC6C56DDD7DF1177D64B042(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		V_2 = L_11;
	}

IL_003e:
	{
		// if (Vector3.Dot(projectedVector, dir) < 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14;
		L_14 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_12, L_13, NULL);
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// projectedVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_15;
	}

IL_0052:
	{
		// Vector3 projectedPoint = StartPoint + projectedVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_17, NULL);
		V_3 = L_18;
		// Vector3 targetDirection = Vector3.ProjectOnPlane((targetPosition - projectedPoint), dir).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_21, L_22, NULL);
		V_6 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_4 = L_24;
		// float desiredAngle = Mathf.Repeat(Vector3.SignedAngle(StartArcDir, targetDirection, dir), 360f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = CylinderGrabSurface_get_StartArcDir_m03162AB1826B0889B15025D3F137B7F9097134A6(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28;
		L_28 = Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline(L_25, L_26, L_27, NULL);
		float L_29;
		L_29 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(L_28, (360.0f), NULL);
		V_5 = L_29;
		// if (desiredAngle > ArcLength)
		float L_30 = V_5;
		float L_31;
		L_31 = CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2(__this, NULL);
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_00ca;
		}
	}
	{
		// if (Mathf.Abs(desiredAngle - ArcLength) >= Mathf.Abs(360f - desiredAngle))
		float L_32 = V_5;
		float L_33;
		L_33 = CylinderGrabSurface_get_ArcLength_m70225F7E88246ECA4C4DC3C824FECA9A084465A2(__this, NULL);
		float L_34;
		L_34 = fabsf(((float)il2cpp_codegen_subtract(L_32, L_33)));
		float L_35 = V_5;
		float L_36;
		L_36 = fabsf(((float)il2cpp_codegen_subtract((360.0f), L_35)));
		if ((!(((float)L_34) >= ((float)L_36))))
		{
			goto IL_00c2;
		}
	}
	{
		// targetDirection = StartArcDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = CylinderGrabSurface_get_StartArcDir_m03162AB1826B0889B15025D3F137B7F9097134A6(__this, NULL);
		V_4 = L_37;
		goto IL_00ca;
	}

IL_00c2:
	{
		// targetDirection = EndArcDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = CylinderGrabSurface_get_EndArcDir_m08548394CB1E551422A9CF1A445FDFB93EF3BDA7(__this, NULL);
		V_4 = L_38;
	}

IL_00ca:
	{
		// Vector3 surfacePoint = projectedPoint + targetDirection * Radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_4;
		float L_41;
		L_41 = CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_42, NULL);
		// return surfacePoint;
		return L_43;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CylinderGrabSurface_CalculateBestPoseAtSurface_m7BEBB9A1236058AA4C80DA7C5AC174099FE5D3EA (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	{
		// Vector3 lineToCylinder = StartPoint - targetRay.origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		// float perpendiculiarity = Vector3.Dot(targetRay.direction, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		float L_5;
		L_5 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// float rayToLineDiff = Vector3.Dot(lineToCylinder, targetRay.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		float L_8;
		L_8 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// float cylinderToLineDiff = Vector3.Dot(lineToCylinder, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		float L_10;
		L_10 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_6, L_9, NULL);
		V_2 = L_10;
		// float determinant = 1f / (perpendiculiarity * perpendiculiarity - 1f);
		float L_11 = V_0;
		float L_12 = V_0;
		V_3 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_11, L_12)), (1.0f)))));
		// float lineOffset = (perpendiculiarity * cylinderToLineDiff - rayToLineDiff) * determinant;
		float L_13 = V_0;
		float L_14 = V_2;
		float L_15 = V_1;
		float L_16 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), L_16));
		// float cylinderOffset = (cylinderToLineDiff - perpendiculiarity * rayToLineDiff) * determinant;
		float L_17 = V_2;
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20 = V_3;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, ((float)il2cpp_codegen_multiply(L_18, L_19)))), L_20));
		// Vector3 pointInLine = targetRay.origin + targetRay.direction * lineOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		float L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_24, NULL);
		V_6 = L_25;
		// Vector3 pointInCylinder = StartPoint + Direction * cylinderOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		float L_28 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_29, NULL);
		V_7 = L_30;
		// float distanceToSurface = Mathf.Max(Vector3.Distance(pointInCylinder, pointInLine) - Radius);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
		float L_35;
		L_35 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_33, L_34, NULL);
		float L_36;
		L_36 = CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C(__this, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_subtract(L_35, L_36)));
		float L_37;
		L_37 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_32, NULL);
		V_8 = L_37;
		// if (distanceToSurface < Radius)
		float L_38 = V_8;
		float L_39;
		L_39 = CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C(__this, NULL);
		if ((!(((float)L_38) < ((float)L_39))))
		{
			goto IL_00f2;
		}
	}
	{
		// float adjustedDistance = Mathf.Sqrt(Radius * Radius - distanceToSurface * distanceToSurface);
		float L_40;
		L_40 = CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C(__this, NULL);
		float L_41;
		L_41 = CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C(__this, NULL);
		float L_42 = V_8;
		float L_43 = V_8;
		float L_44;
		L_44 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_40, L_41)), ((float)il2cpp_codegen_multiply(L_42, L_43)))));
		V_11 = L_44;
		// pointInLine -= targetRay.direction * adjustedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		float L_47 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_45, L_48, NULL);
		V_6 = L_49;
	}

IL_00f2:
	{
		// Vector3 surfacePoint = NearestPointInSurface(pointInLine);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = CylinderGrabSurface_NearestPointInSurface_mD1171C9D6A1FC315A50B686E41FE080BAED63002(__this, L_50, NULL);
		V_9 = L_51;
		// Pose desiredPose = new Pose(surfacePoint, recordedPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_53 = ___1_recordedPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = L_53->___rotation_1;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_10), L_52, L_54, NULL);
		// bestPose = MinimalTranslationPoseAtSurface(desiredPose, recordedPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_55 = ___2_bestPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_56 = ___1_recordedPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_57;
		L_57 = CylinderGrabSurface_MinimalTranslationPoseAtSurface_mFE675C06C5C64F29795CA723279AAA9C5C71FFA9(__this, (&V_10), L_56, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_55 = L_57;
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::MinimalRotationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderGrabSurface_MinimalRotationPoseAtSurface_mEFCC99A691B6C19380742DEC273DB3C9B20EB68E (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_userPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion desiredRot = userPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___0_userPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		// Quaternion baseRot = referencePose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4->___rotation_1;
		V_1 = L_5;
		// Quaternion rotDif = (desiredRot) * Quaternion.Inverse(baseRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_7, NULL);
		// Vector3 desiredDirection = (rotDif * Rotation) * Vector3.forward;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = CylinderGrabSurface_get_Rotation_mCEF4AB176D9711B08910CEA5EDA7CFC06C41FF6D(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_11, NULL);
		// Vector3 projectedDirection = Vector3.ProjectOnPlane(desiredDirection, Direction).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_12, L_13, NULL);
		V_6 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		V_2 = L_15;
		// Vector3 altitudePoint = PointAltitude(desiredPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CylinderGrabSurface_PointAltitude_mD6D14BAA7CDAD0B0C62315BF6D7B5E0A25CF210F(__this, L_16, NULL);
		V_3 = L_17;
		// Vector3 surfacePoint = NearestPointInSurface(altitudePoint + projectedDirection * Radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20;
		L_20 = CylinderGrabSurface_get_Radius_m80B7BC499677C4E74F1DB02DA5972569019EB73C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = CylinderGrabSurface_NearestPointInSurface_mD1171C9D6A1FC315A50B686E41FE080BAED63002(__this, L_22, NULL);
		V_4 = L_23;
		// Quaternion surfaceRotation = CalculateRotationOffset(surfacePoint) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = CylinderGrabSurface_CalculateRotationOffset_mABCFA6CEFAE469ACC6C892739AA33A555DD3FEED(__this, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_26, NULL);
		V_5 = L_27;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_30), L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderGrabSurface_MinimalTranslationPoseAtSurface_mFE675C06C5C64F29795CA723279AAA9C5C71FFA9 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_userPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = referencePose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// Vector3 surfacePoint = NearestPointInSurface(desiredPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CylinderGrabSurface_NearestPointInSurface_mD1171C9D6A1FC315A50B686E41FE080BAED63002(__this, L_4, NULL);
		V_2 = L_5;
		// Quaternion surfaceRotation = CalculateRotationOffset(surfacePoint) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = CylinderGrabSurface_CalculateRotationOffset_mABCFA6CEFAE469ACC6C892739AA33A555DD3FEED(__this, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_8, NULL);
		V_3 = L_9;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_12), L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::CalculateRotationOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CylinderGrabSurface_CalculateRotationOffset_mABCFA6CEFAE469ACC6C892739AA33A555DD3FEED (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_surfacePoint, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 recordedDirection = Vector3.ProjectOnPlane(_referencePoint.position - StartPoint, Direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____referencePoint_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_3, L_4, NULL);
		// Vector3 desiredDirection = Vector3.ProjectOnPlane(surfacePoint - StartPoint, Direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = CylinderGrabSurface_get_StartPoint_m83E686B29D9CBCFAE0DC17969FB4EC78033752C8(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CylinderGrabSurface_get_Direction_mF233B38A20ED96952941621927FE52E9E3FD0949(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_8, L_9, NULL);
		V_0 = L_10;
		// return Quaternion.FromToRotation(recordedDirection, desiredDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_5, L_11, NULL);
		return L_12;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectAllCylinderSurface(Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectAllCylinderSurface_m8FE75D1752AEEEDBE8AFC09E1A33A98A84FE8A2B (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_data, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_relativeTo, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_gripPoint, const RuntimeMethod* method) 
{
	{
		// InjectData(data);
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = ___0_data;
		CylinderGrabSurface_InjectData_m0BE519A812B2A6567FDAC0F22CAEAF6A71082E65_inline(__this, L_0, NULL);
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_relativeTo;
		CylinderGrabSurface_InjectRelativeTo_m8FA19D27064438C03AC47A0B45F9D9FE91377446_inline(__this, L_1, NULL);
		// InjectReferencePoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___2_gripPoint;
		CylinderGrabSurface_InjectReferencePoint_mF08274A44753D10213D38F2CEDBF450EBB436FF1_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectData(Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectData_m0BE519A812B2A6567FDAC0F22CAEAF6A71082E65 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_data, const RuntimeMethod* method) 
{
	{
		// _data = data;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = ___0_data;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectRelativeTo_m8FA19D27064438C03AC47A0B45F9D9FE91377446 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_relativeTo;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::InjectReferencePoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectReferencePoint_mF08274A44753D10213D38F2CEDBF450EBB436FF1 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) 
{
	{
		// _referencePoint = referencePoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_referencePoint;
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderGrabSurface__ctor_m941B0580103FFD07C809DD0E2CB82E9AF59F1CD3 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected CylinderSurfaceData _data = new CylinderSurfaceData();
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = (CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621*)il2cpp_codegen_object_new(CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CylinderSurfaceData__ctor_m73FD3357EF20BEAA5CE32DB2030F53E41BB0670E(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 CylinderGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_mDED91D038A366536C3299979F11B5BA3A95BCAE8 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_4;
		L_4 = CylinderGrabSurface_CalculateBestPoseAtSurface_m7DAD153C46685FFA3C9CB2527E9CAA190DF4D28B(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CylinderGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_mFFCCAA3F584F4D658B654758389082C9E0B68D47 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___0_targetRay;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		bool L_3;
		L_3 = CylinderGrabSurface_CalculateBestPoseAtSurface_m7BEBB9A1236058AA4C80DA7C5AC174099FE5D3EA(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CylinderGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose_m44217BCFAC00BF4208601A7C017ADF30B4AEC608 (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_gripPose, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = CylinderGrabSurface_MirrorPose_m9A6D48E248066B1E2D3D2ED37F5890A6BF1ADEEC(__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereGrabSurfaceData_Clone_m9CBCCD15C66B5DB0A66D4FE6407F774153399D60 (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereGrabSurfaceData clone = new SphereGrabSurfaceData();
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D*)il2cpp_codegen_object_new(SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SphereGrabSurfaceData__ctor_m1F207B8BA8D8DDEEAACD6F8C4FD883664238118B(L_0, NULL);
		// clone.centre = this.centre;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___centre_0;
		NullCheck(L_1);
		L_1->___centre_0 = L_2;
		// return clone;
		return L_1;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::Mirror()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* SphereGrabSurfaceData_Mirror_mDD32DBF6170C535D110CB6728798C0B1FD661910 (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereGrabSurfaceData mirror = Clone() as SphereGrabSurfaceData;
		RuntimeObject* L_0;
		L_0 = SphereGrabSurfaceData_Clone_m9CBCCD15C66B5DB0A66D4FE6407F774153399D60(__this, NULL);
		// return mirror;
		return ((SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D*)IsInstClass((RuntimeObject*)L_0, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurfaceData__ctor_m1F207B8BA8D8DDEEAACD6F8C4FD883664238118B (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* SphereGrabSurface_get_Data_m84678B7C236915D081ADAD55E87D29C5A2B25DB0 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = __this->____data_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::set_Data(Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_set_Data_m30CB7472817AC3C243663BF6B8705EC941918018 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_value, const RuntimeMethod* method) 
{
	{
		// _data = value;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = ___0_value;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Centre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_relativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// return _relativeTo.TransformPoint(_data.centre);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____relativeTo_5;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_3 = __this->____data_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___centre_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return _data.centre;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_6 = __this->____data_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___centre_0;
		return L_7;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::set_Centre(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_set_Centre_m8D2F49C1D99C84399584D6D43C11DBF23C0398E1 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_relativeTo != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _data.centre = _relativeTo.InverseTransformPoint(value);
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_2 = __this->____data_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____relativeTo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___centre_0 = L_5;
		return;
	}

IL_0026:
	{
		// _data.centre = value;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_6 = __this->____data_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_value;
		NullCheck(L_6);
		L_6->___centre_0 = L_7;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_referencePoint == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____referencePoint_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0014:
	{
		// return Vector3.Distance(Centre, _referencePoint.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____referencePoint_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereGrabSurface_get_Direction_m603378D2225E5B3B8EDB264CAD7706842CFD64B7 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (_referencePoint.position - Centre).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____referencePoint_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_4;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SphereGrabSurface_get_Rotation_mC55DC3A12F3C8637C1ED538CA08A59D2E35A0603 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.LookRotation(Direction, _referencePoint.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = SphereGrabSurface_get_Direction_m603378D2225E5B3B8EDB264CAD7706842CFD64B7(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____referencePoint_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_Reset_m06F3C5965B28AE3D21E9E8B2ADF9705F5DC215C3 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B2_0 = NULL;
	SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* G_B2_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B1_0 = NULL;
	SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* G_B1_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* G_B3_1 = NULL;
	{
		// _referencePoint = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// _relativeTo = this.GetComponentInParent<Rigidbody>()?.transform;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D(__this, Component_GetComponentInParent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m49365CF93735FBE624C3828C66E7AD5FF67AD40D_RuntimeMethod_var);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(G_B2_0, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_1);
		G_B3_1->____relativeTo_5 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____relativeTo_5), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_Start_m0253682A39523AD5B8C2FCD7ACE9BADF12E095CF (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::MirrorPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereGrabSurface_MirrorPose_mA07DDD7F46BDD7BEE2337289D0DCC0B2A8A5EE09 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 normal = Quaternion.Inverse(_relativeTo.rotation) * Direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_5;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = SphereGrabSurface_get_Direction_m603378D2225E5B3B8EDB264CAD7706842CFD64B7(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 tangent = Vector3.Cross(normal, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_5, L_6, NULL);
		V_1 = L_7;
		// return pose.MirrorPoseRotation(normal, tangent);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___0_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = PoseUtils_MirrorPoseRotation_m0F4E6DD5661B752CE896089B11F9483DF19E5C5F(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereGrabSurface_CalculateBestPoseAtSurface_mD1D0D144B9007BF01C26D0170AF47DAEF524A038 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_recordedPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		// Vector3 projection = Vector3.Project(Centre - targetRay.origin, targetRay.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector3 nearestCentre = targetRay.origin + projection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_targetRay), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		V_1 = L_7;
		// float distanceToSurface = Mathf.Max(Vector3.Distance(Centre, nearestCentre) - Radius);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A(__this, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_subtract(L_12, L_13)));
		float L_14;
		L_14 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_9, NULL);
		V_2 = L_14;
		// if (distanceToSurface < Radius)
		float L_15 = V_2;
		float L_16;
		L_16 = SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A(__this, NULL);
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0085;
		}
	}
	{
		// float adjustedDistance = Mathf.Sqrt(Radius * Radius - distanceToSurface * distanceToSurface);
		float L_17;
		L_17 = SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A(__this, NULL);
		float L_18;
		L_18 = SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A(__this, NULL);
		float L_19 = V_2;
		float L_20 = V_2;
		float L_21;
		L_21 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_18)), ((float)il2cpp_codegen_multiply(L_19, L_20)))));
		V_5 = L_21;
		// nearestCentre -= targetRay.direction * adjustedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_targetRay), NULL);
		float L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_25, NULL);
		V_1 = L_26;
	}

IL_0085:
	{
		// Vector3 surfacePoint = NearestPointInSurface(nearestCentre);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = SphereGrabSurface_NearestPointInSurface_mF01451FB7E7359AFA2EE575559DDECBF69B980C5(__this, L_27, NULL);
		V_3 = L_28;
		// Pose desiredPose = new Pose(surfacePoint, recordedPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = ___1_recordedPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = L_30->___rotation_1;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_4), L_29, L_31, NULL);
		// bestPose = MinimalTranslationPoseAtSurface(desiredPose, recordedPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_32 = ___2_bestPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = ___1_recordedPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34;
		L_34 = SphereGrabSurface_MinimalTranslationPoseAtSurface_mB1A98BDC00A8F8CE2419C9BE2CFDCA9A397534E6(__this, (&V_4), L_33, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_32 = L_34;
		// return true;
		return (bool)1;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 SphereGrabSurface_CalculateBestPoseAtSurface_m57DD768C4748D351ED68BD53CFC776455B5EB5B0 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereGrabSurface_MinimalRotationPoseAtSurface_m3474E575E4FF13FE1B7DFB2E50E26D79479D938F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereGrabSurface_MinimalTranslationPoseAtSurface_mB1A98BDC00A8F8CE2419C9BE2CFDCA9A397534E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GrabPoseHelper.CalculateBestPoseAtSurface(targetPose, reference, out bestPose,
		//     scoringModifier, MinimalTranslationPoseAtSurface, MinimalRotationPoseAtSurface);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* L_4 = (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8*)il2cpp_codegen_object_new(PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821(L_4, __this, (intptr_t)((void*)SphereGrabSurface_MinimalTranslationPoseAtSurface_mB1A98BDC00A8F8CE2419C9BE2CFDCA9A397534E6_RuntimeMethod_var), NULL);
		PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8* L_5 = (PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8*)il2cpp_codegen_object_new(PoseCalculator_t50174F017AABA7E6B8B2D705A8BBE74CE507BDA8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821(L_5, __this, (intptr_t)((void*)SphereGrabSurface_MinimalRotationPoseAtSurface_m3474E575E4FF13FE1B7DFB2E50E26D79479D938F_RuntimeMethod_var), NULL);
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_6;
		L_6 = GrabPoseHelper_CalculateBestPoseAtSurface_m9AD42BA98779DDDA2011780D4F6E57690D4F2DA5(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::CreateMirroredSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereGrabSurface_CreateMirroredSurface_m17CDDFA532D86FAB845106C5D9BF73C1137F67D6 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereGrabSurface surface = gameObject.AddComponent<SphereGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* L_1;
		L_1 = GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0(L_0, GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0_RuntimeMethod_var);
		// surface.Data = _data.Mirror();
		SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* L_2 = L_1;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_3 = __this->____data_4;
		NullCheck(L_3);
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_4;
		L_4 = SphereGrabSurfaceData_Mirror_mDD32DBF6170C535D110CB6728798C0B1FD661910(L_3, NULL);
		NullCheck(L_2);
		SphereGrabSurface_set_Data_m30CB7472817AC3C243663BF6B8705EC941918018_inline(L_2, L_4, NULL);
		// return surface;
		return L_2;
	}
}
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::CreateDuplicatedSurface(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SphereGrabSurface_CreateDuplicatedSurface_m4220789AB8B2AEEC838571CE0CAE58A945F124DC (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SphereGrabSurface surface = gameObject.AddComponent<SphereGrabSurface>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_gameObject;
		NullCheck(L_0);
		SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* L_1;
		L_1 = GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0(L_0, GameObject_AddComponent_TisSphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4_m4C3060E802BDF0D8E626B5572ECE04A9E8DBD4E0_RuntimeMethod_var);
		// surface.Data = _data;
		SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* L_2 = L_1;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_3 = __this->____data_4;
		NullCheck(L_2);
		SphereGrabSurface_set_Data_m30CB7472817AC3C243663BF6B8705EC941918018_inline(L_2, L_3, NULL);
		// return surface;
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::NearestPointInSurface(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereGrabSurface_NearestPointInSurface_mF01451FB7E7359AFA2EE575559DDECBF69B980C5 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = (targetPosition - Centre).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_1 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_3;
		// return Centre + direction * Radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6;
		L_6 = SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::MinimalRotationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereGrabSurface_MinimalRotationPoseAtSurface_m3474E575E4FF13FE1B7DFB2E50E26D79479D938F (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Quaternion rotCorrection = userPose.rotation * Quaternion.Inverse(referencePose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_userPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_1, L_4, NULL);
		// Vector3 correctedDir = rotCorrection * Direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = SphereGrabSurface_get_Direction_m603378D2225E5B3B8EDB264CAD7706842CFD64B7(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_5, L_6, NULL);
		V_0 = L_7;
		// Vector3 surfacePoint = NearestPointInSurface(Centre + correctedDir * Radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10;
		L_10 = SphereGrabSurface_get_Radius_m92648476DDDAC63CAF6B3C640F476123A066183A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = SphereGrabSurface_NearestPointInSurface_mF01451FB7E7359AFA2EE575559DDECBF69B980C5(__this, L_12, NULL);
		V_1 = L_13;
		// Quaternion surfaceRotation = RotationAtPoint(surfacePoint, referencePose.rotation, userPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___0_userPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = SphereGrabSurface_RotationAtPoint_m4549DF6A29A185F1455618800700E4BCFA91EA1F(__this, L_14, L_16, L_18, NULL);
		V_2 = L_19;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_22), L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::MinimalTranslationPoseAtSurface(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereGrabSurface_MinimalTranslationPoseAtSurface_mB1A98BDC00A8F8CE2419C9BE2CFDCA9A397534E6 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_userPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_referencePose, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredPos = userPose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_userPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		V_0 = L_1;
		// Quaternion baseRot = referencePose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_referencePose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2->___rotation_1;
		V_1 = L_3;
		// Vector3 surfacePoint = NearestPointInSurface(desiredPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = SphereGrabSurface_NearestPointInSurface_mF01451FB7E7359AFA2EE575559DDECBF69B980C5(__this, L_4, NULL);
		V_2 = L_5;
		// Quaternion surfaceRotation = RotationAtPoint(surfacePoint, baseRot, userPose.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___0_userPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = SphereGrabSurface_RotationAtPoint_m4549DF6A29A185F1455618800700E4BCFA91EA1F(__this, L_6, L_7, L_9, NULL);
		V_3 = L_10;
		// return new Pose(surfacePoint, surfaceRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_13), L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::RotationAtPoint(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SphereGrabSurface_RotationAtPoint_m4549DF6A29A185F1455618800700E4BCFA91EA1F (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_surfacePoint, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_baseRot, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_desiredRotation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 desiredDirection = (surfacePoint - Centre).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_surfacePoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SphereGrabSurface_get_Centre_mA7E5F2961416FD14D8754F090924B0C58A555DBB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_0 = L_3;
		// Quaternion targetRotation = Quaternion.FromToRotation(Direction, desiredDirection) * baseRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SphereGrabSurface_get_Direction_m603378D2225E5B3B8EDB264CAD7706842CFD64B7(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_4, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___1_baseRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// Vector3 targetProjected = Vector3.ProjectOnPlane(targetRotation * Vector3.forward, desiredDirection).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_11, L_12, NULL);
		V_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		// Vector3 desiredProjected = Vector3.ProjectOnPlane(desiredRotation * Vector3.forward, desiredDirection).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___2_desiredRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_17, L_18, NULL);
		V_3 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_20;
		// Quaternion rotCorrection = Quaternion.FromToRotation(targetProjected, desiredProjected);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_14, L_21, NULL);
		// return rotCorrection * targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_22, L_23, NULL);
		return L_24;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectAllSphereSurface(Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectAllSphereSurface_mC0A62DC709C4D4CCEA5D115732E4BC7586BBCF25 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_data, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_relativeTo, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_gripPoint, const RuntimeMethod* method) 
{
	{
		// InjectData(data);
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = ___0_data;
		SphereGrabSurface_InjectData_m8CBCCD9F215A7AE521215CC0508E7025567C7429_inline(__this, L_0, NULL);
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_relativeTo;
		SphereGrabSurface_InjectRelativeTo_mEF76E321D71BCC17C4EAB9122357565A05C43EF4_inline(__this, L_1, NULL);
		// InjectReferencePoint(gripPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___2_gripPoint;
		SphereGrabSurface_InjectReferencePoint_m57F1BF8C73A295D759666FE8BD1C56109803EDA0_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectData(Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectData_m8CBCCD9F215A7AE521215CC0508E7025567C7429 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_data, const RuntimeMethod* method) 
{
	{
		// _data = data;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = ___0_data;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectRelativeTo_mEF76E321D71BCC17C4EAB9122357565A05C43EF4 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_relativeTo;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::InjectReferencePoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectReferencePoint_m57F1BF8C73A295D759666FE8BD1C56109803EDA0 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) 
{
	{
		// _referencePoint = referencePoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_referencePoint;
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereGrabSurface__ctor_mD680703FA267DB122ED22258A87BE427200B375C (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SphereGrabSurfaceData _data = new SphereGrabSurfaceData();
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = (SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D*)il2cpp_codegen_object_new(SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SphereGrabSurfaceData__ctor_m1F207B8BA8D8DDEEAACD6F8C4FD883664238118B(L_0, NULL);
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Oculus.Interaction.Grab.GrabPoseScore Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 SphereGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_m208ECD5C53D105A6BF0B4C70EBE1E7D69045FF0B (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_targetPose, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* ___3_scoringModifier, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_targetPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* L_3 = ___3_scoringModifier;
		GrabPoseScore_tD56B46FDCBB34DFDDCDEF7D353038F5AA21A4A82 L_4;
		L_4 = SphereGrabSurface_CalculateBestPoseAtSurface_m57DD768C4748D351ED68BD53CFC776455B5EB5B0(__this, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface(UnityEngine.Ray,UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface_mE77755AF7E585FB83FB49C98DE6A9EA70479FF65 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_targetRay, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_reference, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___2_bestPose, const RuntimeMethod* method) 
{
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___0_targetRay;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___1_reference;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___2_bestPose;
		bool L_3;
		L_3 = SphereGrabSurface_CalculateBestPoseAtSurface_mD1D0D144B9007BF01C26D0170AF47DAEF524A038(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Pose Oculus.Interaction.Grab.GrabSurfaces.SphereGrabSurface::Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 SphereGrabSurface_Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose_mD57CBD3F0717BC7C130A6419B2D083457ACF9181 (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_gripPose, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_gripPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = SphereGrabSurface_MirrorPose_mA07DDD7F46BDD7BEE2337289D0DCC0B2A8A5EE09(__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_Create_mD84A75FC6E5FFB89ED896E8F66A136D8215C0783 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPalmGrabAPI_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPalmGrabAPI_Create)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_UpdateHandData(System.Int32,Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_UpdateHandData_mDFA0CD8B4B33EBE8BF8E260C760F641CA6E6A9F8 (int32_t ___0_handle, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* ___1_data, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPalmGrabAPI_UpdateHandData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke ____1_data_marshaled = {};
	if (___1_data != NULL)
	{
		HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke(*___1_data, ____1_data_marshaled);
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPalmGrabAPI_UpdateHandData)(___0_handle, ___1_data != NULL ? (&____1_data_marshaled) : NULL);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_data != NULL ? (&____1_data_marshaled) : NULL);
	#endif

	// Marshaling cleanup of parameter '___1_data' native representation
	if ((&____1_data_marshaled) != NULL)
	{
		HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke_cleanup(____1_data_marshaled);
	}

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbing(System.Int32,Oculus.Interaction.Input.HandFinger,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerIsGrabbing_m9F08BEC4570330E8771B154A4600A7C2642EE9A8 (int32_t ___0_handle, int32_t ___1_finger, bool* ___2_grabbing, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPalmGrabAPI_GetFingerIsGrabbing", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_grabbing' to native representation
	int32_t ____2_grabbing_empty = 0;
	int32_t* ____2_grabbing_marshaled = &____2_grabbing_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPalmGrabAPI_GetFingerIsGrabbing)(___0_handle, ___1_finger, ____2_grabbing_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_finger, ____2_grabbing_marshaled);
	#endif

	// Marshaling of parameter '___2_grabbing' back from native representation
	bool _____2_grabbing_marshaled_unmarshaled_dereferenced = false;
	_____2_grabbing_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____2_grabbing_marshaled);
	*___2_grabbing = _____2_grabbing_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged(System.Int32,Oculus.Interaction.Input.HandFinger,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged_mE851ACAF85F9D6B6BC14743A1ADEEEFFE580009D (int32_t ___0_handle, int32_t ___1_finger, bool ___2_targetGrabState, bool* ___3_changed, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + 4 + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___3_changed' to native representation
	int32_t ____3_changed_empty = 0;
	int32_t* ____3_changed_marshaled = &____3_changed_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged)(___0_handle, ___1_finger, static_cast<int32_t>(___2_targetGrabState), ____3_changed_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_finger, static_cast<int32_t>(___2_targetGrabState), ____3_changed_marshaled);
	#endif

	// Marshaling of parameter '___3_changed' back from native representation
	bool _____3_changed_marshaled_unmarshaled_dereferenced = false;
	_____3_changed_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____3_changed_marshaled);
	*___3_changed = _____3_changed_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetFingerGrabScore(System.Int32,Oculus.Interaction.Input.HandFinger,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerGrabScore_m7242D7376811C76C7E56BA692DBA8DBB42727460 (int32_t ___0_handle, int32_t ___1_finger, float* ___2_score, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPalmGrabAPI_GetFingerGrabScore", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPalmGrabAPI_GetFingerGrabScore)(___0_handle, ___1_finger, ___2_score);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_finger, ___2_score);
	#endif

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::isdk_FingerPalmGrabAPI_GetCenterOffset(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetCenterOffset_m0E938F8311D3BA5ADD436B3F6776FB1A9207C83F (int32_t ___0_handle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_score, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPalmGrabAPI_GetCenterOffset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPalmGrabAPI_GetCenterOffset)(___0_handle, ___1_score);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_score);
	#endif

	return returnValue;
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI__ctor_mC033897D9E80D5FC6BF9BE712495460B91A7CD99 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int apiHandle_ = -1;
		__this->___apiHandle__0 = (-1);
		// public FingerPalmGrabAPI()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// handData_ = new HandData();
		HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* L_0 = (HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838*)il2cpp_codegen_object_new(HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandData__ctor_m55028A6E15F20DF35BE715477001DA3D2AC94ECF(L_0, NULL);
		__this->___handData__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handData__1), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) 
{
	{
		// if (apiHandle_ == -1)
		int32_t L_0 = __this->___apiHandle__0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		// apiHandle_ = isdk_FingerPalmGrabAPI_Create();
		int32_t L_1;
		L_1 = FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_Create_mD84A75FC6E5FFB89ED896E8F66A136D8215C0783(NULL);
		__this->___apiHandle__0 = L_1;
	}

IL_0014:
	{
		// return apiHandle_;
		int32_t L_2 = __this->___apiHandle__0;
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPalmGrabAPI_GetFingerIsGrabbing_m3602DFE874E040B94A76DACD3CEAD4DC6FD789D3 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ReturnValue rv = isdk_FingerPalmGrabAPI_GetFingerIsGrabbing(GetHandle(), finger, out bool grabbing);
		int32_t L_0;
		L_0 = FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE(__this, NULL);
		int32_t L_1 = ___0_finger;
		int32_t L_2;
		L_2 = FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerIsGrabbing_m9F08BEC4570330E8771B154A4600A7C2642EE9A8(L_0, L_1, (&V_0), NULL);
		// return grabbing;
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPalmGrabAPI_GetFingerIsGrabbingChanged_mB1DD336FBE4A6C9ECA31938D9DFF89A2603AA942 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, int32_t ___0_finger, bool ___1_targetGrabState, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ReturnValue rv = isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged(GetHandle(), finger, targetGrabState, out bool grabbing);
		int32_t L_0;
		L_0 = FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE(__this, NULL);
		int32_t L_1 = ___0_finger;
		bool L_2 = ___1_targetGrabState;
		int32_t L_3;
		L_3 = FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerIsGrabbingChanged_mE851ACAF85F9D6B6BC14743A1ADEEEFFE580009D(L_0, L_1, L_2, (&V_0), NULL);
		// return grabbing;
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPalmGrabAPI_GetFingerGrabScore_m62995F5FD5DB944E61E937E07406D9160A7998A9 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// ReturnValue rv = isdk_FingerPalmGrabAPI_GetFingerGrabScore(GetHandle(), finger, out float score);
		int32_t L_0;
		L_0 = FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE(__this, NULL);
		int32_t L_1 = ___0_finger;
		int32_t L_2;
		L_2 = FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetFingerGrabScore_m7242D7376811C76C7E56BA692DBA8DBB42727460(L_0, L_1, (&V_0), NULL);
		// return score;
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::Update(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPalmGrabAPI_Update_m1ABD787123D96AE064611D45D83AF8BB1DDD96AB (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* V_1 = NULL;
	{
		// if (!hand.GetRootPose(out Pose rootPose))
		RuntimeObject* L_0 = ___0_hand;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(18 /* System.Boolean Oculus.Interaction.Input.IHand::GetRootPose(UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, (&V_0));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// if (!hand.GetJointPosesFromWrist(out ReadOnlyHandJointPoses poses))
		RuntimeObject* L_2 = ___0_hand;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551** >::Invoke(13 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPosesFromWrist(Oculus.Interaction.Input.ReadOnlyHandJointPoses&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_2, (&V_1));
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// handData_.SetData(poses, rootPose, hand.Handedness);
		HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* L_4 = __this->___handData__1;
		ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* L_5 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = V_0;
		RuntimeObject* L_7 = ___0_hand;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.IHand::get_Handedness() */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_4);
		HandData_SetData_mBF464CEC0E7A98FBEC45562AD7A7B98782680E8B(L_4, L_5, L_6, L_8, NULL);
		// ReturnValue rv = isdk_FingerPalmGrabAPI_UpdateHandData(GetHandle(), handData_);
		int32_t L_9;
		L_9 = FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE(__this, NULL);
		HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* L_10 = __this->___handData__1;
		int32_t L_11;
		L_11 = FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_UpdateHandData_mDFA0CD8B4B33EBE8BF8E260C760F641CA6E6A9F8(L_9, L_10, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPalmGrabAPI::GetCenterOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPalmGrabAPI_GetCenterOffset_m3E0878B6E613A7C0D103A4B1783B6021941E3170 (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ReturnValue rv = isdk_FingerPalmGrabAPI_GetCenterOffset(GetHandle(), out Vector3 center);
		int32_t L_0;
		L_0 = FingerPalmGrabAPI_GetHandle_mDC3D777E01F6CADF4CDFF3E9DE02BBA414EEE4CE(__this, NULL);
		int32_t L_1;
		L_1 = FingerPalmGrabAPI_isdk_FingerPalmGrabAPI_GetCenterOffset_m0E938F8311D3BA5ADD436B3F6776FB1A9207C83F(L_0, (&V_0), NULL);
		// return center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke(const HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838& unmarshaled, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___jointValues_1 != NULL)
	{
		if (168 > (unmarshaled.___jointValues_1)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(168); i++)
		{
			(marshaled.___jointValues_1)[i] = (unmarshaled.___jointValues_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.____rootRotX_2 = unmarshaled.____rootRotX_2;
	marshaled.____rootRotY_3 = unmarshaled.____rootRotY_3;
	marshaled.____rootRotZ_4 = unmarshaled.____rootRotZ_4;
	marshaled.____rootRotW_5 = unmarshaled.____rootRotW_5;
	marshaled.____rootPosX_6 = unmarshaled.____rootPosX_6;
	marshaled.____rootPosY_7 = unmarshaled.____rootPosY_7;
	marshaled.____rootPosZ_8 = unmarshaled.____rootPosZ_8;
	marshaled.____handedness_9 = unmarshaled.____handedness_9;
}
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke_back(const HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke& marshaled, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___jointValues_1 = reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 168));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___jointValues_1), (void*)reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 168)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(168); i++)
	{
		(unmarshaled.___jointValues_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointValues_1)[i]);
	}
	float unmarshaled_rootRotX_temp_1 = 0.0f;
	unmarshaled_rootRotX_temp_1 = marshaled.____rootRotX_2;
	unmarshaled.____rootRotX_2 = unmarshaled_rootRotX_temp_1;
	float unmarshaled_rootRotY_temp_2 = 0.0f;
	unmarshaled_rootRotY_temp_2 = marshaled.____rootRotY_3;
	unmarshaled.____rootRotY_3 = unmarshaled_rootRotY_temp_2;
	float unmarshaled_rootRotZ_temp_3 = 0.0f;
	unmarshaled_rootRotZ_temp_3 = marshaled.____rootRotZ_4;
	unmarshaled.____rootRotZ_4 = unmarshaled_rootRotZ_temp_3;
	float unmarshaled_rootRotW_temp_4 = 0.0f;
	unmarshaled_rootRotW_temp_4 = marshaled.____rootRotW_5;
	unmarshaled.____rootRotW_5 = unmarshaled_rootRotW_temp_4;
	float unmarshaled_rootPosX_temp_5 = 0.0f;
	unmarshaled_rootPosX_temp_5 = marshaled.____rootPosX_6;
	unmarshaled.____rootPosX_6 = unmarshaled_rootPosX_temp_5;
	float unmarshaled_rootPosY_temp_6 = 0.0f;
	unmarshaled_rootPosY_temp_6 = marshaled.____rootPosY_7;
	unmarshaled.____rootPosY_7 = unmarshaled_rootPosY_temp_6;
	float unmarshaled_rootPosZ_temp_7 = 0.0f;
	unmarshaled_rootPosZ_temp_7 = marshaled.____rootPosZ_8;
	unmarshaled.____rootPosZ_8 = unmarshaled_rootPosZ_temp_7;
	int32_t unmarshaled_handedness_temp_8 = 0;
	unmarshaled_handedness_temp_8 = marshaled.____handedness_9;
	unmarshaled.____handedness_9 = unmarshaled_handedness_temp_8;
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_pinvoke_cleanup(HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_com(const HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838& unmarshaled, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_com& marshaled)
{
	if (unmarshaled.___jointValues_1 != NULL)
	{
		if (168 > (unmarshaled.___jointValues_1)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(168); i++)
		{
			(marshaled.___jointValues_1)[i] = (unmarshaled.___jointValues_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.____rootRotX_2 = unmarshaled.____rootRotX_2;
	marshaled.____rootRotY_3 = unmarshaled.____rootRotY_3;
	marshaled.____rootRotZ_4 = unmarshaled.____rootRotZ_4;
	marshaled.____rootRotW_5 = unmarshaled.____rootRotW_5;
	marshaled.____rootPosX_6 = unmarshaled.____rootPosX_6;
	marshaled.____rootPosY_7 = unmarshaled.____rootPosY_7;
	marshaled.____rootPosZ_8 = unmarshaled.____rootPosZ_8;
	marshaled.____handedness_9 = unmarshaled.____handedness_9;
}
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_com_back(const HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_com& marshaled, HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___jointValues_1 = reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 168));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___jointValues_1), (void*)reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 168)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(168); i++)
	{
		(unmarshaled.___jointValues_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___jointValues_1)[i]);
	}
	float unmarshaled_rootRotX_temp_1 = 0.0f;
	unmarshaled_rootRotX_temp_1 = marshaled.____rootRotX_2;
	unmarshaled.____rootRotX_2 = unmarshaled_rootRotX_temp_1;
	float unmarshaled_rootRotY_temp_2 = 0.0f;
	unmarshaled_rootRotY_temp_2 = marshaled.____rootRotY_3;
	unmarshaled.____rootRotY_3 = unmarshaled_rootRotY_temp_2;
	float unmarshaled_rootRotZ_temp_3 = 0.0f;
	unmarshaled_rootRotZ_temp_3 = marshaled.____rootRotZ_4;
	unmarshaled.____rootRotZ_4 = unmarshaled_rootRotZ_temp_3;
	float unmarshaled_rootRotW_temp_4 = 0.0f;
	unmarshaled_rootRotW_temp_4 = marshaled.____rootRotW_5;
	unmarshaled.____rootRotW_5 = unmarshaled_rootRotW_temp_4;
	float unmarshaled_rootPosX_temp_5 = 0.0f;
	unmarshaled_rootPosX_temp_5 = marshaled.____rootPosX_6;
	unmarshaled.____rootPosX_6 = unmarshaled_rootPosX_temp_5;
	float unmarshaled_rootPosY_temp_6 = 0.0f;
	unmarshaled_rootPosY_temp_6 = marshaled.____rootPosY_7;
	unmarshaled.____rootPosY_7 = unmarshaled_rootPosY_temp_6;
	float unmarshaled_rootPosZ_temp_7 = 0.0f;
	unmarshaled_rootPosZ_temp_7 = marshaled.____rootPosZ_8;
	unmarshaled.____rootPosZ_8 = unmarshaled_rootPosZ_temp_7;
	int32_t unmarshaled_handedness_temp_8 = 0;
	unmarshaled_handedness_temp_8 = marshaled.____handedness_9;
	unmarshaled.____handedness_9 = unmarshaled_handedness_temp_8;
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData
IL2CPP_EXTERN_C void HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshal_com_cleanup(HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838_marshaled_com& marshaled)
{
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandData__ctor_m55028A6E15F20DF35BE715477001DA3D2AC94ECF (HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HandData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// jointValues = new float[NumHandJoints * 7];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)168));
		__this->___jointValues_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointValues_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/HandData::SetData(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>,UnityEngine.Pose,Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandData_SetData_mBF464CEC0E7A98FBEC45562AD7A7B98782680E8B (HandData_t9F71FCD9F40D74F7AFA608C7CCDAE85D37396838* __this, RuntimeObject* ___0_joints, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_root, int32_t ___2_handedness, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int jointValueIndex = 0;
		V_0 = 0;
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		V_1 = 0;
		goto IL_00b6;
	}

IL_0009:
	{
		// Pose joint = joints[jointIndex];
		RuntimeObject* L_0 = ___0_joints;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>::get_Item(System.Int32) */, IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		// jointValues[jointValueIndex++] = joint.rotation.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___jointValues_1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6.___rotation_1;
		float L_8 = L_7.___x_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_8);
		// jointValues[jointValueIndex++] = joint.rotation.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___jointValues_1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12.___rotation_1;
		float L_14 = L_13.___y_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)L_14);
		// jointValues[jointValueIndex++] = joint.rotation.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___jointValues_1;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = L_18.___rotation_1;
		float L_20 = L_19.___z_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (float)L_20);
		// jointValues[jointValueIndex++] = joint.rotation.w;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___jointValues_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24.___rotation_1;
		float L_26 = L_25.___w_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (float)L_26);
		// jointValues[jointValueIndex++] = joint.position.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___jointValues_1;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_30 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30.___position_0;
		float L_32 = L_31.___x_2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (float)L_32);
		// jointValues[jointValueIndex++] = joint.position.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = __this->___jointValues_1;
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_36 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (float)L_38);
		// jointValues[jointValueIndex++] = joint.position.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->___jointValues_1;
		int32_t L_40 = V_0;
		int32_t L_41 = L_40;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42.___position_0;
		float L_44 = L_43.___z_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (float)L_44);
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00b6:
	{
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)24))))
		{
			goto IL_0009;
		}
	}
	{
		// this._rootRotX = root.rotation.x;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_47 = ___1_root;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = L_47.___rotation_1;
		float L_49 = L_48.___x_0;
		__this->____rootRotX_2 = L_49;
		// this._rootRotY = root.rotation.y;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_50 = ___1_root;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = L_50.___rotation_1;
		float L_52 = L_51.___y_1;
		__this->____rootRotY_3 = L_52;
		// this._rootRotZ = root.rotation.z;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_53 = ___1_root;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = L_53.___rotation_1;
		float L_55 = L_54.___z_2;
		__this->____rootRotZ_4 = L_55;
		// this._rootRotW = root.rotation.w;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_56 = ___1_root;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = L_56.___rotation_1;
		float L_58 = L_57.___w_3;
		__this->____rootRotW_5 = L_58;
		// this._rootPosX = root.position.x;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_59 = ___1_root;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = L_59.___position_0;
		float L_61 = L_60.___x_2;
		__this->____rootPosX_6 = L_61;
		// this._rootPosY = root.position.y;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_62 = ___1_root;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = L_62.___position_0;
		float L_64 = L_63.___y_3;
		__this->____rootPosY_7 = L_64;
		// this._rootPosZ = root.position.z;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_65 = ___1_root;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		__this->____rootPosZ_8 = L_67;
		// this._handedness = (int)handedness;
		int32_t L_68 = ___2_handedness;
		__this->____handedness_9 = L_68;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Interaction.GrabAPI.HandPinchData
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke(const HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C& unmarshaled, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____jointPositions_1 != NULL)
	{
		if (72 > (unmarshaled.____jointPositions_1)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(72); i++)
		{
			(marshaled.____jointPositions_1)[i] = (unmarshaled.____jointPositions_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke_back(const HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke& marshaled, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.____jointPositions_1 = reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 72));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____jointPositions_1), (void*)reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 72)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(72); i++)
	{
		(unmarshaled.____jointPositions_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.____jointPositions_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.GrabAPI.HandPinchData
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke_cleanup(HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.GrabAPI.HandPinchData
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_com(const HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C& unmarshaled, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_com& marshaled)
{
	if (unmarshaled.____jointPositions_1 != NULL)
	{
		if (72 > (unmarshaled.____jointPositions_1)->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(72); i++)
		{
			(marshaled.____jointPositions_1)[i] = (unmarshaled.____jointPositions_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_com_back(const HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_com& marshaled, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.____jointPositions_1 = reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 72));
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____jointPositions_1), (void*)reinterpret_cast<SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*>((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, 72)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(72); i++)
	{
		(unmarshaled.____jointPositions_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.____jointPositions_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.GrabAPI.HandPinchData
IL2CPP_EXTERN_C void HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_com_cleanup(HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_com& marshaled)
{
}
// System.Void Oculus.Interaction.GrabAPI.HandPinchData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPinchData__ctor_m0E36724E8B72AE853C4199A184A58523ECC18A52 (HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public HandPinchData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// int floatCount = NumHandJoints * 3;
		V_0 = ((int32_t)72);
		// _jointPositions = new float[floatCount];
		int32_t L_0 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____jointPositions_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPositions_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandPinchData::SetJoints(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPinchData_SetJoints_mA62F352CC5AB48C404622311FC5A632AC9A33076 (HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* __this, RuntimeObject* ___0_poses, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int floatIndex = 0;
		V_0 = 0;
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		V_1 = 0;
		goto IL_004d;
	}

IL_0006:
	{
		// Vector3 position = poses[jointIndex].position;
		RuntimeObject* L_0 = ___0_poses;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>::get_Item(System.Int32) */, IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var, L_0, L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___position_0;
		V_2 = L_3;
		// _jointPositions[floatIndex++] = position.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->____jointPositions_1;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		float L_8 = L_7.___x_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)L_8);
		// _jointPositions[floatIndex++] = position.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->____jointPositions_1;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = L_12.___y_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)L_13);
		// _jointPositions[floatIndex++] = position.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->____jointPositions_1;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = L_17.___z_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (float)L_18);
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004d:
	{
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)24))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandPinchData::SetJoints(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPinchData_SetJoints_m3840AFE330FA3F6DEF10E38D0DE98EF77EB53FFF (HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* __this, RuntimeObject* ___0_positions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tC7DD1BE89315F84F5AC3EEB0F716D812AC1732CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int floatIndex = 0;
		V_0 = 0;
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		V_1 = 0;
		goto IL_0048;
	}

IL_0006:
	{
		// Vector3 position = positions[jointIndex];
		RuntimeObject* L_0 = ___0_positions;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>::get_Item(System.Int32) */, IReadOnlyList_1_tC7DD1BE89315F84F5AC3EEB0F716D812AC1732CB_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		// _jointPositions[floatIndex++] = position.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->____jointPositions_1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		float L_7 = L_6.___x_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)L_7);
		// _jointPositions[floatIndex++] = position.y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->____jointPositions_1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		float L_12 = L_11.___y_3;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_12);
		// _jointPositions[floatIndex++] = position.z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->____jointPositions_1;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = L_16.___z_4;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (float)L_17);
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		// for (int jointIndex = 0; jointIndex < NumHandJoints; jointIndex++)
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)24))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_Create_mA24D079BFAA6730B17301AF38068942B60AAF624 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_Create)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandData(System.Int32,Oculus.Interaction.GrabAPI.HandPinchData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_UpdateHandData_m6A41938F458B8ECE877824DA92FBFA003C3530D1 (int32_t ___0_handle, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* ___1_data, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_UpdateHandData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke ____1_data_marshaled = {};
	if (___1_data != NULL)
	{
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke(*___1_data, ____1_data_marshaled);
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_UpdateHandData)(___0_handle, ___1_data != NULL ? (&____1_data_marshaled) : NULL);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_data != NULL ? (&____1_data_marshaled) : NULL);
	#endif

	// Marshaling cleanup of parameter '___1_data' native representation
	if ((&____1_data_marshaled) != NULL)
	{
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke_cleanup(____1_data_marshaled);
	}

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_UpdateHandWristHMDData(System.Int32,Oculus.Interaction.GrabAPI.HandPinchData,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_UpdateHandWristHMDData_m5A41AD577372AA546049889AC5F6972958EA2BD6 (int32_t ___0_handle, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* ___1_data, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_wristForward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_hmdForward, const RuntimeMethod* method) 
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_UpdateHandWristHMDData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_data' to native representation
	HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshaled_pinvoke ____1_data_marshaled = {};
	if (___1_data != NULL)
	{
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke(*___1_data, ____1_data_marshaled);
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_UpdateHandWristHMDData)(___0_handle, ___1_data != NULL ? (&____1_data_marshaled) : NULL, ___2_wristForward, ___3_hmdForward);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_data != NULL ? (&____1_data_marshaled) : NULL, ___2_wristForward, ___3_hmdForward);
	#endif

	// Marshaling cleanup of parameter '___1_data' native representation
	if ((&____1_data_marshaled) != NULL)
	{
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_marshal_pinvoke_cleanup(____1_data_marshaled);
	}

	return returnValue;
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetString(System.Int32,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetString_mB87681482AFB2622954FD0372889FBC9051C3143 (int32_t ___0_handle, String_t* ___1_name, intptr_t* ___2_val, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (int32_t, char*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_GetString", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_GetString)(___0_handle, ____1_name_marshaled, ___2_val);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_name_marshaled, ___2_val);
	#endif

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbing(System.Int32,System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbing_mD47E4419877C0AF7528FC1DAABAD350DCA090009 (int32_t ___0_handle, int32_t ___1_index, bool* ___2_grabbing, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_GetFingerIsGrabbing", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_grabbing' to native representation
	int32_t ____2_grabbing_empty = 0;
	int32_t* ____2_grabbing_marshaled = &____2_grabbing_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_GetFingerIsGrabbing)(___0_handle, ___1_index, ____2_grabbing_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_index, ____2_grabbing_marshaled);
	#endif

	// Marshaling of parameter '___2_grabbing' back from native representation
	bool _____2_grabbing_marshaled_unmarshaled_dereferenced = false;
	_____2_grabbing_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____2_grabbing_marshaled);
	*___2_grabbing = _____2_grabbing_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged(System.Int32,System.Int32,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8 (int32_t ___0_handle, int32_t ___1_index, bool ___2_targetState, bool* ___3_grabbing, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + 4 + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___3_grabbing' to native representation
	int32_t ____3_grabbing_empty = 0;
	int32_t* ____3_grabbing_marshaled = &____3_grabbing_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged)(___0_handle, ___1_index, static_cast<int32_t>(___2_targetState), ____3_grabbing_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_index, static_cast<int32_t>(___2_targetState), ____3_grabbing_marshaled);
	#endif

	// Marshaling of parameter '___3_grabbing' back from native representation
	bool _____3_grabbing_marshaled_unmarshaled_dereferenced = false;
	_____3_grabbing_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____3_grabbing_marshaled);
	*___3_grabbing = _____3_grabbing_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetFingerGrabScore(System.Int32,Oculus.Interaction.Input.HandFinger,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerGrabScore_m226236F0AD6C4F0097C59E5290C741016D888570 (int32_t ___0_handle, int32_t ___1_finger, float* ___2_outScore, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_GetFingerGrabScore", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_GetFingerGrabScore)(___0_handle, ___1_finger, ___2_outScore);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_finger, ___2_outScore);
	#endif

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetCenterOffset(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetCenterOffset_m52F8F047B0DF1C6DBA1590D5C582FEF6DFCB1025 (int32_t ___0_handle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_outCenter, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_GetCenterOffset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_GetCenterOffset)(___0_handle, ___1_outCenter);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ___1_outCenter);
	#endif

	return returnValue;
}
// System.Int32 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_Common_GetVersion(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_Common_GetVersion_mF32C2A507E641EFE10859B195758378DAF3554DF (intptr_t* ___0_versionStringPtr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_Common_GetVersion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_Common_GetVersion)(___0_versionStringPtr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_versionStringPtr);
	#endif

	return returnValue;
}
// Oculus.Interaction.GrabAPI.FingerPinchGrabAPI/ReturnValue Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::isdk_FingerPinchGrabAPI_GetPinchHasGoodVisibility(System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetPinchHasGoodVisibility_mABEC432C635F993804083CD434AED4DFFEDC4762 (int32_t ___0_handle, bool* ___1_isGood, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InteractionSdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InteractionSdk"), "isdk_FingerPinchGrabAPI_GetPinchHasGoodVisibility", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_isGood' to native representation
	int32_t ____1_isGood_empty = 0;
	int32_t* ____1_isGood_marshaled = &____1_isGood_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InteractionSdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isdk_FingerPinchGrabAPI_GetPinchHasGoodVisibility)(___0_handle, ____1_isGood_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_handle, ____1_isGood_marshaled);
	#endif

	// Marshaling of parameter '___1_isGood' back from native representation
	bool _____1_isGood_marshaled_unmarshaled_dereferenced = false;
	_____1_isGood_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____1_isGood_marshaled);
	*___1_isGood = _____1_isGood_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::.ctor(Oculus.Interaction.Input.IHmd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI__ctor_m12794700AD5FC57918BC30AF963A44F6C75F8539 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___0_hmd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _fingerPinchGrabAPIHandle = -1;
		__this->____fingerPinchGrabAPIHandle_0 = (-1);
		// private HandPinchData _pinchData = new HandPinchData();
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* L_0 = (HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C*)il2cpp_codegen_object_new(HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandPinchData__ctor_m0E36724E8B72AE853C4199A184A58523ECC18A52(L_0, NULL);
		__this->____pinchData_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinchData_1), (void*)L_0);
		// public FingerPinchGrabAPI(IHmd hmd = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _hmd = hmd;
		RuntimeObject* L_1 = ___0_hmd;
		__this->____hmd_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmd_2), (void*)L_1);
		// }
		return;
	}
}
// System.Int32 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	{
		// if (_fingerPinchGrabAPIHandle == -1)
		int32_t L_0 = __this->____fingerPinchGrabAPIHandle_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		// _fingerPinchGrabAPIHandle = isdk_FingerPinchGrabAPI_Create();
		int32_t L_1;
		L_1 = FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_Create_mA24D079BFAA6730B17301AF38068942B60AAF624(NULL);
		__this->____fingerPinchGrabAPIHandle_0 = L_1;
	}

IL_0014:
	{
		// return _fingerPinchGrabAPIHandle;
		int32_t L_2 = __this->____fingerPinchGrabAPIHandle_0;
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_GetFingerIsGrabbing_m0020BB2B19FDEB907D52BB3FEC56A11057A950C0 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ReturnValue rc = isdk_FingerPinchGrabAPI_GetFingerIsGrabbing(GetHandle(), (int)finger, out bool grabbing);
		int32_t L_0;
		L_0 = FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4(__this, NULL);
		int32_t L_1 = ___0_finger;
		int32_t L_2;
		L_2 = FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbing_mD47E4419877C0AF7528FC1DAABAD350DCA090009(L_0, L_1, (&V_0), NULL);
		// return grabbing;
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetCenterOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchGrabAPI_GetCenterOffset_m8D6D30B62E0D11CAA37A6B4DD226E502F0BC777B (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ReturnValue rc = isdk_FingerPinchGrabAPI_GetCenterOffset(GetHandle(), out Vector3 center);
		int32_t L_0;
		L_0 = FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4(__this, NULL);
		int32_t L_1;
		L_1 = FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetCenterOffset_m52F8F047B0DF1C6DBA1590D5C582FEF6DFCB1025(L_0, (&V_0), NULL);
		// return center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mCABCED3CEFEB9EEF9291CF59034B8C82D6DE0749 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___0_finger, bool ___1_targetPinchState, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// ReturnValue rc = isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged(GetHandle(), (int)finger, targetPinchState, out bool changed);
		int32_t L_0;
		L_0 = FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4(__this, NULL);
		int32_t L_1 = ___0_finger;
		bool L_2 = ___1_targetPinchState;
		int32_t L_3;
		L_3 = FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerIsGrabbingChanged_mBB4F7A1611C63E2119EDBB5164AF812C9677D0D8(L_0, L_1, L_2, (&V_0), NULL);
		// return changed;
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerPinchGrabAPI_GetFingerGrabScore_m54B0EC461058A0494F3684E946BD46CD510C0292 (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// ReturnValue rc = isdk_FingerPinchGrabAPI_GetFingerGrabScore(GetHandle(), finger, out float score);
		int32_t L_0;
		L_0 = FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4(__this, NULL);
		int32_t L_1 = ___0_finger;
		int32_t L_2;
		L_2 = FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_GetFingerGrabScore_m226236F0AD6C4F0097C59E5290C741016D888570(L_0, L_1, (&V_0), NULL);
		// return score;
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerPinchGrabAPI::Update(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchGrabAPI_Update_m9E946B09C83DF6202583529837CFCADC62F7BAAB (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// hand.GetJointPosesFromWrist(out ReadOnlyHandJointPoses poses);
		RuntimeObject* L_0 = ___0_hand;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551** >::Invoke(13 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPosesFromWrist(Oculus.Interaction.Input.ReadOnlyHandJointPoses&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, (&V_0));
		// if (poses.Count > 0)
		ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyHandJointPoses_get_Count_m85C3D19C2B6A090455F9FA245BA35B400724EC0C(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		// _pinchData.SetJoints(poses);
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* L_4 = __this->____pinchData_1;
		ReadOnlyHandJointPoses_t6C048A8D103A3648C7BDE5EAFD651164C1A1F551* L_5 = V_0;
		NullCheck(L_4);
		HandPinchData_SetJoints_mA62F352CC5AB48C404622311FC5A632AC9A33076(L_4, L_5, NULL);
		// Vector3 wristForward = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_1 = L_6;
		// Vector3 hmdForward = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_2 = L_7;
		// if (_hmd != null &&
		//     hand.GetJointPose(HandJointId.HandWristRoot, out Pose wristPose) &&
		//     _hmd.TryGetRootPose(out Pose centerEyePose))
		RuntimeObject* L_8 = __this->____hmd_2;
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_9 = ___0_hand;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(9 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPose(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_9, 0, (&V_3));
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_11 = __this->____hmd_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(0 /* System.Boolean Oculus.Interaction.Input.IHmd::TryGetRootPose(UnityEngine.Pose&) */, IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D_il2cpp_TypeInfo_var, L_11, (&V_4));
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// wristForward = -1.0f * wristPose.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((-1.0f), L_13, NULL);
		V_1 = L_14;
		// hmdForward = -1.0f * centerEyePose.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((-1.0f), L_15, NULL);
		V_2 = L_16;
		// if (hand.Handedness == Handedness.Right)
		RuntimeObject* L_17 = ___0_hand;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.IHand::get_Handedness() */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0083;
		}
	}
	{
		// wristForward = -wristForward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_19, NULL);
		V_1 = L_20;
	}

IL_0083:
	{
		// ReturnValue rc = isdk_FingerPinchGrabAPI_UpdateHandWristHMDData(GetHandle(), _pinchData, wristForward, hmdForward);
		int32_t L_21;
		L_21 = FingerPinchGrabAPI_GetHandle_m5F0D53FCE4263CF4EB2F286238BE082AC69D09E4(__this, NULL);
		HandPinchData_t3EB5C22BF0C9F90CDEE7117E00CC3A6EF812C38C* L_22 = __this->____pinchData_1;
		int32_t L_23;
		L_23 = FingerPinchGrabAPI_isdk_FingerPinchGrabAPI_UpdateHandWristHMDData_m5A41AD577372AA546049889AC5F6972958EA2BD6(L_21, L_22, (&V_1), (&V_2), NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerRawPinchAPI_GetFingerIsGrabbing_mB91F33CB1F10A009AA3E5D322E453107B6208FA8 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	{
		// return _fingersPinchData[(int)finger].IsPinching;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = ___0_finger;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4 = L_3->___IsPinching_3;
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetCenterOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerRawPinchAPI_GetCenterOffset_m45DC063BF13CAB54DF48AC654705E3CA4197E858 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float maxStrength = float.NegativeInfinity;
		V_0 = (-std::numeric_limits<float>::infinity());
		// Vector3 thumbTip = _fingersPinchData[0].TipPosition;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline(L_2, NULL);
		V_1 = L_3;
		// Vector3 center = thumbTip;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		V_2 = L_4;
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		V_3 = 1;
		goto IL_0057;
	}

IL_001a:
	{
		// float strength = _fingersPinchData[i].PinchStrength;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_5 = __this->____fingersPinchData_0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9 = L_8->___PinchStrength_2;
		V_4 = L_9;
		// if (strength > maxStrength)
		float L_10 = V_4;
		float L_11 = V_0;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0053;
		}
	}
	{
		// maxStrength = strength;
		float L_12 = V_4;
		V_0 = L_12;
		// Vector3 fingerTip = _fingersPinchData[i].TipPosition;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_13 = __this->____fingersPinchData_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline(L_16, NULL);
		V_5 = L_17;
		// center = (thumbTip + fingerTip) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (0.5f), NULL);
		V_2 = L_21;
	}

IL_0053:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0057:
	{
		// for (int i = 1; i < Constants.NUM_FINGERS; ++i)
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		// return center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerRawPinchAPI_GetFingerIsGrabbingChanged_mDDE133CC303C1AC07D0CBFD2AA8A7E06E437D6F4 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, int32_t ___0_finger, bool ___1_targetPinchState, const RuntimeMethod* method) 
{
	{
		// return _fingersPinchData[(int)finger].IsPinchingChanged &&
		//        _fingersPinchData[(int)finger].IsPinching == targetPinchState;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = ___0_finger;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_5 = __this->____fingersPinchData_0;
		int32_t L_6 = ___0_finger;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->___IsPinching_3;
		bool L_10 = ___1_targetPinchState;
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single Oculus.Interaction.GrabAPI.FingerRawPinchAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FingerRawPinchAPI_GetFingerGrabScore_m0359D0D83A6BE872F90EAEAE6453F95C631FF6A1 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	{
		// return _fingersPinchData[(int)finger].PinchStrength;
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = ___0_finger;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		float L_4 = L_3->___PinchStrength_2;
		return L_4;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::Update(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI_Update_mE2C0A0C6FC00BF44F062BA687819FF593B0F3B3A (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ClearState();
		FingerRawPinchAPI_ClearState_m22847F4F203CEEE8AB4F3A352044FA12ADC3C9B8(__this, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_001c;
	}

IL_000a:
	{
		// _fingersPinchData[i].UpdateIsPinching(hand);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject* L_4 = ___0_hand;
		NullCheck(L_3);
		FingerPinchData_UpdateIsPinching_mF6AC20AE2029F842D68FFCCBD38F00E8CDDFD138(L_3, L_4, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001c:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)5)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI_ClearState_m22847F4F203CEEE8AB4F3A352044FA12ADC3C9B8 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// _fingersPinchData[i].ClearState();
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = __this->____fingersPinchData_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		FingerPinchData_ClearState_mFC11EF56BB84EB4D7503C13F1C1385AD52336105(L_3, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; ++i)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3 (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly FingerPinchData[] _fingersPinchData =
		// {
		//     new FingerPinchData(HandFinger.Thumb),
		//     new FingerPinchData(HandFinger.Index),
		//     new FingerPinchData(HandFinger.Middle),
		//     new FingerPinchData(HandFinger.Ring),
		//     new FingerPinchData(HandFinger.Pinky)
		// };
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_0 = (FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2*)(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2*)SZArrayNew(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2_il2cpp_TypeInfo_var, (uint32_t)5);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_1 = L_0;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_2 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_2, 0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_2);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_3 = L_1;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_4 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_4, 1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_4);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_5 = L_3;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_6 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_6, 2, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_6);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_7 = L_5;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_8 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_8, 3, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_8);
		FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2* L_9 = L_7;
		FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* L_10 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)il2cpp_codegen_object_new(FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048(L_10, 4, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9*)L_10);
		__this->____fingersPinchData_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersPinchData_0), (void*)L_9);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_IsPinchingChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = __this->___U3CIsPinchingChangedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_IsPinchingChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsPinchingChangedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::get_TipPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTipPositionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::set_TipPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CTipPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::.ctor(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData__ctor_mF3292DF9F4DD1FD4B0051B20494767C58AA2A048 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, int32_t ___0_fingerId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FingerPinchData(HandFinger fingerId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _finger = fingerId;
		int32_t L_0 = ___0_fingerId;
		__this->____finger_0 = L_0;
		// _tipId = HandJointUtils.GetHandFingerTip(fingerId);
		int32_t L_1 = ___0_fingerId;
		il2cpp_codegen_runtime_class_init_inline(HandJointUtils_t398E7EA5CA755A046BC60F9C5F8A144650D37DF7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HandJointUtils_GetHandFingerTip_m343D803AB845B68A891916B77AF415CC89366DF8(L_1, NULL);
		__this->____tipId_1 = L_2;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateTipPosition(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateTipPosition_m5B978AF1E9F2A7853F0FEFF4009C60C2F1A323A0 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (hand.GetJointPoseFromWrist(_tipId, out Pose pose))
		RuntimeObject* L_0 = ___0_hand;
		int32_t L_1 = __this->____tipId_1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(12 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPoseFromWrist(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// TipPosition = pose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480_inline(__this, L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::UpdateIsPinching(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_UpdateIsPinching_mF6AC20AE2029F842D68FFCCBD38F00E8CDDFD138 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// UpdateTipPosition(hand);
		RuntimeObject* L_0 = ___0_hand;
		FingerPinchData_UpdateTipPosition_m5B978AF1E9F2A7853F0FEFF4009C60C2F1A323A0(__this, L_0, NULL);
		// PinchStrength = hand.GetFingerPinchStrength(_finger);
		RuntimeObject* L_1 = ___0_hand;
		int32_t L_2 = __this->____finger_0;
		NullCheck(L_1);
		float L_3;
		L_3 = InterfaceFuncInvoker1< float, int32_t >::Invoke(16 /* System.Single Oculus.Interaction.Input.IHand::GetFingerPinchStrength(Oculus.Interaction.Input.HandFinger) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_1, L_2);
		__this->___PinchStrength_2 = L_3;
		// bool isPinching = hand.GetFingerIsPinching(_finger);
		RuntimeObject* L_4 = ___0_hand;
		int32_t L_5 = __this->____finger_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(5 /* System.Boolean Oculus.Interaction.Input.IHand::GetFingerIsPinching(Oculus.Interaction.Input.HandFinger) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = L_6;
		// if(isPinching != IsPinching)
		bool L_7 = V_0;
		bool L_8 = __this->___IsPinching_3;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0036;
		}
	}
	{
		// IsPinchingChanged = true;
		FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline(__this, (bool)1, NULL);
	}

IL_0036:
	{
		// IsPinching = isPinching;
		bool L_9 = V_0;
		__this->___IsPinching_3 = L_9;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData::ClearState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchData_ClearState_mFC11EF56BB84EB4D7503C13F1C1385AD52336105 (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// IsPinchingChanged = false;
		FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchInjector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchInjector_Awake_mE42E9730403F68A77F421386947726484AB28507 (FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handGrabAPI.InjectOptionalFingerPinchAPI(new FingerRawPinchAPI());
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_0 = __this->____handGrabAPI_4;
		FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* L_1 = (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1*)il2cpp_codegen_object_new(FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3(L_1, NULL);
		NullCheck(L_0);
		HandGrabAPI_InjectOptionalFingerPinchAPI_mB3FDF8702B1D8E3EE71C6D885264D546BA92F599_inline(L_0, L_1, NULL);
		// _handGrabAPI.InjectOptionalFingerGrabAPI(new FingerRawPinchAPI());
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_2 = __this->____handGrabAPI_4;
		FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1* L_3 = (FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1*)il2cpp_codegen_object_new(FingerRawPinchAPI_t1AD298888438539EB75E75FF0E4F46751B7FBFF1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FingerRawPinchAPI__ctor_m805D09118C5FE7C1300350C73BA36B98CE1528B3(L_3, NULL);
		NullCheck(L_2);
		HandGrabAPI_InjectOptionalFingerGrabAPI_m7AF1CEAF142B1414BB8F734FC495D1CA3ACBD1DE_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.FingerRawPinchInjector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerRawPinchInjector__ctor_m9A4650E88AD94CBF1BEFC5AB13E3D8718985C321 (FingerRawPinchInjector_t5592589F13477BF139F3F637F378D9F6986AB176* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::get_UnselectMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) 
{
	{
		// public FingerUnselectMode UnselectMode => _unselectMode;
		int32_t L_0 = __this->____unselectMode_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Oculus.Interaction.GrabAPI.GrabbingRule::get_SelectsWithOptionals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) 
{
	{
		// return _thumbRequirement != FingerRequirement.Required
		//     && _indexRequirement != FingerRequirement.Required
		//     && _middleRequirement != FingerRequirement.Required
		//     && _ringRequirement != FingerRequirement.Required
		//     && _pinkyRequirement != FingerRequirement.Required;
		int32_t L_0 = __this->____thumbRequirement_0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = __this->____indexRequirement_1;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_2 = __this->____middleRequirement_2;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3 = __this->____ringRequirement_3;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = __this->____pinkyRequirement_4;
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0031:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	bool _returnValue;
	_returnValue = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749(_thisAdjusted, method);
	return _returnValue;
}
// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::get_Item(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___0_fingerID, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_fingerID;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return _thumbRequirement;
		int32_t L_1 = __this->____thumbRequirement_0;
		return L_1;
	}

IL_0023:
	{
		// case HandFinger.Index: return _indexRequirement;
		int32_t L_2 = __this->____indexRequirement_1;
		return L_2;
	}

IL_002a:
	{
		// case HandFinger.Middle: return _middleRequirement;
		int32_t L_3 = __this->____middleRequirement_2;
		return L_3;
	}

IL_0031:
	{
		// case HandFinger.Ring: return _ringRequirement;
		int32_t L_4 = __this->____ringRequirement_3;
		return L_4;
	}

IL_0038:
	{
		// case HandFinger.Pinky: return _pinkyRequirement;
		int32_t L_5 = __this->____pinkyRequirement_4;
		return L_5;
	}

IL_003f:
	{
		// return FingerRequirement.Ignored;
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C  int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_fingerID, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC(_thisAdjusted, ___0_fingerID, method);
	return _returnValue;
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::set_Item(Oculus.Interaction.Input.HandFinger,Oculus.Interaction.GrabAPI.FingerRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___0_fingerID, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_fingerID;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_003b;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		// case HandFinger.Thumb: _thumbRequirement = value; break;
		int32_t L_1 = ___1_value;
		__this->____thumbRequirement_0 = L_1;
		// case HandFinger.Thumb: _thumbRequirement = value; break;
		return;
	}

IL_0023:
	{
		// case HandFinger.Index: _indexRequirement = value; break;
		int32_t L_2 = ___1_value;
		__this->____indexRequirement_1 = L_2;
		// case HandFinger.Index: _indexRequirement = value; break;
		return;
	}

IL_002b:
	{
		// case HandFinger.Middle: _middleRequirement = value; break;
		int32_t L_3 = ___1_value;
		__this->____middleRequirement_2 = L_3;
		// case HandFinger.Middle: _middleRequirement = value; break;
		return;
	}

IL_0033:
	{
		// case HandFinger.Ring: _ringRequirement = value; break;
		int32_t L_4 = ___1_value;
		__this->____ringRequirement_3 = L_4;
		// case HandFinger.Ring: _ringRequirement = value; break;
		return;
	}

IL_003b:
	{
		// case HandFinger.Pinky: _pinkyRequirement = value; break;
		int32_t L_5 = ___1_value;
		__this->____pinkyRequirement_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08_AdjustorThunk (RuntimeObject* __this, int32_t ___0_fingerID, int32_t ___1_value, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	GrabbingRule_set_Item_m170315382876BD6460CD190359386202E4840F08(_thisAdjusted, ___0_fingerID, ___1_value, method);
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::StripIrrelevant(Oculus.Interaction.Input.HandFingerFlags&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t* ___0_fingerFlags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// if (this[finger] == FingerRequirement.Ignored)
		int32_t L_1 = V_1;
		int32_t L_2;
		L_2 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// fingerFlags = (HandFingerFlags)((int)fingerFlags & ~(1 << i));
		int32_t* L_3 = ___0_fingerFlags;
		int32_t* L_4 = ___0_fingerFlags;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_5&((~((int32_t)(1<<((int32_t)(L_6&((int32_t)31)))))))));
	}

IL_001b:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_fingerFlags, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	GrabbingRule_StripIrrelevant_m160B28EF238610D089F85F8CEF30B7E4DDB4B39A(_thisAdjusted, ___0_fingerFlags, method);
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::.ctor(Oculus.Interaction.Input.HandFingerFlags,Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3 (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___0_mask, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___1_otherRule, const RuntimeMethod* method) 
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_0;
	memset((&V_0), 0, sizeof(V_0));
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B2_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B3_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B5_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B6_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B8_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B9_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B11_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B12_1 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B14_0 = NULL;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* G_B15_1 = NULL;
	{
		// _thumbRequirement = (mask & HandFingerFlags.Thumb) != 0 ?
		//     otherRule._thumbRequirement : FingerRequirement.Ignored;
		int32_t L_0 = ___0_mask;
		G_B1_0 = __this;
		if (((int32_t)((int32_t)L_0&1)))
		{
			G_B2_0 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_0009:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_1 = ___1_otherRule;
		int32_t L_2 = L_1->____thumbRequirement_0;
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->____thumbRequirement_0 = G_B3_0;
		// _indexRequirement = (mask & HandFingerFlags.Index) != 0 ?
		//     otherRule._indexRequirement : FingerRequirement.Ignored;
		int32_t L_3 = ___0_mask;
		G_B4_0 = __this;
		if (((int32_t)((int32_t)L_3&2)))
		{
			G_B5_0 = __this;
			goto IL_001d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0023;
	}

IL_001d:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___1_otherRule;
		int32_t L_5 = L_4->____indexRequirement_1;
		G_B6_0 = ((int32_t)(L_5));
		G_B6_1 = G_B5_0;
	}

IL_0023:
	{
		G_B6_1->____indexRequirement_1 = G_B6_0;
		// _middleRequirement = (mask & HandFingerFlags.Middle) != 0 ?
		//     otherRule._middleRequirement : FingerRequirement.Ignored;
		int32_t L_6 = ___0_mask;
		G_B7_0 = __this;
		if (((int32_t)((int32_t)L_6&4)))
		{
			G_B8_0 = __this;
			goto IL_0031;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0037;
	}

IL_0031:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_7 = ___1_otherRule;
		int32_t L_8 = L_7->____middleRequirement_2;
		G_B9_0 = ((int32_t)(L_8));
		G_B9_1 = G_B8_0;
	}

IL_0037:
	{
		G_B9_1->____middleRequirement_2 = G_B9_0;
		// _ringRequirement = (mask & HandFingerFlags.Ring) != 0 ?
		//     otherRule._ringRequirement : FingerRequirement.Ignored;
		int32_t L_9 = ___0_mask;
		G_B10_0 = __this;
		if (((int32_t)((int32_t)L_9&8)))
		{
			G_B11_0 = __this;
			goto IL_0045;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_004b;
	}

IL_0045:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_10 = ___1_otherRule;
		int32_t L_11 = L_10->____ringRequirement_3;
		G_B12_0 = ((int32_t)(L_11));
		G_B12_1 = G_B11_0;
	}

IL_004b:
	{
		G_B12_1->____ringRequirement_3 = G_B12_0;
		// _pinkyRequirement = (mask & HandFingerFlags.Pinky) != 0 ?
		//     otherRule._pinkyRequirement : FingerRequirement.Ignored;
		int32_t L_12 = ___0_mask;
		G_B13_0 = __this;
		if (((int32_t)((int32_t)L_12&((int32_t)16))))
		{
			G_B14_0 = __this;
			goto IL_005a;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0060;
	}

IL_005a:
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_13 = ___1_otherRule;
		int32_t L_14 = L_13->____pinkyRequirement_4;
		G_B15_0 = ((int32_t)(L_14));
		G_B15_1 = G_B14_0;
	}

IL_0060:
	{
		G_B15_1->____pinkyRequirement_4 = G_B15_0;
		// _unselectMode = otherRule.UnselectMode;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_15 = ___1_otherRule;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_16 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_15);
		V_0 = L_16;
		int32_t L_17;
		L_17 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_0), NULL);
		__this->____unselectMode_5 = L_17;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_mask, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___1_otherRule, const RuntimeMethod* method)
{
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*>(__this + _offset);
	GrabbingRule__ctor_m1A7CF0E024E02E1A7BA82B8FC6390AD4E8D59AF3(_thisAdjusted, ___0_mask, ___1_otherRule, method);
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_DefaultPalmRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPalmRule_m8FCBDCDA35A2173E1A3DA4857E4B166AF4BDC451 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule DefaultPalmRule { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPalmRuleU3Ek__BackingField_6;
		return L_0;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_DefaultPinchRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_DefaultPinchRule_m9198F4326C7FC2A5BDA52AAF99C203C436F0FF6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule DefaultPinchRule { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPinchRuleU3Ek__BackingField_7;
		return L_0;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::get_FullGrab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D GrabbingRule_get_FullGrab_mB8C1AA008EDE7310176CFC62D7C6336CE8F116AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GrabbingRule FullGrab { get; } = new GrabbingRule()
		il2cpp_codegen_runtime_class_init_inline(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CFullGrabU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.GrabbingRule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabbingRule__cctor_mE4504F78C1653765BED2857B5F05A6F72959354D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static GrabbingRule DefaultPalmRule { get; } = new GrabbingRule()
		// {
		//     _thumbRequirement = FingerRequirement.Optional,
		//     _indexRequirement = FingerRequirement.Required,
		//     _middleRequirement = FingerRequirement.Required,
		//     _ringRequirement = FingerRequirement.Required,
		//     _pinkyRequirement = FingerRequirement.Optional,
		// 
		//     _unselectMode = FingerUnselectMode.AllReleased
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D));
		(&V_0)->____thumbRequirement_0 = 1;
		(&V_0)->____indexRequirement_1 = 2;
		(&V_0)->____middleRequirement_2 = 2;
		(&V_0)->____ringRequirement_3 = 2;
		(&V_0)->____pinkyRequirement_4 = 1;
		(&V_0)->____unselectMode_5 = 0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = V_0;
		((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPalmRuleU3Ek__BackingField_6 = L_0;
		// public static GrabbingRule DefaultPinchRule { get; } = new GrabbingRule()
		// {
		//     _thumbRequirement = FingerRequirement.Optional,
		//     _indexRequirement = FingerRequirement.Optional,
		//     _middleRequirement = FingerRequirement.Optional,
		//     _ringRequirement = FingerRequirement.Ignored,
		//     _pinkyRequirement = FingerRequirement.Ignored,
		// 
		//     _unselectMode = FingerUnselectMode.AllReleased
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D));
		(&V_0)->____thumbRequirement_0 = 1;
		(&V_0)->____indexRequirement_1 = 1;
		(&V_0)->____middleRequirement_2 = 1;
		(&V_0)->____ringRequirement_3 = 0;
		(&V_0)->____pinkyRequirement_4 = 0;
		(&V_0)->____unselectMode_5 = 0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = V_0;
		((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CDefaultPinchRuleU3Ek__BackingField_7 = L_1;
		// public static GrabbingRule FullGrab { get; } = new GrabbingRule()
		// {
		//     _thumbRequirement = FingerRequirement.Required,
		//     _indexRequirement = FingerRequirement.Required,
		//     _middleRequirement = FingerRequirement.Required,
		//     _ringRequirement = FingerRequirement.Required,
		//     _pinkyRequirement = FingerRequirement.Required,
		// 
		//     _unselectMode = FingerUnselectMode.AllReleased
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D));
		(&V_0)->____thumbRequirement_0 = 2;
		(&V_0)->____indexRequirement_1 = 2;
		(&V_0)->____middleRequirement_2 = 2;
		(&V_0)->____ringRequirement_3 = 2;
		(&V_0)->____pinkyRequirement_4 = 2;
		(&V_0)->____unselectMode_5 = 0;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_2 = V_0;
		((GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields*)il2cpp_codegen_static_fields_for(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_il2cpp_TypeInfo_var))->___U3CFullGrabU3Ek__BackingField_8 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::set_Hand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.Input.IHmd Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hmd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hmd_m960DB0764735A16B21AAE5166B84572D24129D2C (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHmd Hmd { get; private set; } = null;
		RuntimeObject* L_0 = __this->___U3CHmdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::set_Hmd(Oculus.Interaction.Input.IHmd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hmd_m1BF086AD379F84F0FE525D96EE547C68F376CE82 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IHmd Hmd { get; private set; } = null;
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHmdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHmdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_Awake_mA4F67BA8DB7E8EAB9A205D8FC1A017A6D65CC6AF (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hand = _hand as IHand;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____hand_4;
		HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var)), NULL);
		// Hmd = _hmd as IHmd;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____hmd_6;
		HandGrabAPI_set_Hmd_m1BF086AD379F84F0FE525D96EE547C68F376CE82_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_Start_m4DEF80E56D8B47BA50FC442F4AFA60A073341168 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_10);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// if (_fingerPinchGrabAPI == null)
		RuntimeObject* L_1 = __this->____fingerPinchGrabAPI_8;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _fingerPinchGrabAPI = new FingerPinchGrabAPI(Hmd);
		RuntimeObject* L_2;
		L_2 = HandGrabAPI_get_Hmd_m960DB0764735A16B21AAE5166B84572D24129D2C_inline(__this, NULL);
		FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832* L_3 = (FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832*)il2cpp_codegen_object_new(FingerPinchGrabAPI_tD16315C64A0A6FAC59208A7A3F97C46D22499832_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FingerPinchGrabAPI__ctor_m12794700AD5FC57918BC30AF963A44F6C75F8539(L_3, L_2, NULL);
		__this->____fingerPinchGrabAPI_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPinchGrabAPI_8), (void*)L_3);
	}

IL_0026:
	{
		// if (_fingerPalmGrabAPI == null)
		RuntimeObject* L_4 = __this->____fingerPalmGrabAPI_9;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		// _fingerPalmGrabAPI = new FingerPalmGrabAPI();
		FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327* L_5 = (FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327*)il2cpp_codegen_object_new(FingerPalmGrabAPI_t344EB3964A82E1E0B1B6968D8BCA70100B512327_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FingerPalmGrabAPI__ctor_mC033897D9E80D5FC6BF9BE712495460B91A7CD99(L_5, NULL);
		__this->____fingerPalmGrabAPI_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPalmGrabAPI_9), (void*)L_5);
	}

IL_0039:
	{
		// this.EndStart(ref _started);
		bool* L_6 = (&__this->____started_10);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_OnEnable_mE03829B2B59CD7511F1AACB759F0B4330EF4A073 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_10;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Hand.WhenHandUpdated += OnHandUpdated;
		RuntimeObject* L_1;
		L_1 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(20 /* System.Void Oculus.Interaction.Input.IHand::add_WhenHandUpdated(System.Action) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_OnDisable_m52698327EE64FBB5EBD0A006E1C55D6484705738 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_10;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Hand.WhenHandUpdated -= OnHandUpdated;
		RuntimeObject* L_1;
		L_1 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(21 /* System.Void Oculus.Interaction.Input.IHand::remove_WhenHandUpdated(System.Action) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::OnHandUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_OnHandUpdated_m6E4AF640C0462C4C6C5F432757D377F4CAD9F84A (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fingerPinchGrabAPI.Update(Hand);
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_8;
		RuntimeObject* L_1;
		L_1 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Oculus.Interaction.IFingerAPI::Update(Oculus.Interaction.Input.IHand) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_0, L_1);
		// _fingerPalmGrabAPI.Update(Hand);
		RuntimeObject* L_2 = __this->____fingerPalmGrabAPI_9;
		RuntimeObject* L_3;
		L_3 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Oculus.Interaction.IFingerAPI::Update(Oculus.Interaction.Input.IHand) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPinchGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// return HandGrabbingFingers(_fingerPinchGrabAPI);
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_8;
		int32_t L_1;
		L_1 = HandGrabAPI_HandGrabbingFingers_mD8D207DB733885E2A0DC02F75D0A11C783403488(__this, L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandPalmGrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// return HandGrabbingFingers(_fingerPalmGrabAPI);
		RuntimeObject* L_0 = __this->____fingerPalmGrabAPI_9;
		int32_t L_1;
		L_1 = HandGrabAPI_HandGrabbingFingers_mD8D207DB733885E2A0DC02F75D0A11C783403488(__this, L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.GrabAPI.HandGrabAPI::HandGrabbingFingers(Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabAPI_HandGrabbingFingers_mD8D207DB733885E2A0DC02F75D0A11C783403488 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerAPI, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// HandFingerFlags grabbingFingers = HandFingerFlags.None;
		V_0 = 0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_1;
		V_2 = L_0;
		// bool isGrabbing = fingerAPI.GetFingerIsGrabbing(finger);
		RuntimeObject* L_1 = ___0_fingerAPI;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_1, L_2);
		// if (isGrabbing)
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// grabbingFingers |= (HandFingerFlags)(1 << i);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)(1<<((int32_t)(L_5&((int32_t)31)))))));
	}

IL_001a:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_0006;
		}
	}
	{
		// return grabbingFingers;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandPinchGrabbing(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandPinchGrabbing_m908BE2D65BE012C1D7ECB5194AB530254BB748EC (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// HandFingerFlags pinchFingers = HandPinchGrabbingFingers();
		int32_t L_0;
		L_0 = HandGrabAPI_HandPinchGrabbingFingers_m0C39BC9CA1B701B249975739A776C78FF399F4B2(__this, NULL);
		V_0 = L_0;
		// return IsSustainingGrab(fingers, pinchFingers);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_1 = ___0_fingers;
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandPalmGrabbing(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandPalmGrabbing_m21D6E3381C996B1F918F1A6E75038FDDC4C58BED (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// HandFingerFlags palmFingers = HandPalmGrabbingFingers();
		int32_t L_0;
		L_0 = HandGrabAPI_HandPalmGrabbingFingers_m0D9B276FA470653292D47DF7D3BE5D6595407DEC(__this, NULL);
		V_0 = L_0;
		// return IsSustainingGrab(fingers, palmFingers);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_1 = ___0_fingers;
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsSustainingGrab(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsSustainingGrab_m3D572C621F6A5DA88F50AAC29E2E3D0E62BA6798 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, int32_t ___1_grabbingFingers, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// bool anyHolding = false;
		V_0 = (bool)0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_1 = 0;
		goto IL_007c;
	}

IL_0006:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_1;
		V_2 = L_0;
		// HandFingerFlags fingerFlag = (HandFingerFlags)(1 << i);
		int32_t L_1 = V_1;
		V_3 = ((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))));
		// bool isFingerGrabbing = (grabbingFingers & fingerFlag) != 0;
		int32_t L_2 = ___1_grabbingFingers;
		int32_t L_3 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)L_3))) <= ((uint32_t)0)))? 1 : 0);
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_5 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_4);
		V_5 = L_5;
		int32_t L_6 = V_2;
		int32_t L_7;
		L_7 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_5), L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		// anyHolding |= isFingerGrabbing;
		bool L_8 = V_0;
		bool L_9 = V_4;
		V_0 = (bool)((int32_t)((int32_t)L_8|(int32_t)L_9));
		// if (fingers.UnselectMode == FingerUnselectMode.AnyReleased
		//     && !isFingerGrabbing)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_10 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_11 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_10);
		V_5 = L_11;
		int32_t L_12;
		L_12 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_5), NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (fingers.UnselectMode == FingerUnselectMode.AllReleased
		//     && isFingerGrabbing)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_14 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_15 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_14);
		V_5 = L_15;
		int32_t L_16;
		L_16 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_5), NULL);
		bool L_17 = V_4;
		if (!((int32_t)(((((int32_t)L_16) == ((int32_t)0))? 1 : 0)&(int32_t)L_17)))
		{
			goto IL_0078;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0060:
	{
		// else if (fingers[finger] == FingerRequirement.Optional)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_18 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_19 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_18);
		V_5 = L_19;
		int32_t L_20 = V_2;
		int32_t L_21;
		L_21 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_5), L_20, NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// anyHolding |= isFingerGrabbing;
		bool L_22 = V_0;
		bool L_23 = V_4;
		V_0 = (bool)((int32_t)((int32_t)L_22|(int32_t)L_23));
	}

IL_0078:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007c:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)5)))
		{
			goto IL_0006;
		}
	}
	{
		// return anyHolding;
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectPinchFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectPinchFingersChanged_mDEE9E9F826A9D2CB0C41301B9AFC1E91F9897722 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, const RuntimeMethod* method) 
{
	{
		// return IsHandSelectFingersChanged(fingers, _fingerPinchGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		RuntimeObject* L_1 = __this->____fingerPinchGrabAPI_8;
		bool L_2;
		L_2 = HandGrabAPI_IsHandSelectFingersChanged_mD2DED019EC45F71A15C9E469661E83BBC23AB7E1(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectPalmFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectPalmFingersChanged_mEE727D93CA46FE21A81048E57361B384DD1D1F6D (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, const RuntimeMethod* method) 
{
	{
		// return IsHandSelectFingersChanged(fingers, _fingerPalmGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		RuntimeObject* L_1 = __this->____fingerPalmGrabAPI_9;
		bool L_2;
		L_2 = HandGrabAPI_IsHandSelectFingersChanged_mD2DED019EC45F71A15C9E469661E83BBC23AB7E1(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectPinchFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectPinchFingersChanged_mE1C455D9B209E1A3B1542B3BB66B4C69C1054A70 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, const RuntimeMethod* method) 
{
	{
		// return IsHandUnselectFingersChanged(fingers, _fingerPinchGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		RuntimeObject* L_1 = __this->____fingerPinchGrabAPI_8;
		bool L_2;
		L_2 = HandGrabAPI_IsHandUnselectFingersChanged_mF9AF499104B2B1A9B15646C8929BADC3D91D5067(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectPalmFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectPalmFingersChanged_m6FAE8A160394C24EB8CF18A3D8F412D0ECF49E29 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, const RuntimeMethod* method) 
{
	{
		// return IsHandUnselectFingersChanged(fingers, _fingerPalmGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		RuntimeObject* L_1 = __this->____fingerPalmGrabAPI_9;
		bool L_2;
		L_2 = HandGrabAPI_IsHandUnselectFingersChanged_mF9AF499104B2B1A9B15646C8929BADC3D91D5067(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandSelectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandSelectFingersChanged_mD2DED019EC45F71A15C9E469661E83BBC23AB7E1 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, RuntimeObject* ___1_fingerAPI, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// bool selectsWithOptionals = fingers.SelectsWithOptionals;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_0);
		V_2 = L_1;
		bool L_2;
		L_2 = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749((&V_2), NULL);
		V_0 = L_2;
		// bool anyFingerBeganGrabbing = false;
		V_1 = (bool)0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_3 = 0;
		goto IL_006d;
	}

IL_0015:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_3 = V_3;
		V_4 = L_3;
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_5 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_4);
		V_2 = L_5;
		int32_t L_6 = V_4;
		int32_t L_7;
		L_7 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_2), L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		// if (!fingerAPI.GetFingerIsGrabbing(finger))
		RuntimeObject* L_8 = ___1_fingerAPI;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_8, L_9);
		if (L_10)
		{
			goto IL_0037;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, true))
		RuntimeObject* L_11 = ___1_fingerAPI;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		bool L_13;
		L_13 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_11, L_12, (bool)1);
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// anyFingerBeganGrabbing = true;
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_0046:
	{
		// else if (selectsWithOptionals
		//     && fingers[finger] == FingerRequirement.Optional)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_15 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_16 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_15);
		V_2 = L_16;
		int32_t L_17 = V_4;
		int32_t L_18;
		L_18 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_2), L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, true))
		RuntimeObject* L_19 = ___1_fingerAPI;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_19, L_20, (bool)1);
		if (!L_21)
		{
			goto IL_0069;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0069:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)5)))
		{
			goto IL_0015;
		}
	}
	{
		// return anyFingerBeganGrabbing;
		bool L_24 = V_1;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::IsHandUnselectFingersChanged(Oculus.Interaction.GrabAPI.GrabbingRule&,Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabAPI_IsHandUnselectFingersChanged_mF9AF499104B2B1A9B15646C8929BADC3D91D5067 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, RuntimeObject* ___1_fingerAPI, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// bool isAnyFingerGrabbing = false;
		V_0 = (bool)0;
		// bool anyFingerStoppedGrabbing = false;
		V_1 = (bool)0;
		// bool selectsWithOptionals = fingers.SelectsWithOptionals;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_0);
		V_3 = L_1;
		bool L_2;
		L_2 = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749((&V_3), NULL);
		V_2 = L_2;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_4 = 0;
		goto IL_00ac;
	}

IL_001b:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_3 = V_4;
		V_5 = L_3;
		// if (fingers[finger] == FingerRequirement.Ignored)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_4 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_5 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_4);
		V_3 = L_5;
		int32_t L_6 = V_5;
		int32_t L_7;
		L_7 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_6, NULL);
		if (!L_7)
		{
			goto IL_00a6;
		}
	}
	{
		// isAnyFingerGrabbing |= fingerAPI.GetFingerIsGrabbing(finger);
		bool L_8 = V_0;
		RuntimeObject* L_9 = ___1_fingerAPI;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_9, L_10);
		V_0 = (bool)((int32_t)((int32_t)L_8|(int32_t)L_11));
		// if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_12 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_13 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_12);
		V_3 = L_13;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, false))
		RuntimeObject* L_16 = ___1_fingerAPI;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_16, L_17, (bool)0);
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// anyFingerStoppedGrabbing = true;
		V_1 = (bool)1;
		// if (fingers.UnselectMode == FingerUnselectMode.AnyReleased)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_19 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_20 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_19);
		V_3 = L_20;
		int32_t L_21;
		L_21 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_3), NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_006f:
	{
		// else if (fingers[finger] == FingerRequirement.Optional)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_22 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_23 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_22);
		V_3 = L_23;
		int32_t L_24 = V_5;
		int32_t L_25;
		L_25 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (fingerAPI.GetFingerIsGrabbingChanged(finger, false))
		RuntimeObject* L_26 = ___1_fingerAPI;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, bool >::Invoke(1 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger,System.Boolean) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_26, L_27, (bool)0);
		if (!L_28)
		{
			goto IL_00a6;
		}
	}
	{
		// anyFingerStoppedGrabbing = true;
		V_1 = (bool)1;
		// if (fingers.UnselectMode == FingerUnselectMode.AnyReleased
		//     && selectsWithOptionals)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_29 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_30 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_29);
		V_3 = L_30;
		int32_t L_31;
		L_31 = GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline((&V_3), NULL);
		bool L_32 = V_2;
		if (!((int32_t)(((((int32_t)L_31) == ((int32_t)1))? 1 : 0)&(int32_t)L_32)))
		{
			goto IL_00a6;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00a6:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ac:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)5)))
		{
			goto IL_001b;
		}
	}
	{
		// return !isAnyFingerGrabbing && anyFingerStoppedGrabbing;
		bool L_35 = V_0;
		bool L_36 = V_1;
		return (bool)((int32_t)(((((int32_t)L_35) == ((int32_t)0))? 1 : 0)&(int32_t)L_36));
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::GetPinchCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_GetPinchCenter_m661D263F3C12107ECF5B7EC45558E60DFC55AF1D (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WristOffsetToWorldPoint(_fingerPinchGrabAPI.GetCenterOffset());
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_8;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(3 /* UnityEngine.Vector3 Oculus.Interaction.IFingerAPI::GetCenterOffset() */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F(__this, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::GetPalmCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_GetPalmCenter_m0519058D80C1672222960787EF1C5014AF4CEA2E (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WristOffsetToWorldPoint(_fingerPalmGrabAPI.GetCenterOffset());
		RuntimeObject* L_0 = __this->____fingerPalmGrabAPI_9;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(3 /* UnityEngine.Vector3 Oculus.Interaction.IFingerAPI::GetCenterOffset() */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F(__this, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.GrabAPI.HandGrabAPI::WristOffsetToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandGrabAPI_WristOffsetToWorldPoint_mBB6C13E0BA2C62676646899435F3F3AD0201681F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Hand.GetJointPose(HandJointId.HandWristRoot, out Pose wristPose))
		RuntimeObject* L_0;
		L_0 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(9 /* System.Boolean Oculus.Interaction.Input.IHand::GetJointPose(Oculus.Interaction.Input.HandJointId,UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_0, 0, (&V_0));
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_offset;
		return L_2;
	}

IL_0012:
	{
		// return wristPose.position + wristPose.rotation * offset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_8, NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandPinchScore(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandPinchScore_mE8DB453C958D4E3207F5A3388F731DDDEB888A2F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, bool ___1_includePinching, const RuntimeMethod* method) 
{
	{
		// return GetHandGrabScore(fingers, includePinching, _fingerPinchGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		bool L_1 = ___1_includePinching;
		RuntimeObject* L_2 = __this->____fingerPinchGrabAPI_8;
		float L_3;
		L_3 = HandGrabAPI_GetHandGrabScore_m6FBB0F4A7F87F3A23C091A11AA5C784075EBCFCD(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandPalmScore(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandPalmScore_mA9676613CAA392F13EBA56FCA5AFD38172A50C6B (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, bool ___1_includeGrabbing, const RuntimeMethod* method) 
{
	{
		// return GetHandGrabScore(fingers, includeGrabbing, _fingerPalmGrabAPI);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		bool L_1 = ___1_includeGrabbing;
		RuntimeObject* L_2 = __this->____fingerPalmGrabAPI_9;
		float L_3;
		L_3 = HandGrabAPI_GetHandGrabScore_m6FBB0F4A7F87F3A23C091A11AA5C784075EBCFCD(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetFingerPinchStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetFingerPinchStrength_mC78A52FED9A699CB1238902F100A8CCA91608C51 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _fingerPinchGrabAPI.GetFingerGrabScore(finger);
		RuntimeObject* L_0 = __this->____fingerPinchGrabAPI_8;
		int32_t L_1 = ___0_finger;
		NullCheck(L_0);
		float L_2;
		L_2 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.IFingerAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetFingerPalmStrength(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetFingerPalmStrength_mEBE3EA5D0A30C0F731EEDC921EE68CF9317A8136 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _fingerPalmGrabAPI.GetFingerGrabScore(finger);
		RuntimeObject* L_0 = __this->____fingerPalmGrabAPI_9;
		int32_t L_1 = ___0_finger;
		NullCheck(L_0);
		float L_2;
		L_2 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.IFingerAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Single Oculus.Interaction.GrabAPI.HandGrabAPI::GetHandGrabScore(Oculus.Interaction.GrabAPI.GrabbingRule&,System.Boolean,Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabAPI_GetHandGrabScore_m6FBB0F4A7F87F3A23C091A11AA5C784075EBCFCD (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* ___0_fingers, bool ___1_includeGrabbing, RuntimeObject* ___2_fingerAPI, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// float requiredMin = 1.0f;
		V_0 = (1.0f);
		// float optionalMax = 0f;
		V_1 = (0.0f);
		// bool usesOptionals = fingers.SelectsWithOptionals;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_0 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_1 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_0);
		V_3 = L_1;
		bool L_2;
		L_2 = GrabbingRule_get_SelectsWithOptionals_m93735F7E62317ED4A0FF86D0F76C4CC487901749((&V_3), NULL);
		V_2 = L_2;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_4 = 0;
		goto IL_008f;
	}

IL_0020:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_3 = V_4;
		V_5 = L_3;
		// if (!includeGrabbing && fingerAPI.GetFingerIsGrabbing((HandFinger)i))
		bool L_4 = ___1_includeGrabbing;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___2_fingerAPI;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Oculus.Interaction.IFingerAPI::GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_5, L_6);
		if (L_7)
		{
			goto IL_0089;
		}
	}

IL_0031:
	{
		// if (fingers[finger] == FingerRequirement.Ignored)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_8 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_9 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_8);
		V_3 = L_9;
		int32_t L_10 = V_5;
		int32_t L_11;
		L_11 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_10, NULL);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// if (fingers[finger] == FingerRequirement.Optional)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_12 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_13 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_12);
		V_3 = L_13;
		int32_t L_14 = V_5;
		int32_t L_15;
		L_15 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0067;
		}
	}
	{
		// optionalMax = Mathf.Max(optionalMax, fingerAPI.GetFingerGrabScore(finger));
		float L_16 = V_1;
		RuntimeObject* L_17 = ___2_fingerAPI;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		float L_19;
		L_19 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.IFingerAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_17, L_18);
		float L_20;
		L_20 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_16, L_19, NULL);
		V_1 = L_20;
		goto IL_0089;
	}

IL_0067:
	{
		// else if (fingers[finger] == FingerRequirement.Required)
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* L_21 = ___0_fingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_22 = (*(GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D*)L_21);
		V_3 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_3), L_23, NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_0089;
		}
	}
	{
		// requiredMin = Mathf.Min(requiredMin, fingerAPI.GetFingerGrabScore(finger));
		float L_25 = V_0;
		RuntimeObject* L_26 = ___2_fingerAPI;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		float L_28;
		L_28 = InterfaceFuncInvoker1< float, int32_t >::Invoke(2 /* System.Single Oculus.Interaction.IFingerAPI::GetFingerGrabScore(Oculus.Interaction.Input.HandFinger) */, IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209_il2cpp_TypeInfo_var, L_26, L_27);
		float L_29;
		L_29 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_25, L_28, NULL);
		V_0 = L_29;
	}

IL_0089:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_008f:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		// return usesOptionals ? optionalMax : requiredMin;
		bool L_32 = V_2;
		if (L_32)
		{
			goto IL_0099;
		}
	}
	{
		float L_33 = V_0;
		return L_33;
	}

IL_0099:
	{
		float L_34 = V_1;
		return L_34;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectAllHandGrabAPI(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectAllHandGrabAPI_m2916A5FA3D9B5E3C2A7BCD5B9FC5B7767864FE0A (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	{
		// InjectHand(hand);
		RuntimeObject* L_0 = ___0_hand;
		HandGrabAPI_InjectHand_m8D8F7F371C2A3E16C0C80D69E1052555FE28C17F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectHand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectHand_m8D8F7F371C2A3E16C0C80D69E1052555FE28C17F (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_hand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hand = hand as MonoBehaviour;
		RuntimeObject* L_0 = ___0_hand;
		__this->____hand_4 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hand_4), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// Hand = hand;
		RuntimeObject* L_1 = ___0_hand;
		HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalHmd(Oculus.Interaction.Input.IHmd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalHmd_m9D6638B76823CD8A78B66337A8B09DDD1BF944EE (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_hmd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hmd = hmd;
		RuntimeObject* L_0 = ___0_hmd;
		HandGrabAPI_set_Hmd_m1BF086AD379F84F0FE525D96EE547C68F376CE82_inline(__this, L_0, NULL);
		// _hmd = hmd as MonoBehaviour;
		RuntimeObject* L_1 = ___0_hmd;
		__this->____hmd_6 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hmd_6), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerPinchAPI(Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerPinchAPI_mB3FDF8702B1D8E3EE71C6D885264D546BA92F599 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerPinchAPI, const RuntimeMethod* method) 
{
	{
		// _fingerPinchGrabAPI = fingerPinchAPI;
		RuntimeObject* L_0 = ___0_fingerPinchAPI;
		__this->____fingerPinchGrabAPI_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPinchGrabAPI_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::InjectOptionalFingerGrabAPI(Oculus.Interaction.IFingerAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerGrabAPI_m7AF1CEAF142B1414BB8F734FC495D1CA3ACBD1DE (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerGrabAPI, const RuntimeMethod* method) 
{
	{
		// _fingerPalmGrabAPI = fingerGrabAPI;
		RuntimeObject* L_0 = ___0_fingerGrabAPI;
		__this->____fingerPalmGrabAPI_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPalmGrabAPI_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.GrabAPI.HandGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabAPI__ctor_m029469D1D2A5CE1AE394167404689C4F0D217009 (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_Start_m3D81B491EECD04C2BAAECCD0B204D0C72C06F310 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904(__this, NULL);
		// _lineRenderer.positionCount = NumLinePoints;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_15;
		int32_t L_1;
		L_1 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InteractableSet(Oculus.Interaction.IRelativeToRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InteractableSet_m6FB782890204822A550178DAC1F423E48DC55C7B (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, RuntimeObject* ___0_interactable, const RuntimeMethod* method) 
{
	{
		// base.InteractableSet(interactable);
		RuntimeObject* L_0 = ___0_interactable;
		DistantInteractionLineVisual_InteractableSet_m99688CB11A1A7993613DB80D70781A2151551F71(__this, L_0, NULL);
		// _lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->____lineRenderer_15;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InteractableUnset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InteractableUnset_m30D1BC1425A5E7791B19F19E103301CD21D14A52 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, const RuntimeMethod* method) 
{
	{
		// base.InteractableUnset();
		DistantInteractionLineVisual_InteractableUnset_m3E91C521F531376D15BE0CA9F72A242FD8CFF30F(__this, NULL);
		// _lineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_15;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::RenderLine(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_RenderLine_mDC74C36A0E3221A4A99A418AB13C25E23F70307B (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) 
{
	{
		// _lineRenderer.SetPositions(linePoints);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_15;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_linePoints;
		NullCheck(L_0);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InjectAllDistantInteractionLineRendererVisual(Oculus.Interaction.IDistanceInteractor,UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectAllDistantInteractionLineRendererVisual_m2991E5512893595533732CADC30DAD4A61CDF15D (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, RuntimeObject* ___0_interactor, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___1_lineRenderer, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// InjectLineRenderer(lineRenderer);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = ___1_lineRenderer;
		DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InjectLineRenderer(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___0_lineRenderer, const RuntimeMethod* method) 
{
	{
		// _lineRenderer = lineRenderer;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___0_lineRenderer;
		__this->____lineRenderer_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineRenderer_15), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual__ctor_m7A6577D29A0C6F479C7B84353BCB29289AF43324 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, const RuntimeMethod* method) 
{
	{
		DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_DistanceInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_VisualOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// return _visualOffset;
		float L_0 = __this->____visualOffset_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::set_VisualOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_VisualOffset_mC741B05A63768BE52F14C2BC0D4E94F7CE88609F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _visualOffset = value;
		float L_0 = ___0_value;
		__this->____visualOffset_6 = L_0;
		// }
		return;
	}
}
// System.Int32 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_NumLinePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// protected int NumLinePoints => _numLinePoints;
		int32_t L_0 = __this->____numLinePoints_10;
		return L_0;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_TargetlessLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_TargetlessLength_mFED24CC0F8F529D4CC90916E69BACBD91448F275 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// protected float TargetlessLength => _targetlessLength;
		float L_0 = __this->____targetlessLength_11;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_Awake_mBDE0F4D97FC003C5D6DF4DBF28D910FDE8389E84 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DistanceInteractor = _distanceInteractor as IDistanceInteractor;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____distanceInteractor_4;
		DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_12);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// _linePoints = new Vector3[NumLinePoints];
		int32_t L_1;
		L_1 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->____linePoints_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____linePoints_7), (void*)L_2);
		// this.EndStart(ref _started);
		bool* L_3 = (&__this->____started_12);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_OnEnable_m901AE8F6BEA4E63350D24ED9352B9C05F4208BA5 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_12;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// DistanceInteractor.WhenStateChanged += HandleStateChanged;
		RuntimeObject* L_1;
		L_1 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* L_2 = (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513*)il2cpp_codegen_object_new(Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD(L_2, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* >::Invoke(7 /* System.Void Oculus.Interaction.IInteractorView::add_WhenStateChanged(System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_1, L_2);
		// DistanceInteractor.WhenPostprocessed += HandlePostProcessed;
		RuntimeObject* L_3;
		L_3 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(13 /* System.Void Oculus.Interaction.IInteractorView::add_WhenPostprocessed(System.Action) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_OnDisable_mAE1EB8A99216B601DA1CD95DD775198878FA8653 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_12;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// DistanceInteractor.WhenStateChanged -= HandleStateChanged;
		RuntimeObject* L_1;
		L_1 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* L_2 = (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513*)il2cpp_codegen_object_new(Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD(L_2, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* >::Invoke(8 /* System.Void Oculus.Interaction.IInteractorView::remove_WhenStateChanged(System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_1, L_2);
		// DistanceInteractor.WhenPostprocessed -= HandlePostProcessed;
		RuntimeObject* L_3;
		L_3 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(14 /* System.Void Oculus.Interaction.IInteractorView::remove_WhenPostprocessed(System.Action) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78 ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (args.NewState)
		int32_t L_0;
		L_0 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_003d;
	}

IL_0011:
	{
		// if (args.PreviousState != InteractorState.Disabled)
		int32_t L_3;
		L_3 = InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline((&___0_args), NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_003d;
		}
	}
	{
		// InteractableUnset();
		VirtualActionInvoker0::Invoke(8 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableUnset() */, __this);
		// break;
		goto IL_003d;
	}

IL_0023:
	{
		// if (args.PreviousState == InteractorState.Normal)
		int32_t L_4;
		L_4 = InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline((&___0_args), NULL);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		// InteractableSet(DistanceInteractor.DistanceInteractable);
		RuntimeObject* L_5;
		L_5 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.IRelativeToRef Oculus.Interaction.IDistanceInteractor::get_DistanceInteractable() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_5);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableSet(Oculus.Interaction.IRelativeToRef) */, __this, L_6);
	}

IL_003d:
	{
		// if (args.NewState == InteractorState.Select
		//     || args.NewState == InteractorState.Disabled
		//     || args.PreviousState == InteractorState.Disabled)
		int32_t L_7;
		L_7 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_8;
		L_8 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		if ((((int32_t)L_8) == ((int32_t)3)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9;
		L_9 = InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline((&___0_args), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0063;
		}
	}

IL_005b:
	{
		// _shouldDrawLine = false;
		__this->____shouldDrawLine_13 = (bool)0;
		return;
	}

IL_0063:
	{
		// else if (args.NewState == InteractorState.Hover)
		int32_t L_10;
		L_10 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0075;
		}
	}
	{
		// _shouldDrawLine = true;
		__this->____shouldDrawLine_13 = (bool)1;
		return;
	}

IL_0075:
	{
		// else if (args.NewState == InteractorState.Normal)
		int32_t L_11;
		L_11 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		if (L_11)
		{
			goto IL_008a;
		}
	}
	{
		// _shouldDrawLine = _visibleDuringNormal;
		bool L_12 = __this->____visibleDuringNormal_8;
		__this->____shouldDrawLine_13 = L_12;
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::HandlePostProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// if (_shouldDrawLine)
		bool L_0 = __this->____shouldDrawLine_13;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateLine();
		DistantInteractionLineVisual_UpdateLine_m16134EB5F2305E2006C4A53D19A5B0C8165C6E78(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableSet(Oculus.Interaction.IRelativeToRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InteractableSet_m99688CB11A1A7993613DB80D70781A2151551F71 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	{
		// Component component = interactable as Component;
		RuntimeObject* L_0 = ___0_interactable;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		// if (component == null)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// _target = null;
		__this->____target_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_9), (void*)(RuntimeObject*)NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (!component.TryGetComponent(out _target))
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = V_0;
		RuntimeObject** L_4 = (&__this->____target_9);
		NullCheck(L_3);
		bool L_5;
		L_5 = Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6(L_3, L_4, Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0043;
		}
	}
	{
		// _dummyTarget.Target = interactable.RelativeTo;
		DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* L_6 = __this->____dummyTarget_14;
		RuntimeObject* L_7 = ___0_interactable;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform Oculus.Interaction.IRelativeToRef::get_RelativeTo() */, IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9_inline(L_6, L_8, NULL);
		// _target = _dummyTarget;
		DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* L_9 = __this->____dummyTarget_14;
		__this->____target_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_9), (void*)L_9);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableUnset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InteractableUnset_m3E91C521F531376D15BE0CA9F72A242FD8CFF30F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// _target = null;
		__this->____target_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_9), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::UpdateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_UpdateLine_m16134EB5F2305E2006C4A53D19A5B0C8165C6E78 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 direction = DistanceInteractor.Origin.forward;
		RuntimeObject* L_0;
		L_0 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_0);
		V_4 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_4), NULL);
		V_0 = L_2;
		// Vector3 origin = DistanceInteractor.Origin.position;
		RuntimeObject* L_3;
		L_3 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___position_0;
		// Vector3 start = origin + direction * VisualOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7;
		L_7 = DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		V_1 = L_9;
		// Vector3 end = TargetHit(DistanceInteractor.HitPoint);
		RuntimeObject* L_10;
		L_10 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 Oculus.Interaction.IDistanceInteractor::get_HitPoint() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DistantInteractionLineVisual_TargetHit_mCD88F8B136DA7856020262D52603821A8AA34868(__this, L_11, NULL);
		V_2 = L_12;
		// Vector3 middle = start + direction * Vector3.Distance(start, end) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17;
		L_17 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_19, NULL);
		V_3 = L_20;
		// for (int i = 0; i < NumLinePoints; i++)
		V_5 = 0;
		goto IL_00a0;
	}

IL_006c:
	{
		// float t = i / (NumLinePoints - 1f);
		int32_t L_21 = V_5;
		int32_t L_22;
		L_22 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		V_6 = ((float)(((float)L_21)/((float)il2cpp_codegen_subtract(((float)L_22), (1.0f)))));
		// Vector3 point = EvaluateBezier(start, middle, end, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = DistantInteractionLineVisual_EvaluateBezier_m8997CD36EB386CFFF676B1C929BC8F99DBE6B37B(L_23, L_24, L_25, L_26, NULL);
		V_7 = L_27;
		// _linePoints[i] = point;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = __this->____linePoints_7;
		int32_t L_29 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_7;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// for (int i = 0; i < NumLinePoints; i++)
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a0:
	{
		// for (int i = 0; i < NumLinePoints; i++)
		int32_t L_32 = V_5;
		int32_t L_33;
		L_33 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_006c;
		}
	}
	{
		// RenderLine(_linePoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = __this->____linePoints_7;
		VirtualActionInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(9 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::RenderLine(UnityEngine.Vector3[]) */, __this, L_34);
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::TargetHit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_TargetHit_mCD88F8B136DA7856020262D52603821A8AA34868 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_target != null)
		RuntimeObject* L_0 = __this->____target_9;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return _target.ProcessHitPoint(hitPoint);
		RuntimeObject* L_1 = __this->____target_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_hitPoint;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.IReticleData::ProcessHitPoint(UnityEngine.Vector3) */, IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		// return DistanceInteractor.Origin.position
		//     + DistanceInteractor.Origin.forward * _targetlessLength;
		RuntimeObject* L_4;
		L_4 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___position_0;
		RuntimeObject* L_7;
		L_7 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_7);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_0), NULL);
		float L_10 = __this->____targetlessLength_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::EvaluateBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_EvaluateBezier_m8997CD36EB386CFFF676B1C929BC8F99DBE6B37B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_middle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_end, float ___3_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___3_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___3_t = L_1;
		// float oneMinusT = 1f - t;
		float L_2 = ___3_t;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return (oneMinusT * oneMinusT * start)
		//     + (2f * oneMinusT * t * middle)
		//     + (t * t * end);
		float L_3 = V_0;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, NULL);
		float L_7 = V_0;
		float L_8 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_middle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_7)), L_8)), L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_10, NULL);
		float L_12 = ___3_t;
		float L_13 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___2_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_15, NULL);
		return L_16;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InjectAllDistantInteractionLineVisual(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InjectAllDistantInteractionLineVisual_m90C95202D4175BBA1A25938E0799789DFB2DCB33 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _distanceInteractor = interactor as MonoBehaviour;
		RuntimeObject* L_0 = ___0_interactor;
		__this->____distanceInteractor_4 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distanceInteractor_4), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// DistanceInteractor = interactor;
		RuntimeObject* L_1 = ___0_interactor;
		DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _visualOffset = 0.07f;
		__this->____visualOffset_6 = (0.0700000003f);
		// private int _numLinePoints = 20;
		__this->____numLinePoints_10 = ((int32_t)20);
		// private float _targetlessLength = 0.5f;
		__this->____targetlessLength_11 = (0.5f);
		// private DummyPointReticle _dummyTarget = new DummyPointReticle();
		DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* L_0 = (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761*)il2cpp_codegen_object_new(DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DummyPointReticle__ctor_m1EC65D8B9BA15A0DD79DD955D69366BE020D176D(L_0, NULL);
		__this->____dummyTarget_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dummyTarget_14), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTargetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::set_Target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9 (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DummyPointReticle_ProcessHitPoint_m2CFB800CCDDA79A12BCB9A77134AF3326303D88D (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	{
		// return Target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPointReticle__ctor_m1EC65D8B9BA15A0DD79DD955D69366BE020D176D (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DistantInteractionPolylineVisual_get_Color_mFF371058EC483CDAD3F1C716E13B2AD2FA4F8EC7 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// return _color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____color_15;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_set_Color_m2A0A26E243C0222C490CD6D0344B8A9AE5B40155 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// _color = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->____color_15 = L_0;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::get_LineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionPolylineVisual_get_LineWidth_m2B4CA20285D0D9908A6A940BD250E795957BEE67 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// return _lineWidth;
		float L_0 = __this->____lineWidth_16;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::set_LineWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_set_LineWidth_m14AB8F96336AEED2E9A5A6984358CC810752042A (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _lineWidth = value;
		float L_0 = ___0_value;
		__this->____lineWidth_16 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_Start_m881FCC12AD55E68BD89DBAEF73BB0B748CEA2799 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904(__this, NULL);
		// _polylineRenderer = new PolylineRenderer(_lineMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____lineMaterial_18;
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_1 = (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0*)il2cpp_codegen_object_new(PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PolylineRenderer__ctor_mC22B73C3821A6BE58B733254BCA060BB41613C3F(L_1, L_0, (bool)1, NULL);
		__this->____polylineRenderer_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____polylineRenderer_19), (void*)L_1);
		// _linePointsVec4 = new List<Vector4>(new Vector4[NumLinePoints]);
		int32_t L_2;
		L_2 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_2);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_4 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C(L_4, (RuntimeObject*)L_3, List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_RuntimeMethod_var);
		__this->____linePointsVec4_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____linePointsVec4_17), (void*)L_4);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_OnDestroy_m5DE914F67E7805E1960944AF3419B8FB2CA30BAF (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// _polylineRenderer.Cleanup();
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_0 = __this->____polylineRenderer_19;
		NullCheck(L_0);
		PolylineRenderer_Cleanup_m5A0AE8900DF293D647FEBEE4BBA559C64707332C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::RenderLine(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_RenderLine_mD5EAAAA2A799D207B0D1E01F7E7C6786071D6F98 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < linePoints.Length; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		// Vector3 p = linePoints[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_linePoints;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// _linePointsVec4[i] = new Vector4(p.x, p.y, p.z, _lineWidth);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_4 = __this->____linePointsVec4_17;
		int32_t L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___z_4;
		float L_12 = __this->____lineWidth_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F(L_4, L_5, L_13, List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var);
		// for (int i = 0; i < linePoints.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < linePoints.Length; i++)
		int32_t L_15 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = ___0_linePoints;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// _polylineRenderer.SetLines(_linePointsVec4, _color);
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_17 = __this->____polylineRenderer_19;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_18 = __this->____linePointsVec4_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->____color_15;
		NullCheck(L_17);
		PolylineRenderer_SetLines_m81F6012D448FE616DD7A2EDE10F257D90D9AD4E4(L_17, L_18, L_19, NULL);
		// _polylineRenderer.RenderLines();
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_20 = __this->____polylineRenderer_19;
		NullCheck(L_20);
		PolylineRenderer_RenderLines_m743CB16DDA07120C3731568D6D6C27D183928858(L_20, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectAllDistantInteractionPolylineVisual(Oculus.Interaction.IDistanceInteractor,UnityEngine.Color,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectAllDistantInteractionPolylineVisual_m061DFD363B674B375C7F7B7403F53124F61D1EDD (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, RuntimeObject* ___0_interactor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// InjectLineColor(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D_inline(__this, L_1, NULL);
		// InjectLineMaterial(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___2_material;
		DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// _color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		__this->____color_15 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	{
		// _lineMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		__this->____lineMaterial_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineMaterial_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual__ctor_m0FAC1C98BA7631A414CCD2A7EBEAA61E02D76E14 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// private Color _color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->____color_15 = L_0;
		// private float _lineWidth = 0.02f;
		__this->____lineWidth_16 = (0.0199999996f);
		DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataGhost::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataGhost_ProcessHitPoint_mE6C09C1084B6D299FEB624A77966B4346DEDAE49 (ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _targetPoint != null ? _targetPoint.position
		//     : this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____targetPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____targetPoint_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		return L_5;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataGhost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataGhost__ctor_m3807ED2C2CB7008C31FAE30635954A6F07D933CD (ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleDataIcon::get_CustomIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	{
		// return _customIcon;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____customIcon_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::set_CustomIcon(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_set_CustomIcon_m3A604891657EEE2B2CE5787E1E06819CD600B7AC (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// _customIcon = value;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->____customIcon_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____customIcon_5), (void*)L_0);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.ReticleDataIcon::get_Snappiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReticleDataIcon_get_Snappiness_mC6DCA753EAD5973BD497EC26F0610B0D8D3AFD7F (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	{
		// return _snappiness;
		float L_0 = __this->____snappiness_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::set_Snappiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_set_Snappiness_m7F70F3824E31A502B06D4318FD60F1B20D824684 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _snappiness = value;
		float L_0 = ___0_value;
		__this->____snappiness_7 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::GetTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_GetTargetSize_m5E69D80C03D174CEA801C41332DD295FDC033F49 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_renderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// return _renderer.bounds.size;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->____renderer_4;
		NullCheck(L_2);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		return L_4;
	}

IL_0022:
	{
		// return this.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_ProcessHitPoint_m6C6BD7F6A4F2588A48DE69BFEB0CC6BFEF2D08B0 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	{
		// return Vector3.Lerp(hitPoint, this.transform.position, _snappiness);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_hitPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->____snappiness_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::NearestColliderHit(UnityEngine.Ray,UnityEngine.Collider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_NearestColliderHit_m2E4044651B50C0744C0E55E9E10D57F5159F4F98 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___1_collider, float* ___2_score, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 centerPosition = collider.bounds.center;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___1_collider;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_0, NULL);
		V_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_3), NULL);
		V_0 = L_2;
		// Vector3 projectedCenter = ray.origin
		//     + Vector3.Project(centerPosition - ray.origin, ray.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_8, NULL);
		V_1 = L_9;
		// Vector3 point = collider.ClosestPointOnBounds(projectedCenter);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___1_collider;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952(L_10, L_11, NULL);
		// Vector3 originToInteractable = point - ray.origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// score = Vector3.Angle(originToInteractable.normalized, ray.direction);
		float* L_16 = ___2_score;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_ray), NULL);
		float L_19;
		L_19 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_17, L_18, NULL);
		*((float*)L_16) = (float)L_19;
		// return point;
		return L_13;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::InjectOptionalRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_InjectOptionalRenderer_mA8C8B6E5FCC332E0839D1B0E403B847D6B536ABD (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::InjectOptionalColliders(UnityEngine.Collider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_InjectOptionalColliders_mD5A99DBA05889A044DE4B50CE00010E1CE462898 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___0_colliders, const RuntimeMethod* method) 
{
	{
		// _colliders = colliders;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0 = ___0_colliders;
		__this->____colliders_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____colliders_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon__ctor_m7477ADDDCB18AD2A73D0991F81A884119C5A6DB1 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
{
	{
		// return _filter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataMesh::set_Filter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataMesh_set_Filter_m88D4C19D32851E2C7B14BD80D1CAE9D352131F16 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_value, const RuntimeMethod* method) 
{
	{
		// _filter = value;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_value;
		__this->____filter_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Target => _filter.transform;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataMesh::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataMesh_ProcessHitPoint_m2BDCC5DE7B1B9E7CEEC73CD16329CBE85891688F (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	{
		// return _filter.transform.position;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataMesh__ctor_m8043D27A92C1063CE8389FE4E1F915A6AE1532DA (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Grab.IHandGrabber Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_HandGrabber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabber_m9A6DA99F1AC409643B9E6C587AFA9B3730A9BDE0 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabberU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_HandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabber_m2EBEA85D6EEAD95C0EF43594D33D8C255DDDA430 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabberU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabberU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.HandGrab.IHandGrabState Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_HandGrabSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabSource_m25CFDF03C2589981D70AEE74C2F18651F1637FF4 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabSourceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_HandGrabSource(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabSource_m7BECF82197BD23B23A897F819322D96E62EAABF9 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabSourceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabSourceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_Interactor_m543C05D5169DD12988E0AC424E58BC1BEE846C8E (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_Interactor_mA73AEE867925C5DE263B989E4DECF7CECD9AF235 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ReticleGhostDrawer_get_InteractableComponent_m93E3E8F99E0849D4B52BE0CDF0036B7D8AE0C3F8 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => HandGrabber.TargetInteractable as Component;
		RuntimeObject* L_0;
		L_0 = ReticleGhostDrawer_get_HandGrabber_m9A6DA99F1AC409643B9E6C587AFA9B3730A9BDE0_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Grab.IHandGrabbable Oculus.Interaction.Grab.IHandGrabber::get_TargetInteractable() */, IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var, L_0);
		return ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Awake_mAE0A4FC1D5097F58BECFD27DA47BE36C2946250D (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandVisual = _handVisual as IHandVisual;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____handVisual_12;
		__this->___HandVisual_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandVisual_13), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var)));
		// HandGrabber = _handGrabber as IHandGrabber;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____handGrabber_8;
		ReticleGhostDrawer_set_HandGrabber_m2EBEA85D6EEAD95C0EF43594D33D8C255DDDA430_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var)), NULL);
		// HandGrabSource = _handGrabber as IHandGrabState;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____handGrabber_8;
		ReticleGhostDrawer_set_HandGrabSource_m7BECF82197BD23B23A897F819322D96E62EAABF9_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var)), NULL);
		// Interactor = _handGrabber as IInteractorView;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_3 = __this->____handGrabber_8;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Start_mEA2CF2626927CF3533F35A04B7F85E28529860F4 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleGhostDrawer_U3CStartU3Eb__22_0_m293BFF1DE80FD34877203F1F6B667F1392666221_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ReticleGhostDrawer_U3CStartU3Eb__22_0_m293BFF1DE80FD34877203F1F6B667F1392666221_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// Transformer = _syntheticHand.GetData().Config.TrackingToWorldTransformer;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_2 = __this->____syntheticHand_11;
		NullCheck(L_2);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_3;
		L_3 = DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0(L_2, DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var);
		NullCheck(L_3);
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_4 = L_3->___Config_14;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline(L_4, NULL);
		__this->___Transformer_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Transformer_17), (void*)L_5);
		// this.EndStart(ref _started);
		bool* L_6 = (&((InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateHandPose(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateHandPose_m0366DC52AF67D12C000CE5AEC8621AF6AD8E5226 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_snapper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		// HandGrabTarget snap = snapper.HandGrabTarget;
		RuntimeObject* L_0 = ___0_snapper;
		NullCheck(L_0);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_1;
		L_1 = InterfaceFuncInvoker0< HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* >::Invoke(5 /* Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.IHandGrabState::get_HandGrabTarget() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (snap == null)
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_2 = V_0;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// FreeFingers();
		bool L_3;
		L_3 = ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875(__this, NULL);
		// FreeWrist();
		bool L_4;
		L_4 = ReticleGhostDrawer_FreeWrist_mFBD0FE3A172C583999FB3E6048C903ACF82B0E78(__this, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (snap.HandPose != null)
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_5 = V_0;
		NullCheck(L_5);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_6;
		L_6 = HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573(L_5, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// UpdateFingers(snap.HandPose, snapper.GrabbingFingers());
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_7 = V_0;
		NullCheck(L_7);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_8;
		L_8 = HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573(L_7, NULL);
		RuntimeObject* L_9 = ___0_snapper;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.HandGrab.IHandGrabState::GrabbingFingers() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_9);
		ReticleGhostDrawer_UpdateFingers_mDF8DB632340E7F93C70E64A526D8D3694DFE92AE(__this, L_8, L_10, NULL);
		// _areFingersFree = false;
		__this->____areFingersFree_14 = (bool)0;
		goto IL_0043;
	}

IL_003c:
	{
		// FreeFingers();
		bool L_11;
		L_11 = ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875(__this, NULL);
	}

IL_0043:
	{
		// Pose wristLocalPose = GetWristPose(snap.WorldGrabPose, snapper.WristToGrabPoseOffset);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_12 = V_0;
		NullCheck(L_12);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		L_13 = HandGrabTarget_get_WorldGrabPose_m922F71EA243F0FCF0AA0B8E8E1181E67BCE50508(L_12, NULL);
		RuntimeObject* L_14 = ___0_snapper;
		NullCheck(L_14);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(3 /* UnityEngine.Pose Oculus.Interaction.HandGrab.IHandGrabState::get_WristToGrabPoseOffset() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_14);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16;
		L_16 = ReticleGhostDrawer_GetWristPose_mC07D666F8EF9AD3D09ACD6E2211A458782DE2C50(__this, L_13, L_15, NULL);
		V_1 = L_16;
		// Pose wristPose = Transformer != null
		//     ? Transformer.ToTrackingPose(wristLocalPose)
		//     : wristLocalPose;
		RuntimeObject* L_17 = __this->___Transformer_17;
		if (L_17)
		{
			goto IL_0061;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		G_B8_0 = L_18;
		goto IL_006e;
	}

IL_0061:
	{
		RuntimeObject* L_19 = __this->___Transformer_17;
		NullCheck(L_19);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20;
		L_20 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(2 /* UnityEngine.Pose Oculus.Interaction.Input.ITrackingToWorldTransformer::ToTrackingPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute)) */, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var, L_19, (&V_1));
		G_B8_0 = L_20;
	}

IL_006e:
	{
		V_2 = G_B8_0;
		// _syntheticHand.LockWristPose(wristPose, 1f);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_21 = __this->____syntheticHand_11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_2;
		NullCheck(L_21);
		SyntheticHand_LockWristPose_mAC782FC91F436A63D7E0E01FDD5BE8B88F7E5BE3(L_21, L_22, (1.0f), 3, (bool)0, (bool)0, NULL);
		// _isWristFree = false;
		__this->____isWristFree_15 = (bool)0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateFingers(Oculus.Interaction.HandGrab.HandPose,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateFingers_mDF8DB632340E7F93C70E64A526D8D3694DFE92AE (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___0_handPose, int32_t ___1_grabbingFingers, const RuntimeMethod* method) 
{
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// Quaternion[] desiredRotations = handPose.JointRotations;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = ___0_handPose;
		NullCheck(L_0);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1;
		L_1 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_0, NULL);
		V_0 = L_1;
		// _syntheticHand.OverrideAllJoints(desiredRotations, 1f);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_2 = __this->____syntheticHand_11;
		NullCheck(L_2);
		SyntheticHand_OverrideAllJoints_m112B93989E6B93073B12D39FE25FD5361D93CC2D(L_2, (&V_0), (1.0f), NULL);
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		V_1 = 0;
		goto IL_004f;
	}

IL_001d:
	{
		// int fingerFlag = 1 << fingerIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		// JointFreedom fingerFreedom = handPose.FingersFreedom[fingerIndex];
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_4 = ___0_handPose;
		NullCheck(L_4);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_5;
		L_5 = HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426(L_4, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (fingerFreedom == JointFreedom.Constrained
		//     && ((int)grabbingFingers & fingerFlag) != 0)
		int32_t L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_10 = ___1_grabbingFingers;
		int32_t L_11 = V_2;
		if (!((int32_t)((int32_t)L_10&L_11)))
		{
			goto IL_0038;
		}
	}
	{
		// fingerFreedom = JointFreedom.Locked;
		V_3 = 2;
	}

IL_0038:
	{
		// _syntheticHand.SetFingerFreedom((HandFinger)fingerIndex, fingerFreedom);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_12 = __this->____syntheticHand_11;
		int32_t L_13 = V_1;
		V_4 = L_13;
		NullCheck(L_12);
		SyntheticHand_SetFingerFreedom_mAD5CA90074DAA92F5D145AF40F861187C2CFB8D8(L_12, (&V_4), (&V_3), (bool)0, NULL);
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004f:
	{
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)5)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::GetWristPose(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReticleGhostDrawer_GetWristPose_mC07D666F8EF9AD3D09ACD6E2211A458782DE2C50 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_gripPoint, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_offset, const RuntimeMethod* method) 
{
	{
		// offset.Invert();
		PoseUtils_Invert_m9971545F238582E9FCA24A1DFADCDDDDDE1723E9((&___1_offset), NULL);
		// gripPoint.Premultiply(offset);
		PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063((&___0_gripPoint), (&___1_offset), NULL);
		// return gripPoint;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_gripPoint;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// if (!_areFingersFree)
		bool L_0 = __this->____areFingersFree_14;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// _syntheticHand.FreeAllJoints();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_11;
		NullCheck(L_1);
		SyntheticHand_FreeAllJoints_mEE570EF11E376D0E4487AA90EF853EE9D8FBF964(L_1, NULL);
		// _areFingersFree = true;
		__this->____areFingersFree_14 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeWrist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeWrist_mFBD0FE3A172C583999FB3E6048C903ACF82B0E78 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// if (!_isWristFree)
		bool L_0 = __this->____isWristFree_15;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// _syntheticHand.FreeWrist();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_11;
		NullCheck(L_1);
		SyntheticHand_FreeWrist_m2FD78586CE1880855ABB6C02BB0D657BB154C5E6(L_1, 3, NULL);
		// _isWristFree = true;
		__this->____isWristFree_15 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataGhost)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Align_m9550BC7CD32B5892107272A60E0CE765EFD384D8 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* ___0_data, const RuntimeMethod* method) 
{
	{
		// UpdateHandPose(HandGrabSource);
		RuntimeObject* L_0;
		L_0 = ReticleGhostDrawer_get_HandGrabSource_m25CFDF03C2589981D70AEE74C2F18651F1637FF4_inline(__this, NULL);
		ReticleGhostDrawer_UpdateHandPose_m0366DC52AF67D12C000CE5AEC8621AF6AD8E5226(__this, L_0, NULL);
		// _syntheticHand.MarkInputDataRequiresUpdate();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_11;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::MarkInputDataRequiresUpdate() */, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataGhost)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Draw_m0C10912F392B07FC7CB41749C3FC6E85B6A3BF06 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandVisual.ForceOffVisibility = false;
		RuntimeObject* L_0 = __this->___HandVisual_13;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Interaction.IHandVisual::set_ForceOffVisibility(System.Boolean) */, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var, L_0, (bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Hide_m0BE56C2285F1F499FBFED0E7993DC0A8B421D78C (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandVisual.ForceOffVisibility = true;
		RuntimeObject* L_0 = __this->___HandVisual_13;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Interaction.IHandVisual::set_ForceOffVisibility(System.Boolean) */, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var, L_0, (bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectAllReticleGhostDrawer(Oculus.Interaction.Grab.IHandGrabber,Oculus.Interaction.Input.SyntheticHand,Oculus.Interaction.IHandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectAllReticleGhostDrawer_m158F971B956908F3488DEDBB6B0F94DFE19DDA83 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_handGrabber, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___1_syntheticHand, RuntimeObject* ___2_visualHand, const RuntimeMethod* method) 
{
	{
		// InjectHandGrabber(handGrabber);
		RuntimeObject* L_0 = ___0_handGrabber;
		ReticleGhostDrawer_InjectHandGrabber_m7FF1A7AA6235689873672FDA6C9F577B3D47AC6B(__this, L_0, NULL);
		// InjectSyntheticHand(syntheticHand);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = ___1_syntheticHand;
		ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21_inline(__this, L_1, NULL);
		// InjectVisualHand(visualHand);
		RuntimeObject* L_2 = ___2_visualHand;
		ReticleGhostDrawer_InjectVisualHand_mFD418FA8F74C3A3D25991AC526D87EFCA8CC3232(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectHandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectHandGrabber_m7FF1A7AA6235689873672FDA6C9F577B3D47AC6B (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_handGrabber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handGrabber = handGrabber as MonoBehaviour;
		RuntimeObject* L_0 = ___0_handGrabber;
		__this->____handGrabber_8 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabber_8), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HandGrabber = handGrabber;
		RuntimeObject* L_1 = ___0_handGrabber;
		ReticleGhostDrawer_set_HandGrabber_m2EBEA85D6EEAD95C0EF43594D33D8C255DDDA430_inline(__this, L_1, NULL);
		// Interactor = handGrabber as IInteractorView;
		RuntimeObject* L_2 = ___0_handGrabber;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// HandGrabSource = handGrabber as IHandGrabState;
		RuntimeObject* L_3 = ___0_handGrabber;
		ReticleGhostDrawer_set_HandGrabSource_m7BECF82197BD23B23A897F819322D96E62EAABF9_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___0_syntheticHand, const RuntimeMethod* method) 
{
	{
		// _syntheticHand = syntheticHand;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_0 = ___0_syntheticHand;
		__this->____syntheticHand_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syntheticHand_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectVisualHand(Oculus.Interaction.IHandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectVisualHand_mFD418FA8F74C3A3D25991AC526D87EFCA8CC3232 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_visualHand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handVisual = visualHand as MonoBehaviour;
		RuntimeObject* L_0 = ___0_visualHand;
		__this->____handVisual_12 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handVisual_12), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HandVisual = visualHand;
		RuntimeObject* L_1 = ___0_visualHand;
		__this->___HandVisual_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandVisual_13), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer__ctor_m1F686310569B7A4F5AB58B7237EF8C85E4768B9D (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _areFingersFree = true;
		__this->____areFingersFree_14 = (bool)1;
		// private bool _isWristFree = true;
		__this->____isWristFree_15 = (bool)1;
		InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15(__this, InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<Start>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_U3CStartU3Eb__22_0_m293BFF1DE80FD34877203F1F6B667F1392666221 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B(__this, InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_DistanceInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_DefaultIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleIconDrawer_get_DefaultIcon_m9C74FBF581D0179820B901EA20D8C4334431685B (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// return _defaultIcon;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____defaultIcon_12;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_DefaultIcon(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DefaultIcon_m2A54565BB56B3D8D046C15F82551475A6AAC7CDA (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// _defaultIcon = value;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->____defaultIcon_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultIcon_12), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_ConstantScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleIconDrawer_get_ConstantScreenSize_m082E3458A9C40F1EC54D4A346B246C053AFFBBBF (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// return _constantScreenSize;
		bool L_0 = __this->____constantScreenSize_13;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_ConstantScreenSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_ConstantScreenSize_m18B7F5E8C7C308F7BAC5E320DE054F731032ACCA (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// _constantScreenSize = value;
		bool L_0 = ___0_value;
		__this->____constantScreenSize_13 = L_0;
		// }
		return;
	}
}
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_Interactor_m10342F2AD65842CE82448D0425001000EA8D12AC (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_Interactor_m5A64DF90A71DE53016DEC2F52AF8E777601E2FAB (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ReticleIconDrawer_get_InteractableComponent_mCDAC82F801729C737D1A98730774C83669FB4811 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => DistanceInteractor.DistanceInteractable as Component;
		RuntimeObject* L_0;
		L_0 = ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.IRelativeToRef Oculus.Interaction.IDistanceInteractor::get_DistanceInteractable() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_0);
		return ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_OnValidate_mE4690609E6E0376E776E9AAC00AA35F105FA102A (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_renderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// _renderer.sharedMaterial.mainTexture = _defaultIcon;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->____renderer_10;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_2, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = __this->____defaultIcon_12;
		NullCheck(L_3);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_3, L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Awake_mF3ABDD15C37146DD98D8B862C8036392C5E2BAB1 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DistanceInteractor = _distanceInteractor as IDistanceInteractor;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____distanceInteractor_8;
		ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var)), NULL);
		// Interactor = DistanceInteractor;
		RuntimeObject* L_1;
		L_1 = ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline(__this, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Start_m6D848073A4ABDE707D775E8B8E101A1BB6FBC040 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// _originalScale = this.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		__this->____originalScale_14 = L_3;
		// this.EndStart(ref _started);
		bool* L_4 = (&((InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataIcon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Draw_mDC06316BFDFA2C6E8504ED9CED49A5FB1AC7C7C0 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* ___0_dataIcon, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (dataIcon != null
		//     && dataIcon.CustomIcon != null)
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_0 = ___0_dataIcon;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_2 = ___0_dataIcon;
		NullCheck(L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// _renderer.material.mainTexture = dataIcon.CustomIcon;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->____renderer_10;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_7 = ___0_dataIcon;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF_inline(L_7, NULL);
		NullCheck(L_6);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_6, L_8, NULL);
		goto IL_0045;
	}

IL_002f:
	{
		// _renderer.material.mainTexture = _defaultIcon;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9 = __this->____renderer_10;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = __this->____defaultIcon_12;
		NullCheck(L_10);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_10, L_11, NULL);
	}

IL_0045:
	{
		// if (!_constantScreenSize)
		bool L_12 = __this->____constantScreenSize_13;
		if (L_12)
		{
			goto IL_0076;
		}
	}
	{
		// _renderer.transform.localScale = _originalScale * dataIcon.GetTargetSize().magnitude;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13 = __this->____renderer_10;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->____originalScale_14;
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_16 = ___0_dataIcon;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = ReticleDataIcon_GetTargetSize_m5E69D80C03D174CEA801C41332DD295FDC033F49(L_16, NULL);
		V_0 = L_17;
		float L_18;
		L_18 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_18, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_19, NULL);
	}

IL_0076:
	{
		// _renderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_20 = __this->____renderer_10;
		NullCheck(L_20);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_20, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataIcon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Align_m63BDD94A41A0248477053A83808F34CD3160DFE2 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// this.transform.position = data.ProcessHitPoint(DistanceInteractor.HitPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_1 = ___0_data;
		RuntimeObject* L_2;
		L_2 = ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 Oculus.Interaction.IDistanceInteractor::get_HitPoint() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = ReticleDataIcon_ProcessHitPoint_m6C6BD7F6A4F2588A48DE69BFEB0CC6BFEF2D08B0(L_1, L_3, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// if (_renderer.enabled)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->____renderer_10;
		NullCheck(L_5);
		bool L_6;
		L_6 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_5, NULL);
		if (!L_6)
		{
			goto IL_00b1;
		}
	}
	{
		// Vector3 dirToTarget = (_centerEye.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____centerEye_11;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_10, NULL);
		V_1 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_12;
		// transform.LookAt(transform.position - dirToTarget, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_13);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_13, L_17, L_18, NULL);
		// if (_constantScreenSize)
		bool L_19 = __this->____constantScreenSize_13;
		if (!L_19)
		{
			goto IL_00b1;
		}
	}
	{
		// float distance = Vector3.Distance(transform.position, _centerEye.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->____centerEye_11;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24;
		L_24 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_21, L_23, NULL);
		V_2 = L_24;
		// _renderer.transform.localScale = _originalScale * distance;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_25 = __this->____renderer_10;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->____originalScale_14;
		float L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		NullCheck(L_26);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_26, L_29, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Hide_m308FE7294B685279CC8F65009421B9C743B8BCFD (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// _renderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_10;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectAllReticleIconDrawer(Oculus.Interaction.IDistanceInteractor,UnityEngine.Transform,UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectAllReticleIconDrawer_mBB828D7D93E12AFCE6C6280125E9D575358D45C7 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_distanceInteractor, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_centerEye, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___2_renderer, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(distanceInteractor);
		RuntimeObject* L_0 = ___0_distanceInteractor;
		ReticleIconDrawer_InjectDistanceInteractor_m90577A5451E7D28A48CFF2644BEACFC9E490C259(__this, L_0, NULL);
		// InjectCenterEye(centerEye);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_centerEye;
		ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9_inline(__this, L_1, NULL);
		// InjectRenderer(renderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = ___2_renderer;
		ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectDistanceInteractor_m90577A5451E7D28A48CFF2644BEACFC9E490C259 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_distanceInteractor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _distanceInteractor = distanceInteractor as MonoBehaviour;
		RuntimeObject* L_0 = ___0_distanceInteractor;
		__this->____distanceInteractor_8 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distanceInteractor_8), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// DistanceInteractor = distanceInteractor;
		RuntimeObject* L_1 = ___0_distanceInteractor;
		ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline(__this, L_1, NULL);
		// Interactor = distanceInteractor;
		RuntimeObject* L_2 = ___0_distanceInteractor;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectCenterEye(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_centerEye, const RuntimeMethod* method) 
{
	{
		// _centerEye = centerEye;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_centerEye;
		__this->____centerEye_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____centerEye_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer__ctor_mCE56DE37746ECD0602FAF1D8B087DC2E3A893401 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E(__this, InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::<Start>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC(__this, InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Grab.IHandGrabber Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_HandGrabber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabber_m5CFAE33DBC28EDF711D8ECF6EF15C7E532FC51E2 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabberU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_HandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabber_m1C37AB19714B6D60F0237F98D7DB5377310E825E (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabberU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabberU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.HandGrab.IHandGrabState Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_HandGrabSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabSource_mBC1E12046641AFFECFF5978EB20F86DCE2F847E5 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabSourceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_HandGrabSource(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabSource_m0A616E648EA73487D68021933419BD540E3AFEB8 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabSourceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabSourceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_TravelData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ReticleMeshDrawer_get_TravelData_m743C855DE2D70B49B97E133F193DC96EE6DB7C0C (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// return _travelData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = __this->____travelData_13;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_TravelData(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_TravelData_mC23D4E9015CEFA1F7D5C83699CDBEE6AA934DD15 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___0_value, const RuntimeMethod* method) 
{
	{
		// _travelData = value;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___0_value;
		__this->____travelData_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travelData_13))->____travelCurve_2), (void*)NULL);
		// }
		return;
	}
}
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_Interactor_m5E4633B9E453B01B7BCFE145695A8785C3606FC2 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_Interactor_mB44F01DEEF537C6E81B7383B8832919CECEC5DF4 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ReticleMeshDrawer_get_InteractableComponent_m2B9D5B70F55B7DAB66E2A0E51DAA1D3C01F00B61 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => HandGrabber.TargetInteractable as Component;
		RuntimeObject* L_0;
		L_0 = ReticleMeshDrawer_get_HandGrabber_m5CFAE33DBC28EDF711D8ECF6EF15C7E532FC51E2_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Grab.IHandGrabbable Oculus.Interaction.Grab.IHandGrabber::get_TargetInteractable() */, IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var, L_0);
		return ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Reset_m01FF2DE01BDE50FC2CE9AC4D8A4C3E365A41618F (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _filter = this.GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->____filter_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_11), (void*)L_0);
		// _renderer = this.GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->____renderer_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Awake_mA4E1779212BAB2EE6FC2040B9FEF0771330C25FF (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandGrabber = _handGrabber as IHandGrabber;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____handGrabber_8;
		ReticleMeshDrawer_set_HandGrabber_m1C37AB19714B6D60F0237F98D7DB5377310E825E_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var)), NULL);
		// HandGrabSource = _handGrabber as IHandGrabState;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____handGrabber_8;
		ReticleMeshDrawer_set_HandGrabSource_m0A616E648EA73487D68021933419BD540E3AFEB8_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var)), NULL);
		// Interactor = _handGrabber as IInteractorView;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____handGrabber_8;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Start_mAE5F1850F8F6D85C32F9FFB783F194C9594B73CE (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleMeshDrawer_U3CStartU3Eb__24_0_m0F92C52B5741E25A8BB9EF736DFF30091E3D79B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ReticleMeshDrawer_U3CStartU3Eb__24_0_m0F92C52B5741E25A8BB9EF736DFF30091E3D79B4_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// this.EndStart(ref _started);
		bool* L_2 = (&((InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Draw_m966C1232BFFB1373D3DB6D57F9EAFDB35436F070 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_dataMesh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _filter.sharedMesh = dataMesh.Filter.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_11;
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_1 = ___0_dataMesh;
		NullCheck(L_1);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9_inline(L_1, NULL);
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_2, NULL);
		NullCheck(L_0);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_0, L_3, NULL);
		// _filter.transform.localScale = dataMesh.Filter.transform.lossyScale;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4 = __this->____filter_11;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_6 = ___0_dataMesh;
		NullCheck(L_6);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7;
		L_7 = ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9_inline(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_8, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_9, NULL);
		// _renderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = __this->____renderer_12;
		NullCheck(L_10);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, (bool)1, NULL);
		// Pose target = DestinationPose(dataMesh, HandGrabSource.HandGrabTarget.WorldGrabPose);
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_11 = ___0_dataMesh;
		RuntimeObject* L_12;
		L_12 = ReticleMeshDrawer_get_HandGrabSource_mBC1E12046641AFFECFF5978EB20F86DCE2F847E5_inline(__this, NULL);
		NullCheck(L_12);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_13;
		L_13 = InterfaceFuncInvoker0< HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* >::Invoke(5 /* Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.IHandGrabState::get_HandGrabTarget() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = HandGrabTarget_get_WorldGrabPose_m922F71EA243F0FCF0AA0B8E8E1181E67BCE50508(L_13, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959(__this, L_11, L_14, NULL);
		V_0 = L_15;
		// _tween = _travelData.CreateTween(dataMesh.Target.GetPose(), target);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* L_16 = (&__this->____travelData_13);
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_17 = ___0_dataMesh;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5(L_17, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = PoseUtils_GetPose_m33C9042AEC0A37063CC4EEF49E515DC7AEB4B1B9(L_18, 0, NULL);
		V_1 = L_19;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_20;
		L_20 = PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9(L_16, (&V_1), (&V_0), NULL);
		__this->____tween_15 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tween_15), (void*)L_20);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Hide_mAE43E9A4924F8D93D570CD5918835538C77D08F4 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// _tween = null;
		__this->____tween_15 = (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tween_15), (void*)(Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967*)NULL);
		// _renderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_12;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Align_m58B8779AFE44F65302B291F2FECBDC2628CA10D5 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Pose target = DestinationPose(data, HandGrabSource.HandGrabTarget.WorldGrabPose);
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_0 = ___0_data;
		RuntimeObject* L_1;
		L_1 = ReticleMeshDrawer_get_HandGrabSource_mBC1E12046641AFFECFF5978EB20F86DCE2F847E5_inline(__this, NULL);
		NullCheck(L_1);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_2;
		L_2 = InterfaceFuncInvoker0< HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* >::Invoke(5 /* Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.IHandGrabState::get_HandGrabTarget() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = HandGrabTarget_get_WorldGrabPose_m922F71EA243F0FCF0AA0B8E8E1181E67BCE50508(L_2, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959(__this, L_0, L_3, NULL);
		V_0 = L_4;
		// _tween.UpdateTarget(target);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_5 = __this->____tween_15;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = V_0;
		NullCheck(L_5);
		Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98(L_5, L_6, NULL);
		// _tween.Tick();
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_7 = __this->____tween_15;
		NullCheck(L_7);
		Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6(L_7, NULL);
		// _filter.transform.SetPose(_tween.Pose);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_8 = __this->____filter_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_10 = __this->____tween_15;
		NullCheck(L_10);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline(L_10, NULL);
		V_1 = L_11;
		PoseUtils_SetPose_mAB343468EF0D5639215AD8F6898AD967B4A3DACA(L_9, (&V_1), 0, NULL);
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::DestinationPose(Oculus.Interaction.DistanceReticles.ReticleDataMesh,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_data, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_worldSnapPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Pose targetOffset = PoseUtils.Delta(worldSnapPose, data.Target.GetPose());
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_0 = ___0_data;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5(L_0, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_GetPose_m33C9042AEC0A37063CC4EEF49E515DC7AEB4B1B9(L_1, 0, NULL);
		V_2 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = PoseUtils_Delta_m62647EFB71E1076B0C44E3DBDE54782CDB4BA5E2((&___1_worldSnapPose), (&V_2), NULL);
		V_0 = L_3;
		// HandGrabber.HandGrabApi.Hand.GetRootPose(out Pose pose);
		RuntimeObject* L_4;
		L_4 = ReticleMeshDrawer_get_HandGrabber_m5CFAE33DBC28EDF711D8ECF6EF15C7E532FC51E2_inline(__this, NULL);
		NullCheck(L_4);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_5;
		L_5 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(0 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.Grab.IHandGrabber::get_HandGrabApi() */, IHandGrabber_tB0C2C751F0384EA802A6E9B40934312D0CE7A561_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(18 /* System.Boolean Oculus.Interaction.Input.IHand::GetRootPose(UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_6, (&V_1));
		// pose.Premultiply(HandGrabSource.WristToGrabPoseOffset);
		RuntimeObject* L_8;
		L_8 = ReticleMeshDrawer_get_HandGrabSource_mBC1E12046641AFFECFF5978EB20F86DCE2F847E5_inline(__this, NULL);
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(3 /* UnityEngine.Pose Oculus.Interaction.HandGrab.IHandGrabState::get_WristToGrabPoseOffset() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
		PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063((&V_1), (&V_2), NULL);
		// pose.Premultiply(targetOffset);
		PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063((&V_1), (&V_0), NULL);
		// return pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_1;
		return L_10;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectAllReticleMeshDrawer(Oculus.Interaction.Grab.IHandGrabber,UnityEngine.MeshFilter,UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectAllReticleMeshDrawer_m30C2CE7D96D080CF62363ACAD712084E0FE99F5E (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_handGrabber, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___1_filter, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___2_renderer, const RuntimeMethod* method) 
{
	{
		// InjectHandGrabber(handGrabber);
		RuntimeObject* L_0 = ___0_handGrabber;
		ReticleMeshDrawer_InjectHandGrabber_mAECF72EF5B1BC92447CEB1675F922E590134667D(__this, L_0, NULL);
		// InjectFilter(filter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1 = ___1_filter;
		ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C_inline(__this, L_1, NULL);
		// InjectRenderer(renderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = ___2_renderer;
		ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectHandGrabber(Oculus.Interaction.Grab.IHandGrabber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectHandGrabber_mAECF72EF5B1BC92447CEB1675F922E590134667D (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_handGrabber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handGrabber = handGrabber as MonoBehaviour;
		RuntimeObject* L_0 = ___0_handGrabber;
		__this->____handGrabber_8 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabber_8), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HandGrabber = handGrabber;
		RuntimeObject* L_1 = ___0_handGrabber;
		ReticleMeshDrawer_set_HandGrabber_m1C37AB19714B6D60F0237F98D7DB5377310E825E_inline(__this, L_1, NULL);
		// Interactor = handGrabber as IInteractorView;
		RuntimeObject* L_2 = ___0_handGrabber;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// HandGrabSource = handGrabber as IHandGrabState;
		RuntimeObject* L_3 = ___0_handGrabber;
		ReticleMeshDrawer_set_HandGrabSource_m0A616E648EA73487D68021933419BD540E3AFEB8_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_filter, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_filter;
		__this->____filter_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer__ctor_m81102DC699233D070527858E9A55A65C4F28759D (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private PoseTravelData _travelData = PoseTravelData.FAST;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0;
		L_0 = PoseTravelData_get_FAST_m0DFF02E35A779923D4E92166F75B38D453D916CA(NULL);
		__this->____travelData_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travelData_13))->____travelCurve_2), (void*)NULL);
		InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E(__this, InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<Start>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_U3CStartU3Eb__24_0_m0F92C52B5741E25A8BB9EF736DFF30091E3D79B4 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328(__this, InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Oculus.Interaction.DistanceReticles.ReticleDataTeleport::get_ReticleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) 
{
	{
		// return _reticleMode;
		int32_t L_0 = __this->____reticleMode_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::set_ReticleMode(Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_set_ReticleMode_m4B4C37445C1E976FD27C6A5FDAAB38B17D8754EE (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// _reticleMode = value;
		int32_t L_0 = ___0_value;
		__this->____reticleMode_7 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataTeleport::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataTeleport_ProcessHitPoint_m6AA685600FF1526EF57AAE397CDBDFE323D8B9AA (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_snapPoint != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____snapPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return _snapPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____snapPoint_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// return hitPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_hitPoint;
		return L_4;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, bool ___0_highlight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	float G_B4_0 = 0.0f;
	int32_t G_B4_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_2 = NULL;
	{
		// if (_renderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// _renderer.material.SetFloat(_highlightShaderID, highlight ? 1f : 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->____renderer_5;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var);
		int32_t L_4 = ((ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_StaticFields*)il2cpp_codegen_static_fields_for(ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var))->____highlightShaderID_6;
		bool L_5 = ___0_highlight;
		G_B2_0 = L_4;
		G_B2_1 = L_3;
		if (L_5)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_3;
			goto IL_0028;
		}
	}
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_002d;
	}

IL_0028:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_002d:
	{
		NullCheck(G_B4_2);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(G_B4_2, G_B4_1, G_B4_0, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::InjectOptionalSnapPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_InjectOptionalSnapPoint_mB0DF995486FB9F790D6C866B20F9C9E835797D1C (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_snapPoint, const RuntimeMethod* method) 
{
	{
		// _snapPoint = snapPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_snapPoint;
		__this->____snapPoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____snapPoint_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport__ctor_m1E31D813A3C6485979249D2621C251D9768D05F9 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) 
{
	{
		// private TeleportReticleMode _reticleMode = TeleportReticleMode.ValidTarget;
		__this->____reticleMode_7 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport__cctor_m6D7942CBEC92D972E2E2BCF0C019CFBAC31BE0AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int _highlightShaderID = Shader.PropertyToID("_Highlight");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0, NULL);
		((ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_StaticFields*)il2cpp_codegen_static_fields_for(ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var))->____highlightShaderID_6 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportReticleDrawer_get_Interactor_m2ABA3EC856C6448793536E1A7E0D11ED3248F765 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_set_Interactor_m6833352778302BEE2BACC57CC7C6AC89071FE326 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* TeleportReticleDrawer_get_InteractableComponent_m904F9D676B7A94D4766AD82A8B036C100D33585F (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => _interactor.Interactable;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = __this->____interactor_8;
		NullCheck(L_0);
		TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* L_1;
		L_1 = Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_inline(L_0, Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Awake_m97BC2266B136641B15373829CCCCFE1EA748FF95 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Progress = _progress as IAxis1D;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____progress_11;
		__this->___Progress_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Progress_12), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var)));
		// HighlightState = _highlightState as IActiveState;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____highlightState_13;
		__this->___HighlightState_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HighlightState_14), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var)));
		// Interactor = _interactor;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_2 = __this->____interactor_8;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Start_m079629286D2747F2BD2A0070357E123C80EE0E10 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_U3CStartU3Eb__18_0_mFC3B4767B36C23B6665AB33FC1E33B94C5B50D08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)TeleportReticleDrawer_U3CStartU3Eb__18_0_mFC3B4767B36C23B6665AB33FC1E33B94C5B50D08_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// _validTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->____validTargetRenderer_9;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// _invalidTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____invalidTargetRenderer_10;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// this.EndStart(ref _started);
		bool* L_4 = (&((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_OnEnable_m7F6905D67586F163205239B329F09FB8EEA117BA (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_OnEnable_mDA3129C991C07AC623D4FA8AE194843BDFE96350_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_HandleLocomotionDenied_mC5F7855575347499DC2D17564F51E2178F141DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_HandleLocomotionPerformed_m850B1C9512EF24248D4EFBC941AFC5766A2D9C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		InteractorReticle_1_OnEnable_mDA3129C991C07AC623D4FA8AE194843BDFE96350(__this, InteractorReticle_1_OnEnable_mDA3129C991C07AC623D4FA8AE194843BDFE96350_RuntimeMethod_var);
		// if (_started)
		bool L_0 = ((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// _interactor.WhenLocomotionPerformed += HandleLocomotionPerformed;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_1 = __this->____interactor_8;
		Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* L_2 = (Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4*)il2cpp_codegen_object_new(Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m7B41A12CA19DEF03C183426EB56C5DC7005508D1(L_2, __this, (intptr_t)((void*)TeleportReticleDrawer_HandleLocomotionPerformed_m850B1C9512EF24248D4EFBC941AFC5766A2D9C23_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		TeleportInteractor_add_WhenLocomotionPerformed_mA372556B91B78A60C322E3F0C1B185274EF19EA9(L_1, L_2, NULL);
		// _interactor.WhenLocomotionDenied += HandleLocomotionDenied;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_3 = __this->____interactor_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)TeleportReticleDrawer_HandleLocomotionDenied_mC5F7855575347499DC2D17564F51E2178F141DE9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		TeleportInteractor_add_WhenLocomotionDenied_mB4CC0BC757126C0027E1B9EAE910841812563E1E(L_3, L_4, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_OnDisable_m12F64DA983A68B7DC56123F80074AF7F2ABDE893 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_OnDisable_m81401E228C5FD4D0A24EB885B55ECF921F9FDBA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_HandleLocomotionDenied_mC5F7855575347499DC2D17564F51E2178F141DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_HandleLocomotionPerformed_m850B1C9512EF24248D4EFBC941AFC5766A2D9C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = ((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____started_5;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		// _interactor.WhenLocomotionPerformed -= HandleLocomotionPerformed;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_1 = __this->____interactor_8;
		Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* L_2 = (Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4*)il2cpp_codegen_object_new(Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m7B41A12CA19DEF03C183426EB56C5DC7005508D1(L_2, __this, (intptr_t)((void*)TeleportReticleDrawer_HandleLocomotionPerformed_m850B1C9512EF24248D4EFBC941AFC5766A2D9C23_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		TeleportInteractor_remove_WhenLocomotionPerformed_m6955A5614F75EAD94985CAF307633FA9C036288A(L_1, L_2, NULL);
		// _interactor.WhenLocomotionDenied -= HandleLocomotionDenied;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_3 = __this->____interactor_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)TeleportReticleDrawer_HandleLocomotionDenied_mC5F7855575347499DC2D17564F51E2178F141DE9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		TeleportInteractor_remove_WhenLocomotionDenied_m43E6A48A5F1730DB9E621DA77B10AB14B108BEFE(L_3, L_4, NULL);
	}

IL_0036:
	{
		// base.OnDisable();
		InteractorReticle_1_OnDisable_m81401E228C5FD4D0A24EB885B55ECF921F9FDBA1(__this, InteractorReticle_1_OnDisable_m81401E228C5FD4D0A24EB885B55ECF921F9FDBA1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::HandleLocomotionPerformed(Oculus.Interaction.Locomotion.LocomotionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_HandleLocomotionPerformed_m850B1C9512EF24248D4EFBC941AFC5766A2D9C23 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___0_obj, const RuntimeMethod* method) 
{
	{
		// WhenPerformLocomotion.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___WhenPerformLocomotion_15;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::HandleLocomotionDenied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_HandleLocomotionDenied_mC5F7855575347499DC2D17564F51E2178F141DE9 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	{
		// WhenDenyLocomotion.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___WhenDenyLocomotion_16;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataTeleport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Align_m7823B59B401B72C9E780171096840D4B439AED4D (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_4 = NULL;
	TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B3_0 = 0;
	float G_B8_0 = 0.0f;
	{
		// bool highlight = HighlightState != null && HighlightState.Active;
		RuntimeObject* L_0 = __this->___HighlightState_14;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___HighlightState_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Oculus.Interaction.IActiveState::get_Active() */, IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		// data.Highlight(highlight);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_3 = ___0_data;
		bool L_4 = V_0;
		NullCheck(L_3);
		ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72(L_3, L_4, NULL);
		// if (data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.Hidden)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		return;
	}

IL_0027:
	{
		// Vector3 position = data.ProcessHitPoint(_interactor.ArcEnd.Point);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_7 = ___0_data;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_8 = __this->____interactor_8;
		NullCheck(L_8);
		TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E L_9;
		L_9 = TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline(L_8, NULL);
		V_5 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = TeleportHit_get_Point_mA410290D272135B53FDB860D1DF4195CF18411D0((&V_5), NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ReticleDataTeleport_ProcessHitPoint_m6AA685600FF1526EF57AAE397CDBDFE323D8B9AA(L_7, L_10, NULL);
		V_1 = L_11;
		// Quaternion rotation = Quaternion.LookRotation(_interactor.ArcEnd.Normal);
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_12 = __this->____interactor_8;
		NullCheck(L_12);
		TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E L_13;
		L_13 = TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline(L_12, NULL);
		V_5 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = TeleportHit_get_Normal_m80A0655F5E20349258BB9D1BF067A2CE5A9C6977((&V_5), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_14, NULL);
		V_2 = L_15;
		// this.transform.SetPositionAndRotation(position, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_2;
		NullCheck(L_16);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_16, L_17, L_18, NULL);
		// float progress = Progress != null ? Progress.Value() : 0f;
		RuntimeObject* L_19 = __this->___Progress_12;
		if (L_19)
		{
			goto IL_0078;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_0083;
	}

IL_0078:
	{
		RuntimeObject* L_20 = __this->___Progress_12;
		NullCheck(L_20);
		float L_21;
		L_21 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Oculus.Interaction.Input.IAxis1D::Value() */, IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var, L_20);
		G_B8_0 = L_21;
	}

IL_0083:
	{
		V_3 = G_B8_0;
		// Renderer reticle = null;
		V_4 = (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL;
		// if (data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.ValidTarget)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline(L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		// reticle = _validTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = __this->____validTargetRenderer_9;
		V_4 = L_24;
		goto IL_00ab;
	}

IL_009a:
	{
		// else if (data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.InvalidTarget)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_25 = ___0_data;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline(L_25, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_00ab;
		}
	}
	{
		// reticle = _invalidTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_27 = __this->____invalidTargetRenderer_10;
		V_4 = L_27;
	}

IL_00ab:
	{
		// if (reticle == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00b6;
		}
	}
	{
		// return;
		return;
	}

IL_00b6:
	{
		// SetReticleProgress(reticle, progress);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_30 = V_4;
		float L_31 = V_3;
		TeleportReticleDrawer_SetReticleProgress_m3870C0C3FA0B16F2F755DAB44EB0A9A604F671B3(__this, L_30, L_31, NULL);
		// if (HighlightState != null)
		RuntimeObject* L_32 = __this->___HighlightState_14;
		if (!L_32)
		{
			goto IL_00d0;
		}
	}
	{
		// SetReticleHighlight(reticle, highlight);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33 = V_4;
		bool L_34 = V_0;
		TeleportReticleDrawer_SetReticleHighlight_m69FBC72A3C86FFA89823B4D7EE551E43585F4EC1(__this, L_33, L_34, NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleProgress(UnityEngine.Renderer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleProgress_m3870C0C3FA0B16F2F755DAB44EB0A9A604F671B3 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, float ___1_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reticle.material.SetFloat(_progressKey, progress);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_reticle;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____progressKey_18;
		float L_3 = ___1_progress;
		NullCheck(L_1);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleHighlight(UnityEngine.Renderer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleHighlight_m69FBC72A3C86FFA89823B4D7EE551E43585F4EC1 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, bool ___1_highlight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	int32_t G_B3_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	{
		// reticle.material.SetFloat(_highlightKey, highlight ? 1f : 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_reticle;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____highlightKey_19;
		bool L_3 = ___1_highlight;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataTeleport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Draw_mD72DD9C2BA4F3A8B4E40027040E16117314FFC5E (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_validTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validTargetRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _validTargetRenderer.enabled = data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.ValidTarget;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->____validTargetRenderer_9;
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_3 = ___0_data;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline(L_3, NULL);
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0), NULL);
	}

IL_0022:
	{
		// if (_invalidTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____invalidTargetRenderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// _invalidTargetRenderer.enabled = data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.InvalidTarget;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->____invalidTargetRenderer_10;
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline(L_8, NULL);
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0), NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Hide_mF2F6AD6A760E5DA9B9D8B957A00248EE5F3A26FC (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_validTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validTargetRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _validTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = __this->____validTargetRenderer_9;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		// if (_invalidTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____invalidTargetRenderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// _invalidTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____invalidTargetRenderer_10;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
	}

IL_0034:
	{
		// if (_targetData != null)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_6 = ((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____targetData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// _targetData.Highlight(false);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_8 = ((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____targetData_6;
		NullCheck(L_8);
		ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72(L_8, (bool)0, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectAllTeleportReticleDrawer(Oculus.Interaction.Locomotion.TeleportInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectAllTeleportReticleDrawer_m926EFB03EE227D7700FE35E6FE9912C86DE5630C (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// InjectInteractor(interactor);
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = ___0_interactor;
		TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectInteractor(Oculus.Interaction.Locomotion.TeleportInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// _interactor = interactor;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = ___0_interactor;
		__this->____interactor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactor_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectOptionalValidTargetRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectOptionalValidTargetRenderer_m8AD570FB78592E99A40CCB73EDF0869AC2D091C9 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_validTargetRenderer, const RuntimeMethod* method) 
{
	{
		// _validTargetRenderer = validTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_validTargetRenderer;
		__this->____validTargetRenderer_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____validTargetRenderer_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectOptionalInalidTargetRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectOptionalInalidTargetRenderer_m9B6D29A6C068261B4368B70685D5129EC32A0A00 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_invalidTargetRenderer, const RuntimeMethod* method) 
{
	{
		// _invalidTargetRenderer = invalidTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_invalidTargetRenderer;
		__this->____invalidTargetRenderer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____invalidTargetRenderer_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectOptionalProgress(Oculus.Interaction.Input.IAxis1D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectOptionalProgress_mCEFB7AD2761FD3586A36381E804392293A3CF276 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, RuntimeObject* ___0_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _progress = progress as MonoBehaviour;
		RuntimeObject* L_0 = ___0_progress;
		__this->____progress_11 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____progress_11), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// Progress = progress;
		RuntimeObject* L_1 = ___0_progress;
		__this->___Progress_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Progress_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer__ctor_mBA6374887D85511B08C27D6CC8F97E95EBBB8E6A (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852(__this, InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer__cctor_mE693059303A78805B856967F5AA76429316A91E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C643EBB219C9960D2043A540482240133DB77BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int _progressKey = Shader.PropertyToID("_Progress");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7C643EBB219C9960D2043A540482240133DB77BF, NULL);
		((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____progressKey_18 = L_0;
		// private static readonly int _highlightKey = Shader.PropertyToID("_Highlight");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0, NULL);
		((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____highlightKey_19 = L_1;
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::<Start>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_U3CStartU3Eb__18_0_mFC3B4767B36C23B6665AB33FC1E33B94C5B50D08 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A(__this, InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_set_Data_m0FF7CD1CB31BE7191C55ED912AC2CEBD3974B9E8_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_value, const RuntimeMethod* method) 
{
	{
		// _data = value;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = ___0_value;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_onNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_onNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_onNormal;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_6;
		goto IL_004c;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_onNormal;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_onNormal;
		float L_11 = L_10.___x_2;
		float L_12 = V_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_onNormal;
		float L_15 = L_14.___y_3;
		float L_16 = V_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_onNormal;
		float L_19 = L_18.___z_4;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)(((float)il2cpp_codegen_multiply(L_11, L_12))/L_13)), ((float)(((float)il2cpp_codegen_multiply(L_15, L_16))/L_17)), ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectData_mC40729907CEC1F88F32820ACC59C5DADC29BB5C8_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* ___0_data, const RuntimeMethod* method) 
{
	{
		// _data = data;
		BoxGrabSurfaceData_t66149E7542EBB20E46C3449ABA13466C068A76B6* L_0 = ___0_data;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectRelativeTo_m01F9C6D14B136CBDFBBA03CDDB0D897A84456FD2_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_relativeTo;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxGrabSurface_InjectReferencePoint_mCDAABA54F79FF25B5F30EF39CFB7677D55876DDC_inline (BoxGrabSurface_t3F27EAB6283599BF1C3C8B7C5AA83A16A79CAF13* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) 
{
	{
		// _referencePoint = referencePoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_referencePoint;
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderGrabSurface_InjectCollider_mA55588B4ED169F6DEB8A682036E73AA7DCE18A6B_inline (ColliderGrabSurface_t1583F8CE3C5F7CDEE9CC83DBFF3919553A63670B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	{
		// _collider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collider;
		__this->____collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_planeNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_planeNormal;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_planeNormal;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_planeNormal;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_vector;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_planeNormal;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___0_vector;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_planeNormal;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_set_Data_m5E7A4E2FC935B25F971B68A73BEE3BF1D5037765_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_value, const RuntimeMethod* method) 
{
	{
		// _data = value;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = ___0_value;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_axis, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_to;
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_from;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_to;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_from;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_to;
		float L_10 = L_9.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_from;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_to;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_from;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___1_to;
		float L_18 = L_17.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_from;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___1_to;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_from;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___1_to;
		float L_26 = L_25.___x_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_22)), ((float)il2cpp_codegen_multiply(L_24, L_26))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___2_axis;
		float L_28 = L_27.___x_2;
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___2_axis;
		float L_31 = L_30.___y_3;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___2_axis;
		float L_34 = L_33.___z_4;
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_34, L_35)))), NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_values;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_values;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_values;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectData_m0BE519A812B2A6567FDAC0F22CAEAF6A71082E65_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* ___0_data, const RuntimeMethod* method) 
{
	{
		// _data = data;
		CylinderSurfaceData_t0A17332FBC9C181DAE257D7976BD5F56E62E3621* L_0 = ___0_data;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectRelativeTo_m8FA19D27064438C03AC47A0B45F9D9FE91377446_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_relativeTo;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CylinderGrabSurface_InjectReferencePoint_mF08274A44753D10213D38F2CEDBF450EBB436FF1_inline (CylinderGrabSurface_tFF85BD60B9D3D2023B476257FBF464E299369821* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) 
{
	{
		// _referencePoint = referencePoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_referencePoint;
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_set_Data_m30CB7472817AC3C243663BF6B8705EC941918018_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_value, const RuntimeMethod* method) 
{
	{
		// _data = value;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = ___0_value;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectData_m8CBCCD9F215A7AE521215CC0508E7025567C7429_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* ___0_data, const RuntimeMethod* method) 
{
	{
		// _data = data;
		SphereGrabSurfaceData_tB09B4D58AF9407A0BA89C29E6D538B0690C9452D* L_0 = ___0_data;
		__this->____data_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectRelativeTo_mEF76E321D71BCC17C4EAB9122357565A05C43EF4_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_relativeTo, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_relativeTo;
		__this->____relativeTo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereGrabSurface_InjectReferencePoint_m57F1BF8C73A295D759666FE8BD1C56109803EDA0_inline (SphereGrabSurface_tDB2FAFBDD0C548226D69E1D5301D6D126C5E88C4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_referencePoint, const RuntimeMethod* method) 
{
	{
		// _referencePoint = referencePoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_referencePoint;
		__this->____referencePoint_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____referencePoint_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CTipPositionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FingerPinchData_get_IsPinchingChanged_mCC16B97C0A6CA61D1D18800F7FBF1E2F4E08340A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = __this->___U3CIsPinchingChangedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_TipPosition_m2E44E281C9260D70D7A96DDF84EDA38C06E79480_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 TipPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CTipPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FingerPinchData_set_IsPinchingChanged_m36687E55DAA73DDC0177E6E9E6A1E23D91600B4A_inline (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsPinchingChanged { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsPinchingChangedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerPinchAPI_mB3FDF8702B1D8E3EE71C6D885264D546BA92F599_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerPinchAPI, const RuntimeMethod* method) 
{
	{
		// _fingerPinchGrabAPI = fingerPinchAPI;
		RuntimeObject* L_0 = ___0_fingerPinchAPI;
		__this->____fingerPinchGrabAPI_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPinchGrabAPI_8), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_InjectOptionalFingerGrabAPI_m7AF1CEAF142B1414BB8F734FC495D1CA3ACBD1DE_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_fingerGrabAPI, const RuntimeMethod* method) 
{
	{
		// _fingerPalmGrabAPI = fingerGrabAPI;
		RuntimeObject* L_0 = ___0_fingerGrabAPI;
		__this->____fingerPalmGrabAPI_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerPalmGrabAPI_9), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_UnselectMode_m74121A8FF930D66225FF446E8062C536D20E8045_inline (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, const RuntimeMethod* method) 
{
	{
		// public FingerUnselectMode UnselectMode => _unselectMode;
		int32_t L_0 = __this->____unselectMode_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hand_mD5AFDFC0CD8B3C0E7BCDD6B7B9BEFF70CC90F455_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabAPI_set_Hmd_m1BF086AD379F84F0FE525D96EE547C68F376CE82_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IHmd Hmd { get; private set; } = null;
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHmdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHmdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hmd_m960DB0764735A16B21AAE5166B84572D24129D2C_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHmd Hmd { get; private set; } = null;
		RuntimeObject* L_0 = __this->___U3CHmdU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// protected int NumLinePoints => _numLinePoints;
		int32_t L_0 = __this->____numLinePoints_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5_inline (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___0_lineRenderer, const RuntimeMethod* method) 
{
	{
		// _lineRenderer = lineRenderer;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___0_lineRenderer;
		__this->____lineRenderer_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineRenderer_15), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) 
{
	{
		// public InteractorState NewState { get; }
		int32_t L_0 = __this->___U3CNewStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) 
{
	{
		// public InteractorState PreviousState { get; }
		int32_t L_0 = __this->___U3CPreviousStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// return _visualOffset;
		float L_0 = __this->____visualOffset_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTargetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D_inline (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// _color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		__this->____color_15 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731_inline (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	{
		// _lineMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		__this->____lineMaterial_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineMaterial_18), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabber_m9A6DA99F1AC409643B9E6C587AFA9B3730A9BDE0_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabberU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabber_m2EBEA85D6EEAD95C0EF43594D33D8C255DDDA430_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabberU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabberU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabSource_m7BECF82197BD23B23A897F819322D96E62EAABF9_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabSourceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabSourceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = __this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabSource_m25CFDF03C2589981D70AEE74C2F18651F1637FF4_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabSourceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___0_syntheticHand, const RuntimeMethod* method) 
{
	{
		// _syntheticHand = syntheticHand;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_0 = ___0_syntheticHand;
		__this->____syntheticHand_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syntheticHand_11), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF_inline (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	{
		// return _customIcon;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____customIcon_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_centerEye, const RuntimeMethod* method) 
{
	{
		// _centerEye = centerEye;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_centerEye;
		__this->____centerEye_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____centerEye_11), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_10), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabber_m5CFAE33DBC28EDF711D8ECF6EF15C7E532FC51E2_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabberU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabber_m1C37AB19714B6D60F0237F98D7DB5377310E825E_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabber HandGrabber { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabberU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabberU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabSource_m0A616E648EA73487D68021933419BD540E3AFEB8_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabSourceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabSourceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9_inline (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
{
	{
		// return _filter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabSource_mBC1E12046641AFFECFF5978EB20F86DCE2F847E5_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabState HandGrabSource { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabSourceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_filter, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_filter;
		__this->____filter_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_11), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_12), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3_inline (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) 
{
	{
		// return _reticleMode;
		int32_t L_0 = __this->____reticleMode_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, const RuntimeMethod* method) 
{
	{
		// public TeleportHit ArcEnd => _arcEnd;
		TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E L_0 = __this->____arcEnd_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740_inline (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// _interactor = interactor;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = ___0_interactor;
		__this->____interactor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactor_8), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) 
{
	{
		// public TInteractable Interactable => _interactable;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____interactable_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
