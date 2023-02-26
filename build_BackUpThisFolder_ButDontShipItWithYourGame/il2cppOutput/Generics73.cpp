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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		R ret;
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// UniRx.IObservable`1<System.Object>
struct IObservable_1_t2546026F2BDB3A65782F4667E80F22E1EEF0DE95;
// UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_tA1E698DB5418637260B532836722028AED77AA35;
// UniRx.IObserver`1<System.Object>
struct IObserver_1_t7CCEA25F4EA11AAFE5EA8EBADDCC1E3CBA93BAA5;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t0769F5A976AE22001B72090856BA389A396B4886;
// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A;
// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A;
// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704;
// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43;
// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593;
// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF;
// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B;
// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506;
// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB;
// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E;
// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D;
// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E;
// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C;
// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16;
// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9;
// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7;
// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE;
// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88;
// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90;
// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82;
// UniRx.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4;
// UniRx.Operators.IZipObservable
struct IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99;
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>
struct OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
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

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipLatestObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipLatestObservable UniRx.Operators.ZipLatestObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipLatestObserver`1::index
	int32_t ___index_2;
	// T UniRx.Operators.ZipLatestObserver`1::value
	RuntimeObject* ___value_3;
};

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_t0769F5A976AE22001B72090856BA389A396B4886* ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_3;
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

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>
struct NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_4;
};

// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;
};

// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t0769F5A976AE22001B72090856BA389A396B4886  : public OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F
{
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;
};

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704  : public OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F
{
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest::parent
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`3/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// TLeft UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftValue
	RuntimeObject* ___leftValue_4;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftStarted
	bool ___leftStarted_5;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftCompleted
	bool ___leftCompleted_6;
	// TRight UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightValue
	RuntimeObject* ___rightValue_7;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightStarted
	bool ___rightStarted_8;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightCompleted
	bool ___rightCompleted_9;
};

// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB  : public OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5
{
	// UniRx.IObservable`1<T>[] UniRx.Operators.ZipLatestObservable`1::sources
	IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___sources_1;
};

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<TLeft> UniRx.Operators.ZipLatestObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.ZipLatestObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`4::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`4::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4::resultSelector
	ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* ___resultSelector_4;
};

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* ___resultSelector_5;
};

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* ___resultSelector_6;
};

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* ___resultSelector_7;
};

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// UniRx.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* ___resultSelector_8;
};

// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7  : public OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5
{
	// UniRx.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___sources_1;
};

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* ___resultSelector_4;
};

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* ___resultSelector_5;
};

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* ___resultSelector_6;
};

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* ___resultSelector_7;
};

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// UniRx.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* ___resultSelector_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
};

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t512C02E2B1102946393817FA88F3239E9B320828  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
};

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
};

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t745351DD358D96D9C7E88E6F053D214345454584  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
};

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t57557BB7D068237B9AC7C080FB9474057A754105  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q7_13;
};

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4/ZipLatest::parent
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`4/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
};

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
};

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c5_11;
};

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c6_12;
};

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c7_13;
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

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>

// UniRx.Operators.ZipLatestObserver`1<System.Object>

// UniRx.Operators.ZipLatestObserver`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1<System.Object>

// UniRx.Operators.ZipLatestObservable`1<System.Object>

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`1<System.Object>

// UniRx.Operators.ZipObservable`1<System.Object>

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.AsyncCallback

