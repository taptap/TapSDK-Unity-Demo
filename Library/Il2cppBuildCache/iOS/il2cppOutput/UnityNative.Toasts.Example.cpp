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
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityNative.Toasts.Example.ShowLongToastButton
struct ShowLongToastButton_tFABAE4BFB5EB8877FEEFF9ED980531B6A61FC85B;
// UnityNative.Toasts.Example.ShowShortToastButton
struct ShowShortToastButton_t423458E672BCDC332F6972C379C57970111EA3C6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* IUnityNativeToasts_t49E6047405E4687E324C8F523ADB6B4F466E6A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral327EA18C656CC8C0F08CD985C3303C22B8B86F04;
IL2CPP_EXTERN_C String_t* _stringLiteral952B6B35A961ABF0C491BBA2D5176076DF54A8E7;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCC190E5EEC1591006FEE55C094B93B20BD40872C 
{
};
struct Il2CppArrayBounds;

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

// UnityNative.Toasts.Example.UnityNativeToastsHelper
struct UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF  : public RuntimeObject
{
};

struct UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_StaticFields
{
	// UnityNative.Toasts.IUnityNativeToasts UnityNative.Toasts.Example.UnityNativeToastsHelper::unityNativeToasts
	RuntimeObject* ___unityNativeToasts_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityNative.Toasts.Example.ShowLongToastButton
struct ShowLongToastButton_tFABAE4BFB5EB8877FEEFF9ED980531B6A61FC85B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityNative.Toasts.Example.ShowLongToastButton::toastText
	String_t* ___toastText_4;
};

// UnityNative.Toasts.Example.ShowShortToastButton
struct ShowShortToastButton_t423458E672BCDC332F6972C379C57970111EA3C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityNative.Toasts.Example.ShowShortToastButton::toastText
	String_t* ___toastText_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowLongToast_m93FAC872E015C0D7DF1CC172FE8EA795DEDBE887 (String_t* ___toastText0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowShortText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowShortText_m3B959092C8A132E49C5AABEAF4BDBF8E27F7E516 (String_t* ___toastText0, const RuntimeMethod* method) ;
// UnityNative.Toasts.IUnityNativeToasts UnityNative.Toasts.UnityNativeToasts::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityNativeToasts_Create_m2DF77AE83EBDC04F4D654337573AA14097521D94 (const RuntimeMethod* method) ;
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
// System.Void UnityNative.Toasts.Example.ShowLongToastButton::ShowLongToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLongToastButton_ShowLongToast_mF6DE4F5DFA12CD5BABA637A236E8629D74786BE0 (ShowLongToastButton_tFABAE4BFB5EB8877FEEFF9ED980531B6A61FC85B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityNativeToastsHelper.ShowLongToast(toastText);
		String_t* L_0 = __this->___toastText_4;
		il2cpp_codegen_runtime_class_init_inline(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		UnityNativeToastsHelper_ShowLongToast_m93FAC872E015C0D7DF1CC172FE8EA795DEDBE887(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.ShowLongToastButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowLongToastButton__ctor_mBAA07C3099BFEBFF4D4AAC363C279774F8BFDEE2 (ShowLongToastButton_tFABAE4BFB5EB8877FEEFF9ED980531B6A61FC85B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952B6B35A961ABF0C491BBA2D5176076DF54A8E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string toastText = "This is an example of a long toast text";
		__this->___toastText_4 = _stringLiteral952B6B35A961ABF0C491BBA2D5176076DF54A8E7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toastText_4), (void*)_stringLiteral952B6B35A961ABF0C491BBA2D5176076DF54A8E7);
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
// System.Void UnityNative.Toasts.Example.ShowShortToastButton::ShowShortToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowShortToastButton_ShowShortToast_mD10A86A71CF6EB4F2CC7F22CA59E7B64E78A876C (ShowShortToastButton_t423458E672BCDC332F6972C379C57970111EA3C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityNativeToastsHelper.ShowShortText(toastText);
		String_t* L_0 = __this->___toastText_4;
		il2cpp_codegen_runtime_class_init_inline(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		UnityNativeToastsHelper_ShowShortText_m3B959092C8A132E49C5AABEAF4BDBF8E27F7E516(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.ShowShortToastButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowShortToastButton__ctor_mEDC7C5A49B81F080414B8D327E0EB92DC412E919 (ShowShortToastButton_t423458E672BCDC332F6972C379C57970111EA3C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral327EA18C656CC8C0F08CD985C3303C22B8B86F04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string toastText = "This is an example of a short toast text";
		__this->___toastText_4 = _stringLiteral327EA18C656CC8C0F08CD985C3303C22B8B86F04;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toastText_4), (void*)_stringLiteral327EA18C656CC8C0F08CD985C3303C22B8B86F04);
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
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper__cctor_m098200B632485729BABA417F787A884DC006519F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityNativeToasts = UnityNativeToasts.Create();
		RuntimeObject* L_0;
		L_0 = UnityNativeToasts_Create_m2DF77AE83EBDC04F4D654337573AA14097521D94(NULL);
		((UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var))->___unityNativeToasts_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var))->___unityNativeToasts_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowLongToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowLongToast_m93FAC872E015C0D7DF1CC172FE8EA795DEDBE887 (String_t* ___toastText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityNativeToasts_t49E6047405E4687E324C8F523ADB6B4F466E6A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityNativeToasts.ShowLongToast(toastText);
		il2cpp_codegen_runtime_class_init_inline(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var))->___unityNativeToasts_0;
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityNative.Toasts.IUnityNativeToasts::ShowLongToast(System.String) */, IUnityNativeToasts_t49E6047405E4687E324C8F523ADB6B4F466E6A0D_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityNative.Toasts.Example.UnityNativeToastsHelper::ShowShortText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativeToastsHelper_ShowShortText_m3B959092C8A132E49C5AABEAF4BDBF8E27F7E516 (String_t* ___toastText0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityNativeToasts_t49E6047405E4687E324C8F523ADB6B4F466E6A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityNativeToasts.ShowShortToast(toastText);
		il2cpp_codegen_runtime_class_init_inline(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_StaticFields*)il2cpp_codegen_static_fields_for(UnityNativeToastsHelper_tCDCA15BAD0A86489C8EB7E7611090B13853B15BF_il2cpp_TypeInfo_var))->___unityNativeToasts_0;
		String_t* L_1 = ___toastText0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityNative.Toasts.IUnityNativeToasts::ShowShortToast(System.String) */, IUnityNativeToasts_t49E6047405E4687E324C8F523ADB6B4F466E6A0D_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
