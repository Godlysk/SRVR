#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
struct MetaQuestFeature_t8E2B25DD2DCD3C6B43B6AA0B69C4504566363C62;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t844D4EAA12ED4DF848BAB88FBBBDFCA5C9286887 
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_t45083238226E37FD31745CC48711F642E425F620 
{
	// System.String UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::visibleName
	String_t* ___visibleName_0;
	// System.String UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::manifestName
	String_t* ___manifestName_1;
	// System.Boolean UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::enabled
	bool ___enabled_2;
	// System.Boolean UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::active
	bool ___active_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_pinvoke
{
	char* ___visibleName_0;
	char* ___manifestName_1;
	int32_t ___enabled_2;
	int32_t ___active_3;
};
// Native definition for COM marshalling of UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_com
{
	Il2CppChar* ___visibleName_0;
	Il2CppChar* ___manifestName_1;
	int32_t ___enabled_2;
	int32_t ___active_3;
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

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
struct MetaQuestFeature_t8E2B25DD2DCD3C6B43B6AA0B69C4504566363C62  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Void

// System.Void

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaQuestFeature__ctor_m5252F2B3583ED0398B5E04ECE2892C240D4F4E63 (MetaQuestFeature_t8E2B25DD2DCD3C6B43B6AA0B69C4504566363C62* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshal_pinvoke(const TargetDevice_t45083238226E37FD31745CC48711F642E425F620& unmarshaled, TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_pinvoke& marshaled)
{
	marshaled.___visibleName_0 = il2cpp_codegen_marshal_string(unmarshaled.___visibleName_0);
	marshaled.___manifestName_1 = il2cpp_codegen_marshal_string(unmarshaled.___manifestName_1);
	marshaled.___enabled_2 = static_cast<int32_t>(unmarshaled.___enabled_2);
	marshaled.___active_3 = static_cast<int32_t>(unmarshaled.___active_3);
}
IL2CPP_EXTERN_C void TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshal_pinvoke_back(const TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_pinvoke& marshaled, TargetDevice_t45083238226E37FD31745CC48711F642E425F620& unmarshaled)
{
	unmarshaled.___visibleName_0 = il2cpp_codegen_marshal_string_result(marshaled.___visibleName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___visibleName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___visibleName_0));
	unmarshaled.___manifestName_1 = il2cpp_codegen_marshal_string_result(marshaled.___manifestName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___manifestName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___manifestName_1));
	bool unmarshaledenabled_temp_2 = false;
	unmarshaledenabled_temp_2 = static_cast<bool>(marshaled.___enabled_2);
	unmarshaled.___enabled_2 = unmarshaledenabled_temp_2;
	bool unmarshaledactive_temp_3 = false;
	unmarshaledactive_temp_3 = static_cast<bool>(marshaled.___active_3);
	unmarshaled.___active_3 = unmarshaledactive_temp_3;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshal_pinvoke_cleanup(TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___visibleName_0);
	marshaled.___visibleName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___manifestName_1);
	marshaled.___manifestName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshal_com(const TargetDevice_t45083238226E37FD31745CC48711F642E425F620& unmarshaled, TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_com& marshaled)
{
	marshaled.___visibleName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___visibleName_0);
	marshaled.___manifestName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___manifestName_1);
	marshaled.___enabled_2 = static_cast<int32_t>(unmarshaled.___enabled_2);
	marshaled.___active_3 = static_cast<int32_t>(unmarshaled.___active_3);
}
IL2CPP_EXTERN_C void TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshal_com_back(const TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_com& marshaled, TargetDevice_t45083238226E37FD31745CC48711F642E425F620& unmarshaled)
{
	unmarshaled.___visibleName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___visibleName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___visibleName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___visibleName_0));
	unmarshaled.___manifestName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___manifestName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___manifestName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___manifestName_1));
	bool unmarshaledenabled_temp_2 = false;
	unmarshaledenabled_temp_2 = static_cast<bool>(marshaled.___enabled_2);
	unmarshaled.___enabled_2 = unmarshaledenabled_temp_2;
	bool unmarshaledactive_temp_3 = false;
	unmarshaledactive_temp_3 = static_cast<bool>(marshaled.___active_3);
	unmarshaled.___active_3 = unmarshaledactive_temp_3;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshal_com_cleanup(TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___visibleName_0);
	marshaled.___visibleName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___manifestName_1);
	marshaled.___manifestName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