// System.AsyncCallback
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
// UniRx.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* m_Items[1];

	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_Multicast(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* currentDelegate = reinterpret_cast<ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInst(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStatic(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStaticInvoker(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_ClosedStaticInvoker(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenVirtual(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInterface(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericVirtual(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericInterface(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
// System.Void UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_mF69670742E85D9384171C8F483F69CEFD5C26AAF_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_mF7ED21067B55CB78BC72841128B2A626BB8FA9B4_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_EndInvoke_m1F92A323790668572702907C8B64C2234237E0DF_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_Multicast(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* currentDelegate = reinterpret_cast<ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInst(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStatic(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStaticInvoker(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_ClosedStaticInvoker(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenVirtual(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInterface(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericVirtual(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericInterface(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
// System.Void UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_m086A2393B53D33A65AFC359534D4D5E332DD68A9_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_m6E40B76FD573C30D0862E37EE639AF7D6251ABFA_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_EndInvoke_m65551836B16A329DCF5B628C5A3A6160A93184EE_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_Multicast(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* currentDelegate = reinterpret_cast<ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInst(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStatic(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStaticInvoker(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_ClosedStaticInvoker(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenVirtual(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInterface(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericVirtual(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericInterface(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
// System.Void UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_mAEC6ED8F01171E8DBBF133B184DECA3849749B4C_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_m406C1FB19D3FDDE2EAD92E6A173E867BB05FD4C7_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_EndInvoke_m07CB7198F1FFFC3692D4680A1EF2190C46A0D2F8_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_Multicast(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* currentDelegate = reinterpret_cast<ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInst(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStatic(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStaticInvoker(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_ClosedStaticInvoker(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenVirtual(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInterface(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericVirtual(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericInterface(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
// System.Void UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_mD5F94FFD7654A11EC4846D03CCC2C5202991B33C_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m855C9E098618DCBC4EFC6A0D719F55350A39C5E9_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_EndInvoke_mCC6EF970E43D7399990D0B2B6ACA19DD7274E7A0_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_Multicast(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* currentDelegate = reinterpret_cast<ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInst(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStatic(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStaticInvoker(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_ClosedStaticInvoker(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenVirtual(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInterface(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericVirtual(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericInterface(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
// System.Void UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m892837ADE9E3E2797529B3E153F8CA9F62190224_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m70CA3984EB18E2E74FB52F087BBF049C345B90FA_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	__d_args[6] = ___6_arg7;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_EndInvoke_m8935DD376E677AE8E72E46EBB1FC25442CBB51FA_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1<System.Object>::.ctor(UniRx.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_m48D84AD018912542DBFDE0575216A2D9BE9C9492_gshared (ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* __this, IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___0_sources, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_0 = ___0_sources;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1<System.Object>::SubscribeCore(UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_m148588453B2352C7868D7D987FB4227C0F234790_gshared (ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_2 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
// System.Void UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_m92F888932C8C9399DF08B368D811771B62F8F92E_gshared (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* G_B2_0 = NULL;
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_mC999142F052EC7C8E8E178A2038934AB2E13241C_gshared (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* L_2 = (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*, ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
// System.Void UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_mD8AEB0D35864D8DB322CD6F90C5C72CEE5F70F70_gshared (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B3_0 = NULL;
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B1_0 = NULL;
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* L_9 = ___3_resultSelector;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_m23D9455DE65F2A5018C6B37FF1CAC6F68F8F47FC_gshared (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(3, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* L_2 = (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0*, int32_t, ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, 3, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
// System.Void UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m7CE48AD0B6405612E907D0CD7A8A56A57E656C4C_gshared (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B4_0 = NULL;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B1_0 = NULL;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B2_0 = NULL;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* L_12 = ___4_resultSelector;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_mA2D05F4F6F19EDB35770A7F2CB3CA33EF6CA3B6F_gshared (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* L_2 = (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD*, int32_t, ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, 4, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
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
// System.Void UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_mFE975906F7CB99829CB82FDEED59D35F0077297B_gshared (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B5_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B1_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B2_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B3_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* L_15 = ___5_resultSelector;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_m502A786398AFF42D6B33CB85F87AC5423D0BB7F3_gshared (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* L_2 = (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB*, int32_t, ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, 5, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
// System.Void UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m2A52970E5064046F6A8DC3BC8B583662FB9282FC_gshared (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B6_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B1_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B2_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B3_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B4_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m6AF4D2CBA0D41CA7FF2E580E902DC6CB524297A8_gshared (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* L_2 = (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4*, int32_t, ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, 6, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
// System.Void UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_mE8622ADE993CA80359805BD935C606DF67BE74FE_gshared (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B7_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B1_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B2_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B3_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B4_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B5_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_mACDFD3C781990195D4D2088E705E2827534D89B7_gshared (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* L_2 = (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED*, int32_t, ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, 7, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m3F6415A5C1D586F563E0D8405A1254B8CC1E64FB_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_m911B80CE99D4CAAF779C363B905F619677CCBE4A_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.values[index] = value;
			ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_5 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
			NullCheck(L_5);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_5->___values_5;
			int32_t L_7 = (int32_t)__this->___index_1;
			RuntimeObject* L_8 = ___0_value;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
			// parent.Publish(index);
			ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_9 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
			int32_t L_10 = (int32_t)__this->___index_1;
			NullCheck(L_9);
			((  void (*) (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// }
			goto IL_004a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mD498FBE11FCCC0BFC0CAD0FB99BD8B00282C6A4F_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_5 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_m03CC29696F3B3EB170FCBA045A54C318D31D3872_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isCompleted[index] = true;
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_5 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isCompleted_7;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isCompleted[i])
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_8 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isCompleted_7;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_15 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_4;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_18 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
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
// T UniRx.Operators.ZipLatestObserver`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObserver_1_get_Value_mEAFDB34812CA4D9ED4D570359E0AD0A2F980B696_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, const RuntimeMethod* method) 
{
	{
		// public T Value { get { return value; } }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_3;
		return L_0;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_m79AD699A398980F6006371A0C33557DD6DE9BBF4_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mAF6DFAC967F55BB2B29ABA3544ECCC804E8C78DA_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// this.value = value;
			RuntimeObject* L_4 = ___0_value;
			__this->___value_3 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___value_3), (void*)L_4);
			// parent.Publish(index);
			RuntimeObject* L_5 = (RuntimeObject*)__this->___parent_1;
			int32_t L_6 = (int32_t)__this->___index_2;
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var, L_5, L_6);
			// }
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_mAD3E0BDF323C8CB7BAF71848C08DA7C8A3CDFCC1_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_m1BC3CBB3FDA54553793FA43F6E21573464156222_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
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
// System.Void UniRx.Operators.ZipObservable`1<System.Object>::.ctor(UniRx.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_mDE998B8F318CB10BB11041991AD3CB4F8FEE2F2F_gshared (ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* __this, IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___0_sources, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_0 = ___0_sources;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<System.Object>::SubscribeCore(UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_m594DDC15C748648B876D4E801B195330A78AC160_gshared (ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_2 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Zip_t0769F5A976AE22001B72090856BA389A396B4886*, ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0769F5A976AE22001B72090856BA389A396B4886*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
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
// System.Void UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_m11132C21F492E3E25725D447569159701B3F39F7_gshared (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* G_B2_0 = NULL;
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_mADBB277CBC50C12C9CEA62C0DB9668636D042AB9_gshared (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* L_2 = (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*, ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
// System.Void UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m3FEB7036A2AA22F0D3AEE118B7ED7DDC08F02F5D_gshared (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B3_0 = NULL;
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B1_0 = NULL;
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* L_9 = ___3_resultSelector;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_m39D4E079A63DBC0EF422BB60D1EE4236FF5D4B34_gshared (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* L_2 = (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361*, ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
// System.Void UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_mAE6F13E2732E5B04EB954150914622A6300090F8_gshared (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B4_0 = NULL;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B1_0 = NULL;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B2_0 = NULL;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* L_12 = ___4_resultSelector;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_mEFD90E25B7FFC2D7EDE81CF3B3BB6DE656AF6EE3_gshared (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t512C02E2B1102946393817FA88F3239E9B320828* L_2 = (Zip_t512C02E2B1102946393817FA88F3239E9B320828*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (Zip_t512C02E2B1102946393817FA88F3239E9B320828*, ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t512C02E2B1102946393817FA88F3239E9B320828*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
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
// System.Void UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_m31545CE14BF9D19EDFC043C91D2A76623298E1C9_gshared (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B5_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B1_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B2_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B3_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* L_15 = ___5_resultSelector;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_mF4805F46E21FF81CF5B3A30C4D469E1B4CE42184_gshared (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* L_2 = (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE*, ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_mB3C37C1B3B2713D243A77B1D32CC4F930F7FDAB6_gshared (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B6_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B1_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B2_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B3_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B4_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_m2E6630ED0BBCCE2E05DE22EBE64FF5C19E37315F_gshared (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t745351DD358D96D9C7E88E6F053D214345454584* L_2 = (Zip_t745351DD358D96D9C7E88E6F053D214345454584*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (Zip_t745351DD358D96D9C7E88E6F053D214345454584*, ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t745351DD358D96D9C7E88E6F053D214345454584*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m8A7B30D522F009F909F49D2409201DB7CC982DC7_gshared (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B7_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B1_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B2_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B3_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B4_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B5_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m140386176A1F3C24AE3DDFC284E692DE6DB7B6F0_gshared (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t57557BB7D068237B9AC7C080FB9474057A754105* L_2 = (Zip_t57557BB7D068237B9AC7C080FB9474057A754105*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (Zip_t57557BB7D068237B9AC7C080FB9474057A754105*, ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t57557BB7D068237B9AC7C080FB9474057A754105*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m7FAE0486AE10068593ECA20C4F186DCEFE1195D4_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, Zip_t0769F5A976AE22001B72090856BA389A396B4886* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(Zip parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_mD62AB8ECF2155A70834F14E47EA63D9024B2FF31_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.queues[index].Enqueue(value);
			Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_5 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
			NullCheck(L_5);
			Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)L_5->___queues_4;
			int32_t L_7 = (int32_t)__this->___index_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			RuntimeObject* L_10 = ___0_value;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_11 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
			int32_t L_12 = (int32_t)__this->___index_1;
			NullCheck(L_11);
			((  void (*) (Zip_t0769F5A976AE22001B72090856BA389A396B4886*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mA138AA6D064CF5D6B6DE5CD1A06E7531B0CA0B59_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_5 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_mC42839C86AD7BD2A2EEC6B85A368D89B35E25949_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isDone[index] = true;
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_5 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isDone_5;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isDone[i])
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_8 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isDone_5;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_15 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_6;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_18 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
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
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_mAE0F1A8594CEE97B519E73E38EE54DFE7E61C413_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___3_queue, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// this.queue = queue;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = ___3_queue;
		__this->___queue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_m435D7CB107DEAD0374D87FA73B6F198452512368_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// queue.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queue_3;
			RuntimeObject* L_5 = ___0_value;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			RuntimeObject* L_6 = (RuntimeObject*)__this->___parent_1;
			int32_t L_7 = (int32_t)__this->___index_2;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var, L_6, L_7);
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_m46FEDBF6A642CBE12CFB126C8E07C9E16F374F2D_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m1240D564EAAAE6B66FBF7E7B5906C52A128D37EA_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
