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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_tE974880775FC548AAD9D5D87454AA897D3B56023;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>
struct Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>
struct Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>
struct Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<System.UriBuilder,System.Uri>
struct Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Meta.WitAi.TTS.Data.TTSClipData>
struct IEnumerable_1_t2626F921245FDB2CF8AAEE85B68944E12334D1AC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.Requests.VRequest>
struct KeyCollection_tE36F7359B92BAA8DCC8264C1AEB4D13963D09E5B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.Requests.WitVRequest>
struct KeyCollection_t4B65FF7A9DE6154375E9C0F9CA38DAFF4FB860D2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Meta.WitAi.TTS.TTSService>
struct Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177;
// System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>
struct Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>
struct Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>
struct RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>
struct RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>
struct RequestCompleteDelegate_1_t336E76112EC94D50E34938D06BC1F55D2227D738;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>
struct RequestCompleteDelegate_1_t5AF447A591A5097051D3A5AFBB764165380A9835;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323;
// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D;
// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>
struct UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>
struct UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4;
// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.Requests.VRequest>
struct ValueCollection_t581EFE22462719ABF868D41635050675525A0DE1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.Requests.WitVRequest>
struct ValueCollection_tC4747DB781BF655C70E10AC6FA1C795609D9DDD4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.WitAi.TTS.Data.TTSClipData>[]
struct EntryU5BU5D_t3F34821D42F7E54244DFBD0D9102A68F6A3CA507;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.WitAi.Requests.VRequest>[]
struct EntryU5BU5D_t631F6880E3193437405381D85DD426D96F33D360;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Meta.WitAi.Requests.WitVRequest>[]
struct EntryU5BU5D_t0274B7935B2FA24B7689F680E974821FC664C074;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260;
// Meta.WitAi.TTS.TTSService[]
struct TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F;
// Meta.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C;
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler
struct ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265;
// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler
struct ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759;
// Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider
struct ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49;
// Meta.WitAi.TTS.Interfaces.ITTSWebHandler
struct ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB;
// Meta.WitAi.IWitRequestConfiguration
struct IWitRequestConfiguration_tF4C761EF17EDE97B1399CE148EC403C744B222DF;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.RangeAttribute
struct RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827;
// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
struct TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7;
// Meta.WitAi.TTS.Events.TTSClipDownloadEvent
struct TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18;
// Meta.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689;
// Meta.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40;
// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2;
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80;
// Meta.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089;
// Meta.WitAi.TTS.Integrations.TTSRuntimeCache
struct TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05;
// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D;
// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF;
// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent
struct TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB;
// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent
struct TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5;
// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6;
// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326;
// Meta.WitAi.TTS.Integrations.TTSWit
struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3;
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D;
// Meta.WitAi.Requests.WitTTSVRequest
struct WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0;
// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559;
// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF;
// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031;
// Meta.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22;
// Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61;
// Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48;
// Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582;
// Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35
struct U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32
struct U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33
struct U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34
struct U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35
struct U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818;
// Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47
struct U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C;
// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC;
// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C;
IL2CPP_EXTERN_C String_t* _stringLiteral032BE3296E34D285AA79A57D630E1257967444EC;
IL2CPP_EXTERN_C String_t* _stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9;
IL2CPP_EXTERN_C String_t* _stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9;
IL2CPP_EXTERN_C String_t* _stringLiteral105B80D12DB6276478E269600E49F476237FA089;
IL2CPP_EXTERN_C String_t* _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
IL2CPP_EXTERN_C String_t* _stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676;
IL2CPP_EXTERN_C String_t* _stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261;
IL2CPP_EXTERN_C String_t* _stringLiteral2521E50FE503883D464CA60EBBE09AA3F307F2BD;
IL2CPP_EXTERN_C String_t* _stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B;
IL2CPP_EXTERN_C String_t* _stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD;
IL2CPP_EXTERN_C String_t* _stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B;
IL2CPP_EXTERN_C String_t* _stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1;
IL2CPP_EXTERN_C String_t* _stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB;
IL2CPP_EXTERN_C String_t* _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral78A3395B74C45CDB5B2B77A5CBEBA8301D73B1A8;
IL2CPP_EXTERN_C String_t* _stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719;
IL2CPP_EXTERN_C String_t* _stringLiteral8938D7942C254913A76B4869239949263802711D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459;
IL2CPP_EXTERN_C String_t* _stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C;
IL2CPP_EXTERN_C String_t* _stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4;
IL2CPP_EXTERN_C String_t* _stringLiteralA937C899247696B6565665BE3BD09607F49A2042;
IL2CPP_EXTERN_C String_t* _stringLiteralAB366C85B7C64682A212AE0F8D222626D01436D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84;
IL2CPP_EXTERN_C String_t* _stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D;
IL2CPP_EXTERN_C String_t* _stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B1000C31CF4895724E513340B19C099E04353C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4029D50A33F701A89E8E08AF218A12F8C2D26B;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9;
IL2CPP_EXTERN_C String_t* _stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973;
IL2CPP_EXTERN_C String_t* _stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF454A4B2372B574ECE70DCBBEBE231D6B0D7C6B6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_ToArray_m91013F31E01E054A28E8FC2298B665414ACB9F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__34_0_mA247585D2B8CADAEF5831DF7B88304C19336C7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m297AD610849F932B17D18A89F946F096A8C94E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeakAsyncU3Ed__32_System_Collections_IEnumerator_Reset_m8DE434DA33C85DB41A32223CF3FCDAC32CD0640F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeakAsyncU3Ed__33_System_Collections_IEnumerator_Reset_mFBE700D45F6CE57F909AAC8E2CBA34920E7CF9E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeakQueuedAsyncU3Ed__34_System_Collections_IEnumerator_Reset_mB73240B648038C8C15358502C28F4ED3EAB7562E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_Reset_m426ED030AF4F161851B54927FC9F0DA01BEDFDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3COnLoadBeginU3Eb__0_m27920F6D9830993F672392D2EDB8001EBB3A998F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForCompletionU3Ed__47_System_Collections_IEnumerator_Reset_mA8CC3933B29382FEA78C5DAE64EFDCCEABD157AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260;
struct TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F;
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C;
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1C2D0A02D5FE806AE50E3556725657591A412C3 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3F34821D42F7E54244DFBD0D9102A68F6A3CA507* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>
struct Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t631F6880E3193437405381D85DD426D96F33D360* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE36F7359B92BAA8DCC8264C1AEB4D13963D09E5B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t581EFE22462719ABF868D41635050675525A0DE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>
struct Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0274B7935B2FA24B7689F680E974821FC664C074* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4B65FF7A9DE6154375E9C0F9CA38DAFF4FB860D2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC4747DB781BF655C70E10AC6FA1C795609D9DDD4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>
struct Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____dictionary_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSClipData::textToSpeak
	String_t* ___textToSpeak_0;
	// System.String Meta.WitAi.TTS.Data.TTSClipData::clipID
	String_t* ___clipID_1;
	// UnityEngine.AudioType Meta.WitAi.TTS.Data.TTSClipData::audioType
	int32_t ___audioType_2;
	// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Data.TTSClipData::voiceSettings
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Data.TTSClipData::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Data.TTSClipData::queryParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParameters_5;
	// UnityEngine.AudioClip Meta.WitAi.TTS.Data.TTSClipData::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_6;
	// Meta.WitAi.TTS.Data.TTSClipLoadState Meta.WitAi.TTS.Data.TTSClipData::loadState
	int32_t ___loadState_7;
	// System.Single Meta.WitAi.TTS.Data.TTSClipData::loadProgress
	float ___loadProgress_8;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState> Meta.WitAi.TTS.Data.TTSClipData::onStateChange
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* ___onStateChange_9;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onPlaybackReady
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPlaybackReady_10;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onDownloadComplete
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete_11;
};

// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80  : public RuntimeObject
{
	// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Data.TTSDiskCacheSettings::DiskCacheLocation
	int32_t ___DiskCacheLocation_0;
};

// Meta.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipDownloadEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadBegin
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* ___OnDownloadBegin_0;
	// Meta.WitAi.TTS.Events.TTSClipDownloadEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadSuccess
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* ___OnDownloadSuccess_1;
	// Meta.WitAi.TTS.Events.TTSClipDownloadEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadCancel
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* ___OnDownloadCancel_2;
	// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent Meta.WitAi.TTS.Events.TTSDownloadEvents::OnDownloadError
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* ___OnDownloadError_3;
};

// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSServiceEvents::OnClipCreated
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnClipCreated_0;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSServiceEvents::OnClipUnloaded
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnClipUnloaded_1;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Events.TTSServiceEvents::Stream
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___Stream_2;
	// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Events.TTSServiceEvents::Download
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___Download_3;
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB  : public RuntimeObject
{
	// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnTextPlaybackStart
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* ___OnTextPlaybackStart_0;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnTextPlaybackFinished
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* ___OnTextPlaybackFinished_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnTextPlaybackCancelled
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* ___OnTextPlaybackCancelled_2;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackReady
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnAudioClipPlaybackReady_3;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackStart
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnAudioClipPlaybackStart_4;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackFinished
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnAudioClipPlaybackFinished_5;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnAudioClipPlaybackCancelled
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ___OnAudioClipPlaybackCancelled_6;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataQueued
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataQueued_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadBegin
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadBegin_8;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadFailed
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadFailed_9;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadSuccess
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadSuccess_10;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadAbort
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadAbort_11;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackReady
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackReady_12;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackStart
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackStart_13;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackFinished
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackFinished_14;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackCancelled
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackCancelled_15;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnStartSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnStartSpeaking_16;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnFinishedSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnFinishedSpeaking_17;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnCancelledSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnCancelledSpeaking_18;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadBegin
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadBegin_19;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadFailed
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadFailed_20;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadSuccess
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadSuccess_21;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadAbort
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadAbort_22;
};

// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6  : public RuntimeObject
{
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamBegin
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnStreamBegin_0;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamReady
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnStreamReady_1;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamCancel
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___OnStreamCancel_2;
	// Meta.WitAi.TTS.Events.TTSClipErrorEvent Meta.WitAi.TTS.Events.TTSStreamEvents::OnStreamError
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* ___OnStreamError_3;
};

// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSVoiceSettings::settingsID
	String_t* ___settingsID_1;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
};

// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.Requests.VRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_2;
	// System.Boolean Meta.WitAi.Requests.VRequest::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_3;
	// System.Boolean Meta.WitAi.Requests.VRequest::_performing
	bool ____performing_4;
	// System.Single Meta.WitAi.Requests.VRequest::_progress
	float ____progress_5;
	// UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.VRequest::_request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____request_6;
	// Meta.WitAi.Requests.VRequest/RequestProgressDelegate Meta.WitAi.Requests.VRequest::_onProgress
	RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ____onProgress_7;
	// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest> Meta.WitAi.Requests.VRequest::_onComplete
	RequestCompleteDelegate_1_t5AF447A591A5097051D3A5AFBB764165380A9835* ____onComplete_8;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.Requests.VRequest::_coroutine
	CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* ____coroutine_9;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF  : public RuntimeObject
{
	// Meta.WitAi.TTS.Integrations.TTSDiskCache Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::<>4__this
	TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* ___U3CU3E4__this_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean> Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::onCheckComplete
	Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* ___onCheckComplete_2;
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031  : public RuntimeObject
{
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_0;
	// Meta.WitAi.TTS.Integrations.TTSDiskCache Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<>4__this
	TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* ___U3CU3E4__this_1;
};

// Meta.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22  : public RuntimeObject
{
};

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61  : public RuntimeObject
{
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::onStreamReady
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___onStreamReady_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<>4__this
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___U3CU3E4__this_2;
	// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<>9__5
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___U3CU3E9__5_3;
};

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48  : public RuntimeObject
{
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<>4__this
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___U3CU3E4__this_0;
	// System.String Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::downloadPath
	String_t* ___downloadPath_1;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_2;
	// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::onDownloadComplete
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___onDownloadComplete_3;
	// System.Action`1<System.String> Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<>9__1
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__1_4;
};

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::presetVoiceId
	String_t* ___presetVoiceId_0;
};

// Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35
struct U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Action Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::call
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___call_2;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32
struct U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_2;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::textToSpeak
	String_t* ___textToSpeak_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_4;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33
struct U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_2;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::textToSpeak
	String_t* ___textToSpeak_3;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34
struct U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String[] Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::textsToSpeak
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak_2;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_4;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35
struct U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_2;
	// System.String[] Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::textsToSpeak
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___textsToSpeak_3;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47
struct U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_2;
	// System.Single Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC  : public RuntimeObject
{
	// Meta.WitAi.TTS.Integrations.TTSWit Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<>4__this
	TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* ___U3CU3E4__this_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
};

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8  : public RuntimeObject
{
	// Meta.WitAi.TTS.Integrations.TTSWit Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<>4__this
	TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* ___U3CU3E4__this_0;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::clipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData_1;
	// System.String Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::downloadPath
	String_t* ___downloadPath_2;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>
struct Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>
struct UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>
struct UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8 
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::configuration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke
{
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
};
// Native definition for COM marshalling of Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com
{
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
};

// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29  : public TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326
{
	// System.String Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::voice
	String_t* ___voice_4;
	// System.String Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::style
	String_t* ___style_5;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::speed
	int32_t ___speed_6;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::pitch
	int32_t ___pitch_7;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::gain
	int32_t ___gain_8;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 
{
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC* ___voices_12;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke* ___voices_12;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com* ___voices_12;
};

// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534  : public VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1
{
	// Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::_configuration
	RuntimeObject* ____configuration_14;
	// System.Boolean Meta.WitAi.Requests.WitVRequest::_useServerToken
	bool ____useServerToken_15;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.RangeAttribute
struct RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent
struct TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7  : public UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA
{
};

// Meta.WitAi.TTS.Events.TTSClipDownloadEvent
struct TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18  : public UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8
{
};

// Meta.WitAi.TTS.Events.TTSClipErrorEvent
struct TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689  : public UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8
{
};

// Meta.WitAi.TTS.Events.TTSClipEvent
struct TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40  : public UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent
struct TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0  : public UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4  : public UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8  : public UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent
struct TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Requests.WitTTSVRequest
struct WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0  : public WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689  : public RuntimeObject
{
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0::<>4__this
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___U3CU3E4__this_0;
	// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0::addToQueue
	bool ___addToQueue_1;
	// System.DateTime Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0::startTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___startTime_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>
struct Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6  : public MulticastDelegate_t
{
};

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36  : public MulticastDelegate_t
{
};

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58  : public MulticastDelegate_t
{
};

// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Predicate`1<Meta.WitAi.TTS.TTSService>
struct Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177  : public MulticastDelegate_t
{
};

// System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>
struct Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>
struct RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>
struct RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>
struct UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___excludedAssemblies_12;
};

// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::_diskPath
	String_t* ____diskPath_4;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::_defaultSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ____defaultSettings_5;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::_events
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ____events_6;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSDiskCache::_streamRequests
	Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* ____streamRequests_7;
};

// Meta.WitAi.TTS.Integrations.TTSRuntimeCache
struct TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::ClipLimit
	bool ___ClipLimit_4;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::ClipCapacity
	int32_t ___ClipCapacity_5;
	// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RamLimit
	bool ___RamLimit_6;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RamCapacity
	int32_t ___RamCapacity_7;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::<OnClipAdded>k__BackingField
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___U3COnClipAddedU3Ek__BackingField_8;
	// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::<OnClipRemoved>k__BackingField
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___U3COnClipRemovedU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData> Meta.WitAi.TTS.Integrations.TTSRuntimeCache::_clips
	Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* ____clips_10;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.TTS.Integrations.TTSRuntimeCache::_clipOrder
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____clipOrder_11;
};

// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::_events
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* ____events_5;
	// System.Boolean Meta.WitAi.TTS.TTSService::_delegates
	bool ____delegates_6;
	// System.Security.Cryptography.SHA256 Meta.WitAi.TTS.TTSService::CLIP_HASH
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___CLIP_HASH_8;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::presetVoiceID
	String_t* ___presetVoiceID_4;
	// UnityEngine.AudioSource Meta.WitAi.TTS.Utilities.TTSSpeaker::AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___AudioSource_5;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::prependedText
	String_t* ___prependedText_6;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::appendedText
	String_t* ___appendedText_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::_events
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* ____events_8;
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakingClip>k__BackingField
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___U3CSpeakingClipU3Ek__BackingField_9;
	// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData> Meta.WitAi.TTS.Utilities.TTSSpeaker::_queuedClips
	Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* ____queuedClips_10;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.Utilities.TTSSpeaker::_tts
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____tts_11;
	// UnityEngine.Coroutine Meta.WitAi.TTS.Utilities.TTSSpeaker::_waitForCompletion
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____waitForCompletion_12;
};

// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::_useUpdate
	bool ____useUpdate_5;
	// System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::_method
	RuntimeObject* ____method_6;
	// UnityEngine.Coroutine Meta.WitAi.CoroutineUtility/CoroutinePerformer::_coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coroutine_7;
};

