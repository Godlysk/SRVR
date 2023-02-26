#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5;
// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
// System.String
struct String_t;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA;
// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E;
// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E;
// Unity.Mathematics.float4x4
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2;
// Unity.Mathematics.int3
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF;
// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9;
// GLTFast.Jobs.CachedFunction/GetFloat3Delegate
struct GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate
struct GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate
struct GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate
struct GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate
struct GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate
struct GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate
struct GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate
struct GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate
struct GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate
struct GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate
struct GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate
struct GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6;
// GLTFast.Jobs.CachedFunction/GetIndexDelegate
struct GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate
struct GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate
struct GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate
struct GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate
struct GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698;
// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate
struct GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3FloatU24BurstManaged_m95BCAC5D9747E71DA4C5C901B25B8276E3712AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Float_m22D6B190B6D4183C92AF42869F8DEA0255295C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int16NormalizedU24BurstManaged_m385B37EAF6D112DDCA5036C45E37EF0C50367E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int16Normalized_m7E584F3BD3EA180CBD178E17E448E492B7524D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int16U24BurstManaged_m119F748750D7A61303D053FC854CC8F159AA26DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int16_m5034EE294E1A63B624ED97078849AB0537EB3C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int8NormalizedU24BurstManaged_m7FABBECE34DE58DFF9706C72E52617C7B4687C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int8Normalized_m0B34988383D23B781D0C10D4777795A30681A2FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int8U24BurstManaged_mD36309CBCC37B1AD3F49898404094DFCE15DEA17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3Int8_m4C5E9B0D23560A21EB5DC7B0ED427FC310BF8BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt16NormalizedU24BurstManaged_m313F6D7D40A80C1D507594AF8CAD4388DA6CECE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt16Normalized_m4D03A1B215C705A332C53D22F178A0758C9B154A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt16U24BurstManaged_mB73D21112DC772B26F9AE2A5A4E8D5BA51B31BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt16_mBC1DE1D3A6347D08ACD6C9BC7B92E914598C8D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt32NormalizedU24BurstManaged_mBA5D7C1E4DCF3B337184DEF612725D829C7423ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt32Normalized_mCB3D4296F2957EEF6CC955E3262DEA4A5C1155DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt32U24BurstManaged_mEAD60DFF926B7F2632E524750CCABF0814C26970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt32_m6707498154852F40A6BBA7D27F6AD552DE849244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt8NormalizedU24BurstManaged_mBD3F74A1F0123E2D46AC5C7580A44A11C3ED618B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt8Normalized_mC85590C633B745F7374AFB9628496B127489BFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt8U24BurstManaged_mE2888393E3A48F813A00903F4577CAAAD2B4B046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetFloat3UInt8_m1AB440597B9CC69D5E02D93AB17009BA16466496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueInt16U24BurstManaged_m0CE8CC798C33CE005254E4D660B8B23943EEC2BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueInt16_m4810F0FAE3A571E1BD26609BED78D105C52AFD15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueInt8U24BurstManaged_m50CD16F43B73014103340837AA77E7C49FFDE20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueInt8_mAFD5D6806F0945619767A4674AB8A4FEAEB73250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueUInt16U24BurstManaged_mBD5660235E823587085B3F981CDA91375C03A068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueUInt16_m2DF5738B56D42A02F35C799E6C2270F019476B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueUInt32U24BurstManaged_m3CDEBE0B843A44B8D10C6D979E059FE59BC3C58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueUInt32_m1317AD48EA4B6FA9CFE64D89208DE44AB13EA2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueUInt8U24BurstManaged_mB3AB9E5310F00AFF81CA6E6DD9AB32AEDDBF04C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedFunction_GetIndexValueUInt8_mB942E0EBB3813ECDCBDBBBB1DE09652E4129A97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// $BurstDirectCallInitializer
struct U24BurstDirectCallInitializer_t63FC04F7CA5BA6B9B6098E994105F62B0A9321F0  : public RuntimeObject
{
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

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<GLTFast.Vertex.VBones>
struct NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Mathematics.float4>
struct NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job
struct ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848 
{
	// System.Byte* GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::input
	uint8_t* ___input_0;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::inputByteStride
	int32_t ___inputByteStride_1;
	// Unity.Mathematics.uint4* GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::result
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result_2;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::outputByteStride
	int32_t ___outputByteStride_3;
};

// GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job
struct ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09 
{
	// System.Byte* GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::input
	uint8_t* ___input_0;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::inputByteStride
	int32_t ___inputByteStride_1;
	// Unity.Mathematics.uint4* GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::result
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* ___result_2;
	// System.Int32 GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::outputByteStride
	int32_t ___outputByteStride_3;
};

// GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob
struct ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E 
{
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob
struct ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C 
{
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob
struct ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0 
{
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob
struct ConvertColorsRGBAFloatToRGBAFloatJob_tEAB4852F783043291A3E6B1A57667E95409865F5 
{
	// System.Int32 GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob::input
	uint8_t* ___input_1;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_2;
};

// GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob
struct ConvertColorsRGBAUInt16ToRGBAFloatJob_tD6A400E718C7531647BA9E521C782D65AF2C95C4 
{
	// System.Int32 GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.UInt16* GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob::input
	uint16_t* ___input_1;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_2;
};

// GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob
struct ConvertColorsRGBFloatToRGBAFloatJob_t901E566944162B92E78B534373EE6834900009CA 
{
	// System.Int32 GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob::input
	uint8_t* ___input_1;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_2;
};

// GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob
struct ConvertIndicesUInt16ToInt32FlippedJob_t4BBEE62A3641D67193CA579B30E5CF8FF7283265 
{
	// System.UInt16* GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob::input
	uint16_t* ___input_0;
	// Unity.Mathematics.int3* GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob::result
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* ___result_1;
};

// GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job
struct ConvertIndicesUInt16ToInt32Job_t02B9FF6812A4AB57C4FE09C0B403C39649F3B66B 
{
	// System.UInt16* GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job::input
	uint16_t* ___input_0;
	// System.Int32* GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job::result
	int32_t* ___result_1;
};

// GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob
struct ConvertIndicesUInt32ToInt32FlippedJob_tB5322F44A323C1DD383F46EC9205EE7DD43E0462 
{
	// System.UInt32* GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob::input
	uint32_t* ___input_0;
	// Unity.Mathematics.int3* GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob::result
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* ___result_1;
};

// GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job
struct ConvertIndicesUInt32ToInt32Job_tE8BE7D06313C8A7E0F18103ABF56D2BF4E93B5C5 
{
	// System.UInt32* GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job::input
	uint32_t* ___input_0;
	// System.Int32* GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job::result
	int32_t* ___result_1;
};

// GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob
struct ConvertIndicesUInt8ToInt32FlippedJob_tC4531CAA8F1A32DDD4203D43DB5A781F401B4820 
{
	// System.Byte* GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob::input
	uint8_t* ___input_0;
	// Unity.Mathematics.int3* GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob::result
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* ___result_1;
};

// GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job
struct ConvertIndicesUInt8ToInt32Job_t0946DEF92071313DB9E0041AD8F0757F0EDD56B1 
{
	// System.Byte* GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job::input
	uint8_t* ___input_0;
	// System.Int32* GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job::result
	int32_t* ___result_1;
};

// GLTFast.Jobs.ConvertMatricesJob
struct ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936 
{
	// Unity.Mathematics.float4x4* GLTFast.Jobs.ConvertMatricesJob::input
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___input_0;
	// Unity.Mathematics.float4x4* GLTFast.Jobs.ConvertMatricesJob::result
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* ___result_1;
};

// GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob
struct ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE 
{
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob
struct ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B 
{
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob
struct ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_2;
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_3;
};

// GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob
struct ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob
struct ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob
struct ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob
struct ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob
struct ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF 
{
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertRotationsFloatToFloatJob
struct ConvertRotationsFloatToFloatJob_t3FAE97EBB62F029EBDFA4DF9BFB98EA3DECB9157 
{
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertRotationsFloatToFloatJob::input
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___input_0;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertRotationsFloatToFloatJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_1;
};

// GLTFast.Jobs.ConvertRotationsInt16ToFloatJob
struct ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23 
{
	// System.Int16* GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::input
	int16_t* ___input_0;
	// System.Single* GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::result
	float* ___result_1;
};

// GLTFast.Jobs.ConvertRotationsInt8ToFloatJob
struct ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85 
{
	// System.SByte* GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::input
	int8_t* ___input_0;
	// System.Single* GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::result
	float* ___result_1;
};

// GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob
struct ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E 
{
	// System.Int32 GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob
struct ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1 
{
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Int16* GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::input
	int16_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob
struct ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E 
{
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float4* GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::result
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___result_3;
};

// GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob
struct ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob
struct ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Int16* GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob::input
	int16_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob
struct ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Int16* GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob::input
	int16_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob
struct ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob
struct ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob
struct ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob
struct ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob
struct ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob
struct ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1 
{
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float2* GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob::result
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* ___result_3;
};

// GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob
struct ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E 
{
	// System.Int32 GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertVector3FloatToFloatJob
struct ConvertVector3FloatToFloatJob_t4B7FDE122BAF8489D2B92956A8A918E94EEDDF9E 
{
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3FloatToFloatJob::input
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___input_0;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3FloatToFloatJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_1;
};

// GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob
struct ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4 
{
	// System.Int32 GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::input
	uint8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob
struct ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73 
{
	// System.Int32 GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.SByte* GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::input
	int8_t* ___input_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::outputByteStride
	int32_t ___outputByteStride_2;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_3;
};

// GLTFast.Jobs.CreateIndicesInt32FlippedJob
struct CreateIndicesInt32FlippedJob_t7D21BFD9642D163643D6E78B771E859719DD1ACF 
{
	// System.Int32* GLTFast.Jobs.CreateIndicesInt32FlippedJob::result
	int32_t* ___result_0;
};

// GLTFast.Jobs.CreateIndicesInt32Job
struct CreateIndicesInt32Job_tC0CA30F003940304AF60F8ED49DA6CF09A6DA9C5 
{
	// System.Int32* GLTFast.Jobs.CreateIndicesInt32Job::result
	int32_t* ___result_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// GLTFast.Jobs.MemCopyJob
struct MemCopyJob_t99603EAE574644140D6D593A41AAFE719D15C5E4 
{
	// System.Int64 GLTFast.Jobs.MemCopyJob::bufferSize
	int64_t ___bufferSize_0;
	// System.Void* GLTFast.Jobs.MemCopyJob::input
	void* ___input_1;
	// System.Void* GLTFast.Jobs.MemCopyJob::result
	void* ___result_2;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

// Unity.Mathematics.int3
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	// System.Int32 Unity.Mathematics.int3::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int3::y
	int32_t ___y_1;
	// System.Int32 Unity.Mathematics.int3::z
	int32_t ___z_2;
};

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;
};

// GLTFast.Vertex.VBones/<joints>e__FixedBuffer
struct U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88 
{
	union
	{
		struct
		{
			// System.UInt32 GLTFast.Vertex.VBones/<joints>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88__padding[16];
	};
};

// GLTFast.Vertex.VBones/<weights>e__FixedBuffer
struct U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC 
{
	union
	{
		struct
		{
			// System.Single GLTFast.Vertex.VBones/<weights>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC__padding[16];
	};
};

// Unity.Mathematics.math/IntFloatUnion
struct IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Mathematics.math/IntFloatUnion::intValue
			int32_t ___intValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Mathematics.math/IntFloatUnion::floatValue
			float ___floatValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_1_forAlignmentOnly;
		};
	};
};

// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate>
struct FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate>
struct FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob
struct ConvertColorsRGBAUInt8ToRGBAFloatJob_t04454BCB4539FD17808EC51C2158F93E836534CE 
{
	// System.Int32 GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob::input
	uint8_t* ___input_1;
	// Unity.Collections.NativeArray`1<Unity.Mathematics.float4> GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob::result
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___result_2;
};

// GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob
struct ConvertColorsRGBUInt16ToRGBAFloatJob_t749C4FC43D918828C85C6003D80F3709F3A2594D 
{
	// System.Int32 GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.UInt16* GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob::input
	uint16_t* ___input_1;
	// Unity.Collections.NativeArray`1<Unity.Mathematics.float4> GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob::result
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___result_2;
};

// GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob
struct ConvertColorsRGBUInt8ToRGBAFloatJob_t478A206A2244B4A32CF3370AB9394BDF87A25AD0 
{
	// System.Int32 GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob::inputByteStride
	int32_t ___inputByteStride_0;
	// System.Byte* GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob::input
	uint8_t* ___input_1;
	// Unity.Collections.NativeArray`1<Unity.Mathematics.float4> GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob::result
	NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881 ___result_2;
};

// GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob
struct ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E 
{
	// System.Int16* GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::input
	int16_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob
struct ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7 
{
	// System.SByte* GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::input
	int8_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob
struct ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986 
{
	// System.UInt16* GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::input
	uint16_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
};

// GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob
struct ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4 
{
	// System.Byte* GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::input
	uint8_t* ___input_0;
	// Unity.Collections.NativeArray`1<System.Single> GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::result
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___result_1;
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

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob
struct SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C 
{
	// Unity.Collections.NativeArray`1<GLTFast.Vertex.VBones> GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::bones
	NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858 ___bones_0;
	// System.Int32 GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::skinWeights
	int32_t ___skinWeights_1;
};

// GLTFast.Vertex.VBones
struct VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF 
{
	// GLTFast.Vertex.VBones/<weights>e__FixedBuffer GLTFast.Vertex.VBones::weights
	U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC ___weights_0;
	// GLTFast.Vertex.VBones/<joints>e__FixedBuffer GLTFast.Vertex.VBones::joints
	U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88 ___joints_1;
};

// Unity.Mathematics.float4x4
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c0
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0_0;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c1
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1_1;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c2
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2_2;
	// Unity.Mathematics.float4 Unity.Mathematics.float4x4::c3
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3_3;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall
struct GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall
struct GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall
struct GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall
struct GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall
struct GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall
struct GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall
struct GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall
struct GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall
struct GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall
struct GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall
struct GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall
struct GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall
struct GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall
struct GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall
struct GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall
struct GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897  : public RuntimeObject
{
};

// GLTFast.Jobs.CachedFunction
struct CachedFunction_tEF67AB19624D06E6F39180EE7B76D051972888CB  : public RuntimeObject
{
};

// GLTFast.Jobs.ConvertVector3SparseJob
struct ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07 
{
	// System.Void* GLTFast.Jobs.ConvertVector3SparseJob::indexBuffer
	void* ___indexBuffer_0;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.ConvertVector3SparseJob::indexConverter
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___indexConverter_1;
	// System.Int32 GLTFast.Jobs.ConvertVector3SparseJob::inputByteStride
	int32_t ___inputByteStride_2;
	// System.Void* GLTFast.Jobs.ConvertVector3SparseJob::input
	void* ___input_3;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.ConvertVector3SparseJob::valueConverter
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___valueConverter_4;
	// System.Int32 GLTFast.Jobs.ConvertVector3SparseJob::outputByteStride
	int32_t ___outputByteStride_5;
	// Unity.Mathematics.float3* GLTFast.Jobs.ConvertVector3SparseJob::result
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___result_6;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GetFloat3Delegate
struct GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate
struct GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate
struct GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate
struct GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate
struct GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate
struct GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate
struct GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate
struct GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate
struct GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate
struct GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate
struct GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate
struct GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GetIndexDelegate
struct GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate
struct GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate
struct GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate
struct GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate
struct GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698  : public MulticastDelegate_t
{
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate
struct GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB  : public MulticastDelegate_t
{
};

// $BurstDirectCallInitializer

// $BurstDirectCallInitializer

// Unity.Collections.NativeArray`1<System.Single>

// Unity.Collections.NativeArray`1<System.Single>

// Unity.Collections.NativeArray`1<GLTFast.Vertex.VBones>

// Unity.Collections.NativeArray`1<GLTFast.Vertex.VBones>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float4>

// Unity.Collections.NativeArray`1<Unity.Mathematics.float4>

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

// GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job

// GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job

// GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job

// GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job

// GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob

// GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob

// GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob

// GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job

// GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job

// GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob

// GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob

// GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job

// GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job

// GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob

// GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob

// GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job

// GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job

// GLTFast.Jobs.ConvertMatricesJob

// GLTFast.Jobs.ConvertMatricesJob

// GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertRotationsFloatToFloatJob

// GLTFast.Jobs.ConvertRotationsFloatToFloatJob

// GLTFast.Jobs.ConvertRotationsInt16ToFloatJob

// GLTFast.Jobs.ConvertRotationsInt16ToFloatJob

// GLTFast.Jobs.ConvertRotationsInt8ToFloatJob

// GLTFast.Jobs.ConvertRotationsInt8ToFloatJob

// GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob

// GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob

// GLTFast.Jobs.ConvertVector3FloatToFloatJob

// GLTFast.Jobs.ConvertVector3FloatToFloatJob

// GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob

// GLTFast.Jobs.CreateIndicesInt32FlippedJob

// GLTFast.Jobs.CreateIndicesInt32FlippedJob

// GLTFast.Jobs.CreateIndicesInt32Job

// GLTFast.Jobs.CreateIndicesInt32Job

// System.Double

// System.Double

// System.Int16

// System.Int16

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

// GLTFast.Jobs.MemCopyJob

// GLTFast.Jobs.MemCopyJob

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};

// Unity.Mathematics.float2

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float3

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// Unity.Mathematics.float4

// Unity.Mathematics.int3
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF_StaticFields
{
	// Unity.Mathematics.int3 Unity.Mathematics.int3::zero
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___zero_3;
};

// Unity.Mathematics.int3

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero_4;
};

// Unity.Mathematics.uint4

// GLTFast.Vertex.VBones/<joints>e__FixedBuffer

// GLTFast.Vertex.VBones/<joints>e__FixedBuffer

// GLTFast.Vertex.VBones/<weights>e__FixedBuffer

// GLTFast.Vertex.VBones/<weights>e__FixedBuffer

// Unity.Mathematics.math/IntFloatUnion

// Unity.Mathematics.math/IntFloatUnion

// Unity.Burst.FunctionPointer`1<System.Object>

// Unity.Burst.FunctionPointer`1<System.Object>

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate>

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate>

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate>

// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate>

// GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob

// GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob

// GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob

// GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob

// System.Delegate

// System.Delegate

// System.RuntimeMethodHandle

// System.RuntimeMethodHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob

// GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob

// GLTFast.Vertex.VBones

// GLTFast.Vertex.VBones

// Unity.Mathematics.float4x4
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	// Unity.Mathematics.float4x4 Unity.Mathematics.float4x4::identity
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity_4;
	// Unity.Mathematics.float4x4 Unity.Mathematics.float4x4::zero
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero_5;
};

// Unity.Mathematics.float4x4

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall
struct GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall
struct GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall
struct GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall
struct GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall
struct GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall
struct GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall
struct GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall
struct GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall
struct GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall
struct GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall
struct GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall
struct GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall
struct GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall
struct GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall
struct GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall
struct GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_StaticFields
{
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall

// GLTFast.Jobs.CachedFunction
struct CachedFunction_tEF67AB19624D06E6F39180EE7B76D051972888CB_StaticFields
{
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.CachedFunction::GetIndexValueInt8Method
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___GetIndexValueInt8Method_0;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.CachedFunction::GetIndexValueUInt8Method
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___GetIndexValueUInt8Method_1;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.CachedFunction::GetIndexValueInt16Method
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___GetIndexValueInt16Method_2;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.CachedFunction::GetIndexValueUInt16Method
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___GetIndexValueUInt16Method_3;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate> GLTFast.Jobs.CachedFunction::GetIndexValueUInt32Method
	FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12 ___GetIndexValueUInt32Method_4;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3FloatMethod
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3FloatMethod_5;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3Int8Method
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3Int8Method_6;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3UInt8Method
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3UInt8Method_7;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3Int16Method
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3Int16Method_8;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3UInt16Method
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3UInt16Method_9;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3UInt32Method
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3UInt32Method_10;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3Int8NormalizedMethod
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3Int8NormalizedMethod_11;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3UInt8NormalizedMethod
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3UInt8NormalizedMethod_12;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3Int16NormalizedMethod
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3Int16NormalizedMethod_13;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3UInt16NormalizedMethod
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3UInt16NormalizedMethod_14;
	// Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate> GLTFast.Jobs.CachedFunction::GetFloat3UInt32NormalizedMethod
	FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A ___GetFloat3UInt32NormalizedMethod_15;
};

// GLTFast.Jobs.CachedFunction

// GLTFast.Jobs.ConvertVector3SparseJob

// GLTFast.Jobs.ConvertVector3SparseJob

// System.AsyncCallback

// System.AsyncCallback

// GLTFast.Jobs.CachedFunction/GetFloat3Delegate

// GLTFast.Jobs.CachedFunction/GetFloat3Delegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GetIndexDelegate

// GLTFast.Jobs.CachedFunction/GetIndexDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate

// GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared (FunctionPointer_1_tE1DC1EC606FB2242FB50357BBA39BB4AEDECFCB2* __this, const RuntimeMethod* method) ;

// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F (intptr_t ___0_ilppMethod, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall_GetFunctionPointerDiscard_mB59C9F5E682852669BDF5CB5F736448DEF01E7EC (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod(System.RuntimeMethodHandle,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___0_burstMethodHandle, RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___1_managedMethodHandle, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___2_delegateTypeHandle, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall_Constructor_m63A70564403A7BF7C4530172C4B4F82803401FF9 (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueUInt8_000001A1U24BurstDirectCall_GetFunctionPointer_m65627E13CF3381CAE0B87DBBAA025DD41080B6BD (const RuntimeMethod* method) ;
// System.Int32 GLTFast.Jobs.CachedFunction::GetIndexValueUInt8$BurstManaged(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueUInt8U24BurstManaged_mB3AB9E5310F00AFF81CA6E6DD9AB32AEDDBF04C9_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall_GetFunctionPointerDiscard_mD41E83A22202C06C2F15FE139F83336573CC98C7 (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall_Constructor_mB0933C58E6B6A41888D451C99D0011EE8EAC15D8 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueInt8_000001A2U24BurstDirectCall_GetFunctionPointer_m158F957413700D7B459B7726BC820E2B24D7B041 (const RuntimeMethod* method) ;
// System.Int32 GLTFast.Jobs.CachedFunction::GetIndexValueInt8$BurstManaged(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueInt8U24BurstManaged_m50CD16F43B73014103340837AA77E7C49FFDE20D_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall_GetFunctionPointerDiscard_mF885CAFDC5399AC9ACE7D9B4F54BBAF10078BD1D (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall_Constructor_mACF2E2C3157F0083CBCCE94E47B15C2218FF5F80 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueUInt16_000001A3U24BurstDirectCall_GetFunctionPointer_mA380A611482DE31AB21A6CA339E3B2104E7F16AB (const RuntimeMethod* method) ;
// System.Int32 GLTFast.Jobs.CachedFunction::GetIndexValueUInt16$BurstManaged(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueUInt16U24BurstManaged_mBD5660235E823587085B3F981CDA91375C03A068_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall_GetFunctionPointerDiscard_m4455AF09FD23B6575A1B65025F95440A2BA01402 (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall_Constructor_mFF074011EEE8B60074218A4ACC0329832E19FBD9 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueInt16_000001A4U24BurstDirectCall_GetFunctionPointer_mF29BB2C3097CB28174E23BF97A0D1709CD196914 (const RuntimeMethod* method) ;
// System.Int32 GLTFast.Jobs.CachedFunction::GetIndexValueInt16$BurstManaged(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueInt16U24BurstManaged_m0CE8CC798C33CE005254E4D660B8B23943EEC2BE_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall_GetFunctionPointerDiscard_mBF27277FF16CB86E79D7203DD03116DC108023AD (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall_Constructor_m61B67058D0EF866296BCEF299D47F6E7C7726740 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueUInt32_000001A5U24BurstDirectCall_GetFunctionPointer_mDAC4FF923D17078304B3DE92BDC049EACCAA230D (const RuntimeMethod* method) ;
// System.Int32 GLTFast.Jobs.CachedFunction::GetIndexValueUInt32$BurstManaged(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueUInt32U24BurstManaged_m3CDEBE0B843A44B8D10C6D979E059FE59BC3C58D_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_GetFunctionPointerDiscard_m7AB37255EBED13F8A754762814A8A4DCAD7ECF9B (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_Constructor_m06234EDC49EF5DAF7A2D9198BD819D3B5A150915 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Float_000001A6U24BurstDirectCall_GetFunctionPointer_m68EC49249839D181CA029F7055981530D0658FDE (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3Float$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3FloatU24BurstManaged_m95BCAC5D9747E71DA4C5C901B25B8276E3712AFE_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_GetFunctionPointerDiscard_m241B72E2EDB0DDB4E7EBDDC8E3561AE388F4FC0C (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_Constructor_m67544BFACD9104B85A2894E64B3E69E9558ACE6C (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int8_000001A7U24BurstDirectCall_GetFunctionPointer_m223FFBCC11C51E18E1FE2943E30FFB7F112C4EFE (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3Int8$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int8U24BurstManaged_mD36309CBCC37B1AD3F49898404094DFCE15DEA17_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_GetFunctionPointerDiscard_m772E25ACF84EE48026C13EDE4BB435C3F1142E51 (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_Constructor_mB16E23352C77FE78E3F5B1AFBBFC8234F34323CA (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt8_000001A8U24BurstDirectCall_GetFunctionPointer_m5D63924878B27FC682FE56DF45F411B55778C536 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3UInt8$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt8U24BurstManaged_mE2888393E3A48F813A00903F4577CAAAD2B4B046_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_GetFunctionPointerDiscard_m9546133B5B0C33093F536774ACC4E762FF4A73BB (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_Constructor_m664893BF9036DBB31CACC39A7E578669CBE9FF59 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int16_000001A9U24BurstDirectCall_GetFunctionPointer_mCD40980F61D7A4E3CF64624B5398A0A280F0CF14 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3Int16$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int16U24BurstManaged_m119F748750D7A61303D053FC854CC8F159AA26DF_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_GetFunctionPointerDiscard_m0CB711F6B8984FC554B02E3533831BEFA5D912CD (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_Constructor_mFCA2E31602298250611F2061F5FF3F138F32AC08 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt16_000001AAU24BurstDirectCall_GetFunctionPointer_m7F0856D3D3A5CA1003E591696D3B8E8610E6479D (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3UInt16$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt16U24BurstManaged_mB73D21112DC772B26F9AE2A5A4E8D5BA51B31BCA_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_GetFunctionPointerDiscard_mE8861A55CCB91080B659B6AAE1EBBD86E596367C (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_Constructor_mA4BF5CC55D9A637572CE18B3896A77447DCA35B8 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt32_000001ABU24BurstDirectCall_GetFunctionPointer_mD536A9791EB6820D3F95F05DE73855EE8EF834D7 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3UInt32$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt32U24BurstManaged_mEAD60DFF926B7F2632E524750CCABF0814C26970_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_GetFunctionPointerDiscard_mC61BC23AA7AF6E50816B41C6C818BF6AF58C48AD (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Constructor_mD99E6501749722F3EA1C6B63E0391B4BDC308EDF (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int8Normalized_000001ACU24BurstDirectCall_GetFunctionPointer_mCF7857D672045E99F3068C8427CBDA6E829607BC (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3Int8Normalized$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int8NormalizedU24BurstManaged_m7FABBECE34DE58DFF9706C72E52617C7B4687C1F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_GetFunctionPointerDiscard_m4466A99E5BA449BC841C3D6EA62752625F58F0D5 (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Constructor_mC4438CE49F52A1758841B74949A263EAEB98D5D3 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_GetFunctionPointer_mEF828C8A3495A470CDEED7E6A6EEAD04D989C5B8 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3UInt8Normalized$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt8NormalizedU24BurstManaged_mBD3F74A1F0123E2D46AC5C7580A44A11C3ED618B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_GetFunctionPointerDiscard_mF7F43881C8C317824CFC5ED65FB669DFD72997FF (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Constructor_m27BB9753F785B93B91AC7A1A4B85AD7319A99D68 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int16Normalized_000001AEU24BurstDirectCall_GetFunctionPointer_mD8F24341EF84163E23908736A7674EB6A85DA932 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3Int16Normalized$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int16NormalizedU24BurstManaged_m385B37EAF6D112DDCA5036C45E37EF0C50367E6C_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_GetFunctionPointerDiscard_m12F12C2251D0D079CF62AFC7454F2EA5B0D7780C (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Constructor_m6BDB33A466F18EA1B286F1EB96FCEBBB9A107FED (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_GetFunctionPointer_m228E47CC62C874621AA6F0FB76DE658A4ABCC5D2 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3UInt16Normalized$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt16NormalizedU24BurstManaged_m313F6D7D40A80C1D507594AF8CAD4388DA6CECE4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_GetFunctionPointerDiscard_m624880BCCA84EDF3D14FAC91897BDC27BF9CD838 (intptr_t* ___0_p, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Constructor_mB380063989402CF7D5ADB16EA258B377AD8C6805 (const RuntimeMethod* method) ;
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_GetFunctionPointer_m45610E56F92444F8B00849F567BC15A5B810F922 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction::GetFloat3UInt32Normalized$BurstManaged(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt32NormalizedU24BurstManaged_mBA5D7C1E4DCF3B337184DEF612725D829C7423ED_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CreateIndicesInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CreateIndicesInt32Job_Execute_m9685BD0E181B02531856FA61EE31302824F8E0DB (CreateIndicesInt32Job_tC0CA30F003940304AF60F8ED49DA6CF09A6DA9C5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CreateIndicesInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CreateIndicesInt32FlippedJob_Execute_mE499A0B79F133800D544154CC7707E672CAAD7EF (CreateIndicesInt32FlippedJob_t7D21BFD9642D163643D6E78B771E859719DD1ACF* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt8ToInt32Job_Execute_mB099782529CC2914CDEF0DC99CBD811BDF7ECEA1 (ConvertIndicesUInt8ToInt32Job_t0946DEF92071313DB9E0041AD8F0757F0EDD56B1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.int3::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt8ToInt32FlippedJob_Execute_mC1C623EBD05BA36AA93C309762F0103EE79009D6 (ConvertIndicesUInt8ToInt32FlippedJob_tC4531CAA8F1A32DDD4203D43DB5A781F401B4820* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt16ToInt32FlippedJob_Execute_mE8EE9776B02A6F263AF06B77DF54330C611A1E90 (ConvertIndicesUInt16ToInt32FlippedJob_t4BBEE62A3641D67193CA579B30E5CF8FF7283265* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt16ToInt32Job_Execute_mF3663D8F3C6FBC2B3AAC388E17432BFDFEB947D9 (ConvertIndicesUInt16ToInt32Job_t02B9FF6812A4AB57C4FE09C0B403C39649F3B66B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt32ToInt32Job_Execute_m7AA6B5C114E200DC08527B510EEBAC46C3B95D7A (ConvertIndicesUInt32ToInt32Job_tE8BE7D06313C8A7E0F18103ABF56D2BF4E93B5C5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt32ToInt32FlippedJob_Execute_m9CE199C61360965EC4050654EAF36685C56610AA (ConvertIndicesUInt32ToInt32FlippedJob_tB5322F44A323C1DD383F46EC9205EE7DD43E0462* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt8ToFloatInterleavedJob_Execute_m1CDD05E7A8849D161D8C682BF3EE5D24EE7F0EF3 (ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float2::op_Division(Unity.Mathematics.float2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Division_m4AA175CD0895AA1A50F5A73B54722CA53876EE6A_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt8ToFloatInterleavedNormalizedJob_Execute_m140312D2097DE9B264B1A192CE762F9CB2CB6EFA (ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt16ToFloatInterleavedJob_Execute_mB8C939328905511BF3F52734D5C94FC2984A13B7 (ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt16ToFloatInterleavedNormalizedJob_Execute_m5348C7F3390AE33AA8FCD1194DF00DBA9AC47AAD (ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt16ToFloatInterleavedJob_Execute_mC667B4C8F9FED1087F85D18CFC54DE432A1791FF (ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float2::op_Implicit(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Implicit_mAC15BD9FDBC817D35ADBA2E566B0F52D182CD9A9_inline (float ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.math::max(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt16ToFloatInterleavedNormalizedJob_Execute_mD9B0C7C284B04618581156A960E59E334B284A00 (ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt8ToFloatInterleavedJob_Execute_m3431650C1E51AAFA6B1ACFBDF3DCBB9FF932846C (ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt8ToFloatInterleavedNormalizedJob_Execute_mBB696AEDDBCB0C6D5FA72CD3147E1BF85B3ECB4A (ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, float ___1_w, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBFloatToRGBAFloatJob_Execute_m0A34F3BF53BDA5A42D5B5B12AB6895485BD8A6AB (ConvertColorsRGBFloatToRGBAFloatJob_t901E566944162B92E78B534373EE6834900009CA* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Division(Unity.Mathematics.float3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBUInt8ToRGBAFloatJob_Execute_m1B2F5125F492E48F6FD73CAEB860E87207DDDD2C (ConvertColorsRGBUInt8ToRGBAFloatJob_t478A206A2244B4A32CF3370AB9394BDF87A25AD0* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBUInt16ToRGBAFloatJob_Execute_mB424354BF866B8B1C43F16B7452678F0AE2521A2 (ConvertColorsRGBUInt16ToRGBAFloatJob_t749C4FC43D918828C85C6003D80F3709F3A2594D* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBAUInt16ToRGBAFloatJob_Execute_m48C062A1C7268F8F512E46876917016A0BB1EBD3 (ConvertColorsRGBAUInt16ToRGBAFloatJob_tD6A400E718C7531647BA9E521C782D65AF2C95C4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBAFloatToRGBAFloatJob_Execute_m2A734AC51446DBAD1A46606C15CA63511D63A97B (ConvertColorsRGBAFloatToRGBAFloatJob_tEAB4852F783043291A3E6B1A57667E95409865F5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBAUInt8ToRGBAFloatJob_Execute_mCD1C339BA88B2F61D5D3AC0B949A44CC08E8D459 (ConvertColorsRGBAUInt8ToRGBAFloatJob_t04454BCB4539FD17808EC51C2158F93E836534CE* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.MemCopyJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MemCopyJob_Execute_m91BB4557772191F2571DE31549E234007F32B4D4 (MemCopyJob_t99603EAE574644140D6D593A41AAFE719D15C5E4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3FloatToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3FloatToFloatJob_Execute_mCE3B1EE6D8C506F1558986E5B866E16B6CB54BC8 (ConvertVector3FloatToFloatJob_t4B7FDE122BAF8489D2B92956A8A918E94EEDDF9E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertRotationsFloatToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsFloatToFloatJob_Execute_m389DF407D434A84292585CEBEABB9D4DCADD746E (ConvertRotationsFloatToFloatJob_t3FAE97EBB62F029EBDFA4DF9BFB98EA3DECB9157* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0 (ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA (ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675 (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB (ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetIndexDelegate>::get_Invoke()
inline GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109 (FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12* __this, const RuntimeMethod* method)
{
	return ((  GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* (*) (FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GetIndexDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_inline (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) ;
// T Unity.Burst.FunctionPointer`1<GLTFast.Jobs.CachedFunction/GetFloat3Delegate>::get_Invoke()
inline GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B (FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A* __this, const RuntimeMethod* method)
{
	return ((  GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* (*) (FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A*, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m3E7098A72E4D4E432490A6F99AF8749B862ACF93_gshared)(__this, method);
}
// System.Void GLTFast.Jobs.CachedFunction/GetFloat3Delegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_inline (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3SparseJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E (ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B (ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A (ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367 (ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0 (ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Division(Unity.Mathematics.float4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Division_mA82993BB826C4799764D5B0E543D0D7776F4F8A2_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float ___1_rhs, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Implicit(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m3DF77A1795E1232FCE3A62302FF23601F8C042DD_inline (float ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::max(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_max_m03D4AA9B67EC6003C76DB09B28B9F45D1AFBBB66_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::normalize(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_normalize_m598E318DE7A638AE5FE8A35528AC6A90B6E909D6_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40 (ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F (ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9 (ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057 (ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7 (ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m495864276F56A9757CE235005D9908DBB47D8031_inline (float ___0_v, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::max(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_max_m247D41258606F80861E72309300DF6A3F8B50AE4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC (ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::normalize(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_normalize_mF02431EFC9E3212E0245EFF5C13BC9DC34512399_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5 (ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1 (ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m0E52B9E5BF532737C8B469DA33E08C16CC53AEB3_inline (int32_t ___0_v, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68 (ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691 (ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55 (ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B (ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.uint4::.ctor(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline (uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* __this, uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, uint32_t ___3_w, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB (ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA (ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Swap(GLTFast.Vertex.VBones&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Swap_m58566BB70512DE0FFE100748D6D35F51A2BBDBBA (VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* ___0_v, int32_t ___1_a, int32_t ___2_b, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::abs(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38 (SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertMatricesJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0 (ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC (ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA (ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B (ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987 (ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall_Initialize_m9CAA71C39B5AA8CAC8AED1623A5102907B02E729 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall_Initialize_m29C98640D615EF49D3F4125EDDB8CE352E796755 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall_Initialize_mDFB5B933507086320255C41CB4C12F62BB1822F8 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall_Initialize_m5A801E2A37DC62C0BB90CA0C4B8D28D1E1194943 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall_Initialize_m5B8FBABA91D9800F1D008C63540F24DB439EEDD8 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_Initialize_mD0055A4C69846DAE1FBDD51A7B12C48FB3068AA4 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_Initialize_mCAF5DB7D4D1D9F80C1076F2D375A5CA7546147AB (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_Initialize_m7F2C171490704A9DD9129C07D851A8A21553ECDC (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_Initialize_m0BC9B406238D322CE149C199B41D1D25FD6BDE9C (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_Initialize_m8359D13C972F835911895C28C9E9DA45C5FF157D (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_Initialize_mF82A9917C93F9FE9DC0EA4A12397401F53BD827B (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Initialize_m2CB278F140952AC5D6BA779FA29AF0FF501AACD5 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Initialize_mDDCA02B8C08369EF7572E8C71FBE6F54AE1DCF0F (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Initialize_m6A817DEAD0B77258737388666245D05899A7B703 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Initialize_m996DD69DE7A464C218AB812CB92AB77F4A157A57 (const RuntimeMethod* method) ;
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Initialize_m1B36E268BF18FA6CFF96FAF87BA46B78FEAF7D2B (const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float2::.ctor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m037D046BD70923231612C90B14E364EB2BB15BD7_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_v, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m103F8D391212FB2B0F01D09F7E9CCE4BDF0C7839_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_v, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::rsqrt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rsqrt_mC67B3430EAADA7C5347E87B23859C569BC010E72_inline (float ___0_x, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(System.Single,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline (float ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m777F109CF7EBEEC78FAE5DBE52E4498CFA65E8C4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_v, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mE193D8880350D74CC8D63A0D53CDC5902F844AAD_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(System.Single,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, int32_t ___0_v, const RuntimeMethod* method) ;
// System.UInt32 Unity.Mathematics.math::asuint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::sqrt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::asint(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline (float ___0_x, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::asfloat(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline (int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_Multicast(GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* currentDelegate = reinterpret_cast<GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_OpenInst(GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_baseAddress);
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_OpenStatic(GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_OpenStaticInvoker(GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_baseAddress, ___1_index);
}
int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_ClosedStaticInvoker(GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_baseAddress, ___1_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933 (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_baseAddress, ___1_index);

	return returnValue;
}
// System.Void GLTFast.Jobs.CachedFunction/GetIndexDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexDelegate__ctor_m48638DB90A4375F468801E7983C5DE822C087C57 (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_Multicast;
}
// System.Int32 GLTFast.Jobs.CachedFunction/GetIndexDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114 (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GetIndexDelegate::BeginInvoke(System.Void*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetIndexDelegate_BeginInvoke_mC90DBB7A3151E8EFF6D652B6FEC064AFB7C91CE6 (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_baseAddress;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GetIndexDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexDelegate_EndInvoke_mCB8A499750C8FAABEC3054E2119644A419592557 (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_Multicast(GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* currentDelegate = reinterpret_cast<GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_OpenInst(GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_OpenStatic(GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_OpenStaticInvoker(GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_ClosedStaticInvoker(GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GetFloat3Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Delegate__ctor_m51E564DAA5544881F7F632318BED47EA8FDBDC1E (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GetFloat3Delegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1 (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GetFloat3Delegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3Delegate_BeginInvoke_mA7D4BE800AEA61865A53CE4C766E5676854BB27A (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void GLTFast.Jobs.CachedFunction/GetFloat3Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Delegate_EndInvoke_m857B198C075D7A2B074E4FB71C705D052975E46C (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_Multicast(GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* currentDelegate = reinterpret_cast<GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_OpenInst(GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_baseAddress);
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_OpenStatic(GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_OpenStaticInvoker(GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_baseAddress, ___1_index);
}
int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_ClosedStaticInvoker(GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_baseAddress, ___1_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB (GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_baseAddress, ___1_index);

	return returnValue;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24PostfixBurstDelegate__ctor_m422058453A912939B833CD3470D44B3A27A9210B (GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE_Multicast;
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_Invoke_m33746EB9BBE2394EAB28168E64232FC3CE1F72EE (GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate::BeginInvoke(System.Void*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_BeginInvoke_m0D14FBA87BAFFDF44B07999CA48360D67A3AAAA4 (GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, void* ___0_baseAddress, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_baseAddress;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_EndInvoke_m674FCC2A982D8169CD5C3F509EC246A7F1860F65 (GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall_GetFunctionPointerDiscard_mB59C9F5E682852669BDF5CB5F736448DEF01E7EC (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueUInt8_000001A1U24BurstDirectCall_GetFunctionPointer_m65627E13CF3381CAE0B87DBBAA025DD41080B6BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		GetIndexValueUInt8_000001A1U24BurstDirectCall_GetFunctionPointerDiscard_mB59C9F5E682852669BDF5CB5F736448DEF01E7EC((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall_Constructor_m63A70564403A7BF7C4530172C4B4F82803401FF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueUInt8U24BurstManaged_mB3AB9E5310F00AFF81CA6E6DD9AB32AEDDBF04C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueUInt8_mB942E0EBB3813ECDCBDBBBB1DE09652E4129A97F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueUInt8_mB942E0EBB3813ECDCBDBBBB1DE09652E4129A97F_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueUInt8U24BurstManaged_mB3AB9E5310F00AFF81CA6E6DD9AB32AEDDBF04C9_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetIndexValueUInt8_000001A1U24PostfixBurstDelegate_t3E0E51550B1814D8A1C30AC0EDFCEFA4CF3C74CB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		((GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall_Initialize_m9CAA71C39B5AA8CAC8AED1623A5102907B02E729 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt8_000001A1U24BurstDirectCall__cctor_m8D85403183235CEA335E9EB1E657A13B9C06D110 (const RuntimeMethod* method) 
{
	{
		GetIndexValueUInt8_000001A1U24BurstDirectCall_Constructor_m63A70564403A7BF7C4530172C4B4F82803401FF9(NULL);
		return;
	}
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt8_000001A1$BurstDirectCall::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt8_000001A1U24BurstDirectCall_Invoke_m07CC2413CEF7C0AC30A51FAA186284DE3405D05E (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetIndexValueUInt8_000001A1U24BurstDirectCall_GetFunctionPointer_m65627E13CF3381CAE0B87DBBAA025DD41080B6BD(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		void* L_3 = ___0_baseAddress;
		int32_t L_4 = ___1_index;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(void*,int32_t);
		int32_t L_7 = ((func_L_6)L_5)(L_3, L_4);
		return L_7;
	}

IL_001f:
	{
		void* L_8 = ___0_baseAddress;
		int32_t L_9 = ___1_index;
		int32_t L_10;
		L_10 = CachedFunction_GetIndexValueUInt8U24BurstManaged_mB3AB9E5310F00AFF81CA6E6DD9AB32AEDDBF04C9_inline(L_8, L_9, NULL);
		return L_10;
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
int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_Multicast(GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* currentDelegate = reinterpret_cast<GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_OpenInst(GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_baseAddress);
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_OpenStatic(GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_OpenStaticInvoker(GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_baseAddress, ___1_index);
}
int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_ClosedStaticInvoker(GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_baseAddress, ___1_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5 (GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_baseAddress, ___1_index);

	return returnValue;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24PostfixBurstDelegate__ctor_mBBFCB6E589FC8C0DBF9E45788E8D6487B28490DA (GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337_Multicast;
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_Invoke_m526C7C60D2078ABA340CA53414E4BF7B77676337 (GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate::BeginInvoke(System.Void*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetIndexValueInt8_000001A2U24PostfixBurstDelegate_BeginInvoke_m8675108B25068A8CC7FA45564531284B42A888E6 (GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, void* ___0_baseAddress, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_baseAddress;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueInt8_000001A2U24PostfixBurstDelegate_EndInvoke_mCCA230D5A6F008A7F19E58C5B0C90207B04745FC (GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall_GetFunctionPointerDiscard_mD41E83A22202C06C2F15FE139F83336573CC98C7 (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueInt8_000001A2U24BurstDirectCall_GetFunctionPointer_m158F957413700D7B459B7726BC820E2B24D7B041 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		GetIndexValueInt8_000001A2U24BurstDirectCall_GetFunctionPointerDiscard_mD41E83A22202C06C2F15FE139F83336573CC98C7((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall_Constructor_mB0933C58E6B6A41888D451C99D0011EE8EAC15D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueInt8U24BurstManaged_m50CD16F43B73014103340837AA77E7C49FFDE20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueInt8_mAFD5D6806F0945619767A4674AB8A4FEAEB73250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueInt8_mAFD5D6806F0945619767A4674AB8A4FEAEB73250_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueInt8U24BurstManaged_m50CD16F43B73014103340837AA77E7C49FFDE20D_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetIndexValueInt8_000001A2U24PostfixBurstDelegate_tF50190E121C649A7A839ECC58D13DB46DAA90CB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		((GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall_Initialize_m29C98640D615EF49D3F4125EDDB8CE352E796755 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt8_000001A2U24BurstDirectCall__cctor_m8885DAA5A03267C0CCCA3B1F6C3D0F6F792FB976 (const RuntimeMethod* method) 
{
	{
		GetIndexValueInt8_000001A2U24BurstDirectCall_Constructor_mB0933C58E6B6A41888D451C99D0011EE8EAC15D8(NULL);
		return;
	}
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt8_000001A2$BurstDirectCall::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueInt8_000001A2U24BurstDirectCall_Invoke_m667FF784D7B9B009548A1A08DF4B23D1AE4ADE67 (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetIndexValueInt8_000001A2U24BurstDirectCall_GetFunctionPointer_m158F957413700D7B459B7726BC820E2B24D7B041(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		void* L_3 = ___0_baseAddress;
		int32_t L_4 = ___1_index;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(void*,int32_t);
		int32_t L_7 = ((func_L_6)L_5)(L_3, L_4);
		return L_7;
	}

IL_001f:
	{
		void* L_8 = ___0_baseAddress;
		int32_t L_9 = ___1_index;
		int32_t L_10;
		L_10 = CachedFunction_GetIndexValueInt8U24BurstManaged_m50CD16F43B73014103340837AA77E7C49FFDE20D_inline(L_8, L_9, NULL);
		return L_10;
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
int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_Multicast(GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* currentDelegate = reinterpret_cast<GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_OpenInst(GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_baseAddress);
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_OpenStatic(GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_OpenStaticInvoker(GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_baseAddress, ___1_index);
}
int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_ClosedStaticInvoker(GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_baseAddress, ___1_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3 (GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_baseAddress, ___1_index);

	return returnValue;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24PostfixBurstDelegate__ctor_m665315A7547E8F5904AD95AA0C28C363ECEEE4EF (GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D_Multicast;
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_Invoke_mF44D8B03F211E73501C1E6766DEF78DB0E0D805D (GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate::BeginInvoke(System.Void*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_BeginInvoke_m05989067E54DA9B74EB89C97CE142F899AC5DE2A (GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, void* ___0_baseAddress, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_baseAddress;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_EndInvoke_m0CA8DEC55EBD2C543FB23492F0CC25881F4AB565 (GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall_GetFunctionPointerDiscard_mF885CAFDC5399AC9ACE7D9B4F54BBAF10078BD1D (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueUInt16_000001A3U24BurstDirectCall_GetFunctionPointer_mA380A611482DE31AB21A6CA339E3B2104E7F16AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		GetIndexValueUInt16_000001A3U24BurstDirectCall_GetFunctionPointerDiscard_mF885CAFDC5399AC9ACE7D9B4F54BBAF10078BD1D((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall_Constructor_mACF2E2C3157F0083CBCCE94E47B15C2218FF5F80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueUInt16U24BurstManaged_mBD5660235E823587085B3F981CDA91375C03A068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueUInt16_m2DF5738B56D42A02F35C799E6C2270F019476B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueUInt16_m2DF5738B56D42A02F35C799E6C2270F019476B5D_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueUInt16U24BurstManaged_mBD5660235E823587085B3F981CDA91375C03A068_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetIndexValueUInt16_000001A3U24PostfixBurstDelegate_t653CE3E7D20000E7B903CF5FA214DA246B76F4A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		((GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall_Initialize_mDFB5B933507086320255C41CB4C12F62BB1822F8 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt16_000001A3U24BurstDirectCall__cctor_m1ACCF7DC951ED124ECC32ED897813C859B83088F (const RuntimeMethod* method) 
{
	{
		GetIndexValueUInt16_000001A3U24BurstDirectCall_Constructor_mACF2E2C3157F0083CBCCE94E47B15C2218FF5F80(NULL);
		return;
	}
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt16_000001A3$BurstDirectCall::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt16_000001A3U24BurstDirectCall_Invoke_m9F8892BB9C5F0A733AC735B49C50E29732951B2B (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetIndexValueUInt16_000001A3U24BurstDirectCall_GetFunctionPointer_mA380A611482DE31AB21A6CA339E3B2104E7F16AB(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		void* L_3 = ___0_baseAddress;
		int32_t L_4 = ___1_index;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(void*,int32_t);
		int32_t L_7 = ((func_L_6)L_5)(L_3, L_4);
		return L_7;
	}

IL_001f:
	{
		void* L_8 = ___0_baseAddress;
		int32_t L_9 = ___1_index;
		int32_t L_10;
		L_10 = CachedFunction_GetIndexValueUInt16U24BurstManaged_mBD5660235E823587085B3F981CDA91375C03A068_inline(L_8, L_9, NULL);
		return L_10;
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
int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_Multicast(GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* currentDelegate = reinterpret_cast<GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_OpenInst(GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_baseAddress);
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_OpenStatic(GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_OpenStaticInvoker(GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_baseAddress, ___1_index);
}
int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_ClosedStaticInvoker(GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_baseAddress, ___1_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F (GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_baseAddress, ___1_index);

	return returnValue;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24PostfixBurstDelegate__ctor_m0C17947878990E2475F6D62442E7062BCC695FEB (GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34_Multicast;
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_Invoke_m58C5C4439B620DF73287B075D406A67D2F785C34 (GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate::BeginInvoke(System.Void*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetIndexValueInt16_000001A4U24PostfixBurstDelegate_BeginInvoke_mE148991C08BED4D969F39A2930D15B36E402717A (GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, void* ___0_baseAddress, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_baseAddress;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueInt16_000001A4U24PostfixBurstDelegate_EndInvoke_m5C7BBBED3928DD3FDF5D20571B8C4EDEC620205B (GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall_GetFunctionPointerDiscard_m4455AF09FD23B6575A1B65025F95440A2BA01402 (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueInt16_000001A4U24BurstDirectCall_GetFunctionPointer_mF29BB2C3097CB28174E23BF97A0D1709CD196914 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		GetIndexValueInt16_000001A4U24BurstDirectCall_GetFunctionPointerDiscard_m4455AF09FD23B6575A1B65025F95440A2BA01402((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall_Constructor_mFF074011EEE8B60074218A4ACC0329832E19FBD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueInt16U24BurstManaged_m0CE8CC798C33CE005254E4D660B8B23943EEC2BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueInt16_m4810F0FAE3A571E1BD26609BED78D105C52AFD15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueInt16_m4810F0FAE3A571E1BD26609BED78D105C52AFD15_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueInt16U24BurstManaged_m0CE8CC798C33CE005254E4D660B8B23943EEC2BE_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetIndexValueInt16_000001A4U24PostfixBurstDelegate_t26EDA71322D222FE53A7E6619973F87FE2D6536F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		((GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall_Initialize_m5A801E2A37DC62C0BB90CA0C4B8D28D1E1194943 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueInt16_000001A4U24BurstDirectCall__cctor_m7CF25AF06A827578CB2B602D025735CAE0C7C0C0 (const RuntimeMethod* method) 
{
	{
		GetIndexValueInt16_000001A4U24BurstDirectCall_Constructor_mFF074011EEE8B60074218A4ACC0329832E19FBD9(NULL);
		return;
	}
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueInt16_000001A4$BurstDirectCall::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueInt16_000001A4U24BurstDirectCall_Invoke_mDBE4AEF4DBDCA7D38CD95720AB4D1139EBE12FEA (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetIndexValueInt16_000001A4U24BurstDirectCall_GetFunctionPointer_mF29BB2C3097CB28174E23BF97A0D1709CD196914(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		void* L_3 = ___0_baseAddress;
		int32_t L_4 = ___1_index;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(void*,int32_t);
		int32_t L_7 = ((func_L_6)L_5)(L_3, L_4);
		return L_7;
	}

IL_001f:
	{
		void* L_8 = ___0_baseAddress;
		int32_t L_9 = ___1_index;
		int32_t L_10;
		L_10 = CachedFunction_GetIndexValueInt16U24BurstManaged_m0CE8CC798C33CE005254E4D660B8B23943EEC2BE_inline(L_8, L_9, NULL);
		return L_10;
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
int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_Multicast(GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* currentDelegate = reinterpret_cast<GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_OpenInst(GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	NullCheck(___0_baseAddress);
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_OpenStatic(GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_baseAddress, ___1_index, method);
}
int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_OpenStaticInvoker(GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_baseAddress, ___1_index);
}
int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_ClosedStaticInvoker(GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, void*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_baseAddress, ___1_index);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698 (GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(void*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_baseAddress, ___1_index);

	return returnValue;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24PostfixBurstDelegate__ctor_m8598A6BF680383EB0B5607C87DF0AEE7EA9D80AE (GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A_Multicast;
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_Invoke_mEE4B41DA2F671666AF441C17F7120C7FD268859A (GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate::BeginInvoke(System.Void*,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_BeginInvoke_mE295B27832468ADACBE69004FA88AAF79F6D9F7E (GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, void* ___0_baseAddress, int32_t ___1_index, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_baseAddress;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_index);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_EndInvoke_m3D4DF0B065FAB3AAFEDAE47BABDF45F0A1258713 (GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall_GetFunctionPointerDiscard_mBF27277FF16CB86E79D7203DD03116DC108023AD (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetIndexValueUInt32_000001A5U24BurstDirectCall_GetFunctionPointer_mDAC4FF923D17078304B3DE92BDC049EACCAA230D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		GetIndexValueUInt32_000001A5U24BurstDirectCall_GetFunctionPointerDiscard_mBF27277FF16CB86E79D7203DD03116DC108023AD((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall_Constructor_m61B67058D0EF866296BCEF299D47F6E7C7726740 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueUInt32U24BurstManaged_m3CDEBE0B843A44B8D10C6D979E059FE59BC3C58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetIndexValueUInt32_m1317AD48EA4B6FA9CFE64D89208DE44AB13EA2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueUInt32_m1317AD48EA4B6FA9CFE64D89208DE44AB13EA2EC_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetIndexValueUInt32U24BurstManaged_m3CDEBE0B843A44B8D10C6D979E059FE59BC3C58D_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetIndexValueUInt32_000001A5U24PostfixBurstDelegate_t749F22B185A085523D26AD68F6EDFFF830B86698_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		((GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_StaticFields*)il2cpp_codegen_static_fields_for(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall_Initialize_m5B8FBABA91D9800F1D008C63540F24DB439EEDD8 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetIndexValueUInt32_000001A5U24BurstDirectCall__cctor_mF622CA1405D1540FB6DBFCB31CCC1C76E5D53F98 (const RuntimeMethod* method) 
{
	{
		GetIndexValueUInt32_000001A5U24BurstDirectCall_Constructor_m61B67058D0EF866296BCEF299D47F6E7C7726740(NULL);
		return;
	}
}
// System.Int32 GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetIndexValueUInt32_000001A5$BurstDirectCall::Invoke(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetIndexValueUInt32_000001A5U24BurstDirectCall_Invoke_mAB9C85088F619D840091A972C5454567CBE50539 (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetIndexValueUInt32_000001A5U24BurstDirectCall_GetFunctionPointer_mDAC4FF923D17078304B3DE92BDC049EACCAA230D(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		void* L_3 = ___0_baseAddress;
		int32_t L_4 = ___1_index;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_L_6)(void*,int32_t);
		int32_t L_7 = ((func_L_6)L_5)(L_3, L_4);
		return L_7;
	}

IL_001f:
	{
		void* L_8 = ___0_baseAddress;
		int32_t L_9 = ___1_index;
		int32_t L_10;
		L_10 = CachedFunction_GetIndexValueUInt32U24BurstManaged_m3CDEBE0B843A44B8D10C6D979E059FE59BC3C58D_inline(L_8, L_9, NULL);
		return L_10;
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
void GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_Multicast(GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* currentDelegate = reinterpret_cast<GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_OpenInst(GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_OpenStatic(GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_OpenStaticInvoker(GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_ClosedStaticInvoker(GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE (GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24PostfixBurstDelegate__ctor_mF1AF5DB30D270B61076AA50C49524DA8465E0309 (GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24PostfixBurstDelegate_Invoke_mD967E58269914C172EBA6EFA81CDF67AE0560045 (GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3Float_000001A6U24PostfixBurstDelegate_BeginInvoke_mD710623D5FC9D94F29B40ED6E8E9C3CE8A18072D (GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24PostfixBurstDelegate_EndInvoke_mC81185F49054A9A1D1CA4377B08613741DB8CAD7 (GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_GetFunctionPointerDiscard_m7AB37255EBED13F8A754762814A8A4DCAD7ECF9B (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Float_000001A6U24BurstDirectCall_GetFunctionPointer_m68EC49249839D181CA029F7055981530D0658FDE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		GetFloat3Float_000001A6U24BurstDirectCall_GetFunctionPointerDiscard_m7AB37255EBED13F8A754762814A8A4DCAD7ECF9B((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_Constructor_m06234EDC49EF5DAF7A2D9198BD819D3B5A150915 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3FloatU24BurstManaged_m95BCAC5D9747E71DA4C5C901B25B8276E3712AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Float_m22D6B190B6D4183C92AF42869F8DEA0255295C82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Float_m22D6B190B6D4183C92AF42869F8DEA0255295C82_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3FloatU24BurstManaged_m95BCAC5D9747E71DA4C5C901B25B8276E3712AFE_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3Float_000001A6U24PostfixBurstDelegate_tE76E29D0883A58AEDBB2216386155CFE331CE1AE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		((GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_Initialize_mD0055A4C69846DAE1FBDD51A7B12C48FB3068AA4 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall__cctor_m16E0336923023CE6E1F8B00C1DD7A88CBA7EC860 (const RuntimeMethod* method) 
{
	{
		GetFloat3Float_000001A6U24BurstDirectCall_Constructor_m06234EDC49EF5DAF7A2D9198BD819D3B5A150915(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Float_000001A6$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Float_000001A6U24BurstDirectCall_Invoke_m3C6689E9B2F18B9158443B7D6D1C6441F1399061 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3Float_000001A6U24BurstDirectCall_GetFunctionPointer_m68EC49249839D181CA029F7055981530D0658FDE(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3FloatU24BurstManaged_m95BCAC5D9747E71DA4C5C901B25B8276E3712AFE_inline(L_7, L_8, NULL);
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
void GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_Multicast(GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* currentDelegate = reinterpret_cast<GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_OpenInst(GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_OpenStatic(GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_OpenStaticInvoker(GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_ClosedStaticInvoker(GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569 (GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24PostfixBurstDelegate__ctor_m799D35294096B4C5D87C3739F08528F28413A068 (GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24PostfixBurstDelegate_Invoke_mDBBE1CA1B29F2334A6FE790A7871D12DA7488A08 (GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3Int8_000001A7U24PostfixBurstDelegate_BeginInvoke_m067C7EB65B6C086E6E868DD7D9BD6A44D8CA18DD (GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24PostfixBurstDelegate_EndInvoke_mB87464C4258DA693D4F0D8E46E4E5A05D25CB858 (GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_GetFunctionPointerDiscard_m241B72E2EDB0DDB4E7EBDDC8E3561AE388F4FC0C (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int8_000001A7U24BurstDirectCall_GetFunctionPointer_m223FFBCC11C51E18E1FE2943E30FFB7F112C4EFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		GetFloat3Int8_000001A7U24BurstDirectCall_GetFunctionPointerDiscard_m241B72E2EDB0DDB4E7EBDDC8E3561AE388F4FC0C((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_Constructor_m67544BFACD9104B85A2894E64B3E69E9558ACE6C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int8U24BurstManaged_mD36309CBCC37B1AD3F49898404094DFCE15DEA17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int8_m4C5E9B0D23560A21EB5DC7B0ED427FC310BF8BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int8_m4C5E9B0D23560A21EB5DC7B0ED427FC310BF8BBC_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int8U24BurstManaged_mD36309CBCC37B1AD3F49898404094DFCE15DEA17_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3Int8_000001A7U24PostfixBurstDelegate_t7881310A4004948066158F803D30ADF0567CC569_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		((GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_Initialize_mCAF5DB7D4D1D9F80C1076F2D375A5CA7546147AB (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall__cctor_m586780455829D43564099E7FDE331D0FFBAFEBD7 (const RuntimeMethod* method) 
{
	{
		GetFloat3Int8_000001A7U24BurstDirectCall_Constructor_m67544BFACD9104B85A2894E64B3E69E9558ACE6C(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8_000001A7$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8_000001A7U24BurstDirectCall_Invoke_m000BE0390237D3026B84E00043B976A5D9160778 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3Int8_000001A7U24BurstDirectCall_GetFunctionPointer_m223FFBCC11C51E18E1FE2943E30FFB7F112C4EFE(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3Int8U24BurstManaged_mD36309CBCC37B1AD3F49898404094DFCE15DEA17_inline(L_7, L_8, NULL);
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
void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_Multicast(GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* currentDelegate = reinterpret_cast<GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_OpenInst(GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_OpenStatic(GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_OpenStaticInvoker(GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_ClosedStaticInvoker(GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6 (GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24PostfixBurstDelegate__ctor_mAFA3878550662B50623B2EA7BAE83861A69EDBD2 (GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_Invoke_mEDA27E652794538E9783C405EF4F4A53873C4CE8 (GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3UInt8_000001A8U24PostfixBurstDelegate_BeginInvoke_mF33899E83251C0A72B365F5F0DC6FDC9C56F329C (GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24PostfixBurstDelegate_EndInvoke_mEDC4032AC4731DAA6714C8960F0330C0BD57445F (GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_GetFunctionPointerDiscard_m772E25ACF84EE48026C13EDE4BB435C3F1142E51 (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt8_000001A8U24BurstDirectCall_GetFunctionPointer_m5D63924878B27FC682FE56DF45F411B55778C536 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		GetFloat3UInt8_000001A8U24BurstDirectCall_GetFunctionPointerDiscard_m772E25ACF84EE48026C13EDE4BB435C3F1142E51((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_Constructor_mB16E23352C77FE78E3F5B1AFBBFC8234F34323CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt8U24BurstManaged_mE2888393E3A48F813A00903F4577CAAAD2B4B046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt8_m1AB440597B9CC69D5E02D93AB17009BA16466496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt8_m1AB440597B9CC69D5E02D93AB17009BA16466496_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt8U24BurstManaged_mE2888393E3A48F813A00903F4577CAAAD2B4B046_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3UInt8_000001A8U24PostfixBurstDelegate_tA7121F27EEE11402B0B388A439B974082A58C9E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		((GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_Initialize_m7F2C171490704A9DD9129C07D851A8A21553ECDC (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall__cctor_mF6E8F7018258CDBCDAF0B8022B618A661F54BC53 (const RuntimeMethod* method) 
{
	{
		GetFloat3UInt8_000001A8U24BurstDirectCall_Constructor_mB16E23352C77FE78E3F5B1AFBBFC8234F34323CA(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8_000001A8$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8_000001A8U24BurstDirectCall_Invoke_m83D78CD45712D5782D576032745E2A0C793A02E0 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3UInt8_000001A8U24BurstDirectCall_GetFunctionPointer_m5D63924878B27FC682FE56DF45F411B55778C536(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3UInt8U24BurstManaged_mE2888393E3A48F813A00903F4577CAAAD2B4B046_inline(L_7, L_8, NULL);
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
void GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_Multicast(GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* currentDelegate = reinterpret_cast<GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_OpenInst(GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_OpenStatic(GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_OpenStaticInvoker(GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_ClosedStaticInvoker(GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8 (GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24PostfixBurstDelegate__ctor_m1EE6239D39BBE6CA8299FCE3716B9E34DC13652C (GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24PostfixBurstDelegate_Invoke_m4628C977D79A18084B6E412FC5150D1B98E73C15 (GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3Int16_000001A9U24PostfixBurstDelegate_BeginInvoke_m03484242305A48C4FCC549EAE28677EDB86A5DD8 (GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24PostfixBurstDelegate_EndInvoke_m9027D1951631AADC959261AA17B8ADD178D22877 (GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_GetFunctionPointerDiscard_m9546133B5B0C33093F536774ACC4E762FF4A73BB (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int16_000001A9U24BurstDirectCall_GetFunctionPointer_mCD40980F61D7A4E3CF64624B5398A0A280F0CF14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		GetFloat3Int16_000001A9U24BurstDirectCall_GetFunctionPointerDiscard_m9546133B5B0C33093F536774ACC4E762FF4A73BB((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_Constructor_m664893BF9036DBB31CACC39A7E578669CBE9FF59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int16U24BurstManaged_m119F748750D7A61303D053FC854CC8F159AA26DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int16_m5034EE294E1A63B624ED97078849AB0537EB3C52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int16_m5034EE294E1A63B624ED97078849AB0537EB3C52_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int16U24BurstManaged_m119F748750D7A61303D053FC854CC8F159AA26DF_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3Int16_000001A9U24PostfixBurstDelegate_t30E43557FFDD9BD444DF7FD451970FE6145210B8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		((GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_Initialize_m0BC9B406238D322CE149C199B41D1D25FD6BDE9C (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall__cctor_mA91AEDFDAB0D5BCD0A94598355301B21A0A96284 (const RuntimeMethod* method) 
{
	{
		GetFloat3Int16_000001A9U24BurstDirectCall_Constructor_m664893BF9036DBB31CACC39A7E578669CBE9FF59(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16_000001A9$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16_000001A9U24BurstDirectCall_Invoke_m4F9C10482E80B3B585959F7A9053356931E10217 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3Int16_000001A9U24BurstDirectCall_GetFunctionPointer_mCD40980F61D7A4E3CF64624B5398A0A280F0CF14(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3Int16U24BurstManaged_m119F748750D7A61303D053FC854CC8F159AA26DF_inline(L_7, L_8, NULL);
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
void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_Multicast(GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* currentDelegate = reinterpret_cast<GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_OpenInst(GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_OpenStatic(GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_OpenStaticInvoker(GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_ClosedStaticInvoker(GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC (GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24PostfixBurstDelegate__ctor_mEDEA6241B6302F7E89F3AE12858FFAC25F0655C2 (GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_Invoke_m234E834CB2AABC06C945187F3CDD63C08A55EA3C (GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3UInt16_000001AAU24PostfixBurstDelegate_BeginInvoke_m4A8863E63BB9F2E405CD5E556B272BD287FA927F (GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24PostfixBurstDelegate_EndInvoke_m5566E253A7DD01AABAB5A0940AC7C86F677CD277 (GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_GetFunctionPointerDiscard_m0CB711F6B8984FC554B02E3533831BEFA5D912CD (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt16_000001AAU24BurstDirectCall_GetFunctionPointer_m7F0856D3D3A5CA1003E591696D3B8E8610E6479D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		GetFloat3UInt16_000001AAU24BurstDirectCall_GetFunctionPointerDiscard_m0CB711F6B8984FC554B02E3533831BEFA5D912CD((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_Constructor_mFCA2E31602298250611F2061F5FF3F138F32AC08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt16U24BurstManaged_mB73D21112DC772B26F9AE2A5A4E8D5BA51B31BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt16_mBC1DE1D3A6347D08ACD6C9BC7B92E914598C8D44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt16_mBC1DE1D3A6347D08ACD6C9BC7B92E914598C8D44_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt16U24BurstManaged_mB73D21112DC772B26F9AE2A5A4E8D5BA51B31BCA_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3UInt16_000001AAU24PostfixBurstDelegate_t87F9336F55963B11C13557EC107B88DB5D56F1AC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		((GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_Initialize_m8359D13C972F835911895C28C9E9DA45C5FF157D (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall__cctor_mBB3B47DDF65EB05DF1D355522046B71737B1B740 (const RuntimeMethod* method) 
{
	{
		GetFloat3UInt16_000001AAU24BurstDirectCall_Constructor_mFCA2E31602298250611F2061F5FF3F138F32AC08(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16_000001AA$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16_000001AAU24BurstDirectCall_Invoke_m300EF004899AC7801B9E73795093A8FAA14C5BEC (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3UInt16_000001AAU24BurstDirectCall_GetFunctionPointer_m7F0856D3D3A5CA1003E591696D3B8E8610E6479D(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3UInt16U24BurstManaged_mB73D21112DC772B26F9AE2A5A4E8D5BA51B31BCA_inline(L_7, L_8, NULL);
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
void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_Multicast(GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* currentDelegate = reinterpret_cast<GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_OpenInst(GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_OpenStatic(GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_OpenStaticInvoker(GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_ClosedStaticInvoker(GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C (GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24PostfixBurstDelegate__ctor_m19C8BFF452539897DC0D99F635B2AEBF7C54A4CF (GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_Invoke_m446E6F054AA3E42C0307E1F380064593FEA05838 (GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3UInt32_000001ABU24PostfixBurstDelegate_BeginInvoke_mAEDDA1694552C54B4DE5FC7987D5DE8FF0FD3ADE (GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24PostfixBurstDelegate_EndInvoke_m54B0F2141D8FAF474B6F0CA1E8CFB9D36A6FE23F (GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_GetFunctionPointerDiscard_mE8861A55CCB91080B659B6AAE1EBBD86E596367C (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt32_000001ABU24BurstDirectCall_GetFunctionPointer_mD536A9791EB6820D3F95F05DE73855EE8EF834D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		GetFloat3UInt32_000001ABU24BurstDirectCall_GetFunctionPointerDiscard_mE8861A55CCB91080B659B6AAE1EBBD86E596367C((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_Constructor_mA4BF5CC55D9A637572CE18B3896A77447DCA35B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt32U24BurstManaged_mEAD60DFF926B7F2632E524750CCABF0814C26970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt32_m6707498154852F40A6BBA7D27F6AD552DE849244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt32_m6707498154852F40A6BBA7D27F6AD552DE849244_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt32U24BurstManaged_mEAD60DFF926B7F2632E524750CCABF0814C26970_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3UInt32_000001ABU24PostfixBurstDelegate_t828A7F4DCA74C8C2BC46EB2FDBD298400D38AB2C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		((GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_Initialize_mF82A9917C93F9FE9DC0EA4A12397401F53BD827B (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall__cctor_mD130C341D627FCAAB781387648E5058EDDE91939 (const RuntimeMethod* method) 
{
	{
		GetFloat3UInt32_000001ABU24BurstDirectCall_Constructor_mA4BF5CC55D9A637572CE18B3896A77447DCA35B8(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32_000001AB$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32_000001ABU24BurstDirectCall_Invoke_m310F6B43DA5A9E90C067D5F6CBAFF32D9BB28AC8 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3UInt32_000001ABU24BurstDirectCall_GetFunctionPointer_mD536A9791EB6820D3F95F05DE73855EE8EF834D7(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3UInt32U24BurstManaged_mEAD60DFF926B7F2632E524750CCABF0814C26970_inline(L_7, L_8, NULL);
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
void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_Multicast(GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* currentDelegate = reinterpret_cast<GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_OpenInst(GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_OpenStatic(GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_OpenStaticInvoker(GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_ClosedStaticInvoker(GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492 (GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate__ctor_mEFDA003DA67609958F3F1324746246B2D0F0AC28 (GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_Invoke_m91C909227B03C60E400C6545CF77939FF9B4CEE6 (GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_BeginInvoke_mC05F8767EA205E2715FDE9929DB9F8993A408D71 (GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_EndInvoke_mEAD8FC6728F51FD39BD7FCCA7ADD90F0D4FF6046 (GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_GetFunctionPointerDiscard_mC61BC23AA7AF6E50816B41C6C818BF6AF58C48AD (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int8Normalized_000001ACU24BurstDirectCall_GetFunctionPointer_mCF7857D672045E99F3068C8427CBDA6E829607BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		GetFloat3Int8Normalized_000001ACU24BurstDirectCall_GetFunctionPointerDiscard_mC61BC23AA7AF6E50816B41C6C818BF6AF58C48AD((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Constructor_mD99E6501749722F3EA1C6B63E0391B4BDC308EDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int8NormalizedU24BurstManaged_m7FABBECE34DE58DFF9706C72E52617C7B4687C1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int8Normalized_m0B34988383D23B781D0C10D4777795A30681A2FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int8Normalized_m0B34988383D23B781D0C10D4777795A30681A2FD_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int8NormalizedU24BurstManaged_m7FABBECE34DE58DFF9706C72E52617C7B4687C1F_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3Int8Normalized_000001ACU24PostfixBurstDelegate_tC6CD1D91DA1F09D9BD079E7692ED95A19626F492_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		((GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Initialize_m2CB278F140952AC5D6BA779FA29AF0FF501AACD5 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall__cctor_m92699599BAE6D9993DA8259F1BD685DDCC6C6E64 (const RuntimeMethod* method) 
{
	{
		GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Constructor_mD99E6501749722F3EA1C6B63E0391B4BDC308EDF(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int8Normalized_000001AC$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Invoke_m63ADC03B853AF86B35B5D73E69BB96A046B0FFA7 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3Int8Normalized_000001ACU24BurstDirectCall_GetFunctionPointer_mCF7857D672045E99F3068C8427CBDA6E829607BC(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3Int8NormalizedU24BurstManaged_m7FABBECE34DE58DFF9706C72E52617C7B4687C1F_inline(L_7, L_8, NULL);
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
void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_Multicast(GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* currentDelegate = reinterpret_cast<GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_OpenInst(GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_OpenStatic(GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_OpenStaticInvoker(GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_ClosedStaticInvoker(GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2 (GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate__ctor_m21569E345D2D3801EB11F46B6C159168AA3CB059 (GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_Invoke_mD0C2ACAE42B19765BFE42532C136FF39983C0AC5 (GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_BeginInvoke_m93CB51AD5343A5E032BE5EC17A9F3117D2730501 (GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_EndInvoke_mAD20B000146FD8F91B17B2E25702D26253A4BA2C (GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_GetFunctionPointerDiscard_m4466A99E5BA449BC841C3D6EA62752625F58F0D5 (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_GetFunctionPointer_mEF828C8A3495A470CDEED7E6A6EEAD04D989C5B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_GetFunctionPointerDiscard_m4466A99E5BA449BC841C3D6EA62752625F58F0D5((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Constructor_mC4438CE49F52A1758841B74949A263EAEB98D5D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt8NormalizedU24BurstManaged_mBD3F74A1F0123E2D46AC5C7580A44A11C3ED618B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt8Normalized_mC85590C633B745F7374AFB9628496B127489BFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt8Normalized_mC85590C633B745F7374AFB9628496B127489BFDA_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt8NormalizedU24BurstManaged_mBD3F74A1F0123E2D46AC5C7580A44A11C3ED618B_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3UInt8Normalized_000001ADU24PostfixBurstDelegate_t866AFA4473A18C88FA1B73DD8268B4FCE7695BE2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		((GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Initialize_mDDCA02B8C08369EF7572E8C71FBE6F54AE1DCF0F (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall__cctor_mC9F8314EC3399532A17FB0901943A6161193543C (const RuntimeMethod* method) 
{
	{
		GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Constructor_mC4438CE49F52A1758841B74949A263EAEB98D5D3(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt8Normalized_000001AD$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Invoke_mE72BD6F9EE0FA9AC62DE49DDB6FC651721461545 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_GetFunctionPointer_mEF828C8A3495A470CDEED7E6A6EEAD04D989C5B8(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3UInt8NormalizedU24BurstManaged_mBD3F74A1F0123E2D46AC5C7580A44A11C3ED618B_inline(L_7, L_8, NULL);
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
void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_Multicast(GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* currentDelegate = reinterpret_cast<GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_OpenInst(GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_OpenStatic(GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_OpenStaticInvoker(GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_ClosedStaticInvoker(GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F (GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate__ctor_m4BC01D7BA69C599E3175279EB9DB67E6490969C1 (GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_Invoke_mE85AB237E6C6A51715F604F23AD5BE8B834F9747 (GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_BeginInvoke_m025E53173DAA5A537873812D41C50DB0CC22F293 (GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_EndInvoke_m5F33B8BE75DC7A705CF11172CACD92847CD6E78F (GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_GetFunctionPointerDiscard_mF7F43881C8C317824CFC5ED65FB669DFD72997FF (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3Int16Normalized_000001AEU24BurstDirectCall_GetFunctionPointer_mD8F24341EF84163E23908736A7674EB6A85DA932 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		GetFloat3Int16Normalized_000001AEU24BurstDirectCall_GetFunctionPointerDiscard_mF7F43881C8C317824CFC5ED65FB669DFD72997FF((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Constructor_m27BB9753F785B93B91AC7A1A4B85AD7319A99D68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int16NormalizedU24BurstManaged_m385B37EAF6D112DDCA5036C45E37EF0C50367E6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3Int16Normalized_m7E584F3BD3EA180CBD178E17E448E492B7524D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int16Normalized_m7E584F3BD3EA180CBD178E17E448E492B7524D8E_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3Int16NormalizedU24BurstManaged_m385B37EAF6D112DDCA5036C45E37EF0C50367E6C_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3Int16Normalized_000001AEU24PostfixBurstDelegate_t1C42E0C0F00E6E44942B04A5AD0CF078845D494F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		((GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Initialize_m6A817DEAD0B77258737388666245D05899A7B703 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall__cctor_m1EF1333FE0B9E50023AC18BC1D02CE204B664129 (const RuntimeMethod* method) 
{
	{
		GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Constructor_m27BB9753F785B93B91AC7A1A4B85AD7319A99D68(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3Int16Normalized_000001AE$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Invoke_m986FC868A0D38A9EFDC3FF54B0B4D0F3B706BF79 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3Int16Normalized_000001AEU24BurstDirectCall_GetFunctionPointer_mD8F24341EF84163E23908736A7674EB6A85DA932(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3Int16NormalizedU24BurstManaged_m385B37EAF6D112DDCA5036C45E37EF0C50367E6C_inline(L_7, L_8, NULL);
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
void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_Multicast(GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* currentDelegate = reinterpret_cast<GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_OpenInst(GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_OpenStatic(GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_OpenStaticInvoker(GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_ClosedStaticInvoker(GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70 (GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate__ctor_m1249F892E6C7711136351A5FFD4C43F9D8BF0E55 (GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_Invoke_mBEA112A96C3C4F5D6C80152D2CF907B8C46C22CE (GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_BeginInvoke_mC1BEBA63A92B38DCA4DC721700F62DE95093B5C1 (GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_EndInvoke_m94E3304B2271B2A3BA9CB8843667AD8C2140D52B (GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_GetFunctionPointerDiscard_m12F12C2251D0D079CF62AFC7454F2EA5B0D7780C (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_GetFunctionPointer_m228E47CC62C874621AA6F0FB76DE658A4ABCC5D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_GetFunctionPointerDiscard_m12F12C2251D0D079CF62AFC7454F2EA5B0D7780C((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Constructor_m6BDB33A466F18EA1B286F1EB96FCEBBB9A107FED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt16NormalizedU24BurstManaged_m313F6D7D40A80C1D507594AF8CAD4388DA6CECE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt16Normalized_m4D03A1B215C705A332C53D22F178A0758C9B154A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt16Normalized_m4D03A1B215C705A332C53D22F178A0758C9B154A_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt16NormalizedU24BurstManaged_m313F6D7D40A80C1D507594AF8CAD4388DA6CECE4_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3UInt16Normalized_000001AFU24PostfixBurstDelegate_t703364204658D395FE3D44CAA9FBC773E5733D70_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		((GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Initialize_m996DD69DE7A464C218AB812CB92AB77F4A157A57 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall__cctor_mA2F2449116D56C359722993D92184B5D11674602 (const RuntimeMethod* method) 
{
	{
		GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Constructor_m6BDB33A466F18EA1B286F1EB96FCEBBB9A107FED(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt16Normalized_000001AF$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Invoke_mFC086FBCD217E811DAF96CD1625ABB65A4B4E930 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_GetFunctionPointer_m228E47CC62C874621AA6F0FB76DE658A4ABCC5D2(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3UInt16NormalizedU24BurstManaged_m313F6D7D40A80C1D507594AF8CAD4388DA6CECE4_inline(L_7, L_8, NULL);
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
void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_Multicast(GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* currentDelegate = reinterpret_cast<GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_OpenInst(GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	NullCheck(___0_destination);
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_OpenStatic(GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_destination, ___1_src, method);
}
void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_OpenStaticInvoker(GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker2< float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_destination, ___1_src);
}
void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_ClosedStaticInvoker(GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_destination, ___1_src);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B (GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_destination, ___1_src);

}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate__ctor_mC35CD301C785A78C24B3643497C2D5E963D9431A (GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, RuntimeObject* ___0_p, intptr_t ___1_p, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_p);
	__this->___method_3 = ___1_p;
	__this->___m_target_2 = ___0_p;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_p);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_p);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_p))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_p))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_OpenInst;
		}
		else
		{
			if (___0_p == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A_Multicast;
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_Invoke_mFE32AADCEDDDB9CE308B546BC37ACE21023C2E4A (GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate::BeginInvoke(Unity.Mathematics.float3*,System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_BeginInvoke_mAAC2F0EE3675E375B0CAAA88D5AB8AA8209B5840 (GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_p, RuntimeObject* ___3_p, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_destination;
	__d_args[1] = ___1_src;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_p, (RuntimeObject*)___3_p);
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_EndInvoke_mE92E82E4168C68168415A2EAC15105580A211799 (GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_p, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_GetFunctionPointerDiscard_m624880BCCA84EDF3D14FAC91897BDC27BF9CD838 (intptr_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mCB94796C7EA22FD5393D7CD88D439B44E4E0A55F(L_1, NULL);
		((GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_GetFunctionPointer_m45610E56F92444F8B00849F567BC15A5B810F922 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_GetFunctionPointerDiscard_m624880BCCA84EDF3D14FAC91897BDC27BF9CD838((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Constructor_mB380063989402CF7D5ADB16EA258B377AD8C6805 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt32NormalizedU24BurstManaged_mBA5D7C1E4DCF3B337184DEF612725D829C7423ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedFunction_GetFloat3UInt32Normalized_mCB3D4296F2957EEF6CC955E3262DEA4A5C1155DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt32Normalized_mCB3D4296F2957EEF6CC955E3262DEA4A5C1155DF_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (CachedFunction_GetFloat3UInt32NormalizedU24BurstManaged_mBA5D7C1E4DCF3B337184DEF612725D829C7423ED_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (GetFloat3UInt32Normalized_000001B0U24PostfixBurstDelegate_tA75C61995DEC463A2FB61DA2F0ACC823440C676B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m524AD72E914537D1E8001DDC4C816CA5B9381D8F(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		((GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_StaticFields*)il2cpp_codegen_static_fields_for(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Initialize_m1B36E268BF18FA6CFF96FAF87BA46B78FEAF7D2B (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall__cctor_mFB6817ABCC1F3976AB478F534C2294A378900381 (const RuntimeMethod* method) 
{
	{
		GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Constructor_mB380063989402CF7D5ADB16EA258B377AD8C6805(NULL);
		return;
	}
}
// System.Void GLTFast.Jobs.CachedFunction/GLTFast.Jobs.GetFloat3UInt32Normalized_000001B0$BurstDirectCall::Invoke(Unity.Mathematics.float3*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Invoke_m4D9260DD671C77CDFAFA2B6F482734426DAAE058 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m55FDBCB2279A83AC8926260034F870E3A11116C7(NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_GetFunctionPointer_m45610E56F92444F8B00849F567BC15A5B810F922(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		intptr_t L_5 = V_0;
		typedef void (CDECL *func_L_6)(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,void*);
		((func_L_6)L_5)(L_3, L_4);
		return;
	}

IL_001f:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = ___0_destination;
		void* L_8 = ___1_src;
		CachedFunction_GetFloat3UInt32NormalizedU24BurstManaged_mBA5D7C1E4DCF3B337184DEF612725D829C7423ED_inline(L_7, L_8, NULL);
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
// System.Void GLTFast.Jobs.CreateIndicesInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CreateIndicesInt32Job_Execute_m9685BD0E181B02531856FA61EE31302824F8E0DB (CreateIndicesInt32Job_tC0CA30F003940304AF60F8ED49DA6CF09A6DA9C5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = i;
		int32_t* L_0 = __this->___result_0;
		int32_t L_1 = ___0_i;
		int32_t L_2 = ___0_i;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))) = (int32_t)L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CreateIndicesInt32Job_Execute_m9685BD0E181B02531856FA61EE31302824F8E0DB_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	CreateIndicesInt32Job_tC0CA30F003940304AF60F8ED49DA6CF09A6DA9C5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CreateIndicesInt32Job_tC0CA30F003940304AF60F8ED49DA6CF09A6DA9C5*>(__this + _offset);
	CreateIndicesInt32Job_Execute_m9685BD0E181B02531856FA61EE31302824F8E0DB(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.CreateIndicesInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CreateIndicesInt32FlippedJob_Execute_mE499A0B79F133800D544154CC7707E672CAAD7EF (CreateIndicesInt32FlippedJob_t7D21BFD9642D163643D6E78B771E859719DD1ACF* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = i - 2*(i%3-1);
		int32_t* L_0 = __this->___result_0;
		int32_t L_1 = ___0_i;
		int32_t L_2 = ___0_i;
		int32_t L_3 = ___0_i;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_3%3)), 1))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CreateIndicesInt32FlippedJob_Execute_mE499A0B79F133800D544154CC7707E672CAAD7EF_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	CreateIndicesInt32FlippedJob_t7D21BFD9642D163643D6E78B771E859719DD1ACF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CreateIndicesInt32FlippedJob_t7D21BFD9642D163643D6E78B771E859719DD1ACF*>(__this + _offset);
	CreateIndicesInt32FlippedJob_Execute_mE499A0B79F133800D544154CC7707E672CAAD7EF(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertIndicesUInt8ToInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt8ToInt32Job_Execute_mB099782529CC2914CDEF0DC99CBD811BDF7ECEA1 (ConvertIndicesUInt8ToInt32Job_t0946DEF92071313DB9E0041AD8F0757F0EDD56B1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = input[i];
		int32_t* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		uint8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))) = (int32_t)L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertIndicesUInt8ToInt32Job_Execute_mB099782529CC2914CDEF0DC99CBD811BDF7ECEA1_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertIndicesUInt8ToInt32Job_t0946DEF92071313DB9E0041AD8F0757F0EDD56B1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertIndicesUInt8ToInt32Job_t0946DEF92071313DB9E0041AD8F0757F0EDD56B1*>(__this + _offset);
	ConvertIndicesUInt8ToInt32Job_Execute_mB099782529CC2914CDEF0DC99CBD811BDF7ECEA1(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertIndicesUInt8ToInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt8ToInt32FlippedJob_Execute_mC1C623EBD05BA36AA93C309762F0103EE79009D6 (ConvertIndicesUInt8ToInt32FlippedJob_tC4531CAA8F1A32DDD4203D43DB5A781F401B4820* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = new int3(
		//     input[i*3],
		//     input[i*3+2],
		//     input[i*3+1]
		//     );
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF);
		uint8_t* L_3 = __this->___input_0;
		int32_t L_4 = ___0_i;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 3)))));
		uint8_t* L_6 = __this->___input_0;
		int32_t L_7 = ___0_i;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 3)), 2)))));
		uint8_t* L_9 = __this->___input_0;
		int32_t L_10 = ___0_i;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, 3)), 1)))));
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_12;
		memset((&L_12), 0, sizeof(L_12));
		int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		*(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)((int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))) = L_12;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertIndicesUInt8ToInt32FlippedJob_Execute_mC1C623EBD05BA36AA93C309762F0103EE79009D6_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertIndicesUInt8ToInt32FlippedJob_tC4531CAA8F1A32DDD4203D43DB5A781F401B4820* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertIndicesUInt8ToInt32FlippedJob_tC4531CAA8F1A32DDD4203D43DB5A781F401B4820*>(__this + _offset);
	ConvertIndicesUInt8ToInt32FlippedJob_Execute_mC1C623EBD05BA36AA93C309762F0103EE79009D6(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertIndicesUInt16ToInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt16ToInt32FlippedJob_Execute_mE8EE9776B02A6F263AF06B77DF54330C611A1E90 (ConvertIndicesUInt16ToInt32FlippedJob_t4BBEE62A3641D67193CA579B30E5CF8FF7283265* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = new int3(
		//     input[i * 3],
		//     input[i * 3 + 2],
		//     input[i * 3 + 1]
		// );
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF);
		uint16_t* L_3 = __this->___input_0;
		int32_t L_4 = ___0_i;
		int32_t L_5 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, 3))), 2)))));
		uint16_t* L_6 = __this->___input_0;
		int32_t L_7 = ___0_i;
		int32_t L_8 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 3)), 2))), 2)))));
		uint16_t* L_9 = __this->___input_0;
		int32_t L_10 = ___0_i;
		int32_t L_11 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, 3)), 1))), 2)))));
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_12;
		memset((&L_12), 0, sizeof(L_12));
		int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		*(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)((int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))) = L_12;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertIndicesUInt16ToInt32FlippedJob_Execute_mE8EE9776B02A6F263AF06B77DF54330C611A1E90_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertIndicesUInt16ToInt32FlippedJob_t4BBEE62A3641D67193CA579B30E5CF8FF7283265* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertIndicesUInt16ToInt32FlippedJob_t4BBEE62A3641D67193CA579B30E5CF8FF7283265*>(__this + _offset);
	ConvertIndicesUInt16ToInt32FlippedJob_Execute_mE8EE9776B02A6F263AF06B77DF54330C611A1E90(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertIndicesUInt16ToInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt16ToInt32Job_Execute_mF3663D8F3C6FBC2B3AAC388E17432BFDFEB947D9 (ConvertIndicesUInt16ToInt32Job_t02B9FF6812A4AB57C4FE09C0B403C39649F3B66B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = input[i];
		int32_t* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		uint16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))) = (int32_t)L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertIndicesUInt16ToInt32Job_Execute_mF3663D8F3C6FBC2B3AAC388E17432BFDFEB947D9_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertIndicesUInt16ToInt32Job_t02B9FF6812A4AB57C4FE09C0B403C39649F3B66B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertIndicesUInt16ToInt32Job_t02B9FF6812A4AB57C4FE09C0B403C39649F3B66B*>(__this + _offset);
	ConvertIndicesUInt16ToInt32Job_Execute_mF3663D8F3C6FBC2B3AAC388E17432BFDFEB947D9(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertIndicesUInt32ToInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt32ToInt32Job_Execute_m7AA6B5C114E200DC08527B510EEBAC46C3B95D7A (ConvertIndicesUInt32ToInt32Job_tE8BE7D06313C8A7E0F18103ABF56D2BF4E93B5C5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = (int)input[i];
		int32_t* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		uint32_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))) = (int32_t)L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertIndicesUInt32ToInt32Job_Execute_m7AA6B5C114E200DC08527B510EEBAC46C3B95D7A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertIndicesUInt32ToInt32Job_tE8BE7D06313C8A7E0F18103ABF56D2BF4E93B5C5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertIndicesUInt32ToInt32Job_tE8BE7D06313C8A7E0F18103ABF56D2BF4E93B5C5*>(__this + _offset);
	ConvertIndicesUInt32ToInt32Job_Execute_m7AA6B5C114E200DC08527B510EEBAC46C3B95D7A(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertIndicesUInt32ToInt32FlippedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertIndicesUInt32ToInt32FlippedJob_Execute_m9CE199C61360965EC4050654EAF36685C56610AA (ConvertIndicesUInt32ToInt32FlippedJob_tB5322F44A323C1DD383F46EC9205EE7DD43E0462* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = new int3(
		//     (int)input[i * 3],
		//     (int)input[i * 3 + 2],
		//     (int)input[i * 3 + 1]
		// );
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = sizeof(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF);
		uint32_t* L_3 = __this->___input_0;
		int32_t L_4 = ___0_i;
		int32_t L_5 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, 3))), 4)))));
		uint32_t* L_6 = __this->___input_0;
		int32_t L_7 = ___0_i;
		int32_t L_8 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 3)), 2))), 4)))));
		uint32_t* L_9 = __this->___input_0;
		int32_t L_10 = ___0_i;
		int32_t L_11 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, 3)), 1))), 4)))));
		int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF L_12;
		memset((&L_12), 0, sizeof(L_12));
		int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		*(int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)((int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))) = L_12;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertIndicesUInt32ToInt32FlippedJob_Execute_m9CE199C61360965EC4050654EAF36685C56610AA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertIndicesUInt32ToInt32FlippedJob_tB5322F44A323C1DD383F46EC9205EE7DD43E0462* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertIndicesUInt32ToInt32FlippedJob_tB5322F44A323C1DD383F46EC9205EE7DD43E0462*>(__this + _offset);
	ConvertIndicesUInt32ToInt32FlippedJob_Execute_m9CE199C61360965EC4050654EAF36685C56610AA(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt8ToFloatInterleavedJob_Execute_m1CDD05E7A8849D161D8C682BF3EE5D24EE7F0EF3 (ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + inputByteStride*i;
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float2(off[0], 1 - off[1]);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		memset((&L_11), 0, sizeof(L_11));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_11), ((float)L_8), ((float)((int32_t)il2cpp_codegen_subtract(1, L_10))), /*hidden argument*/NULL);
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_6 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsUInt8ToFloatInterleavedJob_Execute_m1CDD05E7A8849D161D8C682BF3EE5D24EE7F0EF3_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsUInt8ToFloatInterleavedJob_t66FF22C4D8270F5A2E90D543E1CF1439DC2CA0BB*>(__this + _offset);
	ConvertUVsUInt8ToFloatInterleavedJob_Execute_m1CDD05E7A8849D161D8C682BF3EE5D24EE7F0EF3(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsUInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt8ToFloatInterleavedNormalizedJob_Execute_m140312D2097DE9B264B1A192CE762F9CB2CB6EFA (ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	uint8_t* V_1 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + inputByteStride*i;
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float2(
		//     off[0],
		//     off[1]
		//     ) / 255f;
		uint8_t* L_6 = V_1;
		int32_t L_7 = *((uint8_t*)L_6);
		uint8_t* L_8 = V_1;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), ((float)L_7), ((float)L_9), /*hidden argument*/NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = float2_op_Division_m4AA175CD0895AA1A50F5A73B54722CA53876EE6A_inline(L_10, (255.0f), NULL);
		V_2 = L_11;
		// tmp.y = 1-tmp.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = V_2;
		float L_13 = L_12.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_13));
		// *resultV = tmp;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_14 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = V_2;
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_14 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsUInt8ToFloatInterleavedNormalizedJob_Execute_m140312D2097DE9B264B1A192CE762F9CB2CB6EFA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsUInt8ToFloatInterleavedNormalizedJob_t0CE4884558CC313B747A01AFD04C9EEC7A9394E1*>(__this + _offset);
	ConvertUVsUInt8ToFloatInterleavedNormalizedJob_Execute_m140312D2097DE9B264B1A192CE762F9CB2CB6EFA(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt16ToFloatInterleavedJob_Execute_mB8C939328905511BF3F52734D5C94FC2984A13B7 (ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var uv = (ushort*) (input + inputByteStride*i);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float2 (uv[0], 1 - uv[1] );
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		memset((&L_11), 0, sizeof(L_11));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_11), ((float)L_8), ((float)((int32_t)il2cpp_codegen_subtract(1, L_10))), /*hidden argument*/NULL);
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_6 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsUInt16ToFloatInterleavedJob_Execute_mB8C939328905511BF3F52734D5C94FC2984A13B7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsUInt16ToFloatInterleavedJob_tB98A497510FC2E2713281D2CA95C357121F3731C*>(__this + _offset);
	ConvertUVsUInt16ToFloatInterleavedJob_Execute_mB8C939328905511BF3F52734D5C94FC2984A13B7(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsUInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsUInt16ToFloatInterleavedNormalizedJob_Execute_m5348C7F3390AE33AA8FCD1194DF00DBA9AC47AAD (ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	uint16_t* V_1 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var uv = (ushort*) (input + inputByteStride*i);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float2(
		//     uv[0],
		//     uv[1]
		// ) / ushort.MaxValue;
		uint16_t* L_6 = V_1;
		int32_t L_7 = *((uint16_t*)L_6);
		uint16_t* L_8 = V_1;
		int32_t L_9 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), ((float)L_7), ((float)L_9), /*hidden argument*/NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = float2_op_Division_m4AA175CD0895AA1A50F5A73B54722CA53876EE6A_inline(L_10, (65535.0f), NULL);
		V_2 = L_11;
		// tmp.y = 1 - tmp.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12 = V_2;
		float L_13 = L_12.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_13));
		// *resultV = tmp;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_14 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_15 = V_2;
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_14 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsUInt16ToFloatInterleavedNormalizedJob_Execute_m5348C7F3390AE33AA8FCD1194DF00DBA9AC47AAD_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsUInt16ToFloatInterleavedNormalizedJob_t55E7D37CC67ED8C82ECB3FF1BD3D831469F2B3DA*>(__this + _offset);
	ConvertUVsUInt16ToFloatInterleavedNormalizedJob_Execute_m5348C7F3390AE33AA8FCD1194DF00DBA9AC47AAD(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt16ToFloatInterleavedJob_Execute_mC667B4C8F9FED1087F85D18CFC54DE432A1791FF (ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	int16_t* V_1 = NULL;
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var uv = (short*) ((byte*)input + inputByteStride*i);
		int16_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float2(uv[0],1 - uv[1]);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_6 = V_0;
		int16_t* L_7 = V_1;
		int32_t L_8 = *((int16_t*)L_7);
		int16_t* L_9 = V_1;
		int32_t L_10 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		memset((&L_11), 0, sizeof(L_11));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_11), ((float)L_8), ((float)((int32_t)il2cpp_codegen_subtract(1, L_10))), /*hidden argument*/NULL);
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_6 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsInt16ToFloatInterleavedJob_Execute_mC667B4C8F9FED1087F85D18CFC54DE432A1791FF_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsInt16ToFloatInterleavedJob_tA6EB65E57B040AC71C8BFCC308A50E423B86365B*>(__this + _offset);
	ConvertUVsInt16ToFloatInterleavedJob_Execute_mC667B4C8F9FED1087F85D18CFC54DE432A1791FF(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt16ToFloatInterleavedNormalizedJob_Execute_mD9B0C7C284B04618581156A960E59E334B284A00 (ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	int16_t* V_1 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var uv = (short*) ((byte*)input + inputByteStride*i);
		int16_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float2(uv[0], uv[1]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), ((float)L_7), ((float)L_9), /*hidden argument*/NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = float2_op_Division_m4AA175CD0895AA1A50F5A73B54722CA53876EE6A_inline(L_10, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12;
		L_12 = float2_op_Implicit_mAC15BD9FDBC817D35ADBA2E566B0F52D182CD9A9_inline((-1.0f), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13;
		L_13 = math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline(L_11, L_12, NULL);
		V_2 = L_13;
		// tmp2.y = 1 - tmp2.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = V_2;
		float L_15 = L_14.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_15));
		// *resultV = tmp2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_16 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17 = V_2;
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_16 = L_17;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsInt16ToFloatInterleavedNormalizedJob_Execute_mD9B0C7C284B04618581156A960E59E334B284A00_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsInt16ToFloatInterleavedNormalizedJob_tCD3AB5CA56CE6A0BF5D79BC364D4C191EF1EA1CB*>(__this + _offset);
	ConvertUVsInt16ToFloatInterleavedNormalizedJob_Execute_mD9B0C7C284B04618581156A960E59E334B284A00(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt8ToFloatInterleavedJob_Execute_m3431650C1E51AAFA6B1ACFBDF3DCBB9FF932846C (ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	int8_t* V_1 = NULL;
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + inputByteStride*i;
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float2(off[0],1 - off[1]);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_6 = V_0;
		int8_t* L_7 = V_1;
		int32_t L_8 = *((int8_t*)L_7);
		int8_t* L_9 = V_1;
		int32_t L_10 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		memset((&L_11), 0, sizeof(L_11));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_11), ((float)L_8), ((float)((int32_t)il2cpp_codegen_subtract(1, L_10))), /*hidden argument*/NULL);
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_6 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsInt8ToFloatInterleavedJob_Execute_m3431650C1E51AAFA6B1ACFBDF3DCBB9FF932846C_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsInt8ToFloatInterleavedJob_t1875D3CA8BCEA0953FDD159DA7E2DD05552F403B*>(__this + _offset);
	ConvertUVsInt8ToFloatInterleavedJob_Execute_m3431650C1E51AAFA6B1ACFBDF3DCBB9FF932846C(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsInt8ToFloatInterleavedNormalizedJob_Execute_mBB696AEDDBCB0C6D5FA72CD3147E1BF85B3ECB4A (ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	int8_t* V_1 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + inputByteStride*i;
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float2(off[0],off[1]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), ((float)L_7), ((float)L_9), /*hidden argument*/NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11;
		L_11 = float2_op_Division_m4AA175CD0895AA1A50F5A73B54722CA53876EE6A_inline(L_10, (127.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_12;
		L_12 = float2_op_Implicit_mAC15BD9FDBC817D35ADBA2E566B0F52D182CD9A9_inline((-1.0f), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_13;
		L_13 = math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline(L_11, L_12, NULL);
		V_2 = L_13;
		// tmp2.y = 1-tmp2.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_14 = V_2;
		float L_15 = L_14.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_15));
		// *resultV = tmp2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_16 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_17 = V_2;
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_16 = L_17;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsInt8ToFloatInterleavedNormalizedJob_Execute_mBB696AEDDBCB0C6D5FA72CD3147E1BF85B3ECB4A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsInt8ToFloatInterleavedNormalizedJob_t6DF1ED634DC0F94F9BC44A20BFEBD40E507F9EC5*>(__this + _offset);
	ConvertUVsInt8ToFloatInterleavedNormalizedJob_Execute_mBB696AEDDBCB0C6D5FA72CD3147E1BF85B3ECB4A(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertColorsRGBFloatToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBFloatToRGBAFloatJob_Execute_m0A34F3BF53BDA5A42D5B5B12AB6895485BD8A6AB (ConvertColorsRGBFloatToRGBAFloatJob_t901E566944162B92E78B534373EE6834900009CA* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	{
		// var src = (float3*) (input + (i * inputByteStride));
		uint8_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// result[i] = new float4(*src, 1f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_3 = __this->___result_2;
		int32_t L_4 = ___0_i;
		uint32_t L_5 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8;
		memset((&L_8), 0, sizeof(L_8));
		float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline((&L_8), L_7, (1.0f), /*hidden argument*/NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))) = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertColorsRGBFloatToRGBAFloatJob_Execute_m0A34F3BF53BDA5A42D5B5B12AB6895485BD8A6AB_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertColorsRGBFloatToRGBAFloatJob_t901E566944162B92E78B534373EE6834900009CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertColorsRGBFloatToRGBAFloatJob_t901E566944162B92E78B534373EE6834900009CA*>(__this + _offset);
	ConvertColorsRGBFloatToRGBAFloatJob_Execute_m0A34F3BF53BDA5A42D5B5B12AB6895485BD8A6AB(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertColorsRGBUInt8ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBUInt8ToRGBAFloatJob_Execute_m1B2F5125F492E48F6FD73CAEB860E87207DDDD2C (ConvertColorsRGBUInt8ToRGBAFloatJob_t478A206A2244B4A32CF3370AB9394BDF87A25AD0* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		// var src = input + (i * inputByteStride);
		uint8_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// result[i] = new float4 (
		//     new float3(src[0],src[1],src[2]) / byte.MaxValue,
		//     1f
		// );
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881* L_3 = (&__this->___result_2);
		int32_t L_4 = ___0_i;
		uint8_t* L_5 = V_0;
		int32_t L_6 = *((uint8_t*)L_5);
		uint8_t* L_7 = V_0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 1)));
		uint8_t* L_9 = V_0;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		memset((&L_11), 0, sizeof(L_11));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_11), ((float)L_6), ((float)L_8), ((float)L_10), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		L_12 = float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline(L_11, (255.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline((&L_13), L_12, (1.0f), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float4_t89D9A294E7A79BD81BFBDD18654508532958555E, (L_3)->___m_Buffer_0, L_4, (L_13));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertColorsRGBUInt8ToRGBAFloatJob_Execute_m1B2F5125F492E48F6FD73CAEB860E87207DDDD2C_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertColorsRGBUInt8ToRGBAFloatJob_t478A206A2244B4A32CF3370AB9394BDF87A25AD0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertColorsRGBUInt8ToRGBAFloatJob_t478A206A2244B4A32CF3370AB9394BDF87A25AD0*>(__this + _offset);
	ConvertColorsRGBUInt8ToRGBAFloatJob_Execute_m1B2F5125F492E48F6FD73CAEB860E87207DDDD2C(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertColorsRGBUInt16ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBUInt16ToRGBAFloatJob_Execute_mB424354BF866B8B1C43F16B7452678F0AE2521A2 (ConvertColorsRGBUInt16ToRGBAFloatJob_t749C4FC43D918828C85C6003D80F3709F3A2594D* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint16_t* V_0 = NULL;
	{
		// var src = (ushort*)(((byte*)input) + (i * inputByteStride));
		uint16_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// result[i] = new float4(
		//     new float3(src[0],src[1],src[2]) / ushort.MaxValue,
		//     1f
		// );
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881* L_3 = (&__this->___result_2);
		int32_t L_4 = ___0_i;
		uint16_t* L_5 = V_0;
		int32_t L_6 = *((uint16_t*)L_5);
		uint16_t* L_7 = V_0;
		int32_t L_8 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_7, 2)));
		uint16_t* L_9 = V_0;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		memset((&L_11), 0, sizeof(L_11));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_11), ((float)L_6), ((float)L_8), ((float)L_10), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		L_12 = float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline(L_11, (65535.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline((&L_13), L_12, (1.0f), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float4_t89D9A294E7A79BD81BFBDD18654508532958555E, (L_3)->___m_Buffer_0, L_4, (L_13));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertColorsRGBUInt16ToRGBAFloatJob_Execute_mB424354BF866B8B1C43F16B7452678F0AE2521A2_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertColorsRGBUInt16ToRGBAFloatJob_t749C4FC43D918828C85C6003D80F3709F3A2594D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertColorsRGBUInt16ToRGBAFloatJob_t749C4FC43D918828C85C6003D80F3709F3A2594D*>(__this + _offset);
	ConvertColorsRGBUInt16ToRGBAFloatJob_Execute_mB424354BF866B8B1C43F16B7452678F0AE2521A2(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertColorsRGBAUInt16ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBAUInt16ToRGBAFloatJob_Execute_m48C062A1C7268F8F512E46876917016A0BB1EBD3 (ConvertColorsRGBAUInt16ToRGBAFloatJob_tD6A400E718C7531647BA9E521C782D65AF2C95C4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint16_t* V_0 = NULL;
	{
		// ushort* src = (ushort*)(((byte*)input) + (i * inputByteStride));
		uint16_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// result[i] = new float4 (
		//     src[0] / (float)ushort.MaxValue,
		//     src[1] / (float)ushort.MaxValue,
		//     src[2] / (float)ushort.MaxValue,
		//     src[3] / (float)ushort.MaxValue
		// );
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_3 = __this->___result_2;
		int32_t L_4 = ___0_i;
		uint32_t L_5 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		uint16_t* L_6 = V_0;
		int32_t L_7 = *((uint16_t*)L_6);
		uint16_t* L_8 = V_0;
		int32_t L_9 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		uint16_t* L_10 = V_0;
		int32_t L_11 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		uint16_t* L_12 = V_0;
		int32_t L_13 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		memset((&L_14), 0, sizeof(L_14));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_14), ((float)(((float)L_7)/(65535.0f))), ((float)(((float)L_9)/(65535.0f))), ((float)(((float)L_11)/(65535.0f))), ((float)(((float)L_13)/(65535.0f))), /*hidden argument*/NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))) = L_14;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertColorsRGBAUInt16ToRGBAFloatJob_Execute_m48C062A1C7268F8F512E46876917016A0BB1EBD3_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertColorsRGBAUInt16ToRGBAFloatJob_tD6A400E718C7531647BA9E521C782D65AF2C95C4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertColorsRGBAUInt16ToRGBAFloatJob_tD6A400E718C7531647BA9E521C782D65AF2C95C4*>(__this + _offset);
	ConvertColorsRGBAUInt16ToRGBAFloatJob_Execute_m48C062A1C7268F8F512E46876917016A0BB1EBD3(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertColorsRGBAFloatToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBAFloatToRGBAFloatJob_Execute_m2A734AC51446DBAD1A46606C15CA63511D63A97B (ConvertColorsRGBAFloatToRGBAFloatJob_tEAB4852F783043291A3E6B1A57667E95409865F5* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	{
		// var src = (float4*) (input + (i * inputByteStride));
		uint8_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// result[i] = *src;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_3 = __this->___result_2;
		int32_t L_4 = ___0_i;
		uint32_t L_5 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))) = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertColorsRGBAFloatToRGBAFloatJob_Execute_m2A734AC51446DBAD1A46606C15CA63511D63A97B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertColorsRGBAFloatToRGBAFloatJob_tEAB4852F783043291A3E6B1A57667E95409865F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertColorsRGBAFloatToRGBAFloatJob_tEAB4852F783043291A3E6B1A57667E95409865F5*>(__this + _offset);
	ConvertColorsRGBAFloatToRGBAFloatJob_Execute_m2A734AC51446DBAD1A46606C15CA63511D63A97B(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertColorsRGBAUInt8ToRGBAFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertColorsRGBAUInt8ToRGBAFloatJob_Execute_mCD1C339BA88B2F61D5D3AC0B949A44CC08E8D459 (ConvertColorsRGBAUInt8ToRGBAFloatJob_t04454BCB4539FD17808EC51C2158F93E836534CE* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		// var src = input + (i * inputByteStride);
		uint8_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// result[i] = new float4 (
		//     src[0] / (float) byte.MaxValue,
		//     src[1] / (float) byte.MaxValue,
		//     src[2] / (float) byte.MaxValue,
		//     src[3] / (float) byte.MaxValue
		// );
		NativeArray_1_tB5EA234C6ABA1F626A4BEF4053D06783E15A3881* L_3 = (&__this->___result_2);
		int32_t L_4 = ___0_i;
		uint8_t* L_5 = V_0;
		int32_t L_6 = *((uint8_t*)L_5);
		uint8_t* L_7 = V_0;
		int32_t L_8 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 1)));
		uint8_t* L_9 = V_0;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint8_t* L_11 = V_0;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 3)));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_13), ((float)(((float)L_6)/(255.0f))), ((float)(((float)L_8)/(255.0f))), ((float)(((float)L_10)/(255.0f))), ((float)(((float)L_12)/(255.0f))), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float4_t89D9A294E7A79BD81BFBDD18654508532958555E, (L_3)->___m_Buffer_0, L_4, (L_13));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertColorsRGBAUInt8ToRGBAFloatJob_Execute_mCD1C339BA88B2F61D5D3AC0B949A44CC08E8D459_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertColorsRGBAUInt8ToRGBAFloatJob_t04454BCB4539FD17808EC51C2158F93E836534CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertColorsRGBAUInt8ToRGBAFloatJob_t04454BCB4539FD17808EC51C2158F93E836534CE*>(__this + _offset);
	ConvertColorsRGBAUInt8ToRGBAFloatJob_Execute_mCD1C339BA88B2F61D5D3AC0B949A44CC08E8D459(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.MemCopyJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MemCopyJob_Execute_m91BB4557772191F2571DE31549E234007F32B4D4 (MemCopyJob_t99603EAE574644140D6D593A41AAFE719D15C5E4* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method) 
{
	{
		// UnsafeUtility.MemCpy(result,input,bufferSize);
		void* L_0 = __this->___result_2;
		void* L_1 = __this->___input_1;
		int64_t L_2 = __this->___bufferSize_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MemCopyJob_Execute_m91BB4557772191F2571DE31549E234007F32B4D4_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	MemCopyJob_t99603EAE574644140D6D593A41AAFE719D15C5E4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemCopyJob_t99603EAE574644140D6D593A41AAFE719D15C5E4*>(__this + _offset);
	MemCopyJob_Execute_m91BB4557772191F2571DE31549E234007F32B4D4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3FloatToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3FloatToFloatJob_Execute_mCE3B1EE6D8C506F1558986E5B866E16B6CB54BC8 (ConvertVector3FloatToFloatJob_t4B7FDE122BAF8489D2B92956A8A918E94EEDDF9E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = input[i];
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___input_0;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_0 = L_3;
		// tmp.x *= -1;
		float* L_4 = (&(&V_0)->___x_0);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply(L_6, (-1.0f)));
		// result[i] = tmp;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_7 = __this->___result_1;
		int32_t L_8 = ___0_i;
		uint32_t L_9 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = V_0;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))) = L_10;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3FloatToFloatJob_Execute_mCE3B1EE6D8C506F1558986E5B866E16B6CB54BC8_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertVector3FloatToFloatJob_t4B7FDE122BAF8489D2B92956A8A918E94EEDDF9E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3FloatToFloatJob_t4B7FDE122BAF8489D2B92956A8A918E94EEDDF9E*>(__this + _offset);
	ConvertVector3FloatToFloatJob_Execute_mCE3B1EE6D8C506F1558986E5B866E16B6CB54BC8(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertRotationsFloatToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsFloatToFloatJob_Execute_m389DF407D434A84292585CEBEABB9D4DCADD746E (ConvertRotationsFloatToFloatJob_t3FAE97EBB62F029EBDFA4DF9BFB98EA3DECB9157* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = input[i];
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___input_0;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_0 = L_3;
		// tmp.y *= -1;
		float* L_4 = (&(&V_0)->___y_1);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply(L_6, (-1.0f)));
		// tmp.z *= -1;
		float* L_7 = (&(&V_0)->___z_2);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply(L_9, (-1.0f)));
		// result[i] = tmp;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_10 = __this->___result_1;
		int32_t L_11 = ___0_i;
		uint32_t L_12 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = V_0;
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))) = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertRotationsFloatToFloatJob_Execute_m389DF407D434A84292585CEBEABB9D4DCADD746E_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertRotationsFloatToFloatJob_t3FAE97EBB62F029EBDFA4DF9BFB98EA3DECB9157* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertRotationsFloatToFloatJob_t3FAE97EBB62F029EBDFA4DF9BFB98EA3DECB9157*>(__this + _offset);
	ConvertRotationsFloatToFloatJob_Execute_m389DF407D434A84292585CEBEABB9D4DCADD746E(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertRotationsInt16ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0 (ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i*4] = Mathf.Max( input[i*4] / (float) short.MaxValue, -1f );
		float* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		int16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_3, 4))), 2)))));
		float L_5;
		L_5 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_4)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_1, 4))), 4))))) = (float)L_5;
		// result[i*4+1] = -Mathf.Max( input[i*4+1] / (float) short.MaxValue, -1f );
		float* L_6 = __this->___result_1;
		int32_t L_7 = ___0_i;
		int16_t* L_8 = __this->___input_0;
		int32_t L_9 = ___0_i;
		int32_t L_10 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, 4)), 1))), 2)))));
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_10)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 4)), 1))), 4))))) = (float)((-L_11));
		// result[i*4+2] = -Mathf.Max( input[i*4+2] / (float) short.MaxValue, -1f );
		float* L_12 = __this->___result_1;
		int32_t L_13 = ___0_i;
		int16_t* L_14 = __this->___input_0;
		int32_t L_15 = ___0_i;
		int32_t L_16 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 4)), 2))), 2)))));
		float L_17;
		L_17 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_16)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, 4)), 2))), 4))))) = (float)((-L_17));
		// result[i*4+3] = Mathf.Max( input[i*4+3] / (float) short.MaxValue, -1f );
		float* L_18 = __this->___result_1;
		int32_t L_19 = ___0_i;
		int16_t* L_20 = __this->___input_0;
		int32_t L_21 = ___0_i;
		int32_t L_22 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 3))), 2)))));
		float L_23;
		L_23 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_22)/(32767.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, 4)), 3))), 4))))) = (float)L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertRotationsInt16ToFloatJob_t4824ADD453F84C9FA7BAD180E9AC962B16A83E23*>(__this + _offset);
	ConvertRotationsInt16ToFloatJob_Execute_m41CECB7413CCF307C61EA796CF4B3361051C97B0(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertRotationsInt8ToFloatJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA (ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i*4] = Mathf.Max( input[i*4] / 127f, -1f );
		float* L_0 = __this->___result_1;
		int32_t L_1 = ___0_i;
		int8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_2, ((int32_t)il2cpp_codegen_multiply(L_3, 4)))));
		float L_5;
		L_5 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_4)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_1, 4))), 4))))) = (float)L_5;
		// result[i*4+1] = -Mathf.Max( input[i*4+1] / 127f, -1f );
		float* L_6 = __this->___result_1;
		int32_t L_7 = ___0_i;
		int8_t* L_8 = __this->___input_0;
		int32_t L_9 = ___0_i;
		int32_t L_10 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, 4)), 1)))));
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_10)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, 4)), 1))), 4))))) = (float)((-L_11));
		// result[i*4+2] = -Mathf.Max( input[i*4+2] / 127f, -1f );
		float* L_12 = __this->___result_1;
		int32_t L_13 = ___0_i;
		int8_t* L_14 = __this->___input_0;
		int32_t L_15 = ___0_i;
		int32_t L_16 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_14, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 4)), 2)))));
		float L_17;
		L_17 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_16)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, 4)), 2))), 4))))) = (float)((-L_17));
		// result[i*4+3] = Mathf.Max( input[i*4+3] / 127f, -1f );
		float* L_18 = __this->___result_1;
		int32_t L_19 = ___0_i;
		int8_t* L_20 = __this->___input_0;
		int32_t L_21 = ___0_i;
		int32_t L_22 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_20, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 3)))));
		float L_23;
		L_23 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)(((float)L_22)/(127.0f))), (-1.0f), NULL);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, 4)), 3))), 4))))) = (float)L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertRotationsInt8ToFloatJob_t64C61C5F175D373DD433661AC39516D1ACB8DB85*>(__this + _offset);
	ConvertRotationsInt8ToFloatJob_Execute_mA6EB85F5E5E8F4F91A853A5B1C8135E9859E6CCA(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertUVsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675 (ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_0 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* V_1 = NULL;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float2*) (((byte*)result) + (i*outputByteStride));
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (float2*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = *off;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_6 = V_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = (*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_6);
		V_2 = L_7;
		// tmp.y = 1 - tmp.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_8 = V_2;
		float L_9 = L_8.___y_1;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_9));
		// *resultV = tmp;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* L_10 = V_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_11 = V_2;
		*(float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA*)L_10 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertUVsFloatToFloatInterleavedJob_t6E0677FF814369772F0F1090A4312E6D488D8A89*>(__this + _offset);
	ConvertUVsFloatToFloatInterleavedJob_Execute_mD9E929AFB121B89B19C25A144D0AD667A3D06675(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3FloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB (ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (float3*) (input + i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = *off;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6);
		V_2 = L_7;
		// tmp.x *= -1;
		float* L_8 = (&(&V_2)->___x_0);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_multiply(L_10, (-1.0f)));
		// *resultV = tmp;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_11 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12 = V_2;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_11 = L_12;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3FloatToFloatInterleavedJob_tA4088489C9D941D8B72B7F77B5C72374F50EF96E*>(__this + _offset);
	ConvertVector3FloatToFloatInterleavedJob_Execute_m5E95F032521D399D507FED617C7384D08356D7FB(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3SparseJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E (ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_1 = NULL;
	{
		// var index = indexConverter.Invoke(indexBuffer,i);
		FunctionPointer_1_tFCAECC239124D68D3166BA882864F08C22D91C12* L_0 = (&__this->___indexConverter_1);
		GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* L_1;
		L_1 = FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109(L_0, FunctionPointer_1_get_Invoke_m7242057110D2808F903EE4CB4C3F8B472D7DD109_RuntimeMethod_var);
		void* L_2 = __this->___indexBuffer_0;
		int32_t L_3 = ___0_i;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_inline(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// var resultV = (float3*) (((byte*)result) + (index*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_5 = __this->___result_6;
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___outputByteStride_5;
		V_1 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7))));
		// valueConverter.Invoke(resultV, (byte*)input + i*inputByteStride);
		FunctionPointer_1_t5870D266FF5460E9D58F3AA844B37F16468C3C7A* L_8 = (&__this->___valueConverter_4);
		GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* L_9;
		L_9 = FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B(L_8, FunctionPointer_1_get_Invoke_mEB1383E79DC392B036D20DCC59857211B815775B_RuntimeMethod_var);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_10 = V_1;
		void* L_11 = __this->___input_3;
		int32_t L_12 = ___0_i;
		int32_t L_13 = __this->___inputByteStride_2;
		NullCheck(L_9);
		GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_inline(L_9, L_10, ((void*)il2cpp_codegen_add((intptr_t)L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13)))), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3SparseJob_tB8FD7FDC4BEA76F242DD2904653AD524462B6B07*>(__this + _offset);
	ConvertVector3SparseJob_Execute_m99EB0773DA3913BFB10E8A58E9FF6DDDA9A1420E(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertTangentsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B (ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float4* resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// byte* off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		// var tmp = *((float4*)off);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5)))));
		V_1 = L_6;
		// tmp.z *= -1;
		float* L_7 = (&(&V_1)->___z_2);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply(L_9, (-1.0f)));
		// *resultV = tmp;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_10 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11 = V_1;
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_10 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertTangentsFloatToFloatInterleavedJob_t39DAC4951151008FC074F017DB41DEBCD435E04E*>(__this + _offset);
	ConvertTangentsFloatToFloatInterleavedJob_Execute_mE9D4509FFA3E6283ADBAE4CDA5A271C1D7A5302B(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneWeightsFloatToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A (ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = *((float4*)off);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		uint8_t* L_7 = V_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_7);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneWeightsFloatToFloatInterleavedJob_tAEF79FAB5B1D4784E7F75526D58D20D9DD171C7E*>(__this + _offset);
	ConvertBoneWeightsFloatToFloatInterleavedJob_Execute_m6F95B570783F3D338C028923AB300A5FD3231A7A(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367 (ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float4(
		//     off[0] / 255f,
		//     off[1] / 255f,
		//     off[2] / 255f,
		//     off[3] / 255f
		//     );
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		uint8_t* L_13 = V_1;
		int32_t L_14 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 3)));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		memset((&L_15), 0, sizeof(L_15));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_15), ((float)(((float)L_8)/(255.0f))), ((float)(((float)L_10)/(255.0f))), ((float)(((float)L_12)/(255.0f))), ((float)(((float)L_14)/(255.0f))), /*hidden argument*/NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneWeightsUInt8ToFloatInterleavedJob_tBDE0CDC3869EB15579E7A2C57E8ED49ED91E06D0*>(__this + _offset);
	ConvertBoneWeightsUInt8ToFloatInterleavedJob_Execute_mAFBE0A23E04E36534E1192B18D7D51F8E19A1367(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneWeightsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0 (ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float4(
		//     off[0] / (float) ushort.MaxValue,
		//     off[1] / (float) ushort.MaxValue,
		//     off[2] / (float) ushort.MaxValue,
		//     off[3] / (float) ushort.MaxValue
		//     );
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		uint16_t* L_13 = V_1;
		int32_t L_14 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		memset((&L_15), 0, sizeof(L_15));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_15), ((float)(((float)L_8)/(65535.0f))), ((float)(((float)L_10)/(65535.0f))), ((float)(((float)L_12)/(65535.0f))), ((float)(((float)L_14)/(65535.0f))), /*hidden argument*/NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneWeightsUInt16ToFloatInterleavedJob_tD2122991F5511EFF9705CCC01CEC7439CFBEA68C*>(__this + _offset);
	ConvertBoneWeightsUInt16ToFloatInterleavedJob_Execute_mDBCDDC92F5D5969E975BD869C7740572433948F0(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertTangentsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40 (ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	int16_t* V_1 = NULL;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (((byte*)input) + (i*inputByteStride));
		int16_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float4(off[0],off[1],off[2],off[3]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		int16_t* L_10 = V_1;
		int32_t L_11 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		int16_t* L_12 = V_1;
		int32_t L_13 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		memset((&L_14), 0, sizeof(L_14));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_14), ((float)L_7), ((float)L_9), ((float)L_11), ((float)L_13), /*hidden argument*/NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		L_15 = float4_op_Division_mA82993BB826C4799764D5B0E543D0D7776F4F8A2_inline(L_14, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = float4_op_Implicit_m3DF77A1795E1232FCE3A62302FF23601F8C042DD_inline((-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = math_max_m03D4AA9B67EC6003C76DB09B28B9F45D1AFBBB66_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// tmp2.z *= -1;
		float* L_18 = (&(&V_2)->___z_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, (-1.0f)));
		// *resultV = normalize(tmp2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_21 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23;
		L_23 = math_normalize_m598E318DE7A638AE5FE8A35528AC6A90B6E909D6_inline(L_22, NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_21 = L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertTangentsInt16ToFloatInterleavedNormalizedJob_t7A6A8814A9A2F7B0C0D9E30BF43BCF9E4699D7C1*>(__this + _offset);
	ConvertTangentsInt16ToFloatInterleavedNormalizedJob_Execute_m286EAA8F4B42D09408584BF1422716BB995B0C40(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertTangentsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F (ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E* V_0 = NULL;
	int8_t* V_1 = NULL;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float4*) (((byte*)result) + (i*outputByteStride));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float4(off[0],off[1],off[2],off[3]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		int8_t* L_12 = V_1;
		int32_t L_13 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_12, 3)));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		memset((&L_14), 0, sizeof(L_14));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_14), ((float)L_7), ((float)L_9), ((float)L_11), ((float)L_13), /*hidden argument*/NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		L_15 = float4_op_Division_mA82993BB826C4799764D5B0E543D0D7776F4F8A2_inline(L_14, (127.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		L_16 = float4_op_Implicit_m3DF77A1795E1232FCE3A62302FF23601F8C042DD_inline((-1.0f), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17;
		L_17 = math_max_m03D4AA9B67EC6003C76DB09B28B9F45D1AFBBB66_inline(L_15, L_16, NULL);
		V_2 = L_17;
		// tmp2.z *= -1;
		float* L_18 = (&(&V_2)->___z_2);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, (-1.0f)));
		// *resultV = normalize(tmp2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_21 = V_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23;
		L_23 = math_normalize_m598E318DE7A638AE5FE8A35528AC6A90B6E909D6_inline(L_22, NULL);
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)L_21 = L_23;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertTangentsInt8ToFloatInterleavedNormalizedJob_tD3C6743F08143A90D0655D15F81810889837560E*>(__this + _offset);
	ConvertTangentsInt8ToFloatInterleavedNormalizedJob_Execute_mADE88D7ED4669471A1C2CBEE5E9D5588E844220F(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9 (ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + (inputByteStride*i));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0], off[1], off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt16ToFloatInterleavedJob_t627B5337A0B08363B31908F9F5D818AD9BC480E9*>(__this + _offset);
	ConvertPositionsUInt16ToFloatInterleavedJob_Execute_mCBA84FD3B7E48404F4C03D36F293AD0677C140C9(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057 (ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + (inputByteStride*i));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(
		//     -(off[0] / (float) ushort.MaxValue),
		//     off[1] / (float) ushort.MaxValue,
		//     off[2] / (float) ushort.MaxValue
		// );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)(((float)L_8)/(65535.0f))))), ((float)(((float)L_10)/(65535.0f))), ((float)(((float)L_12)/(65535.0f))), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_t006E9B95AB2A428D752CCBA39393B93D329399FC*>(__this + _offset);
	ConvertPositionsUInt16ToFloatInterleavedNormalizedJob_Execute_mBD36CC86BB3FDAB89F8BA8362133973AA8867057(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsInt16ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7 (ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int16_t* V_1 = NULL;
	{
		// var resultV = (float3*)  (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_2;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_3;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0],off[1],off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		int16_t* L_7 = V_1;
		int32_t L_8 = *((int16_t*)L_7);
		int16_t* L_9 = V_1;
		int32_t L_10 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		int16_t* L_11 = V_1;
		int32_t L_12 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsInt16ToFloatInterleavedJob_t765ABB2C95FA8F4D0567D8A8EB3E4F397B319DFC*>(__this + _offset);
	ConvertPositionsInt16ToFloatInterleavedJob_Execute_m900E50141A270D195A073110C1C80C9C823E9EB7(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3Int16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC (ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int16_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		int16_t* L_10 = V_1;
		int32_t L_11 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline(L_12, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m495864276F56A9757CE235005D9908DBB47D8031_inline((-1.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_m247D41258606F80861E72309300DF6A3F8B50AE4_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = tmp2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_20;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3Int16ToFloatInterleavedNormalizedJob_t19604E764DCB5ED1687B3FBA5EBD843E1EA211A4*>(__this + _offset);
	ConvertVector3Int16ToFloatInterleavedNormalizedJob_Execute_mCFF0EA0EECC157DE60297987B407BD896369BDBC(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertNormalsInt16ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5 (ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int16_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (short*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = (int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / short.MaxValue;
		int16_t* L_6 = V_1;
		int32_t L_7 = *((int16_t*)L_6);
		int16_t* L_8 = V_1;
		int32_t L_9 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_8, 2)));
		int16_t* L_10 = V_1;
		int32_t L_11 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline(L_12, (32767.0f), NULL);
		// var tmp2 = max(tmp, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m495864276F56A9757CE235005D9908DBB47D8031_inline((-1.0f), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_m247D41258606F80861E72309300DF6A3F8B50AE4_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = normalize(tmp2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21;
		L_21 = math_normalize_mF02431EFC9E3212E0245EFF5C13BC9DC34512399_inline(L_20, NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_21;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertNormalsInt16ToFloatInterleavedNormalizedJob_tA0A8A4918C402B60639A577A2AD18D5FC31800FE*>(__this + _offset);
	ConvertNormalsInt16ToFloatInterleavedNormalizedJob_Execute_m4FC63CF27A20B6DE4E5FA032DBCF013A6C600EA5(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1 (ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int8_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (inputByteStride*i);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0], off[1], off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		int8_t* L_7 = V_1;
		int32_t L_8 = *((int8_t*)L_7);
		int8_t* L_9 = V_1;
		int32_t L_10 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		int8_t* L_11 = V_1;
		int32_t L_12 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsInt8ToFloatInterleavedJob_t73C1CC4C3AD4D741693D686C3493D3F740BC67F8*>(__this + _offset);
	ConvertPositionsInt8ToFloatInterleavedJob_Execute_m4B57340BE61A8BE13CE72D076B18475579C77DD1(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertVector3Int8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68 (ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int8_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (inputByteStride*i);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline(L_12, (127.0f), NULL);
		// var tmp2 = max(tmp, -1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m0E52B9E5BF532737C8B469DA33E08C16CC53AEB3_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_m247D41258606F80861E72309300DF6A3F8B50AE4_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = tmp2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_20;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertVector3Int8ToFloatInterleavedNormalizedJob_t101DA4EFF72D446E90CC7C4FC57A6ABFD4D9CE73*>(__this + _offset);
	ConvertVector3Int8ToFloatInterleavedNormalizedJob_Execute_mA585588C20C2C429148EA9D9895D2905EFB21E68(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertNormalsInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691 (ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	int8_t* V_1 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (inputByteStride*i);
		int8_t* L_3 = __this->___input_1;
		int32_t L_4 = __this->___inputByteStride_0;
		int32_t L_5 = ___0_i;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// var tmp = new float3(off[0], off[1], off[2]) / 127f;
		int8_t* L_6 = V_1;
		int32_t L_7 = *((int8_t*)L_6);
		int8_t* L_8 = V_1;
		int32_t L_9 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_8, 1)));
		int8_t* L_10 = V_1;
		int32_t L_11 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_10, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)L_7), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		L_13 = float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline(L_12, (127.0f), NULL);
		// var tmp2 = max(tmp, -1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
		L_14 = float3_op_Implicit_m0E52B9E5BF532737C8B469DA33E08C16CC53AEB3_inline((-1), NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		L_15 = math_max_m247D41258606F80861E72309300DF6A3F8B50AE4_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// tmp2.x *= -1;
		float* L_16 = (&(&V_2)->___x_0);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, (-1.0f)));
		// *resultV = normalize(tmp2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_19 = V_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_20 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_21;
		L_21 = math_normalize_mF02431EFC9E3212E0245EFF5C13BC9DC34512399_inline(L_20, NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_19 = L_21;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertNormalsInt8ToFloatInterleavedNormalizedJob_t23F523CF6296D3372533309219939D400FA2503B*>(__this + _offset);
	ConvertNormalsInt8ToFloatInterleavedNormalizedJob_Execute_m32E2EF4D1456BD1152EC6E3A37E37A2717D0D691(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55 (ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_1 = NULL;
	{
		// var off = input + (i*inputByteStride);
		uint8_t* L_0 = __this->___input_1;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___inputByteStride_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var resultV = (float3*) (((byte*) result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = __this->___result_3;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___outputByteStride_2;
		V_1 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(-(float)off[0],off[1],off[2]);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_1;
		uint8_t* L_7 = V_0;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_0;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_0;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)L_8))), ((float)L_10), ((float)L_12), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt8ToFloatInterleavedJob_tFB5F9BA3975E8C7528FBA718E07ECA3A8869357E*>(__this + _offset);
	ConvertPositionsUInt8ToFloatInterleavedJob_Execute_m90B2FAABB8AC2740EF38157A138579B9C62CDE55(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertPositionsUInt8ToFloatInterleavedNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B (ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (float3*) (((byte*)result) + (i*outputByteStride));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = __this->___result_3;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_2;
		V_0 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_1;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_0;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new float3(
		//     -(off[0] / 255f),
		//     off[1] / 255f,
		//     off[2] / 255f
		// );
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_13), ((-((float)(((float)L_8)/(255.0f))))), ((float)(((float)L_10)/(255.0f))), ((float)(((float)L_12)/(255.0f))), /*hidden argument*/NULL);
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)L_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_t3ACA0077C05CD3DF5DDDAD54D03618EE34667CDF*>(__this + _offset);
	ConvertPositionsUInt8ToFloatInterleavedNormalizedJob_Execute_m3D5D499F96619525C7F7C896B326D6F94EAE5D9B(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt8ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB (ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// var resultV = (uint4*) (((byte*)result) + (i*outputByteStride));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_0 = __this->___result_2;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_3;
		V_0 = ((uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = input + (i*inputByteStride);
		uint8_t* L_3 = __this->___input_0;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new uint4(off[0],off[1],off[2],off[3]);
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_6 = V_0;
		uint8_t* L_7 = V_1;
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9 = V_1;
		int32_t L_10 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1)));
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2)));
		uint8_t* L_13 = V_1;
		int32_t L_14 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 3)));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		*(uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneJointsUInt8ToUInt32Job_t99A6AA53F9A9F7619069FF6475F473061A9E7E09*>(__this + _offset);
	ConvertBoneJointsUInt8ToUInt32Job_Execute_mDDBFA83C15941584B08947EF93EB6D86C08C18DB(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertBoneJointsUInt16ToUInt32Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA (ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* V_0 = NULL;
	uint16_t* V_1 = NULL;
	{
		// var resultV = (uint4*) (((byte*)result) + (i*outputByteStride));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_0 = __this->___result_2;
		int32_t L_1 = ___0_i;
		int32_t L_2 = __this->___outputByteStride_3;
		V_0 = ((uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2))));
		// var off = (ushort*) (input + (i*inputByteStride));
		uint8_t* L_3 = __this->___input_0;
		int32_t L_4 = ___0_i;
		int32_t L_5 = __this->___inputByteStride_1;
		V_1 = (uint16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, ((int32_t)il2cpp_codegen_multiply(L_4, L_5))));
		// *resultV = new uint4(off[0],off[1],off[2],off[3]);
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* L_6 = V_0;
		uint16_t* L_7 = V_1;
		int32_t L_8 = *((uint16_t*)L_7);
		uint16_t* L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		uint16_t* L_11 = V_1;
		int32_t L_12 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		uint16_t* L_13 = V_1;
		int32_t L_14 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline((&L_15), L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		*(uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9*)L_6 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertBoneJointsUInt16ToUInt32Job_t9D7020314181601BBE96188BBD9D3F868E1DC848*>(__this + _offset);
	ConvertBoneJointsUInt16ToUInt32Job_Execute_mE329AD446314E3BF1FD84871E85130CFD7EC4CAA(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38 (SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// var v = bones[index];
		NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858* L_0 = (&__this->___bones_0);
		int32_t L_1 = ___0_index;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF, (L_0)->___m_Buffer_0, L_1);
		V_0 = L_2;
		// var sortedAndNormalized = true;
		V_1 = (bool)1;
		// for (var i = 0; i < 3; i++) {
		V_3 = 0;
		goto IL_0047;
	}

IL_0013:
	{
		// var a = v.weights[i];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_3 = (&(&V_0)->___weights_0);
		float* L_4 = (&L_3->___FixedElementField_0);
		int32_t L_5 = V_3;
		float L_6 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 4)))));
		// var b = v.weights[i + 1];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_7 = (&(&V_0)->___weights_0);
		float* L_8 = (&L_7->___FixedElementField_0);
		int32_t L_9 = V_3;
		float L_10 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_9, 1))), 4)))));
		V_4 = L_10;
		// if (a < b) {
		float L_11 = V_4;
		if ((!(((float)L_6) < ((float)L_11))))
		{
			goto IL_0043;
		}
	}
	{
		// sortedAndNormalized = false;
		V_1 = (bool)0;
		// break;
		goto IL_004b;
	}

IL_0043:
	{
		// for (var i = 0; i < 3; i++) {
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0047:
	{
		// for (var i = 0; i < 3; i++) {
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) < ((int32_t)3)))
		{
			goto IL_0013;
		}
	}

IL_004b:
	{
		// if (!sortedAndNormalized) {
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_00da;
		}
	}
	{
		// for (var i = 0; i < skinWeights; i++) {
		V_5 = 0;
		goto IL_00cd;
	}

IL_0056:
	{
		// var max = v.weights[i];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_15 = (&(&V_0)->___weights_0);
		float* L_16 = (&L_15->___FixedElementField_0);
		int32_t L_17 = V_5;
		float L_18 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4)))));
		V_6 = L_18;
		// var maxI = i;
		int32_t L_19 = V_5;
		V_7 = L_19;
		// for (var j = i+1; j < 4; j++) {
		int32_t L_20 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		goto IL_00b1;
	}

IL_0077:
	{
		// var value = v.weights[j];
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_21 = (&(&V_0)->___weights_0);
		float* L_22 = (&L_21->___FixedElementField_0);
		int32_t L_23 = V_8;
		float L_24 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4)))));
		V_9 = L_24;
		// if (v.weights[j] > max) {
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_25 = (&(&V_0)->___weights_0);
		float* L_26 = (&L_25->___FixedElementField_0);
		int32_t L_27 = V_8;
		float L_28 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4)))));
		float L_29 = V_6;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00ab;
		}
	}
	{
		// max = value;
		float L_30 = V_9;
		V_6 = L_30;
		// maxI = j;
		int32_t L_31 = V_8;
		V_7 = L_31;
	}

IL_00ab:
	{
		// for (var j = i+1; j < 4; j++) {
		int32_t L_32 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b1:
	{
		// for (var j = i+1; j < 4; j++) {
		int32_t L_33 = V_8;
		if ((((int32_t)L_33) < ((int32_t)4)))
		{
			goto IL_0077;
		}
	}
	{
		// if (maxI > i) {
		int32_t L_34 = V_7;
		int32_t L_35 = V_5;
		if ((((int32_t)L_34) <= ((int32_t)L_35)))
		{
			goto IL_00c7;
		}
	}
	{
		// Swap(ref v, maxI, i);
		int32_t L_36 = V_7;
		int32_t L_37 = V_5;
		SortAndRenormalizeBoneWeightsJob_Swap_m58566BB70512DE0FFE100748D6D35F51A2BBDBBA((&V_0), L_36, L_37, NULL);
	}

IL_00c7:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cd:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_39 = V_5;
		int32_t L_40 = __this->___skinWeights_1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0056;
		}
	}

IL_00da:
	{
		// var weightSum = 0f;
		V_2 = (0.0f);
		// for (var i = 0; i < skinWeights; i++) {
		V_10 = 0;
		goto IL_0101;
	}

IL_00e5:
	{
		// weightSum += v.weights[i];
		float L_41 = V_2;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_42 = (&(&V_0)->___weights_0);
		float* L_43 = (&L_42->___FixedElementField_0);
		int32_t L_44 = V_10;
		float L_45 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4)))));
		V_2 = ((float)il2cpp_codegen_add(L_41, L_45));
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0101:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_47 = V_10;
		int32_t L_48 = __this->___skinWeights_1;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00e5;
		}
	}
	{
		// if (abs(weightSum - 1.0f) > 2e-7f && weightSum > 0) {
		float L_49 = V_2;
		float L_50;
		L_50 = math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline(((float)il2cpp_codegen_subtract(L_49, (1.0f))), NULL);
		if ((!(((float)L_50) > ((float)(2.00000002E-07f)))))
		{
			goto IL_0154;
		}
	}
	{
		float L_51 = V_2;
		if ((!(((float)L_51) > ((float)(0.0f)))))
		{
			goto IL_0154;
		}
	}
	{
		// sortedAndNormalized = false;
		V_1 = (bool)0;
		// for (var i = 0; i < skinWeights; i++) {
		V_11 = 0;
		goto IL_014a;
	}

IL_012d:
	{
		// v.weights[i] /= weightSum;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_52 = (&(&V_0)->___weights_0);
		float* L_53 = (&L_52->___FixedElementField_0);
		int32_t L_54 = V_11;
		float* L_55 = ((float*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_54), 4))));
		float L_56 = *((float*)L_55);
		float L_57 = V_2;
		*((float*)L_55) = (float)((float)(L_56/L_57));
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_58 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_014a:
	{
		// for (var i = 0; i < skinWeights; i++) {
		int32_t L_59 = V_11;
		int32_t L_60 = __this->___skinWeights_1;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_012d;
		}
	}

IL_0154:
	{
		// if (!sortedAndNormalized) {
		bool L_61 = V_1;
		if (L_61)
		{
			goto IL_0164;
		}
	}
	{
		// bones[index] = v;
		NativeArray_1_t15E6E9438E5B73A5BFCFCADFEBF1D3D8949C6858* L_62 = (&__this->___bones_0);
		int32_t L_63 = ___0_index;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF L_64 = V_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF, (L_62)->___m_Buffer_0, L_63, (L_64));
	}

IL_0164:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_index, const RuntimeMethod* method)
{
	SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SortAndRenormalizeBoneWeightsJob_tB959456EC991805E422D7414C7E11CC70FFAE42C*>(__this + _offset);
	SortAndRenormalizeBoneWeightsJob_Execute_m2925332CE698666362A0658FEDC39E6CE0573B38(_thisAdjusted, ___0_index, method);
}
// System.Void GLTFast.Jobs.SortAndRenormalizeBoneWeightsJob::Swap(GLTFast.Vertex.VBones&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void SortAndRenormalizeBoneWeightsJob_Swap_m58566BB70512DE0FFE100748D6D35F51A2BBDBBA (VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* ___0_v, int32_t ___1_a, int32_t ___2_b, const RuntimeMethod* method) 
{
	float* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	uint32_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		// (v.weights[a], v.weights[b]) = (v.weights[b], v.weights[a]);
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_0 = ___0_v;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_1 = (&L_0->___weights_0);
		float* L_2 = (&L_1->___FixedElementField_0);
		int32_t L_3 = ___1_a;
		V_0 = ((float*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 4))));
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_4 = ___0_v;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_5 = (&L_4->___weights_0);
		float* L_6 = (&L_5->___FixedElementField_0);
		int32_t L_7 = ___2_b;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_8 = ___0_v;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_9 = (&L_8->___weights_0);
		float* L_10 = (&L_9->___FixedElementField_0);
		int32_t L_11 = ___2_b;
		float L_12 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4)))));
		V_1 = L_12;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_13 = ___0_v;
		U3CweightsU3Ee__FixedBuffer_t38977884B7556D7D2264A4364FA615B5744932BC* L_14 = (&L_13->___weights_0);
		float* L_15 = (&L_14->___FixedElementField_0);
		int32_t L_16 = ___1_a;
		float L_17 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4)))));
		V_2 = L_17;
		float* L_18 = V_0;
		float L_19 = V_1;
		*((float*)L_18) = (float)L_19;
		float L_20 = V_2;
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), 4))))) = (float)L_20;
		// (v.joints[a], v.joints[b]) = (v.joints[b], v.joints[a]);
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_21 = ___0_v;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_22 = (&L_21->___joints_1);
		uint32_t* L_23 = (&L_22->___FixedElementField_0);
		int32_t L_24 = ___1_a;
		V_3 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))));
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_25 = ___0_v;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_26 = (&L_25->___joints_1);
		uint32_t* L_27 = (&L_26->___FixedElementField_0);
		int32_t L_28 = ___2_b;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_29 = ___0_v;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_30 = (&L_29->___joints_1);
		uint32_t* L_31 = (&L_30->___FixedElementField_0);
		int32_t L_32 = ___2_b;
		int32_t L_33 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4)))));
		V_4 = L_33;
		VBones_t97D4AD59DF3FC7F8528C16AE839B525F19B2D7AF* L_34 = ___0_v;
		U3CjointsU3Ee__FixedBuffer_t247A255BAD6230E79187CCF28093D98E575CAF88* L_35 = (&L_34->___joints_1);
		uint32_t* L_36 = (&L_35->___FixedElementField_0);
		int32_t L_37 = ___1_a;
		int32_t L_38 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4)))));
		V_5 = L_38;
		uint32_t* L_39 = V_3;
		uint32_t L_40 = V_4;
		*((int32_t*)L_39) = (int32_t)L_40;
		uint32_t L_41 = V_5;
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))) = (int32_t)L_41;
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
// System.Void GLTFast.Jobs.ConvertMatricesJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0 (ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = input[i].c0;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_0 = __this->___input_0;
		int32_t L_1 = ___0_i;
		uint32_t L_2 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2))))->___c0_0;
		V_0 = L_3;
		// tmp.y *= -1;
		float* L_4 = (&(&V_0)->___y_1);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply(L_6, (-1.0f)));
		// tmp.z *= -1;
		float* L_7 = (&(&V_0)->___z_2);
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply(L_9, (-1.0f)));
		// result[i].c0 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_10 = __this->___result_1;
		int32_t L_11 = ___0_i;
		uint32_t L_12 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12))))->___c0_0 = L_13;
		// tmp = input[i].c1;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_14 = __this->___input_0;
		int32_t L_15 = ___0_i;
		uint32_t L_16 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16))))->___c1_1;
		V_0 = L_17;
		// tmp.x *= -1;
		float* L_18 = (&(&V_0)->___x_0);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_multiply(L_20, (-1.0f)));
		// result[i].c1 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_21 = __this->___result_1;
		int32_t L_22 = ___0_i;
		uint32_t L_23 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_24 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), (int32_t)L_23)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), (int32_t)L_23))))->___c1_1 = L_24;
		// tmp = input[i].c2;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_25 = __this->___input_0;
		int32_t L_26 = ___0_i;
		uint32_t L_27 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_28 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), (int32_t)L_27))))->___c2_2;
		V_0 = L_28;
		// tmp.x *= -1;
		float* L_29 = (&(&V_0)->___x_0);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		*((float*)L_30) = (float)((float)il2cpp_codegen_multiply(L_31, (-1.0f)));
		// result[i].c2 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_32 = __this->___result_1;
		int32_t L_33 = ___0_i;
		uint32_t L_34 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_35 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), (int32_t)L_34)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), (int32_t)L_34))))->___c2_2 = L_35;
		// tmp = input[i].c3;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_36 = __this->___input_0;
		int32_t L_37 = ___0_i;
		uint32_t L_38 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), (int32_t)L_38)))));
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_39 = ((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), (int32_t)L_38))))->___c3_3;
		V_0 = L_39;
		// tmp.x *= -1;
		float* L_40 = (&(&V_0)->___x_0);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		*((float*)L_41) = (float)((float)il2cpp_codegen_multiply(L_42, (-1.0f)));
		// result[i].c3 = tmp;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* L_43 = __this->___result_1;
		int32_t L_44 = ___0_i;
		uint32_t L_45 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_46 = V_0;
		NullCheck(((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), (int32_t)L_45)))));
		((float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), (int32_t)L_45))))->___c3_3 = L_46;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertMatricesJob_tDBC421DA195426DB5E3578E45C5CE296E032A936*>(__this + _offset);
	ConvertMatricesJob_Execute_mD4C85FD640C63CB191E277601C20EDEE2103E9F0(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC (ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = max( input[i] / 127f, -1.0f);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___0_i;
		int8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)));
		float L_5;
		L_5 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_4)/(127.0f))), (-1.0f), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarInt8ToFloatNormalizedJob_t6B556D50B4172D442B1DE65DAA91C80AA7AE4CA7*>(__this + _offset);
	ConvertScalarInt8ToFloatNormalizedJob_Execute_mB9FE0B8F8EE76D480ED02D0AF9388A84A709F6CC(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarUInt8ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA (ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = input[i]/255f;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___0_i;
		uint8_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)));
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (((float)(((float)L_4)/(255.0f)))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarUInt8ToFloatNormalizedJob_t06FA09713B8F1B1206754069D463957FF26027A4*>(__this + _offset);
	ConvertScalarUInt8ToFloatNormalizedJob_Execute_m2D3F7DF326D3E369F2390038FFAECBBCC6A31DBA(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B (ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = max( input[i] / (float) short.MaxValue, -1.0f);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___0_i;
		int16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2)))));
		float L_5;
		L_5 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_4)/(32767.0f))), (-1.0f), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarInt16ToFloatNormalizedJob_t6603C875EDBE5AE07207490A8A57E502A16DB55E*>(__this + _offset);
	ConvertScalarInt16ToFloatNormalizedJob_Execute_m13168529617730C19B7F5EEEB643F3D9FC08319B(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GLTFast.Jobs.ConvertScalarUInt16ToFloatNormalizedJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987 (ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		// result[i] = input[i] / (float) ushort.MaxValue;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = (&__this->___result_1);
		int32_t L_1 = ___0_i;
		uint16_t* L_2 = __this->___input_0;
		int32_t L_3 = ___0_i;
		int32_t L_4 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2)))));
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_0)->___m_Buffer_0, L_1, (((float)(((float)L_4)/(65535.0f)))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___0_i, const RuntimeMethod* method)
{
	ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConvertScalarUInt16ToFloatNormalizedJob_t6B5DF4E3ED469A126C33D0F26D332F148A709986*>(__this + _offset);
	ConvertScalarUInt16ToFloatNormalizedJob_Execute_m0F027DC315CCD105C0C2D25011329546B3EE0987(_thisAdjusted, ___0_i, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void $BurstDirectCallInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24BurstDirectCallInitializer_Initialize_m46A9017ED99ABA9918C69B8D048ED96643012E9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt8_000001A1U24BurstDirectCall_t07E43A375B260B5EEE660BEBC260E0673DBCB897_il2cpp_TypeInfo_var);
		GetIndexValueUInt8_000001A1U24BurstDirectCall_Initialize_m9CAA71C39B5AA8CAC8AED1623A5102907B02E729(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt8_000001A2U24BurstDirectCall_tC5F32589D098BFECD6A63AAF0142FE46FF5842FF_il2cpp_TypeInfo_var);
		GetIndexValueInt8_000001A2U24BurstDirectCall_Initialize_m29C98640D615EF49D3F4125EDDB8CE352E796755(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt16_000001A3U24BurstDirectCall_t134756D8D34B107813D8F096DABDE665DC85AD9B_il2cpp_TypeInfo_var);
		GetIndexValueUInt16_000001A3U24BurstDirectCall_Initialize_mDFB5B933507086320255C41CB4C12F62BB1822F8(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueInt16_000001A4U24BurstDirectCall_t8D303ED3F5891E2E21B18F3ACDB9CB56E6360635_il2cpp_TypeInfo_var);
		GetIndexValueInt16_000001A4U24BurstDirectCall_Initialize_m5A801E2A37DC62C0BB90CA0C4B8D28D1E1194943(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetIndexValueUInt32_000001A5U24BurstDirectCall_t282982610966C52734A48C6A8377B2B6E35927A0_il2cpp_TypeInfo_var);
		GetIndexValueUInt32_000001A5U24BurstDirectCall_Initialize_m5B8FBABA91D9800F1D008C63540F24DB439EEDD8(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Float_000001A6U24BurstDirectCall_t14BF58AC0ECB0C7DE23C9216B949DE5BCD3907BB_il2cpp_TypeInfo_var);
		GetFloat3Float_000001A6U24BurstDirectCall_Initialize_mD0055A4C69846DAE1FBDD51A7B12C48FB3068AA4(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8_000001A7U24BurstDirectCall_tF97380543561B4D9C99B48D8D69ED6215AFE560D_il2cpp_TypeInfo_var);
		GetFloat3Int8_000001A7U24BurstDirectCall_Initialize_mCAF5DB7D4D1D9F80C1076F2D375A5CA7546147AB(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8_000001A8U24BurstDirectCall_t0D24B47000507D95281789DB3051C5E3B1055515_il2cpp_TypeInfo_var);
		GetFloat3UInt8_000001A8U24BurstDirectCall_Initialize_m7F2C171490704A9DD9129C07D851A8A21553ECDC(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16_000001A9U24BurstDirectCall_t6B0AB12AC9BB400886F24537BCAD59C989C767CD_il2cpp_TypeInfo_var);
		GetFloat3Int16_000001A9U24BurstDirectCall_Initialize_m0BC9B406238D322CE149C199B41D1D25FD6BDE9C(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16_000001AAU24BurstDirectCall_t7B06B75E45768D3BB72224D95DE05AB7119BEDA2_il2cpp_TypeInfo_var);
		GetFloat3UInt16_000001AAU24BurstDirectCall_Initialize_m8359D13C972F835911895C28C9E9DA45C5FF157D(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32_000001ABU24BurstDirectCall_t1F6D8DD4F3BCCE0886AF0E6458B3B68B2187B01A_il2cpp_TypeInfo_var);
		GetFloat3UInt32_000001ABU24BurstDirectCall_Initialize_mF82A9917C93F9FE9DC0EA4A12397401F53BD827B(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int8Normalized_000001ACU24BurstDirectCall_t628B43CEAE767FE8F26A900B6F0AF79ECE8A1373_il2cpp_TypeInfo_var);
		GetFloat3Int8Normalized_000001ACU24BurstDirectCall_Initialize_m2CB278F140952AC5D6BA779FA29AF0FF501AACD5(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_t2FD73213053177C4493BEBE89377050447940CF7_il2cpp_TypeInfo_var);
		GetFloat3UInt8Normalized_000001ADU24BurstDirectCall_Initialize_mDDCA02B8C08369EF7572E8C71FBE6F54AE1DCF0F(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3Int16Normalized_000001AEU24BurstDirectCall_tFCFC9935D450BA98A874037ECC2D9ADAC996742B_il2cpp_TypeInfo_var);
		GetFloat3Int16Normalized_000001AEU24BurstDirectCall_Initialize_m6A817DEAD0B77258737388666245D05899A7B703(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_tA510DD8BA77AB5895061E7B6752721815F561557_il2cpp_TypeInfo_var);
		GetFloat3UInt16Normalized_000001AFU24BurstDirectCall_Initialize_m996DD69DE7A464C218AB812CB92AB77F4A157A57(NULL);
		il2cpp_codegen_runtime_class_init_inline(GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_tB9C3C3CAEDC1B51358A9EFF00F004DF87E925FFF_il2cpp_TypeInfo_var);
		GetFloat3UInt32Normalized_000001B0U24BurstDirectCall_Initialize_m1B36E268BF18FA6CFF96FAF87BA46B78FEAF7D2B(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueUInt8U24BurstManaged_mB3AB9E5310F00AFF81CA6E6DD9AB32AEDDBF04C9_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return *((byte*)baseAddress+index);
		void* L_0 = ___0_baseAddress;
		int32_t L_1 = ___1_index;
		int32_t L_2 = *((uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueInt8U24BurstManaged_m50CD16F43B73014103340837AA77E7C49FFDE20D_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return *(((sbyte*)baseAddress)+index);
		void* L_0 = ___0_baseAddress;
		int32_t L_1 = ___1_index;
		int32_t L_2 = *((int8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueUInt16U24BurstManaged_mBD5660235E823587085B3F981CDA91375C03A068_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return *(((ushort*)baseAddress)+index);
		void* L_0 = ___0_baseAddress;
		int32_t L_1 = ___1_index;
		int32_t L_2 = *((uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 2)))));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueInt16U24BurstManaged_m0CE8CC798C33CE005254E4D660B8B23943EEC2BE_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return *(((short*)baseAddress)+index);
		void* L_0 = ___0_baseAddress;
		int32_t L_1 = ___1_index;
		int32_t L_2 = *((int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 2)))));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CachedFunction_GetIndexValueUInt32U24BurstManaged_m3CDEBE0B843A44B8D10C6D979E059FE59BC3C58D_inline (void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// return (int) *(((uint*)baseAddress)+index);
		void* L_0 = ___0_baseAddress;
		int32_t L_1 = ___1_index;
		int32_t L_2 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3FloatU24BurstManaged_m95BCAC5D9747E71DA4C5C901B25B8276E3712AFE_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(float*)src;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		float L_2 = *((float*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((-L_2));
		// destination->y = *((float*)src+1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		float L_5 = *((float*)((void*)il2cpp_codegen_add((intptr_t)L_4, 4)));
		NullCheck(L_3);
		L_3->___y_1 = L_5;
		// destination->z = *((float*)src+2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		float L_8 = *((float*)((void*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		NullCheck(L_6);
		L_6->___z_2 = L_8;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int8U24BurstManaged_mD36309CBCC37B1AD3F49898404094DFCE15DEA17_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(sbyte*)src;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((int8_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)((-L_2)));
		// destination->y = *((sbyte*)src+1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((int8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 1)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)L_5);
		// destination->z = *((sbyte*)src+2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((int8_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, 2)));
		NullCheck(L_6);
		L_6->___z_2 = ((float)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt8U24BurstManaged_mE2888393E3A48F813A00903F4577CAAAD2B4B046_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(byte*)src;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((uint8_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)((-L_2)));
		// destination->y = *((byte*)src+1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 1)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)L_5);
		// destination->z = *((byte*)src+2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, 2)));
		NullCheck(L_6);
		L_6->___z_2 = ((float)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int16U24BurstManaged_m119F748750D7A61303D053FC854CC8F159AA26DF_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(short*)src;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((int16_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)((-L_2)));
		// destination->y = *((short*)src+1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 2)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)L_5);
		// destination->z = *((short*)src+2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		NullCheck(L_6);
		L_6->___z_2 = ((float)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt16U24BurstManaged_mB73D21112DC772B26F9AE2A5A4E8D5BA51B31BCA_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(ushort*)src;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((uint16_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)((-L_2)));
		// destination->y = *((ushort*)src+1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 2)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)L_5);
		// destination->z = *((ushort*)src+2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		NullCheck(L_6);
		L_6->___z_2 = ((float)L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt32U24BurstManaged_mEAD60DFF926B7F2632E524750CCABF0814C26970_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(uint*)src;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((uint32_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)((-((int64_t)(uint64_t)((uint32_t)L_2)))));
		// destination->y = *((uint*)src+1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 4)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)((double)(uint32_t)L_5));
		// destination->z = *((uint*)src+2);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		NullCheck(L_6);
		L_6->___z_2 = ((float)((double)(uint32_t)L_8));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int8NormalizedU24BurstManaged_m7FABBECE34DE58DFF9706C72E52617C7B4687C1F_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -max(*(sbyte*)src/127f,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((int8_t*)L_1);
		float L_3;
		L_3 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_2)/(127.0f))), (-1.0f), NULL);
		NullCheck(L_0);
		L_0->___x_0 = ((-L_3));
		// destination->y = max(*((sbyte*)src+1)/127f,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_4 = ___0_destination;
		void* L_5 = ___1_src;
		int32_t L_6 = *((int8_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, 1)));
		float L_7;
		L_7 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_6)/(127.0f))), (-1.0f), NULL);
		NullCheck(L_4);
		L_4->___y_1 = L_7;
		// destination->z = max(*((sbyte*)src+2)/127f,-1);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_8 = ___0_destination;
		void* L_9 = ___1_src;
		int32_t L_10 = *((int8_t*)((void*)il2cpp_codegen_add((intptr_t)L_9, 2)));
		float L_11;
		L_11 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_10)/(127.0f))), (-1.0f), NULL);
		NullCheck(L_8);
		L_8->___z_2 = L_11;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt8NormalizedU24BurstManaged_mBD3F74A1F0123E2D46AC5C7580A44A11C3ED618B_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(byte*)src / 255f;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((uint8_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)(((float)((-L_2)))/(255.0f)));
		// destination->y = *((byte*)src+1) / 255f;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 1)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)(((float)L_5)/(255.0f)));
		// destination->z = *((byte*)src+2) / 255f;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, 2)));
		NullCheck(L_6);
		L_6->___z_2 = ((float)(((float)L_8)/(255.0f)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3Int16NormalizedU24BurstManaged_m385B37EAF6D112DDCA5036C45E37EF0C50367E6C_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -max( *(short*)src / (float) short.MaxValue, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((int16_t*)L_1);
		float L_3;
		L_3 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_2)/(32767.0f))), (-1.0f), NULL);
		NullCheck(L_0);
		L_0->___x_0 = ((-L_3));
		// destination->y = max( *((short*)src+1) / (float) short.MaxValue, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_4 = ___0_destination;
		void* L_5 = ___1_src;
		int32_t L_6 = *((int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, 2)));
		float L_7;
		L_7 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_6)/(32767.0f))), (-1.0f), NULL);
		NullCheck(L_4);
		L_4->___y_1 = L_7;
		// destination->z = max( *((short*)src+2) / (float) short.MaxValue, -1f);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_8 = ___0_destination;
		void* L_9 = ___1_src;
		int32_t L_10 = *((int16_t*)((void*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		float L_11;
		L_11 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(((float)(((float)L_10)/(32767.0f))), (-1.0f), NULL);
		NullCheck(L_8);
		L_8->___z_2 = L_11;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt16NormalizedU24BurstManaged_m313F6D7D40A80C1D507594AF8CAD4388DA6CECE4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(ushort*)src / (float) ushort.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((uint16_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)(((float)((-L_2)))/(65535.0f)));
		// destination->y = *((ushort*)src+1) / (float) ushort.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 2)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)(((float)L_5)/(65535.0f)));
		// destination->z = *((ushort*)src+2) / (float) ushort.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		NullCheck(L_6);
		L_6->___z_2 = ((float)(((float)L_8)/(65535.0f)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CachedFunction_GetFloat3UInt32NormalizedU24BurstManaged_mBA5D7C1E4DCF3B337184DEF612725D829C7423ED_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	{
		// destination->x = -*(uint*)src / (float) uint.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_0 = ___0_destination;
		void* L_1 = ___1_src;
		int32_t L_2 = *((uint32_t*)L_1);
		NullCheck(L_0);
		L_0->___x_0 = ((float)(((float)((-((int64_t)(uint64_t)((uint32_t)L_2)))))/(4.2949673E+09f)));
		// destination->y = *((uint*)src+1) / (float) uint.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_3 = ___0_destination;
		void* L_4 = ___1_src;
		int32_t L_5 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, 4)));
		NullCheck(L_3);
		L_3->___y_1 = ((float)(((float)((double)(uint32_t)L_5))/(4.2949673E+09f)));
		// destination->z = *((uint*)src+2) / (float) uint.MaxValue;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* L_6 = ___0_destination;
		void* L_7 = ___1_src;
		int32_t L_8 = *((uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		NullCheck(L_6);
		L_6->___z_2 = ((float)(((float)((double)(uint32_t)L_8))/(4.2949673E+09f)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void int3__ctor_mE478318DE4CA648614FEF2C1DD438C0455284BF2_inline (int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		int32_t L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Division_m4AA175CD0895AA1A50F5A73B54722CA53876EE6A_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float2 operator / (float2 lhs, float rhs) { return new float2 (lhs.x / rhs, lhs.y / rhs); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_rhs;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_3 = ___0_lhs;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_rhs;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6;
		memset((&L_6), 0, sizeof(L_6));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float2_op_Implicit_mAC15BD9FDBC817D35ADBA2E566B0F52D182CD9A9_inline (float ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float2(float v) { return new float2(v); }
		float L_0 = ___0_v;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1;
		memset((&L_1), 0, sizeof(L_1));
		float2__ctor_m037D046BD70923231612C90B14E364EB2BB15BD7_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA math_max_mFD64D6399932C2D91018BA7895C06FD055E1361B_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_x, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float2 max(float2 x, float2 y) { return new float2(max(x.x, y.x), max(x.y, y.y)); }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_1, L_3, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___0_x;
		float L_6 = L_5.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_7 = ___1_y;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_6, L_8, NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_10;
		memset((&L_10), 0, sizeof(L_10));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m2A21052EF06884F609D1CDA9A2C2ED84A7584345_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_xyz, float ___1_w, const RuntimeMethod* method) 
{
	{
		// this.x = xyz.x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_xyz;
		float L_1 = L_0.___x_0;
		__this->___x_0 = L_1;
		// this.y = xyz.y;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___0_xyz;
		float L_3 = L_2.___y_1;
		__this->___y_1 = L_3;
		// this.z = xyz.z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_xyz;
		float L_5 = L_4.___z_2;
		__this->___z_2 = L_5;
		// this.w = w;
		float L_6 = ___1_w;
		__this->___w_3 = L_6;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Division_m59FB3E510B03034B8834D7D724561FB9EC4DBB81_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float3 operator / (float3 lhs, float rhs) { return new float3 (lhs.x / rhs, lhs.y / rhs, lhs.z / rhs); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___0_lhs;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___0_lhs;
		float L_7 = L_6.___z_2;
		float L_8 = ___1_rhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetIndexDelegate_Invoke_m6C9994C288C8CCA276A0A99084C6C51101B93114_inline (GetIndexDelegate_t018DD073D42EFDFCA59F790E651B0CBF43A10933* __this, void* ___0_baseAddress, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, void*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_baseAddress, ___1_index, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetFloat3Delegate_Invoke_mDE2C9669A16C8D0572A2A964BE5F34F60DC3D2A1_inline (GetFloat3Delegate_t30A5BF2A93C4CEAE7A07A2621B18D535D8B9F72A* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* ___0_destination, void* ___1_src, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, void*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_destination, ___1_src, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Division_mA82993BB826C4799764D5B0E543D0D7776F4F8A2_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_lhs, float ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator / (float4 lhs, float rhs) { return new float4 (lhs.x / rhs, lhs.y / rhs, lhs.z / rhs, lhs.w / rhs); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_rhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___0_lhs;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_rhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___0_lhs;
		float L_7 = L_6.___z_2;
		float L_8 = ___1_rhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9 = ___0_lhs;
		float L_10 = L_9.___w_3;
		float L_11 = ___1_rhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_m3DF77A1795E1232FCE3A62302FF23601F8C042DD_inline (float ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float4(float v) { return new float4(v); }
		float L_0 = ___0_v;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float4__ctor_m103F8D391212FB2B0F01D09F7E9CCE4BDF0C7839_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_max_m03D4AA9B67EC6003C76DB09B28B9F45D1AFBBB66_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float4 max(float4 x, float4 y) { return new float4(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z), max(x.w, y.w)); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_1, L_3, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___0_x;
		float L_6 = L_5.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___1_y;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_6, L_8, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___0_x;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___1_y;
		float L_13 = L_12.___z_2;
		float L_14;
		L_14 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_11, L_13, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15 = ___0_x;
		float L_16 = L_15.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17 = ___1_y;
		float L_18 = L_17.___w_3;
		float L_19;
		L_19 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_16, L_18, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20;
		memset((&L_20), 0, sizeof(L_20));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_20), L_4, L_9, L_14, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_normalize_m598E318DE7A638AE5FE8A35528AC6A90B6E909D6_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float4 normalize(float4 x) { return rsqrt(dot(x, x)) * x; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___0_x;
		float L_2;
		L_2 = math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_rsqrt_mC67B3430EAADA7C5347E87B23859C569BC010E72_inline(L_2, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5;
		L_5 = float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline(L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m495864276F56A9757CE235005D9908DBB47D8031_inline (float ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float3(float v) { return new float3(v); }
		float L_0 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float3__ctor_m777F109CF7EBEEC78FAE5DBE52E4498CFA65E8C4_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_max_m247D41258606F80861E72309300DF6A3F8B50AE4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float3 max(float3 x, float3 y) { return new float3(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z)); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_1, L_3, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___0_x;
		float L_6 = L_5.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___1_y;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_6, L_8, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___0_x;
		float L_11 = L_10.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12 = ___1_y;
		float L_13 = L_12.___z_2;
		float L_14;
		L_14 = math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline(L_11, L_13, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
		memset((&L_15), 0, sizeof(L_15));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_normalize_mF02431EFC9E3212E0245EFF5C13BC9DC34512399_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float3 normalize(float3 x) { return rsqrt(dot(x, x)) * x; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___0_x;
		float L_2;
		L_2 = math_dot_mE193D8880350D74CC8D63A0D53CDC5902F844AAD_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_rsqrt_mC67B3430EAADA7C5347E87B23859C569BC010E72_inline(L_2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline(L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_m0E52B9E5BF532737C8B469DA33E08C16CC53AEB3_inline (int32_t ___0_v, const RuntimeMethod* method) 
{
	{
		// public static implicit operator float3(int v) { return new float3(v); }
		int32_t L_0 = ___0_v;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		memset((&L_1), 0, sizeof(L_1));
		float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void uint4__ctor_m59B6A219A0285C60FCF2977679BF89C72B502008_inline (uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9* __this, uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, uint32_t ___3_w, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		uint32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		// this.y = y;
		uint32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		// this.z = z;
		uint32_t L_2 = ___2_z;
		__this->___z_2 = L_2;
		// this.w = w;
		uint32_t L_3 = ___3_w;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_abs_m3D9508B36B045BFE7B89C6C69AD34596264E4FE1_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float abs(float x) { return asfloat(asuint(x) & 0x7FFFFFFF); }
		float L_0 = ___0_x;
		uint32_t L_1;
		L_1 = math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline(L_0, NULL);
		float L_2;
		L_2 = math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline(((int32_t)((int32_t)L_1&((int32_t)2147483647LL))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_max_m4B454A91AE8827997609E74C4C24036BBD3CC496_inline (float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float max(float x, float y) { return float.IsNaN(y) || x > y ? x : y; }
		float L_0 = ___1_y;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___0_x;
		float L_3 = ___1_y;
		if ((((float)L_2) > ((float)L_3)))
		{
			goto IL_000e;
		}
	}
	{
		float L_4 = ___1_y;
		return L_4;
	}

IL_000e:
	{
		float L_5 = ___0_x;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m037D046BD70923231612C90B14E364EB2BB15BD7_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		float L_0 = ___0_v;
		__this->___x_0 = L_0;
		// this.y = v;
		float L_1 = ___0_v;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_m103F8D391212FB2B0F01D09F7E9CCE4BDF0C7839_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		float L_0 = ___0_v;
		__this->___x_0 = L_0;
		// this.y = v;
		float L_1 = ___0_v;
		__this->___y_1 = L_1;
		// this.z = v;
		float L_2 = ___0_v;
		__this->___z_2 = L_2;
		// this.w = v;
		float L_3 = ___0_v;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_m20F2285F7227DC308D9CF2DCB8EAAD3E774501D4_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_x, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float dot(float4 x, float4 y) { return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___0_x;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___1_y;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___0_x;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_y;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___0_x;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___1_y;
		float L_15 = L_14.___w_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rsqrt_mC67B3430EAADA7C5347E87B23859C569BC010E72_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float rsqrt(float x) { return 1.0f / sqrt(x); }
		float L_0 = ___0_x;
		float L_1;
		L_1 = math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline(L_0, NULL);
		return ((float)((1.0f)/L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m94C65B5751B7969CD82F15DADB8A6F182BFBD581_inline (float ___0_lhs, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float lhs, float4 rhs) { return new float4 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z, lhs * rhs.w); }
		float L_0 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___1_rhs;
		float L_2 = L_1.___x_0;
		float L_3 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___1_rhs;
		float L_5 = L_4.___y_1;
		float L_6 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___1_rhs;
		float L_8 = L_7.___z_2;
		float L_9 = ___0_lhs;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___1_rhs;
		float L_11 = L_10.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m777F109CF7EBEEC78FAE5DBE52E4498CFA65E8C4_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		float L_0 = ___0_v;
		__this->___x_0 = L_0;
		// this.y = v;
		float L_1 = ___0_v;
		__this->___y_1 = L_1;
		// this.z = v;
		float L_2 = ___0_v;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mE193D8880350D74CC8D63A0D53CDC5902F844AAD_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_x, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_y, const RuntimeMethod* method) 
{
	{
		// public static float dot(float3 x, float3 y) { return x.x * y.x + x.y * y.y + x.z * y.z; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___0_x;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___1_y;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___0_x;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___1_y;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___0_x;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___1_y;
		float L_11 = L_10.___z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_m38F52B61F8E5636955A1A6DF3A75BD0724148350_inline (float ___0_lhs, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float lhs, float3 rhs) { return new float3 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z); }
		float L_0 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___1_rhs;
		float L_2 = L_1.___x_0;
		float L_3 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___1_rhs;
		float L_5 = L_4.___y_1;
		float L_6 = ___0_lhs;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___1_rhs;
		float L_8 = L_7.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_m131368AA87C134F64DD0B5B8684C1345BEC6EE59_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, int32_t ___0_v, const RuntimeMethod* method) 
{
	{
		// this.x = v;
		int32_t L_0 = ___0_v;
		__this->___x_0 = ((float)L_0);
		// this.y = v;
		int32_t L_1 = ___0_v;
		__this->___y_1 = ((float)L_1);
		// this.z = v;
		int32_t L_2 = ___0_v;
		__this->___z_2 = ((float)L_2);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_asuint_m503D1ABF19E4BA615FD8AE1BF1A2E103BBED6139_inline (float ___0_x, const RuntimeMethod* method) 
{
	{
		// public static uint asuint(float x) { return (uint)asint(x); }
		float L_0 = ___0_x;
		int32_t L_1;
		L_1 = math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m20D259DAAB46464B59BD8BF5678F9D59800F70A9_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// public static float  asfloat(uint x) { return asfloat((int)x); }
		uint32_t L_0 = ___0_x;
		float L_1;
		L_1 = math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mEF31DE7BD0179009683C5D7B0C58E6571B30CF4A_inline (float ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float sqrt(float x) { return (float)System.Math.Sqrt((float)x); }
		float L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(((double)((float)L_0)));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_asint_mBDED7FE966CA65F6A8ACEAEF8FD779B1B8998288_inline (float ___0_x, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.intValue = 0;
		(&V_0)->___intValue_0 = 0;
		// u.floatValue = x;
		float L_0 = ___0_x;
		(&V_0)->___floatValue_1 = L_0;
		// return u.intValue;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		int32_t L_2 = L_1.___intValue_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_asfloat_m9FA56DE5C61FCEF3DCD0675252D40DFD9C9B712F_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// u.floatValue = 0;
		(&V_0)->___floatValue_1 = (0.0f);
		// u.intValue = x;
		int32_t L_0 = ___0_x;
		(&V_0)->___intValue_0 = L_0;
		// return u.floatValue;
		IntFloatUnion_t549256A9DD754252DD18383D9CE7EA55EBBD6D96 L_1 = V_0;
		float L_2 = L_1.___floatValue_1;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
