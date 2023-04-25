#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityNative.Toasts.IUnityNativeToasts
struct IUnityNativeToasts_t49E6047405E4687E324C8F523ADB6B4F466E6A0D;
// UnityNative.Toasts.IUnityNativeToastsAdapter
struct IUnityNativeToastsAdapter_tD7FE6D0F666A3AD182FF97FF1A04D9057716DE6F;
// UnityNative.Toasts.IosUnityNativeToastsAdapter
struct IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509;
// UnityNative.Toasts.NullUnityNativeToastsAdapter
struct NullUnityNativeToastsAdapter_tB9781A2710E2C4754273042A823499E4219EBB74;
// System.String
struct String_t;
// UnityNative.Toasts.UnityNativeToasts
struct UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E;

IL2CPP_EXTERN_C RuntimeClass* IUnityNativeToastsAdapter_tD7FE6D0F666A3AD182FF97FF1A04D9057716DE6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF8BB826FF4FACC316CF01828EDE9D6D2ADB6204C 
{
};
struct Il2CppArrayBounds;

// UnityNative.Toasts.IosUnityNativeToastsAdapter
struct IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509  : public RuntimeObject
{
};

// UnityNative.Toasts.NullUnityNativeToastsAdapter
struct NullUnityNativeToastsAdapter_tB9781A2710E2C4754273042A823499E4219EBB74  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityNative.Toasts.UnityNativeToasts
struct UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E  : public RuntimeObject
{
	// UnityNative.Toasts.IUnityNativeToastsAdapter UnityNative.Toasts.UnityNativeToasts::adapter
	RuntimeObject* ___adapter_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowLongToast_mA1C33F8C16B309FDB657AD9AEC376B4C44024D18 (String_t* ___toastText0, const RuntimeMethod* method) ;
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m09B4C96B8F738E494E88CAF5D53BA7C82396E952 (String_t* ___toastText0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter__ctor_m5DF0ED586AA5EBEB75260DC69053B2A094D6E0E7 (IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509* __this, const RuntimeMethod* method) ;
// System.Void UnityNative.Toasts.UnityNativeToasts::.ctor(UnityNative.Toasts.IUnityNativeToastsAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts__ctor_m7EB02E35848C0FFF292D77F3C293F31D6A63710B (UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E* __this, RuntimeObject* ___adapter0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL UnityNative_Toasts_ShowLongToast(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityNative_Toasts_ShowShortToast(char*);
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
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowLongToast_mA1C33F8C16B309FDB657AD9AEC376B4C44024D18 (String_t* ___toastText0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___toastText0' to native representation
	char* ____toastText0_marshaled = NULL;
	____toastText0_marshaled = il2cpp_codegen_marshal_string(___toastText0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityNative_Toasts_ShowLongToast)(____toastText0_marshaled);

	// Marshaling cleanup of parameter '___toastText0' native representation
	il2cpp_codegen_marshal_free(____toastText0_marshaled);
	____toastText0_marshaled = NULL;

}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::UnityNative_Toasts_ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m09B4C96B8F738E494E88CAF5D53BA7C82396E952 (String_t* ___toastText0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___toastText0' to native representation
	char* ____toastText0_marshaled = NULL;
	____toastText0_marshaled = il2cpp_codegen_marshal_string(___toastText0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityNative_Toasts_ShowShortToast)(____toastText0_marshaled);

	// Marshaling cleanup of parameter '___toastText0' native representation
	il2cpp_codegen_marshal_free(____toastText0_marshaled);
	____toastText0_marshaled = NULL;

}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_ShowLongToast_mBECD6902A005C61FEC4DE78897E348798FFA382A (IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509* __this, String_t* ___toastText0, const RuntimeMethod* method) 
{
	{
		// UnityNative_Toasts_ShowLongToast(toastText);
		String_t* L_0 = ___toastText0;
		IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowLongToast_mA1C33F8C16B309FDB657AD9AEC376B4C44024D18(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter_ShowShortToast_m488A759AD162CCE078DF238F9597520D9C8D5C2F (IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509* __this, String_t* ___toastText0, const RuntimeMethod* method) 
{
	{
		// UnityNative_Toasts_ShowShortToast(toastText);
		String_t* L_0 = ___toastText0;
		IosUnityNativeToastsAdapter_UnityNative_Toasts_ShowShortToast_m09B4C96B8F738E494E88CAF5D53BA7C82396E952(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.IosUnityNativeToastsAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosUnityNativeToastsAdapter__ctor_m5DF0ED586AA5EBEB75260DC69053B2A094D6E0E7 (IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509* __this, const RuntimeMethod* method) 
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
// System.Void UnityNative.Toasts.NullUnityNativeToastsAdapter::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityNativeToastsAdapter_ShowLongToast_mDDE2CA1286AA78E346F258CD2F76AD3C907C0620 (NullUnityNativeToastsAdapter_tB9781A2710E2C4754273042A823499E4219EBB74* __this, String_t* ___toastText0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.NullUnityNativeToastsAdapter::ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityNativeToastsAdapter_ShowShortToast_mCFB38E5C04D0AECAC0E96462C22FC5DA0AD41D8D (NullUnityNativeToastsAdapter_tB9781A2710E2C4754273042A823499E4219EBB74* __this, String_t* ___toastText0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.NullUnityNativeToastsAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityNativeToastsAdapter__ctor_m5B192025C70E06437A1EEC2DEA240DECD1FFFE1A (NullUnityNativeToastsAdapter_tB9781A2710E2C4754273042A823499E4219EBB74* __this, const RuntimeMethod* method) 
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
// System.Void UnityNative.Toasts.UnityNativeToasts::.ctor(UnityNative.Toasts.IUnityNativeToastsAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts__ctor_m7EB02E35848C0FFF292D77F3C293F31D6A63710B (UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E* __this, RuntimeObject* ___adapter0, const RuntimeMethod* method) 
{
	{
		// public UnityNativeToasts(IUnityNativeToastsAdapter adapter)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.adapter = adapter;
		RuntimeObject* L_0 = ___adapter0;
		__this->___adapter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adapter_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.UnityNativeToasts::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts_ShowLongToast_mDD0E5B58360F9E69FAEC1EB10982EFE018DD5453 (UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E* __this, String_t* ___toastText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityNativeToastsAdapter_tD7FE6D0F666A3AD182FF97FF1A04D9057716DE6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adapter.ShowLongToast(toastText);
		RuntimeObject* L_0 = __this->___adapter_0;
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityNative.Toasts.IUnityNativeToastsAdapter::ShowLongToast(System.String) */, IUnityNativeToastsAdapter_tD7FE6D0F666A3AD182FF97FF1A04D9057716DE6F_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.UnityNativeToasts::ShowShortToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToasts_ShowShortToast_mCDEAA314C1E6AD31965FB6C3F20FC850E6B6C1C9 (UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E* __this, String_t* ___toastText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityNativeToastsAdapter_tD7FE6D0F666A3AD182FF97FF1A04D9057716DE6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adapter.ShowShortToast(toastText);
		RuntimeObject* L_0 = __this->___adapter_0;
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityNative.Toasts.IUnityNativeToastsAdapter::ShowShortToast(System.String) */, IUnityNativeToastsAdapter_tD7FE6D0F666A3AD182FF97FF1A04D9057716DE6F_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// UnityNative.Toasts.IUnityNativeToasts UnityNative.Toasts.UnityNativeToasts::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityNativeToasts_Create_m2DF77AE83EBDC04F4D654337573AA14097521D94 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityNativeToasts(new IosUnityNativeToastsAdapter());
		IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509* L_0 = (IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509*)il2cpp_codegen_object_new(IosUnityNativeToastsAdapter_tFB295EF6DF75E50A2B15C7EB889D9BCA95CD2509_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IosUnityNativeToastsAdapter__ctor_m5DF0ED586AA5EBEB75260DC69053B2A094D6E0E7(L_0, NULL);
		UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E* L_1 = (UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E*)il2cpp_codegen_object_new(UnityNativeToasts_t288B24EF2A224F73C609F1044022BF1C5F78068E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityNativeToasts__ctor_m7EB02E35848C0FFF292D77F3C293F31D6A63710B(L_1, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