// Meta.WitAi.TTS.Integrations.TTSWit
struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3  : public TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D
{
	// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::_runtimeCache
	RuntimeObject* ____runtimeCache_10;
	// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::_diskCache
	RuntimeObject* ____diskCache_11;
	// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings Meta.WitAi.TTS.Integrations.TTSWit::RequestSettings
	TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8 ___RequestSettings_12;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::<WebStreamEvents>k__BackingField
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___U3CWebStreamEventsU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSWit::_webStreams
	Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* ____webStreams_14;
	// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::<WebDownloadEvents>k__BackingField
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___U3CWebDownloadEventsU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest> Meta.WitAi.TTS.Integrations.TTSWit::_webDownloads
	Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* ____webDownloads_16;
	// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::_presetVoiceSettings
	TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* ____presetVoiceSettings_17;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>

// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Meta.WitAi.TTS.Data.TTSClipData

// Meta.WitAi.TTS.Data.TTSClipData

// Meta.WitAi.TTS.Data.TTSDiskCacheSettings

// Meta.WitAi.TTS.Data.TTSDiskCacheSettings

// Meta.WitAi.TTS.Events.TTSDownloadEvents

// Meta.WitAi.TTS.Events.TTSDownloadEvents

// Meta.WitAi.TTS.Events.TTSServiceEvents

// Meta.WitAi.TTS.Events.TTSServiceEvents

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents

// Meta.WitAi.TTS.Events.TTSStreamEvents

// Meta.WitAi.TTS.Events.TTSStreamEvents

// Meta.WitAi.TTS.Data.TTSVoiceSettings

// Meta.WitAi.TTS.Data.TTSVoiceSettings

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

// System.Uri

// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_StaticFields
{
	// System.Int32 Meta.WitAi.Requests.VRequest::MaxConcurrentRequests
	int32_t ___MaxConcurrentRequests_0;
	// System.Int32 Meta.WitAi.Requests.VRequest::_requestCount
	int32_t ____requestCount_1;
};

// Meta.WitAi.Requests.VRequest

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0

// Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0

// Meta.WitAi.TTS.TTSService/<>c
struct U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields
{
	// Meta.WitAi.TTS.TTSService/<>c Meta.WitAi.TTS.TTSService/<>c::<>9
	U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* ___U3CU3E9_0;
	// System.Predicate`1<Meta.WitAi.TTS.TTSService> Meta.WitAi.TTS.TTSService/<>c::<>9__1_0
	Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* ___U3CU3E9__1_0_1;
};

// Meta.WitAi.TTS.TTSService/<>c

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0

// Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0

// Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35

// Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0

// Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>

// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>

// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Security.Cryptography.SHA256

// System.Security.Cryptography.SHA256

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings

// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings

// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings

// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitWhile

// UnityEngine.WaitWhile

// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534_StaticFields
{
	// System.Func`2<System.UriBuilder,System.Uri> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUri
	Func_2_tD35264BF31837EBE5C19381E5A65F84604181C28* ___OnProvideCustomUri_11;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Meta.WitAi.Requests.WitVRequest::OnProvideCustomHeaders
	Action_1_tE974880775FC548AAD9D5D87454AA897D3B56023* ___OnProvideCustomHeaders_12;
	// System.Action`1<System.Text.StringBuilder> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUserAgent
	Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___OnProvideCustomUserAgent_13;
	// System.String Meta.WitAi.Requests.WitVRequest::_operatingSystem
	String_t* ____operatingSystem_16;
	// System.String Meta.WitAi.Requests.WitVRequest::_deviceModel
	String_t* ____deviceModel_17;
	// System.String Meta.WitAi.Requests.WitVRequest::_appIdentifier
	String_t* ____appIdentifier_18;
	// System.String Meta.WitAi.Requests.WitVRequest::_unityVersion
	String_t* ____unityVersion_19;
};

// Meta.WitAi.Requests.WitVRequest

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RangeAttribute

// UnityEngine.RangeAttribute

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent

// Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent

// Meta.WitAi.TTS.Events.TTSClipDownloadEvent

// Meta.WitAi.TTS.Events.TTSClipDownloadEvent

// Meta.WitAi.TTS.Events.TTSClipErrorEvent

// Meta.WitAi.TTS.Events.TTSClipErrorEvent

// Meta.WitAi.TTS.Events.TTSClipEvent

// Meta.WitAi.TTS.Events.TTSClipEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent

// Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent

// Meta.WitAi.Requests.WitTTSVRequest
struct WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_StaticFields
{
	// UnityEngine.AudioType Meta.WitAi.Requests.WitTTSVRequest::TTSAudioType
	int32_t ___TTSAudioType_20;
};

// Meta.WitAi.Requests.WitTTSVRequest

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0

// Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`2<System.Object,System.Boolean>

// System.Action`2<System.Object,System.Boolean>

// System.Action`2<System.Object,System.Int32Enum>

// System.Action`2<System.Object,System.Int32Enum>

// System.Action`2<System.Object,System.Object>

// System.Action`2<System.Object,System.Object>

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>

// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>

// System.Action`3<System.Object,System.Object,System.Object>

// System.Action`3<System.Object,System.Object,System.Object>

// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>

// System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Predicate`1<Meta.WitAi.TTS.TTSService>

// System.Predicate`1<Meta.WitAi.TTS.TTSService>

// System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>

// System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>

// UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>

// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>

// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>

// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>

// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>

// System.Action

// System.Action

// System.NotSupportedException

// System.NotSupportedException

// Meta.WitAi.Data.Configuration.WitConfiguration

// Meta.WitAi.Data.Configuration.WitConfiguration

// Meta.WitAi.Requests.VRequest/RequestProgressDelegate

// Meta.WitAi.Requests.VRequest/RequestProgressDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Meta.WitAi.TTS.Integrations.TTSDiskCache

// Meta.WitAi.TTS.Integrations.TTSDiskCache

// Meta.WitAi.TTS.Integrations.TTSRuntimeCache

// Meta.WitAi.TTS.Integrations.TTSRuntimeCache

// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields
{
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::_instance
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____instance_4;
};

// Meta.WitAi.TTS.TTSService

// Meta.WitAi.TTS.Utilities.TTSSpeaker

// Meta.WitAi.TTS.Utilities.TTSSpeaker

// Meta.WitAi.CoroutineUtility/CoroutinePerformer

// Meta.WitAi.CoroutineUtility/CoroutinePerformer

// Meta.WitAi.TTS.Integrations.TTSWit

// Meta.WitAi.TTS.Integrations.TTSWit
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Meta.WitAi.TTS.TTSService[]
struct TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* m_Items[1];

	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* m_Items[1];

	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* m_Items[1];

	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* m_Items[1];

	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared (const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___1_match, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared (UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___0_call, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_Invoke_m49021A429720036E9DEA177CAB8D5375847FADCB_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Queue`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2005E02D4DC2C3186E5BA0722C8435C966AB7B0E_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5_gshared (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCompleteDelegate_1__ctor_m5B4BD9930967DA4A93C01EE87192DA6DBB2988F1_gshared (RequestCompleteDelegate_1_t336E76112EC94D50E34938D06BC1F55D2227D738* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m977F48E7B446FA00AE2DB8F68B71E2033313739A_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<Meta.WitAi.TTS.TTSService>()
inline TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E (const RuntimeMethod* method)
{
	return ((  TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared)(method);
}
// System.Void System.Predicate`1<Meta.WitAi.TTS.TTSService>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7FF7B5BF3FDED2C2A50792B0653541622C4BD9BB (Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Array::Find<Meta.WitAi.TTS.TTSService>(T[],System.Predicate`1<T>)
inline TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6 (TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* ___0_array, Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* ___1_match, const RuntimeMethod* method)
{
	return ((  TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* (*) (TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F*, Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___0_array, ___1_match, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m7943297ED32FD0E92544C324E6793089056A2344 (RuntimeObject* ___0_log, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4 (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3 (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5 (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42 (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*, const RuntimeMethod*))UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945 (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*, const RuntimeMethod*))UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared)(__this, ___0_call, method);
}
// System.Void Meta.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.String Meta.WitAi.TTS.TTSService::GetSha256Hash(System.Security.Cryptography.SHA256,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetSha256Hash_m994521C11F89C58BA6C4DDE025B18DF9C5A379A2 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___0_shaHash, String_t* ___1_input, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::GetRuntimeCachedClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_clipID, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Data.TTSClipData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipData__ctor_m8E8813962847F69D286A609B0CC34ECFAB6AACF7 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>::Invoke(T1,T2)
inline void Action_2_Invoke_mFDF876A3D40656B3217BE47B427785129CF70061_inline (Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t, const RuntimeMethod*))Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.TTSService::GetPresetVoiceSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_presetVoiceId, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3520C0A2B28626E501AE270ABDD8ABC3D4B02263 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (RuntimeObject* ___0_log, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg1, String_t* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Meta.WitAi.TTS.TTSService::CallAfterAMoment(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_call, const RuntimeMethod* method) ;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::StartCoroutine(System.Collections.IEnumerator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8 (RuntimeObject* ___0_asyncMethod, bool ___1_useUpdate, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnLoadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35__ctor_mD6B60907C94BB96313CA7507F6EEE2425044EFDB (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37 (RuntimeObject* ___0_log, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamBegin(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_fromDisk, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnStreamReady(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_fromDisk, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, bool ___2_fromDisk, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamCancel(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_fromDisk, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::Unload(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg0, String_t* ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnUnloadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.TTSService::GetDiskCachePath(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___4_onDownloadComplete, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mACF879F390ADB9C9F942DA97D482A5254B18F072 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3FDC374212F42B0C23B179F1335A6B702F6A3D6F (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::Invoke(T0,T1,T2)
inline void UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg0, String_t* ___1_arg1, String_t* ___2_arg2, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, const RuntimeMethod*))UnityEvent_3_Invoke_m49021A429720036E9DEA177CAB8D5375847FADCB_gshared)(__this, ___0_arg0, ___1_arg1, ___2_arg2, method);
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m523768DAB4A4C74ADEAE20E4C7554FCB2AA902F1 (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEAD34E1883E74D40C6A33FB21485E6529A681C04 (Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Array::Find<Meta.WitAi.TTS.Data.TTSVoiceSettings>(T[],System.Predicate`1<T>)
inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78 (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* ___0_array, Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E* ___1_match, const RuntimeMethod* method)
{
	return ((  TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* (*) (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*, Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___0_array, ___1_match, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSServiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceEvents__ctor_m82EF258C00AB920E79E011CF464D9B6E1EBCB353 (TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA7431D6908702D15A126044C78B3B9010B10EF55 (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.TTSService::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadBegin(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadCancel(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.Void System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mC4EA44981086B6C5D5142C90ADAC15001A00E418 (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg1, String_t* ___1_arg2, String_t* ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>::.ctor()
inline void UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>::.ctor()
inline void UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336 (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker::get_SpeakingClip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::ToArray()
inline TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* Queue_1_ToArray_m91013F31E01E054A28E8FC2298B665414ACB9F20 (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, const RuntimeMethod* method)
{
	return ((  TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, const RuntimeMethod*))Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::get_Count()
inline int32_t Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_inline (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSService_get_Instance_m2AFDD22A8A5E433E2B13424DFD8DD36A1F9E6F68 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::Contains(T)
inline bool Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))Queue_1_Contains_m2005E02D4DC2C3186E5BA0722C8435C966AB7B0E_gshared)(__this, ___0_item, method);
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::RemoveLoadingClip(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_RemoveLoadingClip_m31B155CAEAD267F38644D6E4AB51F717566BF10E (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_allInstances, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m3E1160A00BC1A52F8C21368EF046FC231DCDEC5F (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::GetFormattedText(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_format, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_textsToSpeak, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__32__ctor_m2E4016EC1479643B55B1B809A7E0E372BCE11C0C (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__33__ctor_mE565444614C4FE31C7A1AF6EB71DE230D4590FEA (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__34__ctor_mDB5CFE577FED18D2CB64A4E5BC219AC5071E807F (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35__ctor_m9734BA80900926C49871935688E643D2EE28F777 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::Enqueue(T)
inline void Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::Dequeue()
inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9 (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, const RuntimeMethod* method)
{
	return ((  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m917354977614E8ADA7492C0EAA3B61C241C567C8 (U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mADCB17A6A021877564862A28F1EFCCB172F56C37 (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,System.String>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68 (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___0_arg0, String_t* ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC5398C2D6649CA9C4A3A798F911EFC8146430A3D*, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C*, String_t*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::Peek()
inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512 (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, const RuntimeMethod* method)
{
	return ((  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::Equals(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_other, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1 (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>::Invoke(T0)
inline void UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833 (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::set_SpeakingClip(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TTSSpeaker_set_SpeakingClip_mC8AAB39F58D104DA9D52A388E6FBE0FA46C22A01_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__47__ctor_m23D6062EDF934E5E74B4B32952DFA79C4C6817AA (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueuedAsync(System.String[],Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_textsToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakAsync(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakAsync_m856A9CF7EFA2582E8029413C1FD730845AD857F9 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Integrations.TTSDiskCache::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSDiskCache_ShouldCacheToDisk_m5D6E1265C7354DD9FE92F64AB0A6A5EE513C8361 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Utilities.IOUtility::CreateDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOUtility_CreateDirectory_m9CEDEFB04138BABAA175B66857EE9867031D5CBB (String_t* ___0_directoryPath, bool ___1_recursively, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m64F4743BE69F04B7343534CB468C3999D2F08E66 (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.Void System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>::Invoke(T1,T2)
inline void Action_2_Invoke_m3F27D046697BDCE14C7F53A0C99CA3DC933DBAFF_inline (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, bool, const RuntimeMethod*))Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void Meta.WitAi.Requests.VRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537 (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5 (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227*, RuntimeObject*, intptr_t, const RuntimeMethod*))RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean Meta.WitAi.Requests.VRequest::RequestFileExists(System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778 (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, String_t* ___0_checkPath, RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* ___1_onComplete, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___0_key, VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m50208C4947E0F071B327BD30D316628C349D45CB (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskStreamEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>::.ctor(System.Object,System.IntPtr)
inline void RequestCompleteDelegate_1__ctor_m0652A714187CBDC14E8660615DE06C82FF11937F (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227*, RuntimeObject*, intptr_t, const RuntimeMethod*))RequestCompleteDelegate_1__ctor_m5B4BD9930967DA4A93C01EE87192DA6DBB2988F1_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioClip(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,UnityEngine.AudioType,System.Boolean,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VRequest_RequestAudioClip_m889F3CDCDB4752DCB79529692CCB23459C855800 (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* ___1_onClipReady, int32_t ___2_audioType, bool ___3_audioStream, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___4_onProgress, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::get_Item(TKey)
inline VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27 (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::Remove(TKey)
inline bool Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3 (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void Meta.WitAi.TTS.Data.TTSDiskCacheSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCacheSettings__ctor_m40DDC2AC27F34F5C35BB57426DF1DC9FD96B29F1 (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSStreamEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>::.ctor()
inline void Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Values()
inline ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Meta.WitAi.TTS.Data.TTSClipData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
inline int32_t List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Item(TKey)
inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___0_key, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RemoveClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_RemoveClip_mA5B7062558B1F632383BFBE6D678B2D97EFFBB74 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, String_t* ___0_clipID, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::IsCacheFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_IsCacheFull_mEC7332D863C614DE241703ACAB66A1C3A706E12A (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Keys()
inline KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Count()
inline int32_t KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71*, const RuntimeMethod*))KeyCollection_get_Count_mB870EAF2A8DC8A4EE35A3C2D14DE5EFBB5BE5EDD_gshared)(__this, method);
}
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipAdded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::Remove(TKey)
inline bool Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipRemoved()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetCacheDiskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSRuntimeCache_GetCacheDiskSize_m1EF520F3243A4581F86E09B3070EFE12737A011C (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Meta.WitAi.TTS.Data.TTSClipData>::GetEnumerator()
inline Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A (*) (KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>::Dispose()
inline void Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608 (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>::get_Current()
inline String_t* Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_inline (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Int64 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClipBytes(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TTSRuntimeCache_GetClipBytes_mDED74477FE1D25D3028FEAFB695127DF56444CCA (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,Meta.WitAi.TTS.Data.TTSClipData>::MoveNext()
inline bool Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7 (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9 (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.TTS.Data.TTSClipData>::.ctor()
inline void Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7 (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.Data.TTSVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSVoiceSettings__ctor_m70BCB36D2CDEE8D24E90613CA3B3B7B1232EF018 (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler>()
inline RuntimeObject* GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler>()
inline RuntimeObject* GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String Meta.WitAi.TTS.TTSService::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetInvalidError_m89FADBC1414326B563501B9952CA615519302AFE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m5805D2BA21D4AE309D44DD9EA35936B0A2AD7F79 (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebStreamEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.TTS.Integrations.TTSWit::IsRequestValid(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___1_configuration, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebStream(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebStream_m65761464CCCFAF8DC17976EB7AD6BC7BE6D68578 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.WitTTSVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6 (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* __this, RuntimeObject* ___0_configuration, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestStream(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitTTSVRequest_RequestStream_m543A1147518C743CEB7925E4B69D72A1C9784508 (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* __this, String_t* ___0_textToSpeak, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_ttsData, RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* ___2_onClipReady, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___3_onProgress, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m5BC4C7E86F42C61955F5AD77E3ECDD2D69218CC9 (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebDownloadEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebDownload(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebDownload_m668EECF084A405833C0F6A10ED18128521EF5F63 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestDownload(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitTTSVRequest_RequestDownload_mC18DF9CEEB421F2A33282F36F70844C508731D3B (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* __this, String_t* ___0_downloadPath, String_t* ___1_textToSpeak, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_ttsData, RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* ___3_onComplete, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___4_onProgress, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___0_key, WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::get_Item(TKey)
inline WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::Remove(TKey)
inline bool Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWitVoiceSettings__ctor_mF02F476EE719E6BE0B984429F0DCF3CE82E4BD24 (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::get_PresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSWit_get_PresetVoiceSettings_m6D39B210468DFD1C57B1F93A4BCA1B1BC3868AF9 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F (Type_t* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<UnityEngine.RangeAttribute>(System.Reflection.MemberInfo)
inline RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSDownloadEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84 (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>::.ctor()
inline void Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8 (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.TTSService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService__ctor_m0F6DF7E82B702325C181B6D966D0934A143973DE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor()
inline void UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8 (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>::.ctor()
inline void UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA*, const RuntimeMethod*))UnityEvent_3__ctor_m977F48E7B446FA00AE2DB8F68B71E2033313739A_gshared)(__this, method);
}
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6 (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadErrorEvent__ctor_mB66278711D1E80AB517F53B5ED7D92C197E71C1A (TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Events.TTSClipErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipErrorEvent__ctor_mD7FE85AFFFD6A1445E8775CE5B1D619D29C77221 (TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::HasClipId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, String_t* ___0_clipId, const RuntimeMethod* method) ;
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
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSService_get_Instance_m2AFDD22A8A5E433E2B13424DFD8DD36A1F9E6F68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* V_0 = NULL;
	Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* G_B4_0 = NULL;
	TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* G_B4_1 = NULL;
	Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* G_B3_0 = NULL;
	TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* G_B3_1 = NULL;
	{
		// if (_instance == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// TTSService[] services = Resources.FindObjectsOfTypeAll<TTSService>();
		TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* L_2;
		L_2 = Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E(Resources_FindObjectsOfTypeAll_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mC241E007A520D3C080569ADAF2A81341352C700E_RuntimeMethod_var);
		V_0 = L_2;
		// if (services != null)
		TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// _instance = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		TTSServiceU5BU5D_tB9EEEB9A872AF058BFF5866F6CBEDBF52CA34A8F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_5 = ((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* L_7 = ((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_8 = (Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177*)il2cpp_codegen_object_new(Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Predicate_1__ctor_m7FF7B5BF3FDED2C2A50792B0653541622C4BD9BB(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02_RuntimeMethod_var), NULL);
		Predicate_1_tBDB33610E9234C7F655573B6F40EC8A0AB871177* L_9 = L_8;
		((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0036:
	{
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_10;
		L_10 = Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6(G_B4_1, G_B4_0, Array_Find_TisTTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_mFCAE1071E7BA4FF71AC598B02F43B106240CE8D6_RuntimeMethod_var);
		((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4), (void*)L_10);
	}

IL_0040:
	{
		// return _instance;
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_11 = ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4;
		return L_11;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetInvalidError_m89FADBC1414326B563501B9952CA615519302AFE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebHandler == null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return "Web Handler Missing";
		return _stringLiteral4DD8827B58479CCD0650C6FC3341ECEE9C1F9AAB;
	}

IL_000e:
	{
		// if (VoiceProvider == null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// return "Voice Provider Missing";
		return _stringLiteral9F288DE5652C88BFD6B543A4BB916646D06C9CE9;
	}

IL_001c:
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}
}
// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = __this->____events_5;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Awake_m6D8A95B289FA216E2FB987C8BF1C2DCC6AC57730 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// _delegates = false;
		__this->____delegates_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnEnable_m1ABB62B56E72276E23ACBAC07FB0A000095D0297 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string validError = GetInvalidError();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Meta.WitAi.TTS.TTSService::GetInvalidError() */, __this);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// VLog.W(validError);
		String_t* L_3 = V_0;
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDisable_mD11232CDA87312BD2A29D9F17356362F265C0FD9 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// RemoveDelegates();
		VirtualActionInvoker0::Invoke(13 /* System.Void Meta.WitAi.TTS.TTSService::RemoveDelegates() */, __this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::AddDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_AddDelegates_m4CE6BD07B84ACFAF8F95CA3164B17703F2FB11B4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_delegates)
		bool L_0 = __this->____delegates_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _delegates = true;
		__this->____delegates_6 = (bool)1;
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// RuntimeCacheHandler.OnClipAdded.AddListener(OnRuntimeClipAdded);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_2);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_3;
		L_3 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipAdded() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_2);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_4 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_3, L_4, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// RuntimeCacheHandler.OnClipRemoved.AddListener(OnRuntimeClipRemoved);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_5);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6;
		L_6 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_5);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_7 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_7, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_6, L_7, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
	}

IL_0052:
	{
		// if (DiskCacheHandler != null)
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_8)
		{
			goto IL_00e1;
		}
	}
	{
		// DiskCacheHandler.DiskStreamEvents.OnStreamBegin.AddListener(OnDiskStreamBegin);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_9);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_10;
		L_10 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_11 = L_10->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_12 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_12, __this, (intptr_t)((void*)TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_11, L_12, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamCancel.AddListener(OnDiskStreamCancel);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_13);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_14;
		L_14 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_15 = L_14->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_16 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_16, __this, (intptr_t)((void*)TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_15, L_16, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamReady.AddListener(OnDiskStreamReady);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_17);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_18;
		L_18 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_19 = L_18->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_20 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_20, __this, (intptr_t)((void*)TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_19, L_20, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamError.AddListener(OnDiskStreamError);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_21);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_22;
		L_22 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_23 = L_22->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_24 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_24, __this, (intptr_t)((void*)TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_23, L_24, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
	}

IL_00e1:
	{
		// if (WebHandler != null)
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		if (!L_25)
		{
			goto IL_01f4;
		}
	}
	{
		// WebHandler.WebStreamEvents.OnStreamBegin.AddListener(OnWebStreamBegin);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_26);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_27;
		L_27 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_28 = L_27->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_29 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_29, __this, (intptr_t)((void*)TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_28, L_29, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamCancel.AddListener(OnWebStreamCancel);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_30);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_31;
		L_31 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_32 = L_31->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_33 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_33, __this, (intptr_t)((void*)TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_32, L_33, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamReady.AddListener(OnWebStreamReady);
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_34);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_35;
		L_35 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_36 = L_35->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_37 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_37, __this, (intptr_t)((void*)TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_36, L_37, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamError.AddListener(OnWebStreamError);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_38);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_39;
		L_39 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_40 = L_39->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_41 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_41, __this, (intptr_t)((void*)TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_40, L_41, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadBegin.AddListener(OnWebDownloadBegin);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_42);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_43;
		L_43 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_44 = L_43->___OnDownloadBegin_0;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_45 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_45, __this, (intptr_t)((void*)TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_44, L_45, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadCancel.AddListener(OnWebDownloadCancel);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_46);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_47;
		L_47 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_48 = L_47->___OnDownloadCancel_2;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_49 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_49, __this, (intptr_t)((void*)TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_48, L_49, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadSuccess.AddListener(OnWebDownloadSuccess);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_50);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_51;
		L_51 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_52 = L_51->___OnDownloadSuccess_1;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_53 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_53, __this, (intptr_t)((void*)TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183(L_52, L_53, UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadError.AddListener(OnWebDownloadError);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_54);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_55;
		L_55 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_56 = L_55->___OnDownloadError_3;
		UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* L_57 = (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*)il2cpp_codegen_object_new(UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5(L_57, __this, (intptr_t)((void*)TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42(L_56, L_57, UnityEvent_3_AddListener_mF1335FE663655836592344B6EAC9A9CB01A68D42_RuntimeMethod_var);
	}

IL_01f4:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::RemoveDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_RemoveDelegates_m187AD2D40F00E7EEC6851AC01F14D8C8F45F8E38 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_delegates)
		bool L_0 = __this->____delegates_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _delegates = false;
		__this->____delegates_6 = (bool)0;
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		// RuntimeCacheHandler.OnClipAdded.RemoveListener(OnRuntimeClipAdded);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_2);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_3;
		L_3 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipAdded() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_2);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_4 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), NULL);
		NullCheck(L_3);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_3, L_4, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// RuntimeCacheHandler.OnClipRemoved.RemoveListener(OnRuntimeClipRemoved);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_5);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6;
		L_6 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_5);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_7 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_7, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_6, L_7, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
	}

IL_0052:
	{
		// if (DiskCacheHandler != null)
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_8)
		{
			goto IL_00e1;
		}
	}
	{
		// DiskCacheHandler.DiskStreamEvents.OnStreamBegin.RemoveListener(OnDiskStreamBegin);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_9);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_10;
		L_10 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_11 = L_10->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_12 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_12, __this, (intptr_t)((void*)TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_11, L_12, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamCancel.RemoveListener(OnDiskStreamCancel);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_13);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_14;
		L_14 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_15 = L_14->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_16 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_16, __this, (intptr_t)((void*)TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_15, L_16, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamReady.RemoveListener(OnDiskStreamReady);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_17);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_18;
		L_18 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_19 = L_18->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_20 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_20, __this, (intptr_t)((void*)TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_19, L_20, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// DiskCacheHandler.DiskStreamEvents.OnStreamError.RemoveListener(OnDiskStreamError);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_21);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_22;
		L_22 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskStreamEvents() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_23 = L_22->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_24 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_24, __this, (intptr_t)((void*)TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_23, L_24, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
	}

IL_00e1:
	{
		// if (WebHandler != null)
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		if (!L_25)
		{
			goto IL_01f4;
		}
	}
	{
		// WebHandler.WebStreamEvents.OnStreamBegin.RemoveListener(OnWebStreamBegin);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_26);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_27;
		L_27 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_26);
		NullCheck(L_27);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_28 = L_27->___OnStreamBegin_0;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_29 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_29, __this, (intptr_t)((void*)TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_28, L_29, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamCancel.RemoveListener(OnWebStreamCancel);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_30);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_31;
		L_31 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_30);
		NullCheck(L_31);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_32 = L_31->___OnStreamCancel_2;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_33 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_33, __this, (intptr_t)((void*)TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_32, L_33, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamReady.RemoveListener(OnWebStreamReady);
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_34);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_35;
		L_35 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_36 = L_35->___OnStreamReady_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_37 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_37, __this, (intptr_t)((void*)TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_36, L_37, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// WebHandler.WebStreamEvents.OnStreamError.RemoveListener(OnWebStreamError);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_38);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_39;
		L_39 = InterfaceFuncInvoker0< TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* >::Invoke(0 /* Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebStreamEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_38);
		NullCheck(L_39);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_40 = L_39->___OnStreamError_3;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_41 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_41, __this, (intptr_t)((void*)TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_40, L_41, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadBegin.RemoveListener(OnWebDownloadBegin);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_42);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_43;
		L_43 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_42);
		NullCheck(L_43);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_44 = L_43->___OnDownloadBegin_0;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_45 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_45, __this, (intptr_t)((void*)TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_44, L_45, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadCancel.RemoveListener(OnWebDownloadCancel);
		RuntimeObject* L_46;
		L_46 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_46);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_47;
		L_47 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_48 = L_47->___OnDownloadCancel_2;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_49 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_49, __this, (intptr_t)((void*)TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_48, L_49, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadSuccess.RemoveListener(OnWebDownloadSuccess);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_50);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_51;
		L_51 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_50);
		NullCheck(L_51);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_52 = L_51->___OnDownloadSuccess_1;
		UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B* L_53 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B*)il2cpp_codegen_object_new(UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3(L_53, __this, (intptr_t)((void*)TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C(L_52, L_53, UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C_RuntimeMethod_var);
		// WebHandler.WebDownloadEvents.OnDownloadError.RemoveListener(OnWebDownloadError);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		NullCheck(L_54);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_55;
		L_55 = InterfaceFuncInvoker0< TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* >::Invoke(5 /* Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Interfaces.ITTSWebHandler::get_WebDownloadEvents() */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_54);
		NullCheck(L_55);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_56 = L_55->___OnDownloadError_3;
		UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D* L_57 = (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D*)il2cpp_codegen_object_new(UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5(L_57, __this, (intptr_t)((void*)TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945(L_56, L_57, UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945_RuntimeMethod_var);
	}

IL_01f4:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDestroy_m275385C56D64459746BF29725605A7181311BF60 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == this)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// _instance = null;
		((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields*)il2cpp_codegen_static_fields_for(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_il2cpp_TypeInfo_var))->____instance_4), (void*)(TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D*)NULL);
	}

IL_0013:
	{
		// UnloadAll();
		TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11(__this, NULL);
		// }
		return;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetClipLog_m728EC27547BA5CAEB422714A4B8261BF9EF87CE6 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_logMessage, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___1_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA937C899247696B6565665BE3BD09607F49A2042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t* G_B4_2 = NULL;
	{
		// StringBuilder builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// builder.AppendLine(logMessage);
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___0_logMessage;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, L_2, NULL);
		// if (clipData != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___1_clipData;
		if (!L_4)
		{
			goto IL_00ae;
		}
	}
	{
		// builder.AppendLine($"Voice: {(clipData.voiceSettings == null ? "Default" : clipData.voiceSettings.settingsID)}");
		StringBuilder_t* L_5 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___1_clipData;
		NullCheck(L_6);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_7 = L_6->___voiceSettings_3;
		G_B2_0 = _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
		G_B2_1 = L_5;
		if (!L_7)
		{
			G_B3_0 = _stringLiteral62BA94CF7D398C28008971803552F390CCE00C8B;
			G_B3_1 = L_5;
			goto IL_002f;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = ___1_clipData;
		NullCheck(L_8);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_9 = L_8->___voiceSettings_3;
		NullCheck(L_9);
		String_t* L_10 = L_9->___settingsID_1;
		G_B4_0 = L_10;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0034;
	}

IL_002f:
	{
		G_B4_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0034:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B4_2, L_11, NULL);
		// builder.AppendLine($"Text: {clipData.textToSpeak}");
		StringBuilder_t* L_13 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___1_clipData;
		NullCheck(L_14);
		String_t* L_15 = L_14->___textToSpeak_0;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE13D22CC0F17EBBBDDED5448C1467A1BBA2BDBE, L_15, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_13, L_16, NULL);
		// builder.AppendLine($"ID: {clipData.clipID}");
		StringBuilder_t* L_18 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___1_clipData;
		NullCheck(L_19);
		String_t* L_20 = L_19->___clipID_1;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA937C899247696B6565665BE3BD09607F49A2042, L_20, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_18, L_21, NULL);
		// TTSDiskCacheLocation cacheLocation = TTSDiskCacheLocation.Stream;
		V_1 = 0;
		// if (DiskCacheHandler != null)
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// TTSDiskCacheSettings settings = clipData.diskCacheSettings;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_24 = ___1_clipData;
		NullCheck(L_24);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_25 = L_24->___diskCacheSettings_4;
		V_2 = L_25;
		// if (settings == null)
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_26 = V_2;
		if (L_26)
		{
			goto IL_008d;
		}
	}
	{
		// settings = DiskCacheHandler.DiskCacheDefaultSettings;
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_27);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_28;
		L_28 = InterfaceFuncInvoker0< TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(2 /* Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskCacheDefaultSettings() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_27);
		V_2 = L_28;
	}

IL_008d:
	{
		// if (settings != null)
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_29 = V_2;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// cacheLocation = settings.DiskCacheLocation;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = L_30->___DiskCacheLocation_0;
		V_1 = L_31;
	}

IL_0097:
	{
		// builder.AppendLine($"Cache: {cacheLocation}");
		StringBuilder_t* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE275FB0B0E87312D505C0CDF4EB65D598CF8C973, L_35, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_32, L_36, NULL);
	}

IL_00ae:
	{
		// return builder.ToString();
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		return L_39;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetClipID(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetClipID_m803CAAE7F50051D883C8DE6BFCFE99AFE874618E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___1_voiceSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// StringBuilder uniqueID = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// if (VoiceProvider != null)
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// Dictionary<string, string> data = VoiceProvider.EncodeVoiceSettings(voiceSettings);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_3 = ___1_voiceSettings;
		NullCheck(L_2);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = InterfaceFuncInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings) */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		// foreach (var key in data.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_1;
		NullCheck(L_5);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_6;
		L_6 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_5, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_6);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_7;
		L_7 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_6, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_2), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_0029_1:
			{
				// foreach (var key in data.Keys)
				String_t* L_8;
				L_8 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_2), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_3 = L_8;
				// string keyClean = data[key].ToLower().Replace(CLIP_ID_DELIM, "");
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = V_1;
				String_t* L_10 = V_3;
				NullCheck(L_9);
				String_t* L_11;
				L_11 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_9, L_10, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_11);
				String_t* L_12;
				L_12 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_11, NULL);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				V_4 = L_13;
				// uniqueID.Append(keyClean);
				StringBuilder_t* L_14 = V_0;
				String_t* L_15 = V_4;
				NullCheck(L_14);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
				// uniqueID.Append(CLIP_ID_DELIM);
				StringBuilder_t* L_17 = V_0;
				NullCheck(L_17);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
			}

IL_0063_1:
			{
				// foreach (var key in data.Keys)
				bool L_19;
				L_19 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_2), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// uniqueID.Append(textToSpeak.ToLower());
		StringBuilder_t* L_20 = V_0;
		String_t* L_21 = ___0_textToSpeak;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_21, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_22, NULL);
		// return GetSha256Hash(CLIP_HASH, uniqueID.ToString());
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_24 = __this->___CLIP_HASH_8;
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		String_t* L_27;
		L_27 = TTSService_GetSha256Hash_m994521C11F89C58BA6C4DDE025B18DF9C5A379A2(__this, L_24, L_26, NULL);
		return L_27;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetSha256Hash(System.Security.Cryptography.SHA256,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetSha256Hash_m994521C11F89C58BA6C4DDE025B18DF9C5A379A2 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___0_shaHash, String_t* ___1_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// byte[] data = shaHash.ComputeHash(Encoding.UTF8.GetBytes(input));
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_0 = ___0_shaHash;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___1_input;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_3, NULL);
		V_0 = L_4;
		// StringBuilder sBuilder = new StringBuilder();
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_5, NULL);
		V_1 = L_5;
		// for (int i = 0; i < data.Length; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		// sBuilder.Append(data[i].ToString("x2"));
		StringBuilder_t* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_9, NULL);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// return sBuilder.ToString();
		StringBuilder_t* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_CreateClipData_m0F521E0119AC5702237305C5C8AF9143E87F1BA6 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B12_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B12_2 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B11_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B11_2 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B13_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B13_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B13_2 = NULL;
	{
		// if (voiceSettings == null && VoiceProvider != null)
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_0 = ___2_voiceSettings;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// voiceSettings = VoiceProvider.VoiceDefaultSettings;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_2);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_3;
		L_3 = InterfaceFuncInvoker0< TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(0 /* Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_VoiceDefaultSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_2);
		___2_voiceSettings = L_3;
	}

IL_0018:
	{
		// if (diskCacheSettings == null && DiskCacheHandler != null)
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_4 = ___3_diskCacheSettings;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// diskCacheSettings = DiskCacheHandler.DiskCacheDefaultSettings;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		NullCheck(L_6);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_7;
		L_7 = InterfaceFuncInvoker0< TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(2 /* Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::get_DiskCacheDefaultSettings() */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_6);
		___3_diskCacheSettings = L_7;
	}

IL_0031:
	{
		// if (string.IsNullOrEmpty(clipID))
		String_t* L_8 = ___1_clipID;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// clipID = GetClipID(textToSpeak, voiceSettings);
		String_t* L_10 = ___0_textToSpeak;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_11 = ___2_voiceSettings;
		String_t* L_12;
		L_12 = VirtualFuncInvoker2< String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(16 /* System.String Meta.WitAi.TTS.TTSService::GetClipID(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings) */, __this, L_10, L_11);
		___1_clipID = L_12;
	}

IL_0043:
	{
		// TTSClipData clipData = GetRuntimeCachedClip(clipID);
		String_t* L_13 = ___1_clipID;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14;
		L_14 = TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA(__this, L_13, NULL);
		V_0 = L_14;
		// if (clipData != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = V_0;
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		// return clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = V_0;
		return L_16;
	}

IL_0050:
	{
		// clipData = new TTSClipData()
		// {
		//     clipID = clipID,
		//     textToSpeak = textToSpeak,
		//     voiceSettings = voiceSettings,
		//     diskCacheSettings = diskCacheSettings,
		//     loadState = TTSClipLoadState.Unloaded,
		//     loadProgress = 0f,
		//     queryParameters = VoiceProvider?.EncodeVoiceSettings(voiceSettings)
		// };
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)il2cpp_codegen_object_new(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		TTSClipData__ctor_m8E8813962847F69D286A609B0CC34ECFAB6AACF7(L_17, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = L_17;
		String_t* L_19 = ___1_clipID;
		NullCheck(L_18);
		L_18->___clipID_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___clipID_1), (void*)L_19);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = L_18;
		String_t* L_21 = ___0_textToSpeak;
		NullCheck(L_20);
		L_20->___textToSpeak_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___textToSpeak_0), (void*)L_21);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = L_20;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_23 = ___2_voiceSettings;
		NullCheck(L_22);
		L_22->___voiceSettings_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___voiceSettings_3), (void*)L_23);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_24 = L_22;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_25 = ___3_diskCacheSettings;
		NullCheck(L_24);
		L_24->___diskCacheSettings_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___diskCacheSettings_4), (void*)L_25);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = L_24;
		NullCheck(L_26);
		L_26->___loadState_7 = 0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = L_26;
		NullCheck(L_27);
		L_27->___loadProgress_8 = (0.0f);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = L_27;
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		RuntimeObject* L_30 = L_29;
		G_B11_0 = L_30;
		G_B11_1 = L_28;
		G_B11_2 = L_28;
		if (L_30)
		{
			G_B12_0 = L_30;
			G_B12_1 = L_28;
			G_B12_2 = L_28;
			goto IL_0092;
		}
	}
	{
		G_B13_0 = ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)(NULL));
		G_B13_1 = G_B11_1;
		G_B13_2 = G_B11_2;
		goto IL_0098;
	}

IL_0092:
	{
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_31 = ___2_voiceSettings;
		NullCheck(G_B12_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32;
		L_32 = InterfaceFuncInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings) */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, G_B12_0, L_31);
		G_B13_0 = L_32;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_0098:
	{
		NullCheck(G_B13_1);
		G_B13_1->___queryParameters_5 = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___queryParameters_5), (void*)G_B13_0);
		V_0 = G_B13_2;
		// return clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = V_0;
		return L_33;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_SetClipLoadState_m7F0F1FDC99B6A14419F4303B8C36023B49270947 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, int32_t ___1_loadState, const RuntimeMethod* method) 
{
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* G_B2_0 = NULL;
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* G_B1_0 = NULL;
	{
		// clipData.loadState = loadState;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		int32_t L_1 = ___1_loadState;
		NullCheck(L_0);
		L_0->___loadState_7 = L_1;
		// clipData.onStateChange?.Invoke(clipData, clipData.loadState);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		NullCheck(L_2);
		Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* L_3 = L_2->___onStateChange_9;
		Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___0_clipData;
		NullCheck(L_6);
		int32_t L_7 = L_6->___loadState_7;
		NullCheck(G_B2_0);
		Action_2_Invoke_mFDF876A3D40656B3217BE47B427785129CF70061_inline(G_B2_0, L_5, L_7, NULL);
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_mC7E5B726D9469DAE3C4669ED34720C2A5D79F33C (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___1_onStreamReady, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, null, null, onStreamReady);
		String_t* L_0 = ___0_textToSpeak;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_1 = ___1_onStreamReady;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)NULL, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_1);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m5D86D534C3F06A500A4C2C14EC3596431593A22C (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_presetVoiceId, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___2_onStreamReady, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, string presetVoiceId, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), null, onStreamReady);
		String_t* L_0 = ___0_textToSpeak;
		String_t* L_1 = ___1_presetVoiceId;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_3 = ___2_onStreamReady;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_3);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m398B7A5744B1B04B5C66F1F16B0DD0CEA96E9C13 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_presetVoiceId, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___2_diskCacheSettings, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___3_onStreamReady, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, string presetVoiceId, TTSDiskCacheSettings diskCacheSettings, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), diskCacheSettings, onStreamReady);
		String_t* L_0 = ___0_textToSpeak;
		String_t* L_1 = ___1_presetVoiceId;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3 = ___2_diskCacheSettings;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_4 = ___3_onStreamReady;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_2, L_3, L_4);
		return L_5;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m2987DC4CC6DBC49BAB74D65ADF290CF3C596F49C (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___1_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___2_diskCacheSettings, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___3_onStreamReady, const RuntimeMethod* method) 
{
	{
		// public TTSClipData Load(string textToSpeak, TTSVoiceSettings voiceSettings, TTSDiskCacheSettings diskCacheSettings, Action<TTSClipData, string> onStreamReady = null) => Load(textToSpeak, null, voiceSettings, diskCacheSettings, onStreamReady);
		String_t* L_0 = ___0_textToSpeak;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_1 = ___1_voiceSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_2 = ___2_diskCacheSettings;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_3 = ___3_onStreamReady;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, __this, L_0, (String_t*)NULL, L_1, L_2, L_3);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_Load_m65298917D4F721B68BE9774695660230E5E55468 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* ___4_onStreamReady, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* V_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B3_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_0 = (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_m3520C0A2B28626E501AE270ABDD8ABC3D4B02263(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_1 = V_0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_2 = ___4_onStreamReady;
		NullCheck(L_1);
		L_1->___onStreamReady_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onStreamReady_0), (void*)L_2);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		// AddDelegates();
		VirtualActionInvoker0::Invoke(12 /* System.Void Meta.WitAi.TTS.TTSService::AddDelegates() */, __this);
		// TTSClipData clipData = CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_4 = V_0;
		String_t* L_5 = ___0_textToSpeak;
		String_t* L_6 = ___1_clipID;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_7 = ___2_voiceSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_8 = ___3_diskCacheSettings;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9;
		L_9 = VirtualFuncInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(17 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_5, L_6, L_7, L_8);
		NullCheck(L_4);
		L_4->___clipData_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___clipData_1), (void*)L_9);
		// if (clipData == null)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_1;
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		// VLog.E("No clip provided");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C, NULL);
		// onStreamReady?.Invoke(clipData, "No clip provided");
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_12 = V_0;
		NullCheck(L_12);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_13 = L_12->___onStreamReady_0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_004a;
		}
	}
	{
		goto IL_005a;
	}

IL_004a:
	{
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_15 = V_0;
		NullCheck(L_15);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = L_15->___clipData_1;
		NullCheck(G_B3_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(G_B3_0, L_16, _stringLiteral002A2E2689B3B464C7984342F1FDCDFF3A46F26C, NULL);
	}

IL_005a:
	{
		// return null;
		return (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)NULL;
	}

IL_005c:
	{
		// if (clipData.loadState != TTSClipLoadState.Unloaded)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_17 = V_0;
		NullCheck(L_17);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = L_17->___clipData_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___loadState_7;
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		// if (onStreamReady != null)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_20 = V_0;
		NullCheck(L_20);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_21 = L_20->___onStreamReady_0;
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		// if (clipData.loadState == TTSClipLoadState.Preparing)
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_22 = V_0;
		NullCheck(L_22);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23 = L_22->___clipData_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->___loadState_7;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00a8;
		}
	}
	{
		// clipData.onPlaybackReady += (e) => onStreamReady(clipData, e);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = L_25->___clipData_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = L_26;
		NullCheck(L_27);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_28 = L_27->___onPlaybackReady_10;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_29 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_30 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_30, L_29, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE_RuntimeMethod_var), NULL);
		Delegate_t* L_31;
		L_31 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_28, L_30, NULL);
		NullCheck(L_27);
		L_27->___onPlaybackReady_10 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_31, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___onPlaybackReady_10), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_31, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		goto IL_00c1;
	}

IL_00a8:
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData,
		//     clipData.loadState == TTSClipLoadState.Loaded ? string.Empty : "Error")));
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_32 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC_RuntimeMethod_var), NULL);
		RuntimeObject* L_34;
		L_34 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4(__this, L_33, NULL);
		CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* L_35;
		L_35 = CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(L_34, (bool)0, NULL);
	}

IL_00c1:
	{
		// return clipData;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_36 = V_0;
		NullCheck(L_36);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_37 = L_36->___clipData_1;
		return L_37;
	}

IL_00c8:
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_38)
		{
			goto IL_0103;
		}
	}
	{
		// if (!RuntimeCacheHandler.AddClip(clipData))
		RuntimeObject* L_39;
		L_39 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_40 = V_0;
		NullCheck(L_40);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_41 = L_40->___clipData_1;
		NullCheck(L_39);
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(6 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::AddClip(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_39, L_41);
		if (L_42)
		{
			goto IL_010f;
		}
	}
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData, "Could not add to runtime cache")));
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_43 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD_RuntimeMethod_var), NULL);
		RuntimeObject* L_45;
		L_45 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4(__this, L_44, NULL);
		CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* L_46;
		L_46 = CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(L_45, (bool)0, NULL);
		// return clipData;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_47 = V_0;
		NullCheck(L_47);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_48 = L_47->___clipData_1;
		return L_48;
	}

IL_0103:
	{
		// OnLoadBegin(clipData);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_49 = V_0;
		NullCheck(L_49);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_50 = L_49->___clipData_1;
		TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF(__this, L_50, NULL);
	}

IL_010f:
	{
		// clipData.onPlaybackReady += (error) => onStreamReady(clipData, error);
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_51 = V_0;
		NullCheck(L_51);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_52 = L_51->___clipData_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_53 = L_52;
		NullCheck(L_53);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_54 = L_53->___onPlaybackReady_10;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_55 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_56 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_56, L_55, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46_RuntimeMethod_var), NULL);
		Delegate_t* L_57;
		L_57 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_54, L_56, NULL);
		NullCheck(L_53);
		L_53->___onPlaybackReady_10 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_57, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_53->___onPlaybackReady_10), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_57, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() =>
		// {
		//     // Check for invalid text
		//     string invalidError = WebHandler.IsTextValid(clipData.textToSpeak);
		//     if (!string.IsNullOrEmpty(invalidError))
		//     {
		//         OnWebStreamError(clipData, invalidError);
		//         return;
		//     }
		// 
		//     // If should cache to disk, attempt to do so
		//     if (ShouldCacheToDisk(clipData))
		//     {
		//         // Download was canceled before starting
		//         if (clipData.loadState != TTSClipLoadState.Preparing)
		//         {
		//             string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		//             OnWebDownloadBegin(clipData, downloadPath);
		//             OnWebDownloadCancel(clipData, downloadPath);
		//             OnWebStreamBegin(clipData);
		//             OnWebStreamCancel(clipData);
		//             return;
		//         }
		// 
		//         // Download
		//         DownloadToDiskCache(clipData, (clipData2, downloadPath, error) =>
		//         {
		//             // Download was canceled before starting
		//             if (string.Equals(error, CANCEL_WARNING))
		//             {
		//                 OnWebStreamBegin(clipData);
		//                 OnWebStreamCancel(clipData);
		//                 return;
		//             }
		// 
		//             // Success
		//             if (string.IsNullOrEmpty(error))
		//             {
		//                 DiskCacheHandler?.StreamFromDiskCache(clipData);
		//             }
		//             // Failed
		//             else
		//             {
		//                 WebHandler?.RequestStreamFromWeb(clipData);
		//             }
		//         });
		//     }
		//     // Simply stream from the web
		//     else
		//     {
		//         // Stream was canceled before starting
		//         if (clipData.loadState != TTSClipLoadState.Preparing)
		//         {
		//             OnWebStreamBegin(clipData);
		//             OnWebStreamCancel(clipData);
		//             return;
		//         }
		// 
		//         // Stream
		//         WebHandler?.RequestStreamFromWeb(clipData);
		//     }
		// }));
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_58 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_59 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_59, L_58, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970_RuntimeMethod_var), NULL);
		RuntimeObject* L_60;
		L_60 = TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4(__this, L_59, NULL);
		CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* L_61;
		L_61 = CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8(L_60, (bool)0, NULL);
		// return clipData;
		U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* L_62 = V_0;
		NullCheck(L_62);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_63 = L_62->___clipData_1;
		return L_63;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.TTSService::CallAfterAMoment(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSService_CallAfterAMoment_m1766781CB4D6A587C3E079AB3A21988BC06501F4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* L_0 = (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211*)il2cpp_codegen_object_new(U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCallAfterAMomentU3Ed__35__ctor_mD6B60907C94BB96313CA7507F6EEE2425044EFDB(L_0, 0, NULL);
		U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_call;
		NullCheck(L_1);
		L_1->___call_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___call_2), (void*)L_2);
		return L_1;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnLoadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B2_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B1_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Preparing);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 1);
		// VLog.D(GetClipLog("Load Clip", clipData));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, _stringLiteralCA9358198FA5A964D3DC5881BE887E15DF1BA117, L_1);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_2, NULL);
		// Events?.OnClipCreated?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_3;
		L_3 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_5 = G_B2_0->___OnClipCreated_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___0_clipData;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_7, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamBegin_m2CD89F3F7F4FB2F79BB88F6504A444564CFD7FC9 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamBegin(TTSClipData clipData) => OnStreamBegin(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamBegin(TTSClipData clipData) => OnStreamBegin(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamBegin(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamBegin_mAEDB823D41F8B1770AA57EAC5DF990828AABB40B (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_fromDisk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B2_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B3_1 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B6_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B8_0 = NULL;
	{
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Begin", clipData));
		bool L_0 = ___1_fromDisk;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral3B239D70EE737C35BAC85C846FE74371E570623B, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		NullCheck(G_B3_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B3_1, L_1, L_2);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_3, NULL);
		// Events?.Stream?.OnStreamBegin?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4;
		L_4 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		NullCheck(G_B5_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_6 = G_B5_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_7 = L_6;
		G_B6_0 = L_7;
		if (L_7)
		{
			G_B7_0 = L_7;
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_8 = G_B7_0->___OnStreamBegin_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_9 = L_8;
		G_B8_0 = L_9;
		if (L_9)
		{
			G_B9_0 = L_9;
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0044:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___0_clipData;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_10, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamReady_m8CA25E3605D247ACEEAA7B14ABF7809977E6D7DE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamReady(TTSClipData clipData) => OnStreamReady(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamReady_m7B0AF4F55D8A4983BCCCF4F0F62831241A4E9852 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamReady(TTSClipData clipData) => OnStreamReady(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamReady(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamReady_mCE37EA100BC2A2E9A04CF148DBDFE5F342524A98 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_fromDisk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B5_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B8_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B7_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B11_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B13_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B12_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B15_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B14_0 = NULL;
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// RuntimeCacheHandler.OnClipRemoved.RemoveListener(OnRuntimeClipRemoved);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_1);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_1);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_3 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_3, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_2);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_2, L_3, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// bool failed = !RuntimeCacheHandler.AddClip(clipData);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(6 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::AddClip(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_4, L_5);
		// RuntimeCacheHandler.OnClipRemoved.AddListener(OnRuntimeClipRemoved);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		NullCheck(L_7);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_8;
		L_8 = InterfaceFuncInvoker0< TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* >::Invoke(2 /* Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::get_OnClipRemoved() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_7);
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_9 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_8, L_9, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// if (failed)
		if (!((((int32_t)L_6) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0068;
		}
	}
	{
		// OnStreamError(clipData, "Removed from runtime cache due to file size", fromDisk);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___0_clipData;
		bool L_11 = ___1_fromDisk;
		TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC(__this, L_10, _stringLiteral36CFB72EF9F810E296FE038AECBA4E2D5E790FAD, L_11, NULL);
		// OnRuntimeClipRemoved(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = ___0_clipData;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(21 /* System.Void Meta.WitAi.TTS.TTSService::OnRuntimeClipRemoved(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_12);
		// return;
		return;
	}

IL_0068:
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Loaded);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___0_clipData;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_13, 2);
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Ready", clipData));
		bool L_14 = ___1_fromDisk;
		G_B4_0 = __this;
		if (L_14)
		{
			G_B5_0 = __this;
			goto IL_007b;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0080;
	}

IL_007b:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0080:
	{
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_0, _stringLiteral31DD2603A7665647F84816E084AE8BC54C9F801B, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___0_clipData;
		NullCheck(G_B6_1);
		String_t* L_17;
		L_17 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_15, L_16);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_17, NULL);
		// clipData.onPlaybackReady?.Invoke(string.Empty);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = ___0_clipData;
		NullCheck(L_18);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_19 = L_18->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_20 = L_19;
		G_B7_0 = L_20;
		if (L_20)
		{
			G_B8_0 = L_20;
			goto IL_00a1;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a1:
	{
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B8_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B8_0, L_21, NULL);
	}

IL_00ab:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = ___0_clipData;
		NullCheck(L_22);
		L_22->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// Events?.Stream?.OnStreamReady?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_23;
		L_23 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_24 = L_23;
		G_B10_0 = L_24;
		if (L_24)
		{
			G_B11_0 = L_24;
			goto IL_00bd;
		}
	}
	{
		return;
	}

IL_00bd:
	{
		NullCheck(G_B11_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_25 = G_B11_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_26 = L_25;
		G_B12_0 = L_26;
		if (L_26)
		{
			G_B13_0 = L_26;
			goto IL_00c7;
		}
	}
	{
		return;
	}

IL_00c7:
	{
		NullCheck(G_B13_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_27 = G_B13_0->___OnStreamReady_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_28 = L_27;
		G_B14_0 = L_28;
		if (L_28)
		{
			G_B15_0 = L_28;
			goto IL_00d1;
		}
	}
	{
		return;
	}

IL_00d1:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_29 = ___0_clipData;
		NullCheck(G_B15_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B15_0, L_29, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamCancel_m0CF8AF068FF00C6A775AC6D4B4713FB7738909CF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamCancel(TTSClipData clipData) => OnStreamCancel(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamCancel(TTSClipData clipData) => OnStreamCancel(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91(__this, L_0, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamCancel(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamCancel_m8DD804F115852B4A2443A459D03FB57BC4A3AA91 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_fromDisk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B5_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_1 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B12_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B11_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 3);
		// clipData.onPlaybackReady?.Invoke(CANCEL_WARNING);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0014;
		}
	}
	{
		goto IL_001e;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
	}

IL_001e:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		NullCheck(L_4);
		L_4->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Canceled", clipData));
		bool L_5 = ___1_fromDisk;
		G_B4_0 = __this;
		if (L_5)
		{
			G_B5_0 = __this;
			goto IL_0030;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0035;
	}

IL_0030:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0035:
	{
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_0, _stringLiteral0F266AC6431F19C7C4152990880D58E403B792E9, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___0_clipData;
		NullCheck(G_B6_1);
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_6, L_7);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_8, NULL);
		// Events?.Stream?.OnStreamCancel?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9;
		L_9 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_10 = L_9;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0056;
		}
	}
	{
		goto IL_0072;
	}

IL_0056:
	{
		NullCheck(G_B8_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_11 = G_B8_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_0061;
		}
	}
	{
		goto IL_0072;
	}

IL_0061:
	{
		NullCheck(G_B10_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_13 = G_B10_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_14 = L_13;
		G_B11_0 = L_14;
		if (L_14)
		{
			G_B12_0 = L_14;
			goto IL_006c;
		}
	}
	{
		goto IL_0072;
	}

IL_006c:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___0_clipData;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B12_0, L_15, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0072:
	{
		// Unload(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___0_clipData;
		TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnDiskStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnDiskStreamError_mCC205CC7FC8E0C9B25BB81A1412621E29AF10008 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// private void OnDiskStreamError(TTSClipData clipData, string error) => OnStreamError(clipData, error, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		String_t* L_1 = ___1_error;
		TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// private void OnWebStreamError(TTSClipData clipData, string error) => OnStreamError(clipData, error, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		String_t* L_1 = ___1_error;
		TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnStreamError(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnStreamError_m6F88F430BD6CB18209EA11CCE2364D9DC7D78BFC (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, bool ___2_fromDisk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938D7942C254913A76B4869239949263802711D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B5_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_1 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B12_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B11_0 = NULL;
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_0, 3);
		// clipData.onPlaybackReady?.Invoke(error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1->___onPlaybackReady_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0014;
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		String_t* L_4 = ___1_error;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_4, NULL);
	}

IL_001a:
	{
		// clipData.onPlaybackReady = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		NullCheck(L_5);
		L_5->___onPlaybackReady_10 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___onPlaybackReady_10), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.E(GetClipLog($"{(fromDisk ? "Disk" : "Web")} Stream Error\nError: {error}", clipData));
		bool L_6 = ___2_fromDisk;
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_002c;
		}
	}
	{
		G_B6_0 = _stringLiteral8938D7942C254913A76B4869239949263802711D;
		G_B6_1 = G_B4_0;
		goto IL_0031;
	}

IL_002c:
	{
		G_B6_0 = _stringLiteralC2054D23328B6C0B28A7440487284F7F123EB486;
		G_B6_1 = G_B5_0;
	}

IL_0031:
	{
		String_t* L_7 = ___1_error;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B6_0, _stringLiteral42B8862F535F26D1DB28B62E3329CD7CBDFE8AAD, L_7, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___0_clipData;
		NullCheck(G_B6_1);
		String_t* L_10;
		L_10 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B6_1, L_8, L_9);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_10, NULL);
		// Events?.Stream?.OnStreamError?.Invoke(clipData, error);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_11;
		L_11 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_0053;
		}
	}
	{
		goto IL_0070;
	}

IL_0053:
	{
		NullCheck(G_B8_0);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13 = G_B8_0->___Stream_2;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_005e;
		}
	}
	{
		goto IL_0070;
	}

IL_005e:
	{
		NullCheck(G_B10_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_15 = G_B10_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_16 = L_15;
		G_B11_0 = L_16;
		if (L_16)
		{
			G_B12_0 = L_16;
			goto IL_0069;
		}
	}
	{
		goto IL_0070;
	}

IL_0069:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = ___0_clipData;
		String_t* L_18 = ___1_error;
		NullCheck(G_B12_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B12_0, L_17, L_18, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0070:
	{
		// Unload(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = ___0_clipData;
		TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_0 = NULL;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_1 = NULL;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_2 = NULL;
	int32_t V_3 = 0;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_4 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* G_B3_0 = NULL;
	{
		// TTSClipData[] clips = RuntimeCacheHandler?.GetClips();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* >::Invoke(4 /* Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClips() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		// if (clips == null)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// TTSClipData[] copy = new TTSClipData[clips.Length];
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_4 = V_0;
		NullCheck(L_4);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_5 = (TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)(TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)SZArrayNew(TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_1 = L_5;
		// clips.CopyTo(copy, 0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_6 = V_0;
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_7 = V_1;
		NullCheck((RuntimeArray*)L_6);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_6, (RuntimeArray*)L_7, 0, NULL);
		// foreach (var clip in copy)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_8 = V_1;
		V_2 = L_8;
		V_3 = 0;
		goto IL_003f;
	}

IL_002e:
	{
		// foreach (var clip in copy)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		// Unload(clip);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = V_4;
		TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16(__this, L_13, NULL);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003f:
	{
		// foreach (var clip in copy)
		int32_t L_15 = V_3;
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::Unload(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_Unload_mDA9BD950F640B5C7AB850942CDD9F3365AAC7A16 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RuntimeCacheHandler != null)
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// RuntimeCacheHandler.RemoveClip(clipData.clipID);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::RemoveClip(System.String) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, L_1, L_3);
		return;
	}

IL_001a:
	{
		// OnUnloadBegin(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnUnloadBegin(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B14_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B13_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B16_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B15_0 = NULL;
	{
		// if (clipData.loadState == TTSClipLoadState.Preparing)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		NullCheck(L_0);
		int32_t L_1 = L_0->___loadState_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		// WebHandler?.CancelWebStream(clipData);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0015;
		}
	}
	{
		goto IL_001c;
	}

IL_0015:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		NullCheck(G_B3_0);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(4 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSWebHandler::CancelWebStream(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B3_0, L_4);
	}

IL_001c:
	{
		// WebHandler?.CancelWebDownload(clipData, GetDiskCachePath(clipData.textToSpeak, clipData.clipID, clipData.voiceSettings, clipData.diskCacheSettings));
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, __this);
		RuntimeObject* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0028;
		}
	}
	{
		goto IL_004d;
	}

IL_0028:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = ___0_clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___0_clipData;
		NullCheck(L_9);
		String_t* L_10 = L_9->___textToSpeak_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = ___0_clipData;
		NullCheck(L_11);
		String_t* L_12 = L_11->___clipID_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___0_clipData;
		NullCheck(L_13);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_14 = L_13->___voiceSettings_3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___0_clipData;
		NullCheck(L_15);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_16 = L_15->___diskCacheSettings_4;
		String_t* L_17;
		L_17 = TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911(__this, L_10, L_12, L_14, L_16, NULL);
		NullCheck(G_B6_0);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(8 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSWebHandler::CancelWebDownload(Meta.WitAi.TTS.Data.TTSClipData,System.String) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B6_0, L_8, L_17);
	}

IL_004d:
	{
		// DiskCacheHandler?.CancelDiskCacheStream(clipData);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		RuntimeObject* L_20 = L_19;
		G_B8_0 = L_20;
		if (L_20)
		{
			G_B9_0 = L_20;
			goto IL_0059;
		}
	}
	{
		goto IL_007a;
	}

IL_0059:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_21 = ___0_clipData;
		NullCheck(G_B9_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(7 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::CancelDiskCacheStream(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, G_B9_0, L_21);
		goto IL_007a;
	}

IL_0061:
	{
		// else if (clipData.clip != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = ___0_clipData;
		NullCheck(L_22);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23 = L_22->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_007a;
		}
	}
	{
		// MonoBehaviour.DestroyImmediate(clipData.clip);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_25 = ___0_clipData;
		NullCheck(L_25);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26 = L_25->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_26, NULL);
	}

IL_007a:
	{
		// SetClipLoadState(clipData, TTSClipLoadState.Unloaded);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = ___0_clipData;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, int32_t >::Invoke(18 /* System.Void Meta.WitAi.TTS.TTSService::SetClipLoadState(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState) */, __this, L_27, 0);
		// VLog.D(GetClipLog($"Unload Clip", clipData));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = ___0_clipData;
		String_t* L_29;
		L_29 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, _stringLiteralAEC0BE82137004DC2AEBEF4D61180AC524907B84, L_28);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_29, NULL);
		// Events?.OnClipUnloaded?.Invoke(clipData);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_30;
		L_30 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_31 = L_30;
		G_B13_0 = L_31;
		if (L_31)
		{
			G_B14_0 = L_31;
			goto IL_009e;
		}
	}
	{
		return;
	}

IL_009e:
	{
		NullCheck(G_B14_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_32 = G_B14_0->___OnClipUnloaded_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_33 = L_32;
		G_B15_0 = L_33;
		if (L_33)
		{
			G_B16_0 = L_33;
			goto IL_00a8;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_34 = ___0_clipData;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B16_0, L_34, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::GetRuntimeCachedClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_clipID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public TTSClipData GetRuntimeCachedClip(string clipID) => RuntimeCacheHandler?.GetClip(clipID);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)NULL;
	}

IL_000c:
	{
		String_t* L_2 = ___0_clipID;
		NullCheck(G_B2_0);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3;
		L_3 = InterfaceFuncInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(5 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClip(System.String) */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, G_B2_0, L_2);
		return L_3;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.TTSService::GetAllRuntimeCachedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSService_GetAllRuntimeCachedClips_mBC018CF0D41BC06099306FFDEFF052CFEC869C20 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public TTSClipData[] GetAllRuntimeCachedClips() => RuntimeCacheHandler?.GetClips();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.TTSService::get_RuntimeCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_2;
		L_2 = InterfaceFuncInvoker0< TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* >::Invoke(4 /* Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler::GetClips() */, ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnRuntimeClipAdded(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnRuntimeClipAdded_m418FD37F2E83D4C7D19025C63DE54D7E44C3B3DA (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnRuntimeClipAdded(TTSClipData clipData) => OnLoadBegin(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnLoadBegin_m465EB9C9C01F48F9DF6C39DEBFB4004837E26BCF(__this, L_0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnRuntimeClipRemoved(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnRuntimeClipRemoved_mACBD791799BE1701C17837DFFD7FC77BBB97FF9E (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnRuntimeClipRemoved(TTSClipData clipData) => OnUnloadBegin(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		TTSService_OnUnloadBegin_m516F2EFA34508A829D64C7DB28D7B0A007AC4B6E(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DiskCacheHandler != null && DiskCacheHandler.ShouldCacheToDisk(clipData);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(4 /* System.Boolean Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.String Meta.WitAi.TTS.TTSService::GetDiskCachePath(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSService_GetDiskCachePath_m042A61F1789DD1344E3023617BF688BCD3598911 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// DiskCacheHandler?.GetDiskCachePath(CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000c:
	{
		String_t* L_2 = ___0_textToSpeak;
		String_t* L_3 = ___1_clipID;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_4 = ___2_voiceSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___3_diskCacheSettings;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6;
		L_6 = VirtualFuncInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(17 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_2, L_3, L_4, L_5);
		NullCheck(G_B2_0);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.String Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, G_B2_0, L_6);
		return L_7;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m538D81C89CED7D461E22B35E6B9915708CD1D80B (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___1_onDownloadComplete, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, null, null, onDownloadComplete);
		String_t* L_0 = ___0_textToSpeak;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_1 = ___1_onDownloadComplete;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)NULL, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_1, NULL);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m37925B846BF259D6337D3351571814FF211962DF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_presetVoiceId, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___2_onDownloadComplete, const RuntimeMethod* method) 
{
	{
		// Action<TTSClipData, string, string> onDownloadComplete = null) => DownloadToDiskCache(textToSpeak, null,
		// GetPresetVoiceSettings(presetVoiceId), null, onDownloadComplete);
		String_t* L_0 = ___0_textToSpeak;
		String_t* L_1 = ___1_presetVoiceId;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_3 = ___2_onDownloadComplete;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, L_3, NULL);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m0F89047E490AE0FF62284B816077A54BCC771935 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_presetVoiceId, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___2_diskCacheSettings, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___3_onDownloadComplete, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, GetPresetVoiceSettings(presetVoiceId), diskCacheSettings,
		//     onDownloadComplete);
		String_t* L_0 = ___0_textToSpeak;
		String_t* L_1 = ___1_presetVoiceId;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(__this, L_1, NULL);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3 = ___2_diskCacheSettings;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_4 = ___3_onDownloadComplete;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m80010FA2D7EB89607345A046667B312A0F3D4471 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___1_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___2_diskCacheSettings, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___3_onDownloadComplete, const RuntimeMethod* method) 
{
	{
		// DownloadToDiskCache(textToSpeak, null, voiceSettings, diskCacheSettings, onDownloadComplete);
		String_t* L_0 = ___0_textToSpeak;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_1 = ___1_voiceSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_2 = ___2_diskCacheSettings;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_3 = ___3_onDownloadComplete;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032(__this, L_0, (String_t*)NULL, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::DownloadToDiskCache(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSService_DownloadToDiskCache_m6CB01257020249E7A71B7ACDBA464016DD9C5032 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___4_onDownloadComplete, const RuntimeMethod* method) 
{
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	{
		// TTSClipData clipData = CreateClipData(textToSpeak, clipID, voiceSettings, diskCacheSettings);
		String_t* L_0 = ___0_textToSpeak;
		String_t* L_1 = ___1_clipID;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2 = ___2_voiceSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3 = ___3_diskCacheSettings;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = VirtualFuncInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* >::Invoke(17 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::CreateClipData(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings) */, __this, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		// DownloadToDiskCache(clipData, onDownloadComplete);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = V_0;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_6 = ___4_onDownloadComplete;
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* >::Invoke(22 /* System.Void Meta.WitAi.TTS.TTSService::DownloadToDiskCache(Meta.WitAi.TTS.Data.TTSClipData,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>) */, __this, L_5, L_6);
		// return clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = V_0;
		return L_7;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::DownloadToDiskCache(Meta.WitAi.TTS.Data.TTSClipData,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_DownloadToDiskCache_mB011E81AF4C7A866E66FB57EE4CBCF4BABC155A0 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* ___1_onDownloadComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_0 = (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass63_0__ctor_mACF879F390ADB9C9F942DA97D482A5254B18F072(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_2);
		L_2->___clipData_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_2), (void*)L_3);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_4 = V_0;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_5 = ___1_onDownloadComplete;
		NullCheck(L_4);
		L_4->___onDownloadComplete_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_3), (void*)L_5);
		// AddDelegates();
		VirtualActionInvoker0::Invoke(12 /* System.Void Meta.WitAi.TTS.TTSService::AddDelegates() */, __this);
		// string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = L_8->___clipData_2;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.String Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_7, L_9);
		NullCheck(L_6);
		L_6->___downloadPath_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___downloadPath_1), (void*)L_10);
		// DiskCacheHandler.CheckCachedToDisk(clipData, (clip, found) =>
		// {
		//     // Cache checked
		//     VLog.D(GetClipLog($"Disk Cache {(found ? "Found" : "Missing")}\nPath: {downloadPath}", clipData));
		// 
		//     // Already downloaded, return successful
		//     if (found)
		//     {
		//         onDownloadComplete?.Invoke(clipData, downloadPath, string.Empty);
		//         return;
		//     }
		// 
		//     // Preload selected but not in disk cache, return an error
		//     if (Application.isPlaying && clipData.diskCacheSettings.DiskCacheLocation == TTSDiskCacheLocation.Preload)
		//     {
		//         onDownloadComplete?.Invoke(clipData, downloadPath, "File is not Preloaded");
		//         return;
		//     }
		// 
		//     // Add download completion callback
		//     clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		// 
		//     // Download to cache
		//     WebHandler.RequestDownloadFromWeb(clipData, downloadPath);
		// });
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, __this);
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_12 = V_0;
		NullCheck(L_12);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = L_12->___clipData_2;
		U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* L_14 = V_0;
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_15 = (Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6*)il2cpp_codegen_object_new(Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_2__ctor_m3FDC374212F42B0C23B179F1335A6B702F6A3D6F(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* >::Invoke(5 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::CheckCachedToDisk(Meta.WitAi.TTS.Data.TTSClipData,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_11, L_13, L_15);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadBegin(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral105B80D12DB6276478E269600E49F476237FA089);
		s_Il2CppMethodInitialized = true;
	}
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B2_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B1_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B3_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B5_0 = NULL;
	{
		// VLog.D(GetClipLog($"Download Clip - Begin\nPath: {downloadPath}", clipData));
		String_t* L_0 = ___1_downloadPath;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral105B80D12DB6276478E269600E49F476237FA089, L_0, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_1, L_2);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_3, NULL);
		// Events?.Download?.OnDownloadBegin?.Invoke(clipData, downloadPath);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_4;
		L_4 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		NullCheck(G_B2_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_6 = G_B2_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		NullCheck(G_B4_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_8 = G_B4_0->___OnDownloadBegin_0;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___0_clipData;
		String_t* L_11 = ___1_downloadPath;
		NullCheck(G_B6_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B6_0, L_10, L_11, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadSuccess(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadSuccess_mEF37EB28CA1038639675AB25390AE83CB5D8ED78 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B9_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(string.Empty);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		goto IL_0016;
	}

IL_000c:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
	}

IL_0016:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		NullCheck(L_4);
		L_4->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"Download Clip - Success\nPath: {downloadPath}", clipData));
		String_t* L_5 = ___1_downloadPath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral064247AE52C426F897058C5DFDB095F0590FDEB9, L_5, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___0_clipData;
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_6, L_7);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_8, NULL);
		// Events?.Download?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9;
		L_9 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_11 = G_B5_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_13 = G_B7_0->___OnDownloadSuccess_1;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___0_clipData;
		String_t* L_16 = ___1_downloadPath;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B9_0, L_15, L_16, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadCancel(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B9_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(CANCEL_WARNING);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		goto IL_0016;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
	}

IL_0016:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_3);
		L_3->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.D(GetClipLog($"Download Clip - Canceled\nPath: {downloadPath}", clipData));
		String_t* L_4 = ___1_downloadPath;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3DA4796A2E5EA8D2E1B1CE0B2085976BC1779BD1, L_4, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = ___0_clipData;
		String_t* L_7;
		L_7 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_5, L_6);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_7, NULL);
		// Events?.Download?.OnDownloadCancel?.Invoke(clipData, downloadPath);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_8;
		L_8 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_10 = G_B5_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_11 = L_10;
		G_B6_0 = L_11;
		if (L_11)
		{
			G_B7_0 = L_11;
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_12 = G_B7_0->___OnDownloadCancel_2;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_13 = L_12;
		G_B8_0 = L_13;
		if (L_13)
		{
			G_B9_0 = L_13;
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___0_clipData;
		String_t* L_15 = ___1_downloadPath;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B9_0, L_14, L_15, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::OnWebDownloadError(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_OnWebDownloadError_mB7A9D5D61026729A50878C75663F9F8E45E7F796 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, String_t* ___2_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B5_0 = NULL;
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B9_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B8_0 = NULL;
	{
		// clipData.onDownloadComplete?.Invoke(error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		NullCheck(L_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_3 = ___2_error;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
	}

IL_0012:
	{
		// clipData.onDownloadComplete = null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		NullCheck(L_4);
		L_4->___onDownloadComplete_11 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onDownloadComplete_11), (void*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL);
		// VLog.E(GetClipLog($"Download Clip - Failed\nPath: {downloadPath}", clipData));
		String_t* L_5 = ___1_downloadPath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral92CEAA79C19FD21E860FD68E7D930D555B066F91, L_5, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___0_clipData;
		String_t* L_8;
		L_8 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_6, L_7);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_8, NULL);
		// Events?.Download?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_9;
		L_9 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(__this, NULL);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		NullCheck(G_B5_0);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_11 = G_B5_0->___Download_3;
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_13 = G_B7_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_14 = L_13;
		G_B8_0 = L_14;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = ___0_clipData;
		String_t* L_16 = ___1_downloadPath;
		String_t* L_17 = ___2_error;
		NullCheck(G_B9_0);
		UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A(G_B9_0, L_15, L_16, L_17, UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.TTSService::GetAllPresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSService_GetAllPresetVoiceSettings_m6B04A3111ADEAB06A759E04934A950970F4C54FF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public TTSVoiceSettings[] GetAllPresetVoiceSettings() => VoiceProvider?.PresetVoiceSettings;
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_2;
		L_2 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* >::Invoke(1 /* Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.TTSService::GetPresetVoiceSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, String_t* ___0_presetVoiceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* L_0 = (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass69_0__ctor_m523768DAB4A4C74ADEAE20E4C7554FCB2AA902F1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* L_1 = V_0;
		String_t* L_2 = ___0_presetVoiceId;
		NullCheck(L_1);
		L_1->___presetVoiceId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___presetVoiceId_0), (void*)L_2);
		// if (VoiceProvider == null || VoiceProvider.PresetVoiceSettings == null)
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_4);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_5;
		L_5 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* >::Invoke(1 /* Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		// return null;
		return (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*)NULL;
	}

IL_0024:
	{
		// return Array.Find(VoiceProvider.PresetVoiceSettings, (v) => string.Equals(v.settingsID, presetVoiceId, StringComparison.CurrentCultureIgnoreCase));
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.TTSService::get_VoiceProvider() */, __this);
		NullCheck(L_6);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_7;
		L_7 = InterfaceFuncInvoker0< TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* >::Invoke(1 /* Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider::get_PresetVoiceSettings() */, ITTSVoiceProvider_tCF64868A5AD0DC71EE1EB33D1AB10D5EBABA9E49_il2cpp_TypeInfo_var, L_6);
		U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* L_8 = V_0;
		Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E* L_9 = (Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E*)il2cpp_codegen_object_new(Predicate_1_tB621C3DC63CA7FF31FB86645EEB605F610BFAE2E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Predicate_1__ctor_mEAD34E1883E74D40C6A33FB21485E6529A681C04(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B_RuntimeMethod_var), NULL);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_10;
		L_10 = Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78(L_7, L_9, Array_Find_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_m706CF481D6CB0257FD8BFF0E141C1EF0A165AD78_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void Meta.WitAi.TTS.TTSService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService__ctor_m0F6DF7E82B702325C181B6D966D0934A143973DE (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private TTSServiceEvents _events = new TTSServiceEvents();
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = (TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF*)il2cpp_codegen_object_new(TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSServiceEvents__ctor_m82EF258C00AB920E79E011CF464D9B6E1EBCB353(L_0, NULL);
		__this->____events_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_5), (void*)L_0);
		// private readonly SHA256 CLIP_HASH = SHA256.Create();
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_1;
		L_1 = SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC(NULL);
		__this->___CLIP_HASH_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CLIP_HASH_8), (void*)L_1);
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
// System.Void Meta.WitAi.TTS.TTSService/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE5BDE4C9826E9CF14D67526AF5ADCB3BC9994CDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* L_0 = (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22*)il2cpp_codegen_object_new(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA7431D6908702D15A126044C78B3B9010B10EF55(L_0, NULL);
		((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA7431D6908702D15A126044C78B3B9010B10EF55 (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService/<>c::<get_Instance>b__1_0(Meta.WitAi.TTS.TTSService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_InstanceU3Eb__1_0_m0719FB89927CD9AA2944B17239533F236BFFEB02 (U3CU3Ec_tB4E501BA0F0910415371ABAB5FBF59115EC3FD22* __this, TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ___0_o, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _instance = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = ___0_o;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B((&V_0), NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m3520C0A2B28626E501AE270ABDD8ABC3D4B02263 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__3_mA938A5120BD25B0587F9DB012961CEFB159FB7CE (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, String_t* ___0_e, const RuntimeMethod* method) 
{
	{
		// clipData.onPlaybackReady += (e) => onStreamReady(clipData, e);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		String_t* L_2 = ___0_e;
		NullCheck(L_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__0_m19CFBCFB32BE992FC901AED8C81E5E46BF9AE2EC (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B2_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B2_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B1_0 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B3_1 = NULL;
	Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* G_B3_2 = NULL;
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData,
		//     clipData.loadState == TTSClipLoadState.Loaded ? string.Empty : "Error")));
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___loadState_7;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0026;
	}

IL_0021:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0026:
	{
		NullCheck(G_B3_2);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(G_B3_2, G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__1_mB05EB4E496BB7F9BB730123F1525CC855C8978CD (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoroutineUtility.StartCoroutine(CallAfterAMoment(() => onStreamReady(clipData, "Could not add to runtime cache")));
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		NullCheck(L_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(L_0, L_1, _stringLiteral11A9E2163C698E5329DD9C0F38459C5678EC4F65, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__4_mFE6D3C19F7E8DFEDBD7F85131CC166EE848FFA46 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// clipData.onPlaybackReady += (error) => onStreamReady(clipData, error);
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_0 = __this->___onStreamReady_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_1;
		String_t* L_2 = ___0_error;
		NullCheck(L_0);
		Action_2_Invoke_m1DBB6E225374096C6D9376FFA05CB29D9254A300_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__2_m8B2D2968522F94AF01F90ACBC87BC7AFC0BC8970 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* V_2 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B7_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B7_1 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B7_2 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B6_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B6_1 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B6_2 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// string invalidError = WebHandler.IsTextValid(clipData.textToSpeak);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->___U3CU3E4__this_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_0);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___textToSpeak_0;
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(2 /* System.String Meta.WitAi.TTS.Interfaces.ITTSWebHandler::IsTextValid(System.String) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_1, L_3);
		V_0 = L_4;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// OnWebStreamError(clipData, invalidError);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_7 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = __this->___clipData_1;
		String_t* L_9 = V_0;
		NullCheck(L_7);
		TTSService_OnWebStreamError_m54B61BF3CCA008B30FE95EB06D4E6B96697AE659(L_7, L_8, L_9, NULL);
		// return;
		return;
	}

IL_0037:
	{
		// if (ShouldCacheToDisk(clipData))
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_10 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = __this->___clipData_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = TTSService_ShouldCacheToDisk_mC8645C62BB958735C12B053416C122C9DB1B0E78(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_00ea;
		}
	}
	{
		// if (clipData.loadState != TTSClipLoadState.Preparing)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = __this->___clipData_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___loadState_7;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		// string downloadPath = DiskCacheHandler.GetDiskCachePath(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, L_15);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = __this->___clipData_1;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.String Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, L_16, L_17);
		V_1 = L_18;
		// OnWebDownloadBegin(clipData, downloadPath);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_19 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = __this->___clipData_1;
		String_t* L_21 = V_1;
		NullCheck(L_19);
		TTSService_OnWebDownloadBegin_m8A25725AE577B0A66502B3C5186A716FFA81B292(L_19, L_20, L_21, NULL);
		// OnWebDownloadCancel(clipData, downloadPath);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_22 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23 = __this->___clipData_1;
		String_t* L_24 = V_1;
		NullCheck(L_22);
		TTSService_OnWebDownloadCancel_m699E93D33AD6D6C701554927E2152C3920C0F98A(L_22, L_23, L_24, NULL);
		// OnWebStreamBegin(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_25 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = __this->___clipData_1;
		NullCheck(L_25);
		TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(L_25, L_26, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_27 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = __this->___clipData_1;
		NullCheck(L_27);
		TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(L_27, L_28, NULL);
		// return;
		return;
	}

IL_00b9:
	{
		// DownloadToDiskCache(clipData, (clipData2, downloadPath, error) =>
		// {
		//     // Download was canceled before starting
		//     if (string.Equals(error, CANCEL_WARNING))
		//     {
		//         OnWebStreamBegin(clipData);
		//         OnWebStreamCancel(clipData);
		//         return;
		//     }
		// 
		//     // Success
		//     if (string.IsNullOrEmpty(error))
		//     {
		//         DiskCacheHandler?.StreamFromDiskCache(clipData);
		//     }
		//     // Failed
		//     else
		//     {
		//         WebHandler?.RequestStreamFromWeb(clipData);
		//     }
		// });
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_29 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = __this->___clipData_1;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_31 = __this->___U3CU3E9__5_3;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_32 = L_31;
		G_B6_0 = L_32;
		G_B6_1 = L_30;
		G_B6_2 = L_29;
		if (L_32)
		{
			G_B7_0 = L_32;
			G_B7_1 = L_30;
			G_B7_2 = L_29;
			goto IL_00e4;
		}
	}
	{
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_33 = (Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D*)il2cpp_codegen_object_new(Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_3__ctor_mC4EA44981086B6C5D5142C90ADAC15001A00E418(L_33, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981_RuntimeMethod_var), NULL);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_34 = L_33;
		V_2 = L_34;
		__this->___U3CU3E9__5_3 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__5_3), (void*)L_34);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_35 = V_2;
		G_B7_0 = L_35;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_00e4:
	{
		NullCheck(G_B7_2);
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* >::Invoke(22 /* System.Void Meta.WitAi.TTS.TTSService::DownloadToDiskCache(Meta.WitAi.TTS.Data.TTSClipData,System.Action`3<Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String>) */, G_B7_2, G_B7_1, G_B7_0);
		return;
	}

IL_00ea:
	{
		// if (clipData.loadState != TTSClipLoadState.Preparing)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_36 = __this->___clipData_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->___loadState_7;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		// OnWebStreamBegin(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_38 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_39 = __this->___clipData_1;
		NullCheck(L_38);
		TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(L_38, L_39, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_40 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_41 = __this->___clipData_1;
		NullCheck(L_40);
		TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(L_40, L_41, NULL);
		// return;
		return;
	}

IL_011b:
	{
		// WebHandler?.RequestStreamFromWeb(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_42 = __this->___U3CU3E4__this_2;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_42);
		RuntimeObject* L_44 = L_43;
		G_B11_0 = L_44;
		if (L_44)
		{
			G_B12_0 = L_44;
			goto IL_012b;
		}
	}
	{
		return;
	}

IL_012b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_45 = __this->___clipData_1;
		NullCheck(G_B12_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSWebHandler::RequestStreamFromWeb(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B12_0, L_45);
		// }));
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass34_0::<Load>b__5(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CLoadU3Eb__5_m6581160CCF71E79F2404C2F046037B63893B9981 (U3CU3Ec__DisplayClass34_0_t4B7CAC9EC36D37EF7D78C20E0B1B4DEF4AAA9B61* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData2, String_t* ___1_downloadPath, String_t* ___2_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// if (string.Equals(error, CANCEL_WARNING))
		String_t* L_0 = ___2_error;
		bool L_1;
		L_1 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, _stringLiteral8A3C71AF924D8E06B6442B912950178D34D1D459, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// OnWebStreamBegin(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_2 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = __this->___clipData_1;
		NullCheck(L_2);
		TTSService_OnWebStreamBegin_m6C98FE27CAE678C817E2938E9C47667ABFD873A4(L_2, L_3, NULL);
		// OnWebStreamCancel(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_4 = __this->___U3CU3E4__this_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = __this->___clipData_1;
		NullCheck(L_4);
		TTSService_OnWebStreamCancel_m390F1C15AC89D640E2C2CEB16DCFD29D769A98BF(L_4, L_5, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// if (string.IsNullOrEmpty(error))
		String_t* L_6 = ___2_error;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// DiskCacheHandler?.StreamFromDiskCache(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.TTSService::get_DiskCacheHandler() */, L_8);
		RuntimeObject* L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = __this->___clipData_1;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(6 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler::StreamFromDiskCache(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_il2cpp_TypeInfo_var, G_B5_0, L_11);
		return;
	}

IL_0054:
	{
		// WebHandler?.RequestStreamFromWeb(clipData);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_12);
		RuntimeObject* L_14 = L_13;
		G_B7_0 = L_14;
		if (L_14)
		{
			G_B8_0 = L_14;
			goto IL_0064;
		}
	}
	{
		return;
	}

IL_0064:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = __this->___clipData_1;
		NullCheck(G_B8_0);
		InterfaceActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(3 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSWebHandler::RequestStreamFromWeb(Meta.WitAi.TTS.Data.TTSClipData) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, G_B8_0, L_15);
		// });
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
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35__ctor_mD6B60907C94BB96313CA7507F6EEE2425044EFDB (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35_System_IDisposable_Dispose_mD6F9E5A9A201F382BDA87D1BD752506D7F62C19D (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallAfterAMomentU3Ed__35_MoveNext_mCD52495AE3D5E3455CC265EFED649B3A59ED6838 (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0056;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_005d;
	}

IL_0046:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005d:
	{
		// call();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___call_2;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallAfterAMomentU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCED3000058AFFB546ADED530B2143AE70798132B (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m297AD610849F932B17D18A89F946F096A8C94E77 (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_Reset_m297AD610849F932B17D18A89F946F096A8C94E77_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.TTSService/<CallAfterAMoment>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallAfterAMomentU3Ed__35_System_Collections_IEnumerator_get_Current_mCC965DF04154949BBD212C313DA0F2E29EF8EB57 (U3CCallAfterAMomentU3Ed__35_tDA8338DB4F6E12834C8938E6B0A87AC202DFB211* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_mACF879F390ADB9C9F942DA97D482A5254B18F072 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<DownloadToDiskCache>b__0(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__0_m34C6E6793FB59FD8F6942BB1889BA7D7693C0DB4 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clip, bool ___1_found, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* G_B3_2 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B6_0 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B5_0 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B11_0 = NULL;
	Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* G_B10_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B14_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B14_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B14_2 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B13_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* G_B13_2 = NULL;
	{
		// VLog.D(GetClipLog($"Disk Cache {(found ? "Found" : "Missing")}\nPath: {downloadPath}", clipData));
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->___U3CU3E4__this_0;
		bool L_1 = ___1_found;
		G_B1_0 = _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral10D4D3E28E738F5A63F6F779970709AEAA675B24;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral9F96D3B40AFA077ECA5DDA693AD76F6362A2E458;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral24D17737E33030C56D2C3E06DB62C278083AA261;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		String_t* L_2 = __this->___downloadPath_1;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_1, G_B3_0, _stringLiteral239311A509E3B1C5F19A9F24EE7793BF3D880676, L_2, NULL);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = __this->___clipData_2;
		NullCheck(G_B3_2);
		String_t* L_5;
		L_5 = VirtualFuncInvoker2< String_t*, String_t*, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.String Meta.WitAi.TTS.TTSService::GetClipLog(System.String,Meta.WitAi.TTS.Data.TTSClipData) */, G_B3_2, L_3, L_4);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_5, NULL);
		// if (found)
		bool L_6 = ___1_found;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// onDownloadComplete?.Invoke(clipData, downloadPath, string.Empty);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_7 = __this->___onDownloadComplete_3;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = __this->___clipData_2;
		String_t* L_10 = __this->___downloadPath_1;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(G_B6_0);
		Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline(G_B6_0, L_9, L_10, L_11, NULL);
		// return;
		return;
	}

IL_005f:
	{
		// if (Application.isPlaying && clipData.diskCacheSettings.DiskCacheLocation == TTSDiskCacheLocation.Preload)
		bool L_12;
		L_12 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = __this->___clipData_2;
		NullCheck(L_13);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_14 = L_13->___diskCacheSettings_4;
		NullCheck(L_14);
		int32_t L_15 = L_14->___DiskCacheLocation_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// onDownloadComplete?.Invoke(clipData, downloadPath, "File is not Preloaded");
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_16 = __this->___onDownloadComplete_3;
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_17 = L_16;
		G_B10_0 = L_17;
		if (L_17)
		{
			G_B11_0 = L_17;
			goto IL_0084;
		}
	}
	{
		return;
	}

IL_0084:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = __this->___clipData_2;
		String_t* L_19 = __this->___downloadPath_1;
		NullCheck(G_B11_0);
		Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline(G_B11_0, L_18, L_19, _stringLiteral9B7CE1E457B192CBF883B7F0E09944DFE564A7F7, NULL);
		// return;
		return;
	}

IL_009b:
	{
		// clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = __this->___clipData_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_21 = L_20;
		NullCheck(L_21);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_22 = L_21->___onDownloadComplete_11;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_23 = __this->___U3CU3E9__1_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_24 = L_23;
		G_B13_0 = L_24;
		G_B13_1 = L_22;
		G_B13_2 = L_21;
		if (L_24)
		{
			G_B14_0 = L_24;
			G_B14_1 = L_22;
			G_B14_2 = L_21;
			goto IL_00c6;
		}
	}
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_25 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_25, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = L_25;
		V_0 = L_26;
		__this->___U3CU3E9__1_4 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_4), (void*)L_26);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = V_0;
		G_B14_0 = L_27;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00c6:
	{
		Delegate_t* L_28;
		L_28 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B14_1, G_B14_0, NULL);
		NullCheck(G_B14_2);
		G_B14_2->___onDownloadComplete_11 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_28, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_2->___onDownloadComplete_11), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_28, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// WebHandler.RequestDownloadFromWeb(clipData, downloadPath);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_29 = __this->___U3CU3E4__this_0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.TTSService::get_WebHandler() */, L_29);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_31 = __this->___clipData_2;
		String_t* L_32 = __this->___downloadPath_1;
		NullCheck(L_30);
		InterfaceActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(7 /* System.Void Meta.WitAi.TTS.Interfaces.ITTSWebHandler::RequestDownloadFromWeb(Meta.WitAi.TTS.Data.TTSClipData,System.String) */, ITTSWebHandler_tE4685959F63788910D98524B2613E156D24F85EB_il2cpp_TypeInfo_var, L_30, L_31, L_32);
		// });
		return;
	}
}
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass63_0::<DownloadToDiskCache>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDownloadToDiskCacheU3Eb__1_m24C4FD7A10503D355AFFC79A614FC99E7A4DF474 (U3CU3Ec__DisplayClass63_0_tB410676522430F6EA431A2639BB99A875B2ABA48* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// clipData.onDownloadComplete += (error) => onDownloadComplete(clipData, downloadPath, error);
		Action_3_t79A1EE9B80B41FFFD091EBD6ABE16327969D3C9D* L_0 = __this->___onDownloadComplete_3;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = __this->___clipData_2;
		String_t* L_2 = __this->___downloadPath_1;
		String_t* L_3 = ___0_error;
		NullCheck(L_0);
		Action_3_Invoke_mCBE5041E64DF8FE41C807D2CE878F6F7CD4BA3CB_inline(L_0, L_1, L_2, L_3, NULL);
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
// System.Void Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m523768DAB4A4C74ADEAE20E4C7554FCB2AA902F1 (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.TTSService/<>c__DisplayClass69_0::<GetPresetVoiceSettings>b__0(Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CGetPresetVoiceSettingsU3Eb__0_mFB7208C51978C12BED6168D02673CA2FD4F28B1B (U3CU3Ec__DisplayClass69_0_t262D662142132DB79AAF0ECF35C08D7680D17582* __this, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___0_v, const RuntimeMethod* method) 
{
	{
		// return Array.Find(VoiceProvider.PresetVoiceSettings, (v) => string.Equals(v.settingsID, presetVoiceId, StringComparison.CurrentCultureIgnoreCase));
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_0 = ___0_v;
		NullCheck(L_0);
		String_t* L_1 = L_0->___settingsID_1;
		String_t* L_2 = __this->___presetVoiceId_0;
		bool L_3;
		L_3 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_1, L_2, 1, NULL);
		return L_3;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEvent__ctor_mF3C9BA103DF084C9BB84C10B7DE2C86881364016 (TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E(__this, UnityEvent_2__ctor_mCC277154CFCC7993481B3E9C3C86C235A979341E_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerTextEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerTextEvent__ctor_mFF40AE1B90F2E8DD278FCA77DC0097575AA384E9 (TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerClipEvent__ctor_m383C9290F9E85DA47F504365EA419FD4A25BC9CB (TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB(__this, UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerClipDataEvent__ctor_m6719113CB535A459C2BC18A741D49A2FD62AD942 (TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336(__this, UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEvents__ctor_m946CE74113558CE4EEFE442A69392BC1F1E6324C (TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* __this, const RuntimeMethod* method) 
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
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSVoiceSettings VoiceSettings => _tts.GetPresetVoiceSettings(presetVoiceID);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->____tts_11;
		String_t* L_1 = __this->___presetVoiceID_4;
		NullCheck(L_0);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSService_GetPresetVoiceSettings_mE28DEBD35319B357F85607CF3A19A1DC2047C208(L_0, L_1, NULL);
		return L_2;
	}
}
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_0 = __this->____events_8;
		return L_0;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker::get_SpeakingClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipData SpeakingClip { get; private set; }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___U3CSpeakingClipU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::set_SpeakingClip(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_set_SpeakingClip_mC8AAB39F58D104DA9D52A388E6FBE0FA46C22A01 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TTSClipData SpeakingClip { get; private set; }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_value;
		__this->___U3CSpeakingClipU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakingClipU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSpeaking => SpeakingClip != null;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0;
		L_0 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		return (bool)((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Utilities.TTSSpeaker::get_QueuedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSSpeaker_get_QueuedClips_mCC42DCD1509635A8F13236DA8E44E8A962999157 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_ToArray_m91013F31E01E054A28E8FC2298B665414ACB9F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipData[] QueuedClips => _queuedClips.ToArray();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_0 = __this->____queuedClips_10;
		NullCheck(L_0);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_1;
		L_1 = Queue_1_ToArray_m91013F31E01E054A28E8FC2298B665414ACB9F20(L_0, Queue_1_ToArray_m91013F31E01E054A28E8FC2298B665414ACB9F20_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsLoading => _queuedClips.Count > 0;
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_0 = __this->____queuedClips_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_inline(L_0, Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Awake_mAFA8B8FE719E938900F3126766E655F7FB884F18 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___AudioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// AudioSource = gameObject.GetComponentInChildren<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F(L_2, GameObject_GetComponentInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mFAEBB55FB90EAF9C6B4B1D064F49F3E94630774F_RuntimeMethod_var);
		__this->___AudioSource_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioSource_5), (void*)L_3);
		// if (AudioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___AudioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// AudioSource = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_6, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___AudioSource_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AudioSource_5), (void*)L_7);
	}

IL_003e:
	{
		// AudioSource.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___AudioSource_5;
		NullCheck(L_8);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_8, (bool)0, NULL);
		// _tts = TTSService.Instance;
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_9;
		L_9 = TTSService_get_Instance_m2AFDD22A8A5E433E2B13424DFD8DD36A1F9E6F68(NULL);
		__this->____tts_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tts_11), (void*)L_9);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnEnable_mADB3DF68E9DB42AF72812E9F8566BA720A8119DE (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_tts == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->____tts_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// _tts.Events.OnClipUnloaded.AddListener(OnClipUnload);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_2 = __this->____tts_11;
		NullCheck(L_2);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_3;
		L_3 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_2, NULL);
		NullCheck(L_3);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_4 = L_3->___OnClipUnloaded_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_5 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061(L_4, L_5, UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnDisable_mEB61ED73172DB09724ABCEDAB415D5E4AC65124D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		VirtualActionInvoker0::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, __this);
		// if (_tts == null)
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0 = __this->____tts_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// _tts.Events.OnClipUnloaded.RemoveListener(OnClipUnload);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_2 = __this->____tts_11;
		NullCheck(L_2);
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_3;
		L_3 = TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline(L_2, NULL);
		NullCheck(L_3);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_4 = L_3->___OnClipUnloaded_1;
		UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809* L_5 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809*)il2cpp_codegen_object_new(UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282(L_4, L_5, UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::GetFormattedText(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_format, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_textsToSpeak, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		// if (textsToSpeak != null && !string.IsNullOrEmpty(format))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___1_textsToSpeak;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1 = ___0_format;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// object[] objects = new object[textsToSpeak.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___1_textsToSpeak;
		NullCheck(L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_0 = L_4;
		// textsToSpeak.CopyTo(objects, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___1_textsToSpeak;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck((RuntimeArray*)L_5);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_5, (RuntimeArray*)L_6, 0, NULL);
		// return string.Format(format, objects);
		String_t* L_7 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_7, L_8, NULL);
		return L_9;
	}

IL_0024:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnClipUnload(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnClipUnload_m6F46B365641695DC25A61CF4C440C3035DC8F61D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_queuedClips.Contains(clipData))
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_0 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_0);
		bool L_2;
		L_2 = Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E(L_0, L_1, Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// RemoveLoadingClip(clipData, true);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		TTSSpeaker_RemoveLoadingClip_m31B155CAEAD267F38644D6E4AB51F717566BF10E(__this, L_3, (bool)1, NULL);
		// OnLoadCancel(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(14 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_4);
	}

IL_001d:
	{
		// if (clipData == SpeakingClip)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6;
		L_6 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		if ((!(((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_5) == ((RuntimeObject*)(TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)L_6))))
		{
			goto IL_002c;
		}
	}
	{
		// StopSpeaking();
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking() */, __this);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m3E1160A00BC1A52F8C21368EF046FC231DCDEC5F (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) 
{
	{
		// public void Speak(string textToSpeak, TTSDiskCacheSettings diskCacheSettings) => Speak(textToSpeak, diskCacheSettings, false);
		String_t* L_0 = ___0_textToSpeak;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_1 = ___1_diskCacheSettings;
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(8 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_0, L_1, (bool)0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m0ABA1A70FAF37002E979AF866EDB7BE48C79CACD (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, const RuntimeMethod* method) 
{
	{
		// public void Speak(string textToSpeak) => Speak(textToSpeak, null);
		String_t* L_0 = ___0_textToSpeak;
		TTSSpeaker_Speak_m3E1160A00BC1A52F8C21368EF046FC231DCDEC5F(__this, L_0, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) 
{
	{
		// public void SpeakQueued(string textToSpeak, TTSDiskCacheSettings diskCacheSettings) => Speak(textToSpeak, diskCacheSettings, true);
		String_t* L_0 = ___0_textToSpeak;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_1 = ___1_diskCacheSettings;
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(8 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_0, L_1, (bool)1);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_mD0D8D308BD6058209262E1F6A444A9D173BBB7AC (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, const RuntimeMethod* method) 
{
	{
		// public void SpeakQueued(string textToSpeak) => SpeakQueued(textToSpeak, null);
		String_t* L_0 = ___0_textToSpeak;
		TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278(__this, L_0, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakFormat(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakFormat_mBE685C05B6CBF5E756A3CABE8EAFFF39F3DC6F63 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_format, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_textsToSpeak, const RuntimeMethod* method) 
{
	{
		// Speak(GetFormattedText(format, textsToSpeak), null, false);
		String_t* L_0 = ___0_format;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_textsToSpeak;
		String_t* L_2;
		L_2 = TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846(__this, L_0, L_1, NULL);
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(8 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, (bool)0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakFormatQueued(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakFormatQueued_m42FC410038BF745DDAC559F9A366BFC3AFD7F9E5 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_format, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_textsToSpeak, const RuntimeMethod* method) 
{
	{
		// Speak(GetFormattedText(format, textsToSpeak), null, true);
		String_t* L_0 = ___0_format;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_textsToSpeak;
		String_t* L_2;
		L_2 = TTSSpeaker_GetFormattedText_m628E90310F5D39C804641CFD7E6A961A9A9EB846(__this, L_0, L_1, NULL);
		VirtualActionInvoker3< String_t*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(8 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_2, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, (bool)1);
		return;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakAsync(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakAsync_m856A9CF7EFA2582E8029413C1FD730845AD857F9 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* L_0 = (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8*)il2cpp_codegen_object_new(U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeakAsyncU3Ed__32__ctor_m2E4016EC1479643B55B1B809A7E0E372BCE11C0C(L_0, 0, NULL);
		U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* L_2 = L_1;
		String_t* L_3 = ___0_textToSpeak;
		NullCheck(L_2);
		L_2->___textToSpeak_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textToSpeak_3), (void*)L_3);
		U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* L_4 = L_2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___1_diskCacheSettings;
		NullCheck(L_4);
		L_4->___diskCacheSettings_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___diskCacheSettings_4), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakAsync_m16363C42C3CB004A8A0992553BE1123D0DB22B27 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* L_0 = (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775*)il2cpp_codegen_object_new(U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeakAsyncU3Ed__33__ctor_mE565444614C4FE31C7A1AF6EB71DE230D4590FEA(L_0, 0, NULL);
		U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* L_2 = L_1;
		String_t* L_3 = ___0_textToSpeak;
		NullCheck(L_2);
		L_2->___textToSpeak_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textToSpeak_3), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueuedAsync(System.String[],Meta.WitAi.TTS.Data.TTSDiskCacheSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_textsToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* L_0 = (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665*)il2cpp_codegen_object_new(U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeakQueuedAsyncU3Ed__34__ctor_mDB5CFE577FED18D2CB64A4E5BC219AC5071E807F(L_0, 0, NULL);
		U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_textsToSpeak;
		NullCheck(L_2);
		L_2->___textsToSpeak_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textsToSpeak_2), (void*)L_3);
		U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* L_4 = L_2;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_5 = ___1_diskCacheSettings;
		NullCheck(L_4);
		L_4->___diskCacheSettings_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___diskCacheSettings_4), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueuedAsync(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_SpeakQueuedAsync_mFB337458B1051705E9B5730217A07348D402020C (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_textsToSpeak, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_0 = (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818*)il2cpp_codegen_object_new(U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpeakQueuedAsyncU3Ed__35__ctor_m9734BA80900926C49871935688E643D2EE28F777(L_0, 0, NULL);
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_textsToSpeak;
		NullCheck(L_2);
		L_2->___textsToSpeak_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___textsToSpeak_3), (void*)L_3);
		return L_2;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_mD6A1DEBAC71CAC4CEAB5EB5210AAD1DFDEDF7F58 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___1_diskCacheSettings, bool ___2_addToQueue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160);
		s_Il2CppMethodInitialized = true;
	}
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* V_0 = NULL;
	String_t* V_1 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_2 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B18_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B17_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B20_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B19_0 = NULL;
	{
		// if (prependedText.Length > 0 && !prependedText.EndsWith(" "))
		String_t* L_0 = __this->___prependedText_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_2 = __this->___prependedText_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_2, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// prependedText += " ";
		String_t* L_4 = __this->___prependedText_6;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		__this->___prependedText_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prependedText_6), (void*)L_5);
	}

IL_0036:
	{
		// if (appendedText.Length > 0 && !appendedText.StartsWith(" "))
		String_t* L_6 = __this->___appendedText_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_8 = __this->___appendedText_7;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		// appendedText = " " + appendedText;
		String_t* L_10 = __this->___appendedText_7;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, NULL);
		__this->___appendedText_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appendedText_7), (void*)L_11);
	}

IL_006c:
	{
		// textToSpeak = prependedText + textToSpeak + appendedText;
		String_t* L_12 = __this->___prependedText_6;
		String_t* L_13 = ___0_textToSpeak;
		String_t* L_14 = __this->___appendedText_7;
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, L_13, L_14, NULL);
		___0_textToSpeak = L_15;
		// TTSVoiceSettings voiceSettings = VoiceSettings;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_16;
		L_16 = TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B(__this, NULL);
		V_0 = L_16;
		// if (voiceSettings == null)
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_17 = V_0;
		if (L_17)
		{
			goto IL_00a0;
		}
	}
	{
		// VLog.E($"No voice found with preset id: {presetVoiceID}");
		String_t* L_18 = __this->___presetVoiceID_4;
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD20D043DC2BB8C021CE9DD012EEBAC9EA3464160, L_18, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_19, NULL);
		// return;
		return;
	}

IL_00a0:
	{
		// if (string.IsNullOrEmpty(textToSpeak))
		String_t* L_20 = ___0_textToSpeak;
		bool L_21;
		L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
		if (!L_21)
		{
			goto IL_00b3;
		}
	}
	{
		// VLog.E("No text to speak provided");
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(_stringLiteralA4D3A2F60D16D15F9C93AFAF779983C3ADD88FC4, NULL);
		// return;
		return;
	}

IL_00b3:
	{
		// string newClipID = _tts.GetClipID(textToSpeak, voiceSettings);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_22 = __this->____tts_11;
		String_t* L_23 = ___0_textToSpeak;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_24 = V_0;
		NullCheck(L_22);
		String_t* L_25;
		L_25 = VirtualFuncInvoker2< String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* >::Invoke(16 /* System.String Meta.WitAi.TTS.TTSService::GetClipID(System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings) */, L_22, L_23, L_24);
		V_1 = L_25;
		// TTSClipData newClipData = _tts.GetRuntimeCachedClip(newClipID);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_26 = __this->____tts_11;
		String_t* L_27 = V_1;
		NullCheck(L_26);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28;
		L_28 = TTSService_GetRuntimeCachedClip_m5BE3642A785B432C421BBE6EFFBF0DE5FFC916FA(L_26, L_27, NULL);
		V_2 = L_28;
		// if (!addToQueue)
		bool L_29 = ___2_addToQueue;
		if (L_29)
		{
			goto IL_00d7;
		}
	}
	{
		// StopLoading();
		VirtualActionInvoker0::Invoke(9 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopLoading() */, __this);
	}

IL_00d7:
	{
		// if (newClipData != null && newClipData.loadState == TTSClipLoadState.Loaded)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = V_2;
		if (!L_30)
		{
			goto IL_011d;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = L_31->___loadState_7;
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_011d;
		}
	}
	{
		// if (!addToQueue)
		bool L_33 = ___2_addToQueue;
		if (L_33)
		{
			goto IL_00ec;
		}
	}
	{
		// StopSpeaking();
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking() */, __this);
	}

IL_00ec:
	{
		// _queuedClips.Enqueue(newClipData);
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_34 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_35 = V_2;
		NullCheck(L_34);
		Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B(L_34, L_35, Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
		// Events?.OnClipDataQueued?.Invoke(newClipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_36;
		L_36 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_37 = L_36;
		G_B17_0 = L_37;
		if (L_37)
		{
			G_B18_0 = L_37;
			goto IL_0104;
		}
	}
	{
		goto IL_0115;
	}

IL_0104:
	{
		NullCheck(G_B18_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_38 = G_B18_0->___OnClipDataQueued_7;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_39 = L_38;
		G_B19_0 = L_39;
		if (L_39)
		{
			G_B20_0 = L_39;
			goto IL_010f;
		}
	}
	{
		goto IL_0115;
	}

IL_010f:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_40 = V_2;
		NullCheck(G_B20_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B20_0, L_40, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0115:
	{
		// OnPlaybackReady(newClipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_41 = V_2;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackReady(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_41);
		return;
	}

IL_011d:
	{
		// OnLoadBegin(textToSpeak, newClipID, voiceSettings, diskCacheSettings, addToQueue);
		String_t* L_42 = ___0_textToSpeak;
		String_t* L_43 = V_1;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_44 = V_0;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_45 = ___1_diskCacheSettings;
		bool L_46 = ___2_addToQueue;
		VirtualActionInvoker5< String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, bool >::Invoke(12 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadBegin(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean) */, __this, L_42, L_43, L_44, L_45, L_46);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_StopLoading_m90600B46A247C2A4106542FFD194F0C657300036 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsLoading)
		bool L_0;
		L_0 = TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203(__this, NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// OnLoadCancel(_queuedClips.Dequeue());
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_1 = __this->____queuedClips_10;
		NullCheck(L_1);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9(L_1, Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(14 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_2);
	}

IL_001a:
	{
		// while (_queuedClips.Count > 0)
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_3 = __this->____queuedClips_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_inline(L_3, Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_StopSpeaking_m8A1AC195B241A2037B6DF595870359EB189DD123 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// if (!IsSpeaking)
		bool L_0;
		L_0 = TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// OnPlaybackComplete(true);
		VirtualActionInvoker1< bool >::Invoke(18 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete(System.Boolean) */, __this, (bool)1);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Stop_mAE97D7DA62BE1426520A642B08816A3B6804004E (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// StopLoading();
		VirtualActionInvoker0::Invoke(9 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopLoading() */, __this);
		// StopSpeaking();
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking() */, __this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadBegin(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadBegin_m0FE08B59706570A8CE205501C89347F12620FB97 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___0_textToSpeak, String_t* ___1_clipID, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___2_voiceSettings, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___3_diskCacheSettings, bool ___4_addToQueue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3COnLoadBeginU3Eb__0_m27920F6D9830993F672392D2EDB8001EBB3A998F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF454A4B2372B574ECE70DCBBEBE231D6B0D7C6B6);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* V_0 = NULL;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B2_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B1_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B4_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B3_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B7_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B6_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B9_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B8_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B12_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B11_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B14_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B13_0 = NULL;
	{
		U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* L_0 = (U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass40_0__ctor_m917354977614E8ADA7492C0EAA3B61C241C567C8(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* L_2 = V_0;
		bool L_3 = ___4_addToQueue;
		NullCheck(L_2);
		L_2->___addToQueue_1 = L_3;
		// DateTime startTime = DateTime.Now;
		U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		NullCheck(L_4);
		L_4->___startTime_2 = L_5;
		// TTSClipData newClip = _tts.Load(textToSpeak, clipID, voiceSettings, diskCacheSettings, (clipData, error) => OnClipLoadComplete(clipData, error, addToQueue, startTime));
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_6 = __this->____tts_11;
		String_t* L_7 = ___0_textToSpeak;
		String_t* L_8 = ___1_clipID;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_9 = ___2_voiceSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_10 = ___3_diskCacheSettings;
		U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* L_11 = V_0;
		Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* L_12 = (Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36*)il2cpp_codegen_object_new(Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_2__ctor_mADCB17A6A021877564862A28F1EFCCB172F56C37(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass40_0_U3COnLoadBeginU3Eb__0_m27920F6D9830993F672392D2EDB8001EBB3A998F_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13;
		L_13 = VirtualFuncInvoker5< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, String_t*, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326*, TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*, Action_2_t436AB83C456FE0D97BACB5F6537BF25251E2CE36* >::Invoke(19 /* Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.TTSService::Load(System.String,System.String,Meta.WitAi.TTS.Data.TTSVoiceSettings,Meta.WitAi.TTS.Data.TTSDiskCacheSettings,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.String>) */, L_6, L_7, L_8, L_9, L_10, L_12);
		V_1 = L_13;
		// _queuedClips.Enqueue(newClip);
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_14 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = V_1;
		NullCheck(L_14);
		Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B(L_14, L_15, Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
		// VLog.D($"Load Begin\nText: {textToSpeak}");
		String_t* L_16 = ___0_textToSpeak;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF454A4B2372B574ECE70DCBBEBE231D6B0D7C6B6, L_16, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_17, NULL);
		// Events?.OnClipDataQueued?.Invoke(newClip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_18;
		L_18 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_19 = L_18;
		G_B1_0 = L_19;
		if (L_19)
		{
			G_B2_0 = L_19;
			goto IL_0065;
		}
	}
	{
		goto IL_0076;
	}

IL_0065:
	{
		NullCheck(G_B2_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_20 = G_B2_0->___OnClipDataQueued_7;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_21 = L_20;
		G_B3_0 = L_21;
		if (L_21)
		{
			G_B4_0 = L_21;
			goto IL_0070;
		}
	}
	{
		goto IL_0076;
	}

IL_0070:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = V_1;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_22, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0076:
	{
		// Events?.OnClipDataLoadBegin?.Invoke(newClip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_23;
		L_23 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_24 = L_23;
		G_B6_0 = L_24;
		if (L_24)
		{
			G_B7_0 = L_24;
			goto IL_0082;
		}
	}
	{
		goto IL_0093;
	}

IL_0082:
	{
		NullCheck(G_B7_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_25 = G_B7_0->___OnClipDataLoadBegin_8;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_26 = L_25;
		G_B8_0 = L_26;
		if (L_26)
		{
			G_B9_0 = L_26;
			goto IL_008d;
		}
	}
	{
		goto IL_0093;
	}

IL_008d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = V_1;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_27, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0093:
	{
		// Events?.OnClipLoadBegin?.Invoke(this, newClip.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_28;
		L_28 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_29 = L_28;
		G_B11_0 = L_29;
		if (L_29)
		{
			G_B12_0 = L_29;
			goto IL_009e;
		}
	}
	{
		return;
	}

IL_009e:
	{
		NullCheck(G_B12_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_30 = G_B12_0->___OnClipLoadBegin_19;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_31 = L_30;
		G_B13_0 = L_31;
		if (L_31)
		{
			G_B14_0 = L_31;
			goto IL_00a8;
		}
	}
	{
		return;
	}

IL_00a8:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32 = V_1;
		NullCheck(L_32);
		String_t* L_33 = L_32->___textToSpeak_0;
		NullCheck(G_B14_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B14_0, __this, L_33, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnClipLoadComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnClipLoadComplete_mC2C440318ECAFED0BB20F05EA243F39FCC9E80DF (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, bool ___2_addToQueue, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_startTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral032BE3296E34D285AA79A57D630E1257967444EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB366C85B7C64682A212AE0F8D222626D01436D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4029D50A33F701A89E8E08AF218A12F8C2D26B);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B10_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B9_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B12_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B11_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B15_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B14_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B17_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B16_0 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B23_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B22_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B25_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B24_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B28_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B27_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B30_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B29_0 = NULL;
	{
		// if (!_queuedClips.Contains(clipData))
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_0 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_0);
		bool L_2;
		L_2 = Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E(L_0, L_1, Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// double loadDuration = (DateTime.Now - startTime).TotalMilliseconds;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___3_startTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_3, L_4, NULL);
		V_1 = L_5;
		double L_6;
		L_6 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_1), NULL);
		V_0 = L_6;
		// if (clipData.clip == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = ___0_clipData;
		NullCheck(L_7);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		// error = "No clip returned";
		___1_error = _stringLiteral032BE3296E34D285AA79A57D630E1257967444EC;
	}

IL_0039:
	{
		// if (!string.IsNullOrEmpty(error))
		String_t* L_10 = ___1_error;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_00aa;
		}
	}
	{
		// RemoveLoadingClip(clipData, false);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = ___0_clipData;
		TTSSpeaker_RemoveLoadingClip_m31B155CAEAD267F38644D6E4AB51F717566BF10E(__this, L_12, (bool)0, NULL);
		// VLog.E($"Load Failed\nText: {clipData?.textToSpeak}\nDuration: {loadDuration:0.00}ms\n{error}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___0_clipData;
		G_B6_0 = _stringLiteralAB366C85B7C64682A212AE0F8D222626D01436D8;
		if (L_13)
		{
			G_B7_0 = _stringLiteralAB366C85B7C64682A212AE0F8D222626D01436D8;
			goto IL_0054;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_0;
		goto IL_005a;
	}

IL_0054:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___0_clipData;
		NullCheck(L_14);
		String_t* L_15 = L_14->___textToSpeak_0;
		G_B8_0 = L_15;
		G_B8_1 = G_B7_0;
	}

IL_005a:
	{
		double L_16 = V_0;
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = ___1_error;
		String_t* L_20;
		L_20 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B8_1, G_B8_0, L_18, L_19, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_20, NULL);
		// Events?.OnClipDataLoadFailed?.Invoke(clipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_21;
		L_21 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_22 = L_21;
		G_B9_0 = L_22;
		if (L_22)
		{
			G_B10_0 = L_22;
			goto IL_0077;
		}
	}
	{
		goto IL_0088;
	}

IL_0077:
	{
		NullCheck(G_B10_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_23 = G_B10_0->___OnClipDataLoadFailed_9;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_24 = L_23;
		G_B11_0 = L_24;
		if (L_24)
		{
			G_B12_0 = L_24;
			goto IL_0082;
		}
	}
	{
		goto IL_0088;
	}

IL_0082:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_25 = ___0_clipData;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B12_0, L_25, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0088:
	{
		// Events?.OnClipLoadFailed?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_26;
		L_26 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_27 = L_26;
		G_B14_0 = L_27;
		if (L_27)
		{
			G_B15_0 = L_27;
			goto IL_0093;
		}
	}
	{
		return;
	}

IL_0093:
	{
		NullCheck(G_B15_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_28 = G_B15_0->___OnClipLoadFailed_20;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_29 = L_28;
		G_B16_0 = L_29;
		if (L_29)
		{
			G_B17_0 = L_29;
			goto IL_009d;
		}
	}
	{
		return;
	}

IL_009d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = ___0_clipData;
		NullCheck(L_30);
		String_t* L_31 = L_30->___textToSpeak_0;
		NullCheck(G_B17_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B17_0, __this, L_31, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		// return;
		return;
	}

IL_00aa:
	{
		// VLog.D($"Load Success\nText: {clipData?.textToSpeak}\nDuration: {loadDuration:0.00}ms");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32 = ___0_clipData;
		G_B19_0 = _stringLiteralCB4029D50A33F701A89E8E08AF218A12F8C2D26B;
		if (L_32)
		{
			G_B20_0 = _stringLiteralCB4029D50A33F701A89E8E08AF218A12F8C2D26B;
			goto IL_00b5;
		}
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_0;
		goto IL_00bb;
	}

IL_00b5:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = ___0_clipData;
		NullCheck(L_33);
		String_t* L_34 = L_33->___textToSpeak_0;
		G_B21_0 = L_34;
		G_B21_1 = G_B20_0;
	}

IL_00bb:
	{
		double L_35 = V_0;
		double L_36 = L_35;
		RuntimeObject* L_37 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B21_1, G_B21_0, L_37, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_38, NULL);
		// Events?.OnClipDataLoadSuccess?.Invoke(clipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_39;
		L_39 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_40 = L_39;
		G_B22_0 = L_40;
		if (L_40)
		{
			G_B23_0 = L_40;
			goto IL_00d7;
		}
	}
	{
		goto IL_00e8;
	}

IL_00d7:
	{
		NullCheck(G_B23_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_41 = G_B23_0->___OnClipDataLoadSuccess_10;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_42 = L_41;
		G_B24_0 = L_42;
		if (L_42)
		{
			G_B25_0 = L_42;
			goto IL_00e2;
		}
	}
	{
		goto IL_00e8;
	}

IL_00e2:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_43 = ___0_clipData;
		NullCheck(G_B25_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B25_0, L_43, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_00e8:
	{
		// Events?.OnClipLoadSuccess?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_44;
		L_44 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_45 = L_44;
		G_B27_0 = L_45;
		if (L_45)
		{
			G_B28_0 = L_45;
			goto IL_00f4;
		}
	}
	{
		goto IL_010b;
	}

IL_00f4:
	{
		NullCheck(G_B28_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_46 = G_B28_0->___OnClipLoadSuccess_21;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_47 = L_46;
		G_B29_0 = L_47;
		if (L_47)
		{
			G_B30_0 = L_47;
			goto IL_00ff;
		}
	}
	{
		goto IL_010b;
	}

IL_00ff:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_48 = ___0_clipData;
		NullCheck(L_48);
		String_t* L_49 = L_48->___textToSpeak_0;
		NullCheck(G_B30_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B30_0, __this, L_49, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_010b:
	{
		// if (!addToQueue)
		bool L_50 = ___2_addToQueue;
		if (L_50)
		{
			goto IL_0114;
		}
	}
	{
		// StopSpeaking();
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::StopSpeaking() */, __this);
	}

IL_0114:
	{
		// OnPlaybackReady(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_51 = ___0_clipData;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(15 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackReady(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_51);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnLoadCancel_mE986EA317DE68A3BE3B1526EBCF45A92F2BA7CD6 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B5_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B4_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B7_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B6_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B10_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B9_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B12_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B11_0 = NULL;
	{
		// VLog.D($"Load Cancelled\nText: {clipData?.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		G_B1_0 = _stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719;
		if (L_0)
		{
			G_B2_0 = _stringLiteral84A01F45574A937B31BFF882C7B453F8F4D82719;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_000b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		String_t* L_2 = L_1->___textToSpeak_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_3, NULL);
		// Events?.OnClipDataLoadAbort?.Invoke(clipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_4;
		L_4 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0027;
		}
	}
	{
		goto IL_0038;
	}

IL_0027:
	{
		NullCheck(G_B5_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_6 = G_B5_0->___OnClipDataLoadAbort_11;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_7 = L_6;
		G_B6_0 = L_7;
		if (L_7)
		{
			G_B7_0 = L_7;
			goto IL_0032;
		}
	}
	{
		goto IL_0038;
	}

IL_0032:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = ___0_clipData;
		NullCheck(G_B7_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B7_0, L_8, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0038:
	{
		// Events?.OnClipLoadAbort?.Invoke(this, clipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_9;
		L_9 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_10 = L_9;
		G_B9_0 = L_10;
		if (L_10)
		{
			G_B10_0 = L_10;
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		NullCheck(G_B10_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_11 = G_B10_0->___OnClipLoadAbort_22;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_12 = L_11;
		G_B11_0 = L_12;
		if (L_12)
		{
			G_B12_0 = L_12;
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___0_clipData;
		NullCheck(L_13);
		String_t* L_14 = L_13->___textToSpeak_0;
		NullCheck(G_B12_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B12_0, __this, L_14, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::RemoveLoadingClip(Meta.WitAi.TTS.Data.TTSClipData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_RemoveLoadingClip_m31B155CAEAD267F38644D6E4AB51F717566BF10E (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, bool ___1_allInstances, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* V_0 = NULL;
	bool V_1 = false;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_2 = NULL;
	{
		// if (!allInstances && _queuedClips.Peek().Equals(clipData))
		bool L_0 = ___1_allInstances;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_1 = __this->____queuedClips_10;
		NullCheck(L_1);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2;
		L_2 = Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512(L_1, Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512_RuntimeMethod_var);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_2);
		bool L_4;
		L_4 = TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// _queuedClips.Dequeue();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_5 = __this->____queuedClips_10;
		NullCheck(L_5);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6;
		L_6 = Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9(L_5, Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		// return;
		return;
	}

IL_0023:
	{
		// Queue<TTSClipData> discard = _queuedClips;
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_7 = __this->____queuedClips_10;
		V_0 = L_7;
		// _queuedClips = new Queue<TTSClipData>();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_8 = (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*)il2cpp_codegen_object_new(Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1(L_8, Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1_RuntimeMethod_var);
		__this->____queuedClips_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queuedClips_10), (void*)L_8);
		// bool found = false;
		V_1 = (bool)0;
		goto IL_0070;
	}

IL_0039:
	{
		// TTSClipData check = discard.Dequeue();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_9 = V_0;
		NullCheck(L_9);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10;
		L_10 = Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9(L_9, Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		V_2 = L_10;
		// if (check.Equals(clipData))
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = V_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = ___0_clipData;
		NullCheck(L_11);
		bool L_13;
		L_13 = TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// if (!found)
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0050;
		}
	}
	{
		// found = true;
		V_1 = (bool)1;
		goto IL_0070;
	}

IL_0050:
	{
		// else if (!allInstances)
		bool L_15 = ___1_allInstances;
		if (L_15)
		{
			goto IL_0070;
		}
	}
	{
		// _queuedClips.Enqueue(check);
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_16 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = V_2;
		NullCheck(L_16);
		Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B(L_16, L_17, Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
		goto IL_0070;
	}

IL_0061:
	{
		// else if (check != null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18 = V_2;
		if (!L_18)
		{
			goto IL_0070;
		}
	}
	{
		// _queuedClips.Enqueue(check);
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_19 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = V_2;
		NullCheck(L_19);
		Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B(L_19, L_20, Queue_1_Enqueue_mCDACE8654C2D5B9271244202FE193BDFE67D9D8B_RuntimeMethod_var);
	}

IL_0070:
	{
		// while (discard.Count > 0)
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_inline(L_21, Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackReady(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackReady_mEB77E811F7B10DBD6B60A140539E7A6CE5F2C1F8 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2521E50FE503883D464CA60EBBE09AA3F307F2BD);
		s_Il2CppMethodInitialized = true;
	}
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B4_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B3_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B6_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B5_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B9_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B8_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B11_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B10_0 = NULL;
	{
		// if (!_queuedClips.Contains(clipData))
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_0 = __this->____queuedClips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_0);
		bool L_2;
		L_2 = Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E(L_0, L_1, Queue_1_Contains_m2F0AE5AD66BC5C9E991879F5A12FD1CD834B212E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// VLog.D($"Playback Queued\nText: {clipData.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_3);
		String_t* L_4 = L_3->___textToSpeak_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2521E50FE503883D464CA60EBBE09AA3F307F2BD, L_4, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_5, NULL);
		// Events?.OnAudioClipPlaybackReady?.Invoke(clipData.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_6;
		L_6 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0030;
		}
	}
	{
		goto IL_0046;
	}

IL_0030:
	{
		NullCheck(G_B4_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_8 = G_B4_0->___OnAudioClipPlaybackReady_3;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_003b;
		}
	}
	{
		goto IL_0046;
	}

IL_003b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = ___0_clipData;
		NullCheck(L_10);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = L_10->___clip_6;
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B6_0, L_11, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_0046:
	{
		// Events?.OnClipDataPlaybackReady?.Invoke(clipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_12;
		L_12 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_13 = L_12;
		G_B8_0 = L_13;
		if (L_13)
		{
			G_B9_0 = L_13;
			goto IL_0052;
		}
	}
	{
		goto IL_0063;
	}

IL_0052:
	{
		NullCheck(G_B9_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_14 = G_B9_0->___OnClipDataPlaybackReady_12;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_15 = L_14;
		G_B10_0 = L_15;
		if (L_15)
		{
			G_B11_0 = L_15;
			goto IL_005d;
		}
	}
	{
		goto IL_0063;
	}

IL_005d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = ___0_clipData;
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B11_0, L_16, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0063:
	{
		// OnPlaybackBegin();
		VirtualActionInvoker0::Invoke(16 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin() */, __this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackBegin_m0D9697A756148B67F13DA4128B1ECEC5527165C6 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A3395B74C45CDB5B2B77A5CBEBA8301D73B1A8);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B13_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B12_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B15_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B14_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B18_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B17_0 = NULL;
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* G_B20_0 = NULL;
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* G_B19_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B23_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B22_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B25_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B24_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B28_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B27_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B30_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B29_0 = NULL;
	{
		// if (SpeakingClip != null ||  _queuedClips.Count == 0)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0;
		L_0 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_1 = __this->____queuedClips_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_inline(L_1, Queue_1_get_Count_m903FD6290B0C45C79AB12D3F5B3D27C3488642F9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// TTSClipData clipData = _queuedClips.Peek();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_3 = __this->____queuedClips_10;
		NullCheck(L_3);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4;
		L_4 = Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512(L_3, Queue_1_Peek_m990185F1E8995A7DD49270ED4E4B22588A5D7512_RuntimeMethod_var);
		V_0 = L_4;
		// if (clipData == null || clipData.loadState == TTSClipLoadState.Error || clipData.loadState == TTSClipLoadState.Unloaded)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___loadState_7;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0036;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___loadState_7;
		if (L_9)
		{
			goto IL_003e;
		}
	}

IL_0036:
	{
		// OnLoadCancel(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10 = V_0;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(14 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_10);
		// return;
		return;
	}

IL_003e:
	{
		// if (clipData.loadState != TTSClipLoadState.Loaded)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___loadState_7;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0048;
		}
	}
	{
		// return;
		return;
	}

IL_0048:
	{
		// if (clipData.clip == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = V_0;
		NullCheck(L_13);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = L_13->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		// OnLoadCancel(clipData);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = V_0;
		VirtualActionInvoker1< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* >::Invoke(14 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnLoadCancel(Meta.WitAi.TTS.Data.TTSClipData) */, __this, L_16);
		// return;
		return;
	}

IL_005e:
	{
		// SpeakingClip = _queuedClips.Dequeue();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_17 = __this->____queuedClips_10;
		NullCheck(L_17);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_18;
		L_18 = Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9(L_17, Queue_1_Dequeue_m8388765AB65D9FB6864C86D45D8E9A68CBB2C8D9_RuntimeMethod_var);
		TTSSpeaker_set_SpeakingClip_mC8AAB39F58D104DA9D52A388E6FBE0FA46C22A01_inline(__this, L_18, NULL);
		// VLog.D($"Playback Begin\nText: {SpeakingClip.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19;
		L_19 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		NullCheck(L_19);
		String_t* L_20 = L_19->___textToSpeak_0;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral78A3395B74C45CDB5B2B77A5CBEBA8301D73B1A8, L_20, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_21, NULL);
		// AudioSource.PlayOneShot(SpeakingClip.clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = __this->___AudioSource_5;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_23;
		L_23 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		NullCheck(L_23);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_24 = L_23->___clip_6;
		NullCheck(L_22);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_22, L_24, NULL);
		// Events?.OnStartSpeaking?.Invoke(this, SpeakingClip.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_25;
		L_25 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_26 = L_25;
		G_B12_0 = L_26;
		if (L_26)
		{
			G_B13_0 = L_26;
			goto IL_00ab;
		}
	}
	{
		goto IL_00c7;
	}

IL_00ab:
	{
		NullCheck(G_B13_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_27 = G_B13_0->___OnStartSpeaking_16;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_28 = L_27;
		G_B14_0 = L_28;
		if (L_28)
		{
			G_B15_0 = L_28;
			goto IL_00b6;
		}
	}
	{
		goto IL_00c7;
	}

IL_00b6:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_29;
		L_29 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		NullCheck(L_29);
		String_t* L_30 = L_29->___textToSpeak_0;
		NullCheck(G_B15_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B15_0, __this, L_30, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_00c7:
	{
		// Events?.OnTextPlaybackStart?.Invoke(SpeakingClip.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_31;
		L_31 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_32 = L_31;
		G_B17_0 = L_32;
		if (L_32)
		{
			G_B18_0 = L_32;
			goto IL_00d3;
		}
	}
	{
		goto IL_00ee;
	}

IL_00d3:
	{
		NullCheck(G_B18_0);
		TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* L_33 = G_B18_0->___OnTextPlaybackStart_0;
		TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* L_34 = L_33;
		G_B19_0 = L_34;
		if (L_34)
		{
			G_B20_0 = L_34;
			goto IL_00de;
		}
	}
	{
		goto IL_00ee;
	}

IL_00de:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_35;
		L_35 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		NullCheck(L_35);
		String_t* L_36 = L_35->___textToSpeak_0;
		NullCheck(G_B20_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B20_0, L_36, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00ee:
	{
		// Events?.OnAudioClipPlaybackStart?.Invoke(SpeakingClip.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_37;
		L_37 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_38 = L_37;
		G_B22_0 = L_38;
		if (L_38)
		{
			G_B23_0 = L_38;
			goto IL_00fa;
		}
	}
	{
		goto IL_0115;
	}

IL_00fa:
	{
		NullCheck(G_B23_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_39 = G_B23_0->___OnAudioClipPlaybackStart_4;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_40 = L_39;
		G_B24_0 = L_40;
		if (L_40)
		{
			G_B25_0 = L_40;
			goto IL_0105;
		}
	}
	{
		goto IL_0115;
	}

IL_0105:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_41;
		L_41 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		NullCheck(L_41);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_42 = L_41->___clip_6;
		NullCheck(G_B25_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B25_0, L_42, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_0115:
	{
		// Events?.OnClipDataPlaybackStart?.Invoke(SpeakingClip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_43;
		L_43 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_44 = L_43;
		G_B27_0 = L_44;
		if (L_44)
		{
			G_B28_0 = L_44;
			goto IL_0121;
		}
	}
	{
		goto IL_0137;
	}

IL_0121:
	{
		NullCheck(G_B28_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_45 = G_B28_0->___OnClipDataPlaybackStart_13;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_46 = L_45;
		G_B29_0 = L_46;
		if (L_46)
		{
			G_B30_0 = L_46;
			goto IL_012c;
		}
	}
	{
		goto IL_0137;
	}

IL_012c:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_47;
		L_47 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		NullCheck(G_B30_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B30_0, L_47, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0137:
	{
		// if (_waitForCompletion != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_48 = __this->____waitForCompletion_12;
		if (!L_48)
		{
			goto IL_0152;
		}
	}
	{
		// StopCoroutine(_waitForCompletion);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_49 = __this->____waitForCompletion_12;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_49, NULL);
		// _waitForCompletion = null;
		__this->____waitForCompletion_12 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitForCompletion_12), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_0152:
	{
		// _waitForCompletion = StartCoroutine(WaitForCompletion());
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::WaitForCompletion() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_51;
		L_51 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_50, NULL);
		__this->____waitForCompletion_12 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitForCompletion_12), (void*)L_51);
		// }
		return;
	}
}
// System.Collections.IEnumerator Meta.WitAi.TTS.Utilities.TTSSpeaker::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSSpeaker_WaitForCompletion_mE779DFCDCA6EE738D27CB497DBD2503153395C84 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* L_0 = (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C*)il2cpp_codegen_object_new(U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForCompletionU3Ed__47__ctor_m23D6062EDF934E5E74B4B32952DFA79C4C6817AA(L_0, 0, NULL);
		U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_OnPlaybackComplete_mC1F19CEDFB13BB9402F7BB15844C71EF5E9E5D1B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, bool ___0_cancelled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B9_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B8_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B11_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B10_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B14_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B13_0 = NULL;
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* G_B16_0 = NULL;
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* G_B15_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B19_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B18_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B21_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B20_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B24_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B23_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B26_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B25_0 = NULL;
	String_t* G_B29_0 = NULL;
	String_t* G_B28_0 = NULL;
	String_t* G_B30_0 = NULL;
	String_t* G_B30_1 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B32_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B31_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B34_0 = NULL;
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* G_B33_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B37_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B36_0 = NULL;
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* G_B39_0 = NULL;
	TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* G_B38_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B42_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B41_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B44_0 = NULL;
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* G_B43_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B47_0 = NULL;
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* G_B46_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B49_0 = NULL;
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* G_B48_0 = NULL;
	{
		// if (SpeakingClip == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0;
		L_0 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// TTSClipData lastClipData = SpeakingClip;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1;
		L_1 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(__this, NULL);
		V_0 = L_1;
		// SpeakingClip = null;
		TTSSpeaker_set_SpeakingClip_mC8AAB39F58D104DA9D52A388E6FBE0FA46C22A01_inline(__this, (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)NULL, NULL);
		// if (_waitForCompletion != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->____waitForCompletion_12;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// StopCoroutine(_waitForCompletion);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3 = __this->____waitForCompletion_12;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_3, NULL);
		// _waitForCompletion = null;
		__this->____waitForCompletion_12 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitForCompletion_12), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_0032:
	{
		// if (AudioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___AudioSource_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_4, NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___AudioSource_5;
		NullCheck(L_6);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_6, NULL);
	}

IL_004a:
	{
		// if (!cancelled)
		bool L_7 = ___0_cancelled;
		if (L_7)
		{
			goto IL_00f4;
		}
	}
	{
		// VLog.D($"Playback Complete\nText: {lastClipData.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___textToSpeak_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9D72B87414DB3B0E6D3B66CB0607BD48125F014C, L_9, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_10, NULL);
		// Events?.OnFinishedSpeaking?.Invoke(this, lastClipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_11;
		L_11 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_12 = L_11;
		G_B8_0 = L_12;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_0071;
		}
	}
	{
		goto IL_0088;
	}

IL_0071:
	{
		NullCheck(G_B9_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_13 = G_B9_0->___OnFinishedSpeaking_17;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_14 = L_13;
		G_B10_0 = L_14;
		if (L_14)
		{
			G_B11_0 = L_14;
			goto IL_007c;
		}
	}
	{
		goto IL_0088;
	}

IL_007c:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->___textToSpeak_0;
		NullCheck(G_B11_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B11_0, __this, L_16, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_0088:
	{
		// Events?.OnTextPlaybackFinished?.Invoke(lastClipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_17;
		L_17 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_18 = L_17;
		G_B13_0 = L_18;
		if (L_18)
		{
			G_B14_0 = L_18;
			goto IL_0094;
		}
	}
	{
		goto IL_00aa;
	}

IL_0094:
	{
		NullCheck(G_B14_0);
		TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* L_19 = G_B14_0->___OnTextPlaybackFinished_1;
		TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* L_20 = L_19;
		G_B15_0 = L_20;
		if (L_20)
		{
			G_B16_0 = L_20;
			goto IL_009f;
		}
	}
	{
		goto IL_00aa;
	}

IL_009f:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->___textToSpeak_0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B16_0, L_22, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00aa:
	{
		// Events?.OnAudioClipPlaybackFinished?.Invoke(lastClipData.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_23;
		L_23 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_24 = L_23;
		G_B18_0 = L_24;
		if (L_24)
		{
			G_B19_0 = L_24;
			goto IL_00b6;
		}
	}
	{
		goto IL_00cc;
	}

IL_00b6:
	{
		NullCheck(G_B19_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_25 = G_B19_0->___OnAudioClipPlaybackFinished_5;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_26 = L_25;
		G_B20_0 = L_26;
		if (L_26)
		{
			G_B21_0 = L_26;
			goto IL_00c1;
		}
	}
	{
		goto IL_00cc;
	}

IL_00c1:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = V_0;
		NullCheck(L_27);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = L_27->___clip_6;
		NullCheck(G_B21_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B21_0, L_28, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_00cc:
	{
		// Events?.OnClipDataPlaybackFinished?.Invoke(lastClipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_29;
		L_29 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_30 = L_29;
		G_B23_0 = L_30;
		if (L_30)
		{
			G_B24_0 = L_30;
			goto IL_00db;
		}
	}
	{
		goto IL_0193;
	}

IL_00db:
	{
		NullCheck(G_B24_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_31 = G_B24_0->___OnClipDataPlaybackFinished_14;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_32 = L_31;
		G_B25_0 = L_32;
		if (L_32)
		{
			G_B26_0 = L_32;
			goto IL_00e9;
		}
	}
	{
		goto IL_0193;
	}

IL_00e9:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_33 = V_0;
		NullCheck(G_B26_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B26_0, L_33, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		goto IL_0193;
	}

IL_00f4:
	{
		// VLog.D($"Playback Cancelled\nText: {lastClipData?.textToSpeak}");
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_34 = V_0;
		G_B28_0 = _stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5;
		if (L_34)
		{
			G_B29_0 = _stringLiteralEF20952DF628F77E215AC1776627FBDF6F4B03D5;
			goto IL_00ff;
		}
	}
	{
		G_B30_0 = ((String_t*)(NULL));
		G_B30_1 = G_B28_0;
		goto IL_0105;
	}

IL_00ff:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = L_35->___textToSpeak_0;
		G_B30_0 = L_36;
		G_B30_1 = G_B29_0;
	}

IL_0105:
	{
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B30_1, G_B30_0, NULL);
		VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37(L_37, NULL);
		// Events?.OnCancelledSpeaking?.Invoke(this, lastClipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_38;
		L_38 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_39 = L_38;
		G_B31_0 = L_39;
		if (L_39)
		{
			G_B32_0 = L_39;
			goto IL_011b;
		}
	}
	{
		goto IL_0132;
	}

IL_011b:
	{
		NullCheck(G_B32_0);
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_40 = G_B32_0->___OnCancelledSpeaking_18;
		TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* L_41 = L_40;
		G_B33_0 = L_41;
		if (L_41)
		{
			G_B34_0 = L_41;
			goto IL_0126;
		}
	}
	{
		goto IL_0132;
	}

IL_0126:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_42 = V_0;
		NullCheck(L_42);
		String_t* L_43 = L_42->___textToSpeak_0;
		NullCheck(G_B34_0);
		UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68(G_B34_0, __this, L_43, UnityEvent_2_Invoke_m60D600A85B50A5F084FFA217B6C0DE699BB1EC68_RuntimeMethod_var);
	}

IL_0132:
	{
		// Events?.OnTextPlaybackCancelled?.Invoke(lastClipData.textToSpeak);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_44;
		L_44 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_45 = L_44;
		G_B36_0 = L_45;
		if (L_45)
		{
			G_B37_0 = L_45;
			goto IL_013e;
		}
	}
	{
		goto IL_0154;
	}

IL_013e:
	{
		NullCheck(G_B37_0);
		TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* L_46 = G_B37_0->___OnTextPlaybackCancelled_2;
		TTSSpeakerTextEvent_tF11D5B8A8BCA83B831424EFB6AE2A9AFE1837DA5* L_47 = L_46;
		G_B38_0 = L_47;
		if (L_47)
		{
			G_B39_0 = L_47;
			goto IL_0149;
		}
	}
	{
		goto IL_0154;
	}

IL_0149:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49 = L_48->___textToSpeak_0;
		NullCheck(G_B39_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B39_0, L_49, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0154:
	{
		// Events?.OnAudioClipPlaybackCancelled?.Invoke(lastClipData.clip);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_50;
		L_50 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_51 = L_50;
		G_B41_0 = L_51;
		if (L_51)
		{
			G_B42_0 = L_51;
			goto IL_0160;
		}
	}
	{
		goto IL_0176;
	}

IL_0160:
	{
		NullCheck(G_B42_0);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_52 = G_B42_0->___OnAudioClipPlaybackCancelled_6;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_53 = L_52;
		G_B43_0 = L_53;
		if (L_53)
		{
			G_B44_0 = L_53;
			goto IL_016b;
		}
	}
	{
		goto IL_0176;
	}

IL_016b:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_54 = V_0;
		NullCheck(L_54);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_55 = L_54->___clip_6;
		NullCheck(G_B44_0);
		UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833(G_B44_0, L_55, UnityEvent_1_Invoke_m0F626340093B5145C31EA6E80F255B429F134833_RuntimeMethod_var);
	}

IL_0176:
	{
		// Events?.OnClipDataPlaybackCancelled?.Invoke(lastClipData);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_56;
		L_56 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(__this, NULL);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_57 = L_56;
		G_B46_0 = L_57;
		if (L_57)
		{
			G_B47_0 = L_57;
			goto IL_0182;
		}
	}
	{
		goto IL_0193;
	}

IL_0182:
	{
		NullCheck(G_B47_0);
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_58 = G_B47_0->___OnClipDataPlaybackCancelled_15;
		TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* L_59 = L_58;
		G_B48_0 = L_59;
		if (L_59)
		{
			G_B49_0 = L_59;
			goto IL_018d;
		}
	}
	{
		goto IL_0193;
	}

IL_018d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_60 = V_0;
		NullCheck(G_B49_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B49_0, L_60, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0193:
	{
		// OnPlaybackBegin();
		VirtualActionInvoker0::Invoke(16 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackBegin() */, __this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker__ctor_mC03D87085496CBAE60E9116FA70A09543617C3D0 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<TTSClipData> _queuedClips = new Queue<TTSClipData>();
		Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629* L_0 = (Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629*)il2cpp_codegen_object_new(Queue_1_t601DB03B2AD18E89A780B7517D6DEAD6D26A6629_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1(L_0, Queue_1__ctor_mDCB1C2AB37A6DAE61F919F7BBCC0DB83805E8EE1_RuntimeMethod_var);
		__this->____queuedClips_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queuedClips_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>b__34_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__34_0_mA247585D2B8CADAEF5831DF7B88304C19336C7B9 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitWhile(() => IsLoading || IsSpeaking);
		bool L_0;
		L_0 = TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		return (bool)1;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__32__ctor_m2E4016EC1479643B55B1B809A7E0E372BCE11C0C (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__32_System_IDisposable_Dispose_m81B03F3FA452571A49AB1DB1FA7860D81631484A (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeakAsyncU3Ed__32_MoveNext_mF900B9947A501C05EF94D40AF0F54A2187146A72 (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Stop();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_4 = V_1;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(11 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, L_4);
		// yield return SpeakQueuedAsync(new string[] {textToSpeak}, diskCacheSettings);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_5 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = __this->___textToSpeak_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_9 = __this->___diskCacheSettings_4;
		NullCheck(L_5);
		RuntimeObject* L_10;
		L_10 = TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D(L_5, L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakAsyncU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m46FD8AA9B6553CD5D8C10D928D500E9FEC21149F (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__32_System_Collections_IEnumerator_Reset_m8DE434DA33C85DB41A32223CF3FCDAC32CD0640F (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeakAsyncU3Ed__32_System_Collections_IEnumerator_Reset_m8DE434DA33C85DB41A32223CF3FCDAC32CD0640F_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakAsyncU3Ed__32_System_Collections_IEnumerator_get_Current_mBF3D07177526B3D30DF6F29D2E4C3AB4E8122236 (U3CSpeakAsyncU3Ed__32_tBBA06EE58DBB6252AFE0AE42EDDDD98E2E4995D8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__33__ctor_mE565444614C4FE31C7A1AF6EB71DE230D4590FEA (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__33_System_IDisposable_Dispose_m5CC9ADFBC46A0CC5B61360EE293785717BDA9E54 (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeakAsyncU3Ed__33_MoveNext_mECCD472C15D7384C04DA11E207A1530428A50297 (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return SpeakAsync(textToSpeak, null);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_4 = V_1;
		String_t* L_5 = __this->___textToSpeak_3;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = TTSSpeaker_SpeakAsync_m856A9CF7EFA2582E8029413C1FD730845AD857F9(L_4, L_5, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakAsyncU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEF5D5675D203380A87A0D06472607CADD96CC7B4 (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakAsyncU3Ed__33_System_Collections_IEnumerator_Reset_mFBE700D45F6CE57F909AAC8E2CBA34920E7CF9E2 (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeakAsyncU3Ed__33_System_Collections_IEnumerator_Reset_mFBE700D45F6CE57F909AAC8E2CBA34920E7CF9E2_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakAsyncU3Ed__33_System_Collections_IEnumerator_get_Current_m011F1732D2EB8DA3B980030F5D4F474A2B31A1FE (U3CSpeakAsyncU3Ed__33_t259571AB608559D9B27622778CAAF788062C6775* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__34__ctor_mDB5CFE577FED18D2CB64A4E5BC219AC5071E807F (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__34_System_IDisposable_Dispose_m8379AE6874B692737EE2CD07A84379B13BAC04F9 (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeakQueuedAsyncU3Ed__34_MoveNext_m75C30F4F46C487D84EF28D2207A282DDA6FEF782 (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__34_0_mA247585D2B8CADAEF5831DF7B88304C19336C7B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var textToSpeak in textsToSpeak)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___textsToSpeak_2;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0040;
	}

IL_0029:
	{
		// foreach (var textToSpeak in textsToSpeak)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// SpeakQueued(textToSpeak, diskCacheSettings);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_9 = V_1;
		String_t* L_10 = V_4;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_11 = __this->___diskCacheSettings_4;
		NullCheck(L_9);
		TTSSpeaker_SpeakQueued_m953A1C710DCDCD8DB8743581606933580AC31278(L_9, L_10, L_11, NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0040:
	{
		// foreach (var textToSpeak in textsToSpeak)
		int32_t L_13 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// yield return new WaitWhile(() => IsLoading || IsSpeaking);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_15 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_16 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_16, L_15, (intptr_t)((void*)TTSSpeaker_U3CSpeakQueuedAsyncU3Eb__34_0_mA247585D2B8CADAEF5831DF7B88304C19336C7B9_RuntimeMethod_var), NULL);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_17 = (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967*)il2cpp_codegen_object_new(WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C(L_17, L_16, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0066:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakQueuedAsyncU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBFD7EE99985462196843F17A6A23E6BFE7B106AE (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__34_System_Collections_IEnumerator_Reset_mB73240B648038C8C15358502C28F4ED3EAB7562E (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeakQueuedAsyncU3Ed__34_System_Collections_IEnumerator_Reset_mB73240B648038C8C15358502C28F4ED3EAB7562E_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakQueuedAsyncU3Ed__34_System_Collections_IEnumerator_get_Current_m4161CF5861ACFC3B6ACBECE5F43C7AD8D6901A71 (U3CSpeakQueuedAsyncU3Ed__34_t031FB57A5BF2EF93A4D74C087DA79D2AEFBDF665* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35__ctor_m9734BA80900926C49871935688E643D2EE28F777 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35_System_IDisposable_Dispose_mCB01C126C5ABFEF7911B26C1970EC0F8DB054326 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeakQueuedAsyncU3Ed__35_MoveNext_m9875781446C7667023C24AAAF242004D8F1C17E7 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return SpeakQueuedAsync(textsToSpeak, null);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_4 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___textsToSpeak_3;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = TTSSpeaker_SpeakQueuedAsync_m6561C526498CE631432D2C23FAE13A0B01D8930D(L_4, L_5, (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)NULL, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakQueuedAsyncU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD43892E4F8CD84550708888C4770116B1292F9B3 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_Reset_m426ED030AF4F161851B54927FC9F0DA01BEDFDBA (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_Reset_m426ED030AF4F161851B54927FC9F0DA01BEDFDBA_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpeakQueuedAsyncU3Ed__35_System_Collections_IEnumerator_get_Current_mEF64F629906C743BFB330D0632F361136E366B43 (U3CSpeakQueuedAsyncU3Ed__35_t9866CAFE2B15F1C551D673DAEFC9CB79729DB818* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m917354977614E8ADA7492C0EAA3B61C241C567C8 (U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass40_0::<OnLoadBegin>b__0(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3COnLoadBeginU3Eb__0_m27920F6D9830993F672392D2EDB8001EBB3A998F (U3CU3Ec__DisplayClass40_0_t65CF5C63B613443BF2B879F8E5B08AD37A555689* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// TTSClipData newClip = _tts.Load(textToSpeak, clipID, voiceSettings, diskCacheSettings, (clipData, error) => OnClipLoadComplete(clipData, error, addToQueue, startTime));
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->___U3CU3E4__this_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		String_t* L_2 = ___1_error;
		bool L_3 = __this->___addToQueue_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = __this->___startTime_2;
		NullCheck(L_0);
		VirtualActionInvoker4< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t*, bool, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(13 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnClipLoadComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String,System.Boolean,System.DateTime) */, L_0, L_1, L_2, L_3, L_4);
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
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__47__ctor_m23D6062EDF934E5E74B4B32952DFA79C4C6817AA (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__47_System_IDisposable_Dispose_m8B2A97005DF81A3773DE863B6AA61D93F12DD6EB (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForCompletionU3Ed__47_MoveNext_mCF9B52C38D1350F7BE28D984AA904A5D0CE1586C (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsedTime = 0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_0058;
	}

IL_002b:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// elapsedTime += Time.deltaTime;
		float L_5 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_5, L_6));
	}

IL_0058:
	{
		// while (SpeakingClip != null && SpeakingClip.clip != null && elapsedTime < SpeakingClip.clip.length)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_7 = V_1;
		NullCheck(L_7);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8;
		L_8 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_9 = V_1;
		NullCheck(L_9);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_10;
		L_10 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(L_9, NULL);
		NullCheck(L_10);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = L_10->___clip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		float L_13 = __this->___U3CelapsedTimeU3E5__2_3;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_14 = V_1;
		NullCheck(L_14);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15;
		L_15 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline(L_14, NULL);
		NullCheck(L_15);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16 = L_15->___clip_6;
		NullCheck(L_16);
		float L_17;
		L_17 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_16, NULL);
		if ((((float)L_13) < ((float)L_17)))
		{
			goto IL_002b;
		}
	}

IL_008b:
	{
		// OnPlaybackComplete(false);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_18 = V_1;
		NullCheck(L_18);
		VirtualActionInvoker1< bool >::Invoke(18 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::OnPlaybackComplete(System.Boolean) */, L_18, (bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForCompletionU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA630E34253840DE51D491F7FC43FEBFC166A7FA6 (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCompletionU3Ed__47_System_Collections_IEnumerator_Reset_mA8CC3933B29382FEA78C5DAE64EFDCCEABD157AD (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForCompletionU3Ed__47_System_Collections_IEnumerator_Reset_mA8CC3933B29382FEA78C5DAE64EFDCCEABD157AD_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForCompletion>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForCompletionU3Ed__47_System_Collections_IEnumerator_get_Current_mA49B4C8002DB18196638D928751BB0897FB53282 (U3CWaitForCompletionU3Ed__47_t62C536F4869B58BDCF720475C059AA27BF065D7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public string DiskPath => _diskPath;
		String_t* L_0 = __this->____diskPath_4;
		return L_0;
	}
}
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskCacheDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* TTSDiskCache_get_DiskCacheDefaultSettings_mFEB9E0BFBDC93DAFBACF81CCBD7750AA73E11971 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDiskCacheSettings DiskCacheDefaultSettings => _defaultSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_0 = __this->____defaultSettings_5;
		return L_0;
	}
}
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskStreamEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// get => _events;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->____events_6;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::set_DiskStreamEvents(Meta.WitAi.TTS.Events.TTSStreamEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_set_DiskStreamEvents_m6B71DD2A047B71F8E3F4B534D2810052DA090879 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _events = value; }
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = ___0_value;
		__this->____events_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_0);
		// set { _events = value; }
		return;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::GetDiskCachePath(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if (!ShouldCacheToDisk(clipData))
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		bool L_1;
		L_1 = TTSDiskCache_ShouldCacheToDisk_m5D6E1265C7354DD9FE92F64AB0A6A5EE513C8361(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000f:
	{
		// TTSDiskCacheLocation location = clipData.diskCacheSettings.DiskCacheLocation;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_3);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_4 = L_3->___diskCacheSettings_4;
		NullCheck(L_4);
		int32_t L_5 = L_4->___DiskCacheLocation_0;
		V_0 = L_5;
		// string directory = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_6;
		int32_t L_7 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_004d;
	}

IL_0037:
	{
		// directory = Application.persistentDataPath;
		String_t* L_8;
		L_8 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		V_1 = L_8;
		// break;
		goto IL_004d;
	}

IL_003f:
	{
		// directory = Application.temporaryCachePath;
		String_t* L_9;
		L_9 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		V_1 = L_9;
		// break;
		goto IL_004d;
	}

IL_0047:
	{
		// directory = Application.streamingAssetsPath;
		String_t* L_10;
		L_10 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		V_1 = L_10;
	}

IL_004d:
	{
		// if (string.IsNullOrEmpty(directory))
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Empty;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_13;
	}

IL_005b:
	{
		// directory = Path.Combine(directory, DiskPath);
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_14, L_15, NULL);
		V_1 = L_16;
		// if (location != TTSDiskCacheLocation.Preload || !Application.isPlaying)
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_18;
		L_18 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_18)
		{
			goto IL_0098;
		}
	}

IL_0073:
	{
		// if (!IOUtility.CreateDirectory(directory, true))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = IOUtility_CreateDirectory_m9CEDEFB04138BABAA175B66857EE9867031D5CBB(L_19, (bool)1, NULL);
		if (L_20)
		{
			goto IL_0098;
		}
	}
	{
		// VLog.E($"Failed to create tts directory\nPath: {directory}\nLocation: {location}");
		String_t* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6EA870AE22D342D464BFB64EA62F43174DA35E3F, L_21, L_24, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_25, NULL);
		// return string.Empty;
		String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_26;
	}

IL_0098:
	{
		// return Path.Combine(directory, clipData.clipID + "." + clipData.audioType.ToString().ToLower());
		String_t* L_27 = V_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = ___0_clipData;
		NullCheck(L_28);
		String_t* L_29 = L_28->___clipID_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = ___0_clipData;
		NullCheck(L_30);
		int32_t* L_31 = (&L_30->___audioType_2);
		Il2CppFakeBox<int32_t> L_32(AudioType_tAA97CF19EED43C03E5DCE504D47D5CD5906AE82B_il2cpp_TypeInfo_var, L_31);
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_32), NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_33, NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_29, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_27, L_35, NULL);
		return L_36;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSDiskCache::ShouldCacheToDisk(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSDiskCache_ShouldCacheToDisk_m5D6E1265C7354DD9FE92F64AB0A6A5EE513C8361 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	{
		// return clipData != null && clipData.diskCacheSettings.DiskCacheLocation != TTSDiskCacheLocation.Stream && !string.IsNullOrEmpty(clipData.clipID);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_2 = L_1->___diskCacheSettings_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DiskCacheLocation_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		NullCheck(L_4);
		String_t* L_5 = L_4->___clipID_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::CheckCachedToDisk(Meta.WitAi.TTS.Data.TTSClipData,System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_CheckCachedToDisk_mB9A395CCD6F910CC29445D575BD2A2AC1CF8552B (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* ___1_onCheckComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* V_0 = NULL;
	String_t* V_1 = NULL;
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* V_2 = NULL;
	Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* G_B3_0 = NULL;
	Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* G_B2_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_0 = (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m64F4743BE69F04B7343534CB468C3999D2F08E66(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_4 = V_0;
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_5 = ___1_onCheckComplete;
		NullCheck(L_4);
		L_4->___onCheckComplete_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onCheckComplete_2), (void*)L_5);
		// string cachePath = GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_6 = V_0;
		NullCheck(L_6);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = L_6->___clipData_1;
		String_t* L_8;
		L_8 = TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0(__this, L_7, NULL);
		V_1 = L_8;
		// if (string.IsNullOrEmpty(cachePath))
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// onCheckComplete?.Invoke(clipData, false);
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_11 = V_0;
		NullCheck(L_11);
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_12 = L_11->___onCheckComplete_2;
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_13 = L_12;
		G_B2_0 = L_13;
		if (L_13)
		{
			G_B3_0 = L_13;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_14 = V_0;
		NullCheck(L_14);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = L_14->___clipData_1;
		NullCheck(G_B3_0);
		Action_2_Invoke_m3F27D046697BDCE14C7F53A0C99CA3DC933DBAFF_inline(G_B3_0, L_15, (bool)0, NULL);
		// return;
		return;
	}

IL_0048:
	{
		// VRequest request = new VRequest();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_16 = (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*)il2cpp_codegen_object_new(VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537(L_16, NULL);
		V_2 = L_16;
		// bool canPerform = request.RequestFileExists(cachePath, (success, error) =>
		// {
		//     // Remove
		//     if (_streamRequests.ContainsKey(clipData.clipID))
		//     {
		//         _streamRequests.Remove(clipData.clipID);
		//     }
		//     // Complete
		//     onCheckComplete(clipData, success);
		// });
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_17 = V_2;
		String_t* L_18 = V_1;
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_19 = V_0;
		RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* L_20 = (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		bool L_21;
		L_21 = VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778(L_17, L_18, L_20, NULL);
		// if (canPerform)
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		// _streamRequests[clipData.clipID] = request;
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_22 = __this->____streamRequests_7;
		U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* L_23 = V_0;
		NullCheck(L_23);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_24 = L_23->___clipData_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->___clipID_1;
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_26 = V_2;
		NullCheck(L_22);
		Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA(L_22, L_25, L_26, Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::StreamFromDiskCache(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_StreamFromDiskCache_mBDCB7E6F6C095966B34C9006C8E60319E7A834A0 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* V_0 = NULL;
	String_t* V_1 = NULL;
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* V_2 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B2_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B1_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_0 = (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m50208C4947E0F071B327BD30D316628C349D45CB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_1 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		NullCheck(L_1);
		L_1->___clipData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipData_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// DiskStreamEvents?.OnStreamBegin?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_4;
		L_4 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0020;
		}
	}
	{
		goto IL_0036;
	}

IL_0020:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6 = G_B2_0->___OnStreamBegin_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002b;
		}
	}
	{
		goto IL_0036;
	}

IL_002b:
	{
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = L_8->___clipData_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_9, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0036:
	{
		// string filePath = GetDiskCachePath(clipData);
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_0;
		String_t* L_12;
		L_12 = TTSDiskCache_GetDiskCachePath_mE9DB5A23A6C0889C63B7B08DE5BFC2D17F7475A0(__this, L_11, NULL);
		V_1 = L_12;
		// VRequest request = new VRequest();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_13 = (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1*)il2cpp_codegen_object_new(VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537(L_13, NULL);
		V_2 = L_13;
		// bool canPerform = request.RequestAudioClip(new Uri(request.CleanUrl(filePath)), (clip, error) =>
		// {
		//     // Apply clip
		//     clipData.clip = clip;
		//     // Call on complete
		//     OnStreamComplete(clipData, error);
		// }, WitTTSVRequest.TTSAudioType, true, (progress) => clipData.loadProgress = progress);
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_14 = V_2;
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_15 = V_2;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String Meta.WitAi.Requests.VRequest::CleanUrl(System.String) */, L_15, L_16);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_18 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_18, L_17, NULL);
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_19 = V_0;
		RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* L_20 = (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		RequestCompleteDelegate_1__ctor_m0652A714187CBDC14E8660615DE06C82FF11937F(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		int32_t L_21 = ((WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_StaticFields*)il2cpp_codegen_static_fields_for(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var))->___TTSAudioType_20;
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_22 = V_0;
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_23 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		bool L_24;
		L_24 = VRequest_RequestAudioClip_m889F3CDCDB4752DCB79529692CCB23459C855800(L_14, L_18, L_20, L_21, (bool)1, L_23, NULL);
		// if (canPerform)
		if (!L_24)
		{
			goto IL_0092;
		}
	}
	{
		// _streamRequests[clipData.clipID] = request;
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_25 = __this->____streamRequests_7;
		U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* L_26 = V_0;
		NullCheck(L_26);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_27 = L_26->___clipData_0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___clipID_1;
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_29 = V_2;
		NullCheck(L_25);
		Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA(L_25, L_28, L_29, Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::CancelDiskCacheStream(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_CancelDiskCacheStream_mFCB37FEDC4DEC92008A39A914F540C71040C93C1 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* G_B4_0 = NULL;
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* G_B3_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B6_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B8_0 = NULL;
	{
		// if (!_streamRequests.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_0 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_0, L_2, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// VRequest request = _streamRequests[clipData.clipID];
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_4 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_7;
		L_7 = Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27(L_4, L_6, Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		// _streamRequests.Remove(clipData.clipID);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_8 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___0_clipData;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_8, L_10, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// request?.Cancel();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_12 = L_7;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_003d;
		}
	}
	{
		goto IL_0042;
	}

IL_003d:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, G_B4_0);
	}

IL_0042:
	{
		// DiskStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13;
		L_13 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_15 = G_B7_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = ___0_clipData;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_17, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::OnStreamComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache_OnStreamComplete_mCE3C9BA9FC59D37A936DDC98F5F9CE5B6A567A8F (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B5_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B4_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B7_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B6_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B12_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B11_0 = NULL;
	{
		// if (!_streamRequests.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_0 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_0, L_2, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// _streamRequests.Remove(clipData.clipID);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_4 = __this->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_4, L_6, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// if (!string.IsNullOrEmpty(error))
		String_t* L_8 = ___1_error;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		// DiskStreamEvents?.OnStreamError?.Invoke(clipData, error);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_10;
		L_10 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		NullCheck(G_B5_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_12 = G_B5_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_13 = L_12;
		G_B6_0 = L_13;
		if (L_13)
		{
			G_B7_0 = L_13;
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = ___0_clipData;
		String_t* L_15 = ___1_error;
		NullCheck(G_B7_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B7_0, L_14, L_15, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		return;
	}

IL_004b:
	{
		// DiskStreamEvents?.OnStreamReady?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_16;
		L_16 = TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_17 = L_16;
		G_B9_0 = L_17;
		if (L_17)
		{
			G_B10_0 = L_17;
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0056:
	{
		NullCheck(G_B10_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_18 = G_B10_0->___OnStreamReady_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_19 = L_18;
		G_B11_0 = L_19;
		if (L_19)
		{
			G_B12_0 = L_19;
			goto IL_0060;
		}
	}
	{
		return;
	}

IL_0060:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = ___0_clipData;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B12_0, L_20, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCache__ctor_m13B05E4F26D177A1A9142111BEABBF04A28F4683 (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _diskPath = "TTS/";
		__this->____diskPath_4 = _stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskPath_4), (void*)_stringLiteralB34013C5FE0E8CB5200ACFC0535D397BD4811F1D);
		// [SerializeField] private TTSDiskCacheSettings _defaultSettings = new TTSDiskCacheSettings();
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_0 = (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80*)il2cpp_codegen_object_new(TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSDiskCacheSettings__ctor_m40DDC2AC27F34F5C35BB57426DF1DC9FD96B29F1(L_0, NULL);
		__this->____defaultSettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultSettings_5), (void*)L_0);
		// [SerializeField] private TTSStreamEvents _events = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_1 = (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*)il2cpp_codegen_object_new(TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F(L_1, NULL);
		__this->____events_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_1);
		// private Dictionary<string, VRequest> _streamRequests = new Dictionary<string, VRequest>();
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_2 = (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*)il2cpp_codegen_object_new(Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F(L_2, Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		__this->____streamRequests_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamRequests_7), (void*)L_2);
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
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m64F4743BE69F04B7343534CB468C3999D2F08E66 (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass13_0::<CheckCachedToDisk>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCheckCachedToDiskU3Eb__0_m523C21D5B6F4C4C897B8085D477C536DC00BF144 (U3CU3Ec__DisplayClass13_0_t6B9CFB7447E8013ACDC325751A5DDCF8AFC7B5CF* __this, bool ___0_success, String_t* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_streamRequests.ContainsKey(clipData.clipID))
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_1 = L_0->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_1, L_3, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// _streamRequests.Remove(clipData.clipID);
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_6 = L_5->____streamRequests_7;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7 = __this->___clipData_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___clipID_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_6, L_8, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
	}

IL_0039:
	{
		// onCheckComplete(clipData, success);
		Action_2_tA6B78C274344790ADD817A987C01AA1E25653AB6* L_10 = __this->___onCheckComplete_2;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = __this->___clipData_1;
		bool L_12 = ___0_success;
		NullCheck(L_10);
		Action_2_Invoke_m3F27D046697BDCE14C7F53A0C99CA3DC933DBAFF_inline(L_10, L_11, L_12, NULL);
		// });
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
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m50208C4947E0F071B327BD30D316628C349D45CB (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<StreamFromDiskCache>b__0(UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__0_m5E8A522696699471EDD7F2988309DD0024E7D6DE (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// clipData.clip = clip;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		NullCheck(L_0);
		L_0->___clip_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___clip_6), (void*)L_1);
		// OnStreamComplete(clipData, error);
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_2 = __this->___U3CU3E4__this_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = __this->___clipData_0;
		String_t* L_4 = ___1_error;
		NullCheck(L_2);
		VirtualActionInvoker2< TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*, String_t* >::Invoke(12 /* System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache::OnStreamComplete(Meta.WitAi.TTS.Data.TTSClipData,System.String) */, L_2, L_3, L_4);
		// }, WitTTSVRequest.TTSAudioType, true, (progress) => clipData.loadProgress = progress);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSDiskCache/<>c__DisplayClass14_0::<StreamFromDiskCache>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CStreamFromDiskCacheU3Eb__1_m5F420268DE616DEB64E96C4EDD67776AE8EA43BD (U3CU3Ec__DisplayClass14_0_tDCE407CA9CAAAFCB4F77D78F5DBA44E828089031* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// }, WitTTSVRequest.TTSAudioType, true, (progress) => clipData.loadProgress = progress);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_0;
		float L_1 = ___0_progress;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
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
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipAdded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipAddedU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::set_OnClipAdded(Meta.WitAi.TTS.Events.TTSClipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_set_OnClipAdded_mCDB36FA05C3B39718667C432B8C9EEB2A9C0CE16 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = ___0_value;
		__this->___U3COnClipAddedU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipAddedU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Meta.WitAi.TTS.Events.TTSClipEvent Meta.WitAi.TTS.Integrations.TTSRuntimeCache::get_OnClipRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipRemovedU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::set_OnClipRemoved(Meta.WitAi.TTS.Events.TTSClipEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_set_OnClipRemoved_mDA7A4713EFF72DD02657B175587765CE17059801 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = ___0_value;
		__this->___U3COnClipRemovedU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipRemovedU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSRuntimeCache_GetClips_mC3EC38F11CEE60F9463244AB3610ED1105C98023 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipData[] GetClips() => _clips.Values.ToArray();
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		NullCheck(L_0);
		ValueCollection_tE14AE9A409BAE0C3A169C0DE57F2A8A02ADAEDCE* L_1;
		L_1 = Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442(L_0, Dictionary_2_get_Values_m6CBAFB72C92471D4EE629183083EB117DF495442_RuntimeMethod_var);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_2;
		L_2 = Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB(L_1, Enumerable_ToArray_TisTTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_m325A83BF8E7EA6F97E54E8A70A015D428B81A1FB_RuntimeMethod_var);
		return L_2;
	}
}
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSRuntimeCache_GetClip_mA02A4C4B6B31E669D864BE44E2A9320E3E0A1941 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, String_t* ___0_clipID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!_clips.ContainsKey(clipID))
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		String_t* L_1 = ___0_clipID;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643(L_0, L_1, Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)NULL;
	}

IL_0010:
	{
		// int clipIndex = _clipOrder.IndexOf(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->____clipOrder_11;
		String_t* L_4 = ___0_clipID;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_3, L_4, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_0 = L_5;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->____clipOrder_11;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_6, L_7, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// _clipOrder.Add(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____clipOrder_11;
		String_t* L_9 = ___0_clipID;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return _clips[clipID];
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_10 = __this->____clips_10;
		String_t* L_11 = ___0_clipID;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12;
		L_12 = Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9(L_10, L_11, Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::AddClip(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_AddClip_m5058C7C384009C82F7BBD96BDC5A98B9E544FEAA (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B12_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B11_0 = NULL;
	{
		// if (clipData == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_clipData;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// bool wasAdded = true;
		V_0 = (bool)1;
		// int clipIndex = _clipOrder.IndexOf(clipData.clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->____clipOrder_11;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = ___0_clipData;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_1, L_3, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_4;
		// if (clipIndex != -1)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_002b;
		}
	}
	{
		// wasAdded = false;
		V_0 = (bool)0;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->____clipOrder_11;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_6, L_7, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
	}

IL_002b:
	{
		// _clips[clipData.clipID] = clipData;
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_8 = __this->____clips_10;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___0_clipData;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = ___0_clipData;
		NullCheck(L_8);
		Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3(L_8, L_10, L_11, Dictionary_2_set_Item_m831FE5AEBCD52CBE0AB00782DF90AF91849C0CB3_RuntimeMethod_var);
		// _clipOrder.Add(clipData.clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->____clipOrder_11;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_13 = ___0_clipData;
		NullCheck(L_13);
		String_t* L_14 = L_13->___clipID_1;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0062;
	}

IL_0050:
	{
		// RemoveClip(_clipOrder[0]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->____clipOrder_11;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		TTSRuntimeCache_RemoveClip_mA5B7062558B1F632383BFBE6D678B2D97EFFBB74(__this, L_16, NULL);
	}

IL_0062:
	{
		// while (IsCacheFull() && _clipOrder.Count > 0)
		bool L_17;
		L_17 = TTSRuntimeCache_IsCacheFull_mEC7332D863C614DE241703ACAB66A1C3A706E12A(__this, NULL);
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = __this->____clipOrder_11;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_18, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}

IL_0078:
	{
		// if (wasAdded && _clips.Keys.Count > 0)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_21 = __this->____clips_10;
		NullCheck(L_21);
		KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* L_22;
		L_22 = Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A(L_21, Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C(L_22, KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		// OnClipAdded?.Invoke(clipData);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_24;
		L_24 = TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB_inline(__this, NULL);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_25 = L_24;
		G_B11_0 = L_25;
		if (L_25)
		{
			G_B12_0 = L_25;
			goto IL_009a;
		}
	}
	{
		goto IL_00a0;
	}

IL_009a:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = ___0_clipData;
		NullCheck(G_B12_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B12_0, L_26, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_00a0:
	{
		// return _clips.Keys.Count > 0;
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_27 = __this->____clips_10;
		NullCheck(L_27);
		KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* L_28;
		L_28 = Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A(L_27, Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C(L_28, KeyCollection_get_Count_mF09C04E80C2C3DB8A72E09AED08501A0D53ADA0C_RuntimeMethod_var);
		return (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::RemoveClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache_RemoveClip_mA5B7062558B1F632383BFBE6D678B2D97EFFBB74 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, String_t* ___0_clipID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	int32_t V_1 = 0;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	{
		// if (!_clips.ContainsKey(clipID))
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		String_t* L_1 = ___0_clipID;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643(L_0, L_1, Dictionary_2_ContainsKey_mF34AA93A9E69EE726F81026F795DA192ECC6B643_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// TTSClipData clipData = _clips[clipID];
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_3 = __this->____clips_10;
		String_t* L_4 = ___0_clipID;
		NullCheck(L_3);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5;
		L_5 = Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9(L_3, L_4, Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		V_0 = L_5;
		// _clips.Remove(clipID);
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_6 = __this->____clips_10;
		String_t* L_7 = ___0_clipID;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79(L_6, L_7, Dictionary_2_Remove_m191904AE148BE08CB5D6AD1EBE45CFF0EA579A79_RuntimeMethod_var);
		// int clipIndex = _clipOrder.IndexOf(clipID);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->____clipOrder_11;
		String_t* L_10 = ___0_clipID;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4(L_9, L_10, List_1_IndexOf_m407F5E43ED8B2BD39036693B8F25F363362CE9D4_RuntimeMethod_var);
		V_1 = L_11;
		// _clipOrder.RemoveAt(clipIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = __this->____clipOrder_11;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_12, L_13, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// OnClipRemoved?.Invoke(clipData);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_14;
		L_14 = TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6_inline(__this, NULL);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_15 = L_14;
		G_B3_0 = L_15;
		if (L_15)
		{
			G_B4_0 = L_15;
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_16 = V_0;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_16, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSRuntimeCache::IsCacheFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSRuntimeCache_IsCacheFull_mEC7332D863C614DE241703ACAB66A1C3A706E12A (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ClipLimit && _clipOrder.Count > ClipCapacity)
		bool L_0 = __this->___ClipLimit_4;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->____clipOrder_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_3 = __this->___ClipCapacity_5;
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// if (RamLimit && GetCacheDiskSize() > RamCapacity)
		bool L_4 = __this->___RamLimit_6;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_5;
		L_5 = TTSRuntimeCache_GetCacheDiskSize_m1EF520F3243A4581F86E09B3070EFE12737A011C(__this, NULL);
		int32_t L_6 = __this->___RamCapacity_7;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetCacheDiskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSRuntimeCache_GetCacheDiskSize_m1EF520F3243A4581F86E09B3070EFE12737A011C (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// long total = 0;
		V_0 = ((int64_t)0);
		// foreach (var key in _clips.Keys)
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_0 = __this->____clips_10;
		NullCheck(L_0);
		KeyCollection_t4DF297EA4ADE36A06939B9B0626E7A537E9F1F71* L_1;
		L_1 = Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A(L_0, Dictionary_2_get_Keys_m40C55FDAE9E0DFDC36C1B230D55323144FD7047A_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tF3E6A24A38C1F7E502C18ECCD6E1C609396F933A L_2;
		L_2 = KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D(L_1, KeyCollection_GetEnumerator_mFC2AAAEC505AECB73648450D8EBA0382E780613D_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608((&V_1), Enumerator_Dispose_m16A6082127DA6A72D4A585A89427C1142EECD608_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0016_1:
			{
				// foreach (var key in _clips.Keys)
				String_t* L_3;
				L_3 = Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_inline((&V_1), Enumerator_get_Current_m34318CAF7B7734274E24B6E6FDF13C88183E42B3_RuntimeMethod_var);
				V_2 = L_3;
				// total += GetClipBytes(_clips[key].clip);
				int64_t L_4 = V_0;
				Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_5 = __this->____clips_10;
				String_t* L_6 = V_2;
				NullCheck(L_5);
				TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_7;
				L_7 = Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9(L_5, L_6, Dictionary_2_get_Item_m841939CE8F899013617379C5AB442B21E5158EC9_RuntimeMethod_var);
				NullCheck(L_7);
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___clip_6;
				int64_t L_9;
				L_9 = TTSRuntimeCache_GetClipBytes_mDED74477FE1D25D3028FEAFB695127DF56444CCA(L_8, NULL);
				V_0 = ((int64_t)il2cpp_codegen_add(L_4, L_9));
			}

IL_0037_1:
			{
				// foreach (var key in _clips.Keys)
				bool L_10;
				L_10 = Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7((&V_1), Enumerator_MoveNext_mB7ACC68F39FEC2167FBFDF4B9479120E0D8620A7_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return (int)(total / (long)1024) + 1;
		int64_t L_11 = V_0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)(L_11/((int64_t)((int32_t)1024))))), 1));
	}
}
// System.Int64 Meta.WitAi.TTS.Integrations.TTSRuntimeCache::GetClipBytes(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TTSRuntimeCache_GetClipBytes_mDED74477FE1D25D3028FEAFB695127DF56444CCA (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clip == null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return 0;
		return ((int64_t)0);
	}

IL_000c:
	{
		// return ((clip.samples * clip.channels) * 2);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___0_clip;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(L_2, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = ___0_clip;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(L_4, NULL);
		return ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_3, L_5)), 2)));
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSRuntimeCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSRuntimeCache__ctor_m9116340D8664757DBA325C539FBD859746288574 (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool ClipLimit = true;
		__this->___ClipLimit_4 = (bool)1;
		// [Min(1)] public int ClipCapacity = 20;
		__this->___ClipCapacity_5 = ((int32_t)20);
		// public bool RamLimit = true;
		__this->___RamLimit_6 = (bool)1;
		// [Min(1)] public int RamCapacity = 32768;
		__this->___RamCapacity_7 = ((int32_t)32768);
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_0, NULL);
		__this->___U3COnClipAddedU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipAddedU3Ek__BackingField_8), (void*)L_0);
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_1 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_1, NULL);
		__this->___U3COnClipRemovedU3Ek__BackingField_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnClipRemovedU3Ek__BackingField_9), (void*)L_1);
		// private Dictionary<string, TTSClipData> _clips = new Dictionary<string, TTSClipData>();
		Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0* L_2 = (Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0*)il2cpp_codegen_object_new(Dictionary_2_tBA9352270A454F800F6649C8C8CF1DDA6E012FC0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7(L_2, Dictionary_2__ctor_mE20A309F2E93E91A55221AAFAC540CC8034A47D7_RuntimeMethod_var);
		__this->____clips_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clips_10), (void*)L_2);
		// private List<string> _clipOrder = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____clipOrder_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clipOrder_11), (void*)L_3);
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
// System.Void Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWitVoiceSettings__ctor_mF02F476EE719E6BE0B984429F0DCF3CE82E4BD24 (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string voice = DEFAULT_VOICE;
		__this->___voice_4 = _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voice_4), (void*)_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		// public string style = DEFAULT_STYLE;
		__this->___style_5 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___style_5), (void*)_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		// public int speed = 100;
		__this->___speed_6 = ((int32_t)100);
		// public int pitch = 100;
		__this->___pitch_7 = ((int32_t)100);
		// public int gain = 50;
		__this->___gain_8 = ((int32_t)50);
		TTSVoiceSettings__ctor_m70BCB36D2CDEE8D24E90613CA3B3B7B1232EF018(__this, NULL);
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
// Conversion methods for marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_pinvoke(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_pinvoke_back(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke& marshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_pinvoke_cleanup(TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_com(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com& marshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_com_back(const TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com& marshaled, TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8& unmarshaled)
{
	Exception_t* ___configuration_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'configuration' of type 'TTSWitRequestSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___configuration_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
IL2CPP_EXTERN_C void TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshal_com_cleanup(TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.TTS.Interfaces.ITTSVoiceProvider Meta.WitAi.TTS.Integrations.TTSWit::get_VoiceProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_VoiceProvider_mB74E755EA57ECEE40414FEBE5805C041EF9AB6F0 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public override ITTSVoiceProvider VoiceProvider => this;
		return __this;
	}
}
// Meta.WitAi.TTS.Interfaces.ITTSWebHandler Meta.WitAi.TTS.Integrations.TTSWit::get_WebHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_WebHandler_m772B61BC778C5E10F14A753844B27A5E06A04D44 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public override ITTSWebHandler WebHandler => this;
		return __this;
	}
}
// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::get_RuntimeCacheHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_RuntimeCacheHandler_m18C9545B083E3E2DA72D04BDB535BCAA1DC794F8 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_runtimeCache == null)
		RuntimeObject* L_0 = __this->____runtimeCache_10;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _runtimeCache = gameObject.GetComponent<ITTSRuntimeCacheHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0(L_1, GameObject_GetComponent_TisITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759_mF9FE9A328CF87A2FC8404E84A25D7DF635E7FFC0_RuntimeMethod_var);
		__this->____runtimeCache_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeCache_10), (void*)L_2);
	}

IL_0019:
	{
		// return _runtimeCache;
		RuntimeObject* L_3 = __this->____runtimeCache_10;
		return L_3;
	}
}
// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::get_DiskCacheHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TTSWit_get_DiskCacheHandler_mD05E4DC591DED79855E6AB2CB1DCB92116828B97 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_diskCache == null)
		RuntimeObject* L_0 = __this->____diskCache_11;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _diskCache = gameObject.GetComponent<ITTSDiskCacheHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9(L_1, GameObject_GetComponent_TisITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265_mCE957A93ADFA9E0E2B7FBDBD2E4FC1C914F6ABB9_RuntimeMethod_var);
		__this->____diskCache_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskCache_11), (void*)L_2);
	}

IL_0019:
	{
		// return _diskCache;
		RuntimeObject* L_3 = __this->____diskCache_11;
		return L_3;
	}
}
// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebStreamEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->___U3CWebStreamEventsU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::set_WebStreamEvents(Meta.WitAi.TTS.Events.TTSStreamEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_set_WebStreamEvents_m56ED8CD636CF4E2D56B651D0BBAE3AAA8135A077 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = ___0_value;
		__this->___U3CWebStreamEventsU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebStreamEventsU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSWit::GetInvalidError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_GetInvalidError_m81BA9B33C844782CFEA18C1D456A2796159BD443 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B1000C31CF4895724E513340B19C099E04353C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string invalidError = base.GetInvalidError();
		String_t* L_0;
		L_0 = TTSService_GetInvalidError_m89FADBC1414326B563501B9952CA615519302AFE(__this, NULL);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return invalidError;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// if (RequestSettings.configuration == null)
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_4 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_5 = L_4->___configuration_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return "No WitConfiguration Set";
		return _stringLiteralC2B1000C31CF4895724E513340B19C099E04353C;
	}

IL_002a:
	{
		// if (string.IsNullOrEmpty(RequestSettings.configuration.GetClientAccessToken()))
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_7 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_8 = L_7->___configuration_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline(L_8, NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		// return "No WitConfiguration Client Token";
		return _stringLiteral80370E8ED0DC4803AC7664809F1EE2869673BBF1;
	}

IL_0047:
	{
		// return string.Empty;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_11;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSWit::IsTextValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsTextValid_mB273DD030A0FD2C47DC748C8E3D982091B0AE539 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, String_t* ___0_textToSpeak, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string IsTextValid(string textToSpeak) => string.IsNullOrEmpty(textToSpeak) ? WitConstants.ENDPOINT_TTS_NO_TEXT : string.Empty;
		String_t* L_0 = ___0_textToSpeak;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000e:
	{
		return _stringLiteralD0F8B9CB419CD18AE952B114BB02F2A5423F38A9;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::RequestStreamFromWeb(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_RequestStreamFromWeb_m40321900B94E938C2F4F1EEE715150AB3A1869CC (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* V_0 = NULL;
	String_t* V_1 = NULL;
	WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* V_2 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B2_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B1_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B3_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B8_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B10_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_0 = (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m5805D2BA21D4AE309D44DD9EA35936B0A2AD7F79(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		// WebStreamEvents?.OnStreamBegin?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_4;
		L_4 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0020;
		}
	}
	{
		goto IL_0036;
	}

IL_0020:
	{
		NullCheck(G_B2_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_6 = G_B2_0->___OnStreamBegin_0;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002b;
		}
	}
	{
		goto IL_0036;
	}

IL_002b:
	{
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_8 = V_0;
		NullCheck(L_8);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = L_8->___clipData_1;
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B4_0, L_9, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0036:
	{
		// string validError = IsRequestValid(clipData, RequestSettings.configuration);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_1;
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_12 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_13 = L_12->___configuration_0;
		String_t* L_14;
		L_14 = TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA(__this, L_11, L_13, NULL);
		V_1 = L_14;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (L_16)
		{
			goto IL_0078;
		}
	}
	{
		// WebStreamEvents?.OnStreamError?.Invoke(clipData, validError);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_17;
		L_17 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_18 = L_17;
		G_B7_0 = L_18;
		if (L_18)
		{
			G_B8_0 = L_18;
			goto IL_0061;
		}
	}
	{
		return;
	}

IL_0061:
	{
		NullCheck(G_B8_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_19 = G_B8_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_20 = L_19;
		G_B9_0 = L_20;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_006b;
		}
	}
	{
		return;
	}

IL_006b:
	{
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_21 = V_0;
		NullCheck(L_21);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = L_21->___clipData_1;
		String_t* L_23 = V_1;
		NullCheck(G_B10_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B10_0, L_22, L_23, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		// return;
		return;
	}

IL_0078:
	{
		// if (_webStreams.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_24 = __this->____webStreams_14;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = L_25->___clipData_1;
		NullCheck(L_26);
		String_t* L_27 = L_26->___clipID_1;
		NullCheck(L_24);
		bool L_28;
		L_28 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_24, L_27, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_009d;
		}
	}
	{
		// CancelWebStream(clipData);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_29 = V_0;
		NullCheck(L_29);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_30 = L_29->___clipData_1;
		bool L_31;
		L_31 = TTSWit_CancelWebStream_m65761464CCCFAF8DC17976EB7AD6BC7BE6D68578(__this, L_30, NULL);
	}

IL_009d:
	{
		// WitTTSVRequest request = new WitTTSVRequest(RequestSettings.configuration);
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_32 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_33 = L_32->___configuration_0;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_34 = (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0*)il2cpp_codegen_object_new(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6(L_34, L_33, NULL);
		V_2 = L_34;
		// request.RequestStream(clipData.textToSpeak, clipData.queryParameters,
		//     (clip, error) =>
		//     {
		//         _webStreams.Remove(clipData.clipID);
		//         clipData.clip = clip;
		//         if (string.IsNullOrEmpty(error))
		//         {
		//             WebStreamEvents?.OnStreamReady?.Invoke(clipData);
		//         }
		//         else
		//         {
		//             if (string.Equals(error, VRequest.CANCEL_ERROR, StringComparison.CurrentCultureIgnoreCase))
		//             {
		//                 WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		//             }
		//             else
		//             {
		//                 WebStreamEvents?.OnStreamError?.Invoke(clipData, error);
		//             }
		//         }
		//     },
		//     (progress) => clipData.loadProgress = progress);
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_35 = V_2;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_36 = V_0;
		NullCheck(L_36);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_37 = L_36->___clipData_1;
		NullCheck(L_37);
		String_t* L_38 = L_37->___textToSpeak_0;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_39 = V_0;
		NullCheck(L_39);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_40 = L_39->___clipData_1;
		NullCheck(L_40);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41 = L_40->___queryParameters_5;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_42 = V_0;
		RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227* L_43 = (RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_tD847EF3BC3FD3D3B90166A1BFD118C2024197227_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		RequestCompleteDelegate_1__ctor_m0652A714187CBDC14E8660615DE06C82FF11937F(L_43, L_42, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_44 = V_0;
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_45 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		bool L_46;
		L_46 = WitTTSVRequest_RequestStream_m543A1147518C743CEB7925E4B69D72A1C9784508(L_35, L_38, L_41, L_43, L_45, NULL);
		// _webStreams[clipData.clipID] = request;
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_47 = __this->____webStreams_14;
		U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* L_48 = V_0;
		NullCheck(L_48);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_49 = L_48->___clipData_1;
		NullCheck(L_49);
		String_t* L_50 = L_49->___clipID_1;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_51 = V_2;
		NullCheck(L_47);
		Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA(L_47, L_50, L_51, Dictionary_2_set_Item_m9F91457BE833C21231155D090C4B729469D620DA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebStream(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebStream_m65761464CCCFAF8DC17976EB7AD6BC7BE6D68578 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* G_B4_0 = NULL;
	VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* G_B3_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B7_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B6_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B9_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B8_0 = NULL;
	{
		// if (!_webStreams.ContainsKey(clipData.clipID))
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_0 = __this->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D(L_0, L_2, Dictionary_2_ContainsKey_m69AE1A9ACD02995822338BBBC5A74B59D2DA393D_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// VRequest request = _webStreams[clipData.clipID];
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_4 = __this->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_7;
		L_7 = Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27(L_4, L_6, Dictionary_2_get_Item_mC988D080FDD725289D4E7194EA9635F997E87B27_RuntimeMethod_var);
		// _webStreams.Remove(clipData.clipID);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_8 = __this->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___0_clipData;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_8, L_10, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// request?.Cancel();
		VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* L_12 = L_7;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, G_B4_0);
	}

IL_0043:
	{
		// WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_13;
		L_13 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(__this, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_004f;
		}
	}
	{
		goto IL_0060;
	}

IL_004f:
	{
		NullCheck(G_B7_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_15 = G_B7_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_005a;
		}
	}
	{
		goto IL_0060;
	}

IL_005a:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = ___0_clipData;
		NullCheck(G_B9_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B9_0, L_17, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
	}

IL_0060:
	{
		// return true;
		return (bool)1;
	}
}
// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::get_WebDownloadEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_0 = __this->___U3CWebDownloadEventsU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::set_WebDownloadEvents(Meta.WitAi.TTS.Events.TTSDownloadEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_set_WebDownloadEvents_m883C532E3511F60C09FAAF10918FB99045D1E2AC (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_0 = ___0_value;
		__this->___U3CWebDownloadEventsU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebDownloadEventsU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::RequestDownloadFromWeb(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit_RequestDownloadFromWeb_m5A5137C8D274639E8B09B53846F08871A7624E27 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* V_0 = NULL;
	String_t* V_1 = NULL;
	WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* V_2 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B2_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B1_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B4_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B3_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B8_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B10_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_0 = (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass25_0__ctor_m5BC4C7E86F42C61955F5AD77E3ECDD2D69218CC9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_2 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_3 = ___0_clipData;
		NullCheck(L_2);
		L_2->___clipData_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clipData_1), (void*)L_3);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_4 = V_0;
		String_t* L_5 = ___1_downloadPath;
		NullCheck(L_4);
		L_4->___downloadPath_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___downloadPath_2), (void*)L_5);
		// WebDownloadEvents?.OnDownloadBegin?.Invoke(clipData, downloadPath);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_6;
		L_6 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(__this, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0027;
		}
	}
	{
		goto IL_0043;
	}

IL_0027:
	{
		NullCheck(G_B2_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_8 = G_B2_0->___OnDownloadBegin_0;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0032;
		}
	}
	{
		goto IL_0043;
	}

IL_0032:
	{
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_10 = V_0;
		NullCheck(L_10);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_11 = L_10->___clipData_1;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___downloadPath_2;
		NullCheck(G_B4_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B4_0, L_11, L_13, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0043:
	{
		// string validError = IsRequestValid(clipData, RequestSettings.configuration);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_14 = V_0;
		NullCheck(L_14);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_15 = L_14->___clipData_1;
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_16 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_17 = L_16->___configuration_0;
		String_t* L_18;
		L_18 = TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA(__this, L_15, L_17, NULL);
		V_1 = L_18;
		// if (!string.IsNullOrEmpty(validError))
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_008b;
		}
	}
	{
		// WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, validError);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_21;
		L_21 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(__this, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_22 = L_21;
		G_B7_0 = L_22;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		NullCheck(G_B8_0);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_23 = G_B8_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_24 = L_23;
		G_B9_0 = L_24;
		if (L_24)
		{
			G_B10_0 = L_24;
			goto IL_0078;
		}
	}
	{
		return;
	}

IL_0078:
	{
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_25 = V_0;
		NullCheck(L_25);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_26 = L_25->___clipData_1;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___downloadPath_2;
		String_t* L_29 = V_1;
		NullCheck(G_B10_0);
		UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A(G_B10_0, L_26, L_28, L_29, UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		// return;
		return;
	}

IL_008b:
	{
		// if (_webDownloads.ContainsKey(clipData.clipID))
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_30 = __this->____webDownloads_16;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_31 = V_0;
		NullCheck(L_31);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_32 = L_31->___clipData_1;
		NullCheck(L_32);
		String_t* L_33 = L_32->___clipID_1;
		NullCheck(L_30);
		bool L_34;
		L_34 = Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5(L_30, L_33, Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_00b6;
		}
	}
	{
		// CancelWebDownload(clipData, downloadPath);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_35 = V_0;
		NullCheck(L_35);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_36 = L_35->___clipData_1;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = L_37->___downloadPath_2;
		bool L_39;
		L_39 = TTSWit_CancelWebDownload_m668EECF084A405833C0F6A10ED18128521EF5F63(__this, L_36, L_38, NULL);
	}

IL_00b6:
	{
		// WitTTSVRequest request = new WitTTSVRequest(RequestSettings.configuration);
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_40 = (&__this->___RequestSettings_12);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_41 = L_40->___configuration_0;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_42 = (WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0*)il2cpp_codegen_object_new(WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6(L_42, L_41, NULL);
		V_2 = L_42;
		// request.RequestDownload(downloadPath, clipData.textToSpeak, clipData.queryParameters,
		//     (success, error) =>
		//     {
		//         _webDownloads.Remove(clipData.clipID);
		//         if (string.IsNullOrEmpty(error))
		//         {
		//             WebDownloadEvents?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		//         }
		//         else
		//         {
		//             WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		//         }
		//     },
		//     (progress) => clipData.loadProgress = progress);
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_43 = V_2;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45 = L_44->___downloadPath_2;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_46 = V_0;
		NullCheck(L_46);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_47 = L_46->___clipData_1;
		NullCheck(L_47);
		String_t* L_48 = L_47->___textToSpeak_0;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_49 = V_0;
		NullCheck(L_49);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_50 = L_49->___clipData_1;
		NullCheck(L_50);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = L_50->___queryParameters_5;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_52 = V_0;
		RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227* L_53 = (RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_t1B18F41B11AC8901780786A9FA45BE64B8872227_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		RequestCompleteDelegate_1__ctor_mA9DEBEFCED043D9F65240B963691AC2AED7A53D5(L_53, L_52, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_54 = V_0;
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_55 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_55, L_54, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		bool L_56;
		L_56 = WitTTSVRequest_RequestDownload_mC18DF9CEEB421F2A33282F36F70844C508731D3B(L_43, L_45, L_48, L_51, L_53, L_55, NULL);
		// _webDownloads[clipData.clipID] = request;
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_57 = __this->____webDownloads_16;
		U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* L_58 = V_0;
		NullCheck(L_58);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_59 = L_58->___clipData_1;
		NullCheck(L_59);
		String_t* L_60 = L_59->___clipID_1;
		WitTTSVRequest_tC62D63EA0B7FF7812D8674980098D818EE743CC0* L_61 = V_2;
		NullCheck(L_57);
		Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E(L_57, L_60, L_61, Dictionary_2_set_Item_m5E41D7D254BEEECF0C87603D1BC836163E4B371E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::CancelWebDownload(Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSWit_CancelWebDownload_m668EECF084A405833C0F6A10ED18128521EF5F63 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* G_B4_0 = NULL;
	WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* G_B3_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B6_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B9_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B8_0 = NULL;
	{
		// if (!_webDownloads.ContainsKey(clipData.clipID))
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_0 = __this->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = ___0_clipData;
		NullCheck(L_1);
		String_t* L_2 = L_1->___clipID_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5(L_0, L_2, Dictionary_2_ContainsKey_mCBF70D9AE0245287511956EE3B7BCCC8C58933A5_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// WitVRequest request = _webDownloads[clipData.clipID];
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_4 = __this->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = ___0_clipData;
		NullCheck(L_5);
		String_t* L_6 = L_5->___clipID_1;
		NullCheck(L_4);
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_7;
		L_7 = Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955(L_4, L_6, Dictionary_2_get_Item_m8C298CC25B3C523E237C96C65C79F8472E2DE955_RuntimeMethod_var);
		// _webDownloads.Remove(clipData.clipID);
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_8 = __this->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_9 = ___0_clipData;
		NullCheck(L_9);
		String_t* L_10 = L_9->___clipID_1;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027(L_8, L_10, Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		// request?.Cancel();
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_12 = L_7;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B4_0);
		VirtualActionInvoker0::Invoke(10 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, G_B4_0);
	}

IL_0043:
	{
		// WebDownloadEvents?.OnDownloadCancel?.Invoke(clipData, downloadPath);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_13;
		L_13 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(__this, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_14 = L_13;
		G_B6_0 = L_14;
		if (L_14)
		{
			G_B7_0 = L_14;
			goto IL_004f;
		}
	}
	{
		goto IL_0061;
	}

IL_004f:
	{
		NullCheck(G_B7_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_15 = G_B7_0->___OnDownloadCancel_2;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_005a;
		}
	}
	{
		goto IL_0061;
	}

IL_005a:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_17 = ___0_clipData;
		String_t* L_18 = ___1_downloadPath;
		NullCheck(G_B9_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B9_0, L_17, L_18, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
	}

IL_0061:
	{
		// return true;
		return (bool)1;
	}
}
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::get_PresetWitVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* TTSWit_get_PresetWitVoiceSettings_m9C76F443CF45666E3DBB0D8C1F4780BC4D24CEFE (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSWitVoiceSettings[] PresetWitVoiceSettings => _presetVoiceSettings;
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_0 = __this->____presetVoiceSettings_17;
		return L_0;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::get_PresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSWit_get_PresetVoiceSettings_m6D39B210468DFD1C57B1F93A4BCA1B1BC3868AF9 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* V_0 = NULL;
	{
		// if (_presetVoiceSettings == null || _presetVoiceSettings.Length == 0)
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_0 = __this->____presetVoiceSettings_17;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_1 = __this->____presetVoiceSettings_17;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0025;
		}
	}

IL_0011:
	{
		// _presetVoiceSettings = new TTSWitVoiceSettings[] { new TTSWitVoiceSettings() };
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_2 = (TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31*)(TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31*)SZArrayNew(TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31_il2cpp_TypeInfo_var, (uint32_t)1);
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_3 = L_2;
		TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* L_4 = (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29*)il2cpp_codegen_object_new(TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TTSWitVoiceSettings__ctor_mF02F476EE719E6BE0B984429F0DCF3CE82E4BD24(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29*)L_4);
		__this->____presetVoiceSettings_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____presetVoiceSettings_17), (void*)L_3);
	}

IL_0025:
	{
		// return _presetVoiceSettings;
		TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* L_5 = __this->____presetVoiceSettings_17;
		V_0 = (TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C*)L_5;
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_6 = V_0;
		return L_6;
	}
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Integrations.TTSWit::get_VoiceDefaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSWit_get_VoiceDefaultSettings_m61180B725394044CD43A7E9E6CE5F4C5AC94A3E3 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSVoiceSettings VoiceDefaultSettings => PresetVoiceSettings[0];
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_0;
		L_0 = TTSWit_get_PresetVoiceSettings_m6D39B210468DFD1C57B1F93A4BCA1B1BC3868AF9(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Integrations.TTSWit::EncodeVoiceSettings(Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* TTSWit_EncodeVoiceSettings_m5AB213BBDD047EE7E87C94A8C41D5E1A210FB403 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___0_voiceSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// Dictionary<string, string> parameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if (voiceSettings != null)
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_1 = ___0_voiceSettings;
		if (!L_1)
		{
			goto IL_010c;
		}
	}
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2 = ___0_voiceSettings;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_4;
		L_4 = Type_GetFields_mC0570FF1986A6D93FA7976303B44B2FF8D0BC77F(L_3, NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00a5;
	}

IL_001f:
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (!string.Equals(field.Name, SETTINGS_KEY, StringComparison.CurrentCultureIgnoreCase))
		FieldInfo_t* L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		bool L_11;
		L_11 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_10, _stringLiteralB453B10781B936A70E8C08FCADC575965E7C5B21, 1, NULL);
		if (L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// object fieldVal = field.GetValue(voiceSettings);
		FieldInfo_t* L_12 = V_3;
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_13 = ___0_voiceSettings;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_12, L_13);
		V_4 = L_14;
		// RangeAttribute range = field.GetCustomAttribute<RangeAttribute>();
		FieldInfo_t* L_15 = V_3;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_16;
		L_16 = CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED(L_15, CustomAttributeExtensions_GetCustomAttribute_TisRangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557_m7CA94D1DCD70C1E86CA6DDB2AC741C7627F4F2ED_RuntimeMethod_var);
		V_5 = L_16;
		// if (range != null && field.FieldType == typeof(int))
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_17 = V_5;
		if (!L_17)
		{
			goto IL_008e;
		}
	}
	{
		FieldInfo_t* L_18 = V_3;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_008e;
		}
	}
	{
		// int oldFloat = (int) fieldVal;
		RuntimeObject* L_23 = V_4;
		// int newFloat = Mathf.Clamp(oldFloat, (int)range.min, (int)range.max);
		int32_t L_24 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_23, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_25 = V_5;
		NullCheck(L_25);
		float L_26 = L_25->___min_0;
		RangeAttribute_t8765B7FFCE8F675585C966D7E9FC8FE555D84557* L_27 = V_5;
		NullCheck(L_27);
		float L_28 = L_27->___max_1;
		int32_t L_29;
		L_29 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_24, il2cpp_codegen_cast_double_to_int<int32_t>(L_26), il2cpp_codegen_cast_double_to_int<int32_t>(L_28), NULL);
		V_6 = L_29;
		// if (oldFloat != newFloat)
		int32_t L_30 = V_6;
		if ((((int32_t)L_24) == ((int32_t)L_30)))
		{
			goto IL_008e;
		}
	}
	{
		// fieldVal = newFloat;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		V_4 = L_33;
	}

IL_008e:
	{
		// parameters[field.Name] = fieldVal.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = V_0;
		FieldInfo_t* L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		RuntimeObject* L_37 = V_4;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		NullCheck(L_34);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_34, L_36, L_38, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_00a1:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a5:
	{
		// foreach (FieldInfo field in voiceSettings.GetType().GetFields())
		int32_t L_40 = V_2;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (!parameters.ContainsKey(VOICE_KEY) || string.IsNullOrEmpty(parameters[VOICE_KEY]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = V_0;
		NullCheck(L_42);
		bool L_43;
		L_43 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_42, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_44, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_46;
		L_46 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_45, NULL);
		if (!L_46)
		{
			goto IL_00dd;
		}
	}

IL_00cd:
	{
		// parameters[VOICE_KEY] = TTSWitVoiceSettings.DEFAULT_VOICE;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47 = V_0;
		NullCheck(L_47);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_47, _stringLiteralBAD4A6E573B068D6167F13578714BA76E87F09CB, _stringLiteralD7BA829FC782560B43E1A0268BD4B1AA71F16E58, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_00dd:
	{
		// if (!parameters.ContainsKey(STYLE_KEY) || string.IsNullOrEmpty(parameters[STYLE_KEY]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = V_0;
		NullCheck(L_48);
		bool L_49;
		L_49 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_48, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_49)
		{
			goto IL_00fc;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_50, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_52;
		L_52 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_51, NULL);
		if (!L_52)
		{
			goto IL_010c;
		}
	}

IL_00fc:
	{
		// parameters[STYLE_KEY] = TTSWitVoiceSettings.DEFAULT_STYLE;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = V_0;
		NullCheck(L_53);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_53, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67, _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_010c:
	{
		// return parameters;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_54 = V_0;
		return L_54;
	}
}
// System.String Meta.WitAi.TTS.Integrations.TTSWit::IsRequestValid(Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSWit_IsRequestValid_m3373AB0DDA02667FD6624752203966A80DFBC0DA (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_clipData, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___1_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string invalidError = GetInvalidError();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Meta.WitAi.TTS.TTSService::GetInvalidError() */, __this);
		V_0 = L_0;
		// if (!string.IsNullOrEmpty(invalidError))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return invalidError;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0011:
	{
		// if (clipData == null)
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_4 = ___0_clipData;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return "No clip data provided";
		return _stringLiteral31C91602DBA21C58E87CE18AB2A0AA3F795CFEEE;
	}

IL_001a:
	{
		// return string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_5;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSWit__ctor_m19DD1DBAAB80D063C85E9BA05423B0B9A363CA54 (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*)il2cpp_codegen_object_new(TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F(L_0, NULL);
		__this->___U3CWebStreamEventsU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebStreamEventsU3Ek__BackingField_13), (void*)L_0);
		// private Dictionary<string, VRequest> _webStreams = new Dictionary<string, VRequest>();
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_1 = (Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7*)il2cpp_codegen_object_new(Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F(L_1, Dictionary_2__ctor_m1B6783FD2CA19EA915D8B8BFAB7D655FA2B3790F_RuntimeMethod_var);
		__this->____webStreams_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webStreams_14), (void*)L_1);
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_2 = (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*)il2cpp_codegen_object_new(TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84(L_2, NULL);
		__this->___U3CWebDownloadEventsU3Ek__BackingField_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebDownloadEventsU3Ek__BackingField_15), (void*)L_2);
		// private Dictionary<string, WitVRequest> _webDownloads = new Dictionary<string, WitVRequest>();
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_3 = (Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7*)il2cpp_codegen_object_new(Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8(L_3, Dictionary_2__ctor_m9F2FDAE3942595D053F4475A27F0D2EEDB3B6DB8_RuntimeMethod_var);
		__this->____webDownloads_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____webDownloads_16), (void*)L_3);
		TTSService__ctor_m0F6DF7E82B702325C181B6D966D0934A143973DE(__this, NULL);
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
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m5805D2BA21D4AE309D44DD9EA35936B0A2AD7F79 (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<RequestStreamFromWeb>b__0(UnityEngine.AudioClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__0_mB1CCAD98A4466C3AF9E1D05DCDCA31DF68FB9317 (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, String_t* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA);
		s_Il2CppMethodInitialized = true;
	}
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B3_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B2_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B5_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B4_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B9_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B8_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B11_0 = NULL;
	TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* G_B10_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B14_0 = NULL;
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* G_B13_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B16_0 = NULL;
	TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* G_B15_0 = NULL;
	{
		// _webStreams.Remove(clipData.clipID);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* L_1 = L_0->____webStreams_14;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3(L_1, L_3, Dictionary_2_Remove_m5639E647088345033EF89D801A7DFA119F6F93A3_RuntimeMethod_var);
		// clipData.clip = clip;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_5 = __this->___clipData_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = ___0_clip;
		NullCheck(L_5);
		L_5->___clip_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___clip_6), (void*)L_6);
		// if (string.IsNullOrEmpty(error))
		String_t* L_7 = ___1_error;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// WebStreamEvents?.OnStreamReady?.Invoke(clipData);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_9 = __this->___U3CU3E4__this_0;
		NullCheck(L_9);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_10;
		L_10 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(L_9, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		NullCheck(G_B3_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_12 = G_B3_0->___OnStreamReady_1;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_13 = L_12;
		G_B4_0 = L_13;
		if (L_13)
		{
			G_B5_0 = L_13;
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_14 = __this->___clipData_1;
		NullCheck(G_B5_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B5_0, L_14, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		return;
	}

IL_0056:
	{
		// if (string.Equals(error, VRequest.CANCEL_ERROR, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_15 = ___1_error;
		bool L_16;
		L_16 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_15, _stringLiteralAC511DE6494CB691166B2E9F28AC49D3C56037BA, 1, NULL);
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		// WebStreamEvents?.OnStreamCancel?.Invoke(clipData);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_17 = __this->___U3CU3E4__this_0;
		NullCheck(L_17);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_18;
		L_18 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(L_17, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_19 = L_18;
		G_B8_0 = L_19;
		if (L_19)
		{
			G_B9_0 = L_19;
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		NullCheck(G_B9_0);
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_20 = G_B9_0->___OnStreamCancel_2;
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_21 = L_20;
		G_B10_0 = L_21;
		if (L_21)
		{
			G_B11_0 = L_21;
			goto IL_007e;
		}
	}
	{
		return;
	}

IL_007e:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = __this->___clipData_1;
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119(G_B11_0, L_22, UnityEvent_1_Invoke_mDE230DEA1E9974195C3F174765A9E0DB1526F119_RuntimeMethod_var);
		return;
	}

IL_008a:
	{
		// WebStreamEvents?.OnStreamError?.Invoke(clipData, error);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_23 = __this->___U3CU3E4__this_0;
		NullCheck(L_23);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_24;
		L_24 = TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline(L_23, NULL);
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_25 = L_24;
		G_B13_0 = L_25;
		if (L_25)
		{
			G_B14_0 = L_25;
			goto IL_009a;
		}
	}
	{
		return;
	}

IL_009a:
	{
		NullCheck(G_B14_0);
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_26 = G_B14_0->___OnStreamError_3;
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_27 = L_26;
		G_B15_0 = L_27;
		if (L_27)
		{
			G_B16_0 = L_27;
			goto IL_00a4;
		}
	}
	{
		return;
	}

IL_00a4:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_28 = __this->___clipData_1;
		String_t* L_29 = ___1_error;
		NullCheck(G_B16_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B16_0, L_28, L_29, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		// },
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass18_0::<RequestStreamFromWeb>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CRequestStreamFromWebU3Eb__1_m690C45549C570C25CF8EBC3418271878095416DD (U3CU3Ec__DisplayClass18_0_t515B773164D969BF6327F4991EBBC2C6567BFFFC* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// (progress) => clipData.loadProgress = progress);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_1;
		float L_1 = ___0_progress;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
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
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m5BC4C7E86F42C61955F5AD77E3ECDD2D69218CC9 (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<RequestDownloadFromWeb>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__0_mF5BF253FE69DDAC7727166A2FF026E17207547BC (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, bool ___0_success, String_t* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B3_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B2_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B5_0 = NULL;
	TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* G_B4_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B8_0 = NULL;
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* G_B7_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B10_0 = NULL;
	TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* G_B9_0 = NULL;
	{
		// _webDownloads.Remove(clipData.clipID);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* L_1 = L_0->____webDownloads_16;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = __this->___clipData_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___clipID_1;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027(L_1, L_3, Dictionary_2_Remove_mAC0649F6B4E6A5853735FAF4A0B8639D1656D027_RuntimeMethod_var);
		// if (string.IsNullOrEmpty(error))
		String_t* L_5 = ___1_error;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// WebDownloadEvents?.OnDownloadSuccess?.Invoke(clipData, downloadPath);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_7 = __this->___U3CU3E4__this_0;
		NullCheck(L_7);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_8;
		L_8 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(L_7, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		NullCheck(G_B3_0);
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_10 = G_B3_0->___OnDownloadSuccess_1;
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_12 = __this->___clipData_1;
		String_t* L_13 = __this->___downloadPath_2;
		NullCheck(G_B5_0);
		UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7(G_B5_0, L_12, L_13, UnityEvent_2_Invoke_m1D09481C2110083E19F3AE7544220FC59E633AC7_RuntimeMethod_var);
		return;
	}

IL_0050:
	{
		// WebDownloadEvents?.OnDownloadError?.Invoke(clipData, downloadPath, error);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_14 = __this->___U3CU3E4__this_0;
		NullCheck(L_14);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_15;
		L_15 = TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline(L_14, NULL);
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_16 = L_15;
		G_B7_0 = L_16;
		if (L_16)
		{
			G_B8_0 = L_16;
			goto IL_0060;
		}
	}
	{
		return;
	}

IL_0060:
	{
		NullCheck(G_B8_0);
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_17 = G_B8_0->___OnDownloadError_3;
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_18 = L_17;
		G_B9_0 = L_18;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_006a:
	{
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_19 = __this->___clipData_1;
		String_t* L_20 = __this->___downloadPath_2;
		String_t* L_21 = ___1_error;
		NullCheck(G_B10_0);
		UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A(G_B10_0, L_19, L_20, L_21, UnityEvent_3_Invoke_m83A74383D940D2C4D5028C17F2BC5E820EBB560A_RuntimeMethod_var);
		// },
		return;
	}
}
// System.Void Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass25_0::<RequestDownloadFromWeb>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CRequestDownloadFromWebU3Eb__1_mBEBC8C078780E29EAA77E57F4F728373D3050CC4 (U3CU3Ec__DisplayClass25_0_t663E283377A378BFE37CE9048735A2166CD603A8* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// (progress) => clipData.loadProgress = progress);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___clipData_1;
		float L_1 = ___0_progress;
		NullCheck(L_0);
		L_0->___loadProgress_8 = L_1;
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
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6 (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8(__this, UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSClipDownloadErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipDownloadErrorEvent__ctor_mB66278711D1E80AB517F53B5ED7D92C197E71C1A (TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A(__this, UnityEvent_3__ctor_m507F879DC4A7B713708C76B81092F1B164263E9A_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSDownloadEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84 (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipDownloadEvent OnDownloadBegin = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_0 = (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6(L_0, NULL);
		__this->___OnDownloadBegin_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadBegin_0), (void*)L_0);
		// public TTSClipDownloadEvent OnDownloadSuccess = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_1 = (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6(L_1, NULL);
		__this->___OnDownloadSuccess_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadSuccess_1), (void*)L_1);
		// public TTSClipDownloadEvent OnDownloadCancel = new TTSClipDownloadEvent();
		TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18* L_2 = (TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18*)il2cpp_codegen_object_new(TTSClipDownloadEvent_t4507507811AEEFDA604DC482FD71A8089CAACD18_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSClipDownloadEvent__ctor_m27B8C2E2BA6ED7C387DEECD94013DD22408A05F6(L_2, NULL);
		__this->___OnDownloadCancel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadCancel_2), (void*)L_2);
		// public TTSClipDownloadErrorEvent OnDownloadError = new TTSClipDownloadErrorEvent();
		TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7* L_3 = (TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7*)il2cpp_codegen_object_new(TTSClipDownloadErrorEvent_tCDE58117B733BFAE120FFD4A1D9C1532BDE7FCD7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSClipDownloadErrorEvent__ctor_mB66278711D1E80AB517F53B5ED7D92C197E71C1A(L_3, NULL);
		__this->___OnDownloadError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnDownloadError_3), (void*)L_3);
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
// System.Void Meta.WitAi.TTS.Events.TTSServiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSServiceEvents__ctor_m82EF258C00AB920E79E011CF464D9B6E1EBCB353 (TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipEvent OnClipCreated  = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_0, NULL);
		__this->___OnClipCreated_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnClipCreated_0), (void*)L_0);
		// public TTSClipEvent OnClipUnloaded  = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_1 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_1, NULL);
		__this->___OnClipUnloaded_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnClipUnloaded_1), (void*)L_1);
		// public TTSStreamEvents Stream = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_2 = (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*)il2cpp_codegen_object_new(TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F(L_2, NULL);
		__this->___Stream_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stream_2), (void*)L_2);
		// public TTSDownloadEvents Download = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_3 = (TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*)il2cpp_codegen_object_new(TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSDownloadEvents__ctor_m249AC09F74FE93E73E3E1E47683966D1FD65CC84(L_3, NULL);
		__this->___Download_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Download_3), (void*)L_3);
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
// System.Void Meta.WitAi.TTS.Events.TTSClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9 (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336(__this, UnityEvent_1__ctor_mE3A43344344ACA44CCAD9B2E26AF3D0823A02336_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSClipErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipErrorEvent__ctor_mD7FE85AFFFD6A1445E8775CE5B1D619D29C77221 (TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8(__this, UnityEvent_2__ctor_m60BE586FF802F01C1DA1A80AC23321A88635F0A8_RuntimeMethod_var);
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
// System.Void Meta.WitAi.TTS.Events.TTSStreamEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamEvents__ctor_m41F9DE1389E4698A60E8AFBCB1ADCBAC07AD4A2F (TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TTSClipEvent OnStreamBegin = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_0, NULL);
		__this->___OnStreamBegin_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamBegin_0), (void*)L_0);
		// public TTSClipEvent OnStreamReady = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_1 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_1, NULL);
		__this->___OnStreamReady_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamReady_1), (void*)L_1);
		// public TTSClipEvent OnStreamCancel = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_2 = (TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*)il2cpp_codegen_object_new(TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TTSClipEvent__ctor_m554BE256B2FB270021B66F26CEBE7EB7A4EAF2E9(L_2, NULL);
		__this->___OnStreamCancel_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamCancel_2), (void*)L_2);
		// public TTSClipErrorEvent OnStreamError = new TTSClipErrorEvent();
		TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689* L_3 = (TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689*)il2cpp_codegen_object_new(TTSClipErrorEvent_t6C9313A0819BDD71F8BA14EED5A72DD52F119689_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TTSClipErrorEvent__ctor_mD7FE85AFFFD6A1445E8775CE5B1D619D29C77221(L_3, NULL);
		__this->___OnStreamError_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnStreamError_3), (void*)L_3);
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
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_Equals_mBBD2D9ADEC1CD3F4D868DFA3F600236004DEC51F (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_0 = NULL;
	{
		// if (obj is TTSClipData other)
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827*)IsInstClass((RuntimeObject*)L_0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827_il2cpp_TypeInfo_var));
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return Equals(other);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_2 = V_0;
		bool L_3;
		L_3 = TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718(__this, L_2, NULL);
		return L_3;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::Equals(Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_Equals_m33065A5661419BE32C96A1F75B8D625B988A1718 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_other, const RuntimeMethod* method) 
{
	{
		// return HasClipId(other.clipID);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1 = L_0->___clipID_1;
		bool L_2;
		L_2 = TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27(__this, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Meta.WitAi.TTS.Data.TTSClipData::HasClipId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSClipData_HasClipId_m80BE688C84E0930E3B701E3A99729C71184E2F27 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, String_t* ___0_clipId, const RuntimeMethod* method) 
{
	{
		// return string.Equals(clipID, clipId, StringComparison.CurrentCultureIgnoreCase);
		String_t* L_0 = __this->___clipID_1;
		String_t* L_1 = ___0_clipId;
		bool L_2;
		L_2 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_0, L_1, 1, NULL);
		return L_2;
	}
}
// System.Int32 Meta.WitAi.TTS.Data.TTSClipData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSClipData_GetHashCode_m332C85DC8F398D421314EE2F5E892BE623245018 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) 
{
	{
		// var hash = 17;
		// hash = hash * 31 + clipID.GetHashCode();
		String_t* L_0 = __this->___clipID_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)31))), L_1));
	}
}
// System.Void Meta.WitAi.TTS.Data.TTSClipData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSClipData__ctor_m8E8813962847F69D286A609B0CC34ECFAB6AACF7 (TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* __this, const RuntimeMethod* method) 
{
	{
		// public AudioType audioType = AudioType.WAV; // Default
		__this->___audioType_2 = ((int32_t)20);
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
// System.Void Meta.WitAi.TTS.Data.TTSDiskCacheSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSDiskCacheSettings__ctor_m40DDC2AC27F34F5C35BB57426DF1DC9FD96B29F1 (TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* __this, const RuntimeMethod* method) 
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
// System.Void Meta.WitAi.TTS.Data.TTSVoiceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSVoiceSettings__ctor_m70BCB36D2CDEE8D24E90613CA3B3B7B1232EF018 (TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string settingsID = DEFAULT_ID;
		__this->___settingsID_1 = _stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settingsID_1), (void*)_stringLiteralC8184EEF97335AE0D738936D2C8F6D133173320F);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) 
{
	{
		// public TTSServiceEvents Events => _events;
		TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* L_0 = __this->____events_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipData SpeakingClip { get; private set; }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = __this->___U3CSpeakingClipU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_0 = __this->____events_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TTSSpeaker_set_SpeakingClip_mC8AAB39F58D104DA9D52A388E6FBE0FA46C22A01_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TTSClipData SpeakingClip { get; private set; }
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_0 = ___0_value;
		__this->___U3CSpeakingClipU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakingClipU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TTSDiskCache_get_DiskPath_m32FDB08E8E355E83AD0CEB88689CF09E5701B10E_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public string DiskPath => _diskPath;
		String_t* L_0 = __this->____diskPath_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSDiskCache_get_DiskStreamEvents_mAC6F6C020BB14837BC96167600EB251357A2A518_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// get => _events;
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->____events_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipAdded_m6B463C4790E9AEFEC8362B8EBFB19EAAC64E56EB_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipAdded { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipAddedU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* TTSRuntimeCache_get_OnClipRemoved_m065743317AE958A1839DF80DDD4EE33FDB722FB6_inline (TTSRuntimeCache_tDA3DB8C3F9CEF8CE727EF2A5360B6940FED9AD05* __this, const RuntimeMethod* method) 
{
	{
		// public TTSClipEvent OnClipRemoved { get; set; } = new TTSClipEvent();
		TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40* L_0 = __this->___U3COnClipRemovedU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// return _clientAccessToken;
		String_t* L_0 = __this->____clientAccessToken_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* TTSWit_get_WebStreamEvents_m98C0FD7510A47954ACB394DBDA927C1D9E78C7B6_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSStreamEvents WebStreamEvents { get; set; } = new TTSStreamEvents();
		TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* L_0 = __this->___U3CWebStreamEventsU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* TTSWit_get_WebDownloadEvents_m80794F5B9588B6BCBDDD5186E00B1FBD23F35830_inline (TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDownloadEvents WebDownloadEvents { get; set; } = new TTSDownloadEvents();
		TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* L_0 = __this->___U3CWebDownloadEventsU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m399A0EB5E51EFD9B7D25DFE0EB7BF5EC0BE98346_gshared_inline (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB2DD87F61EB655A33F6277F1E277246CE23B6625_gshared_inline (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
