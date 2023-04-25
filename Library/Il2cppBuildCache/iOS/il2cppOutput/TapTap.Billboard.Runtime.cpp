#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<TapTap.Billboard.BadgeDetails,TapTap.Common.TapError>
struct Action_2_t3164710ADDEBE8CDD78E954C8F1E05F6AF0D60C2;
// System.Action`2<System.Boolean,TapTap.Common.TapError>
struct Action_2_tCB02727464AC174D1B57A0529189398935D9873E;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tDB9851E133717B16EF4D1F0B933444974B766016;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// TapTap.Billboard.BadgeDetails
struct BadgeDetails_t40D1EC973BECF360E6082540FCBC5EB5BEAD0574;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// TapTap.Billboard.Internal.Platform.ITapBillboard
struct ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// TapTap.Billboard.OutputStateListener
struct OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.String
struct String_t;
// TapTap.Common.TapBillboardConfig
struct TapBillboardConfig_tF0004D48DDD2E7A7475754D76E15AB50B825D25F;
// TapTap.Common.TapConfig
struct TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0;
// TapTap.Common.TapDBConfig
struct TapDBConfig_t059DF0A408046553C74EC01CAF3437BD0F33A049;
// TapTap.Common.TapError
struct TapError_t9784017AF62BC25F9505DC87CAB321DEC0893AF9;
// TapTap.Common.TapPaymentConfig
struct TapPaymentConfig_t042F14F36929793100BA287BE17AF93F2BE5361E;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TapTap.Billboard.TapBillboard/<>c
struct U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC;
// TapTap.Billboard.TapBillboard/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11;

IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral168C1BCDF2B3322B92A45D53F5FBBDAF0713D473;
IL2CPP_EXTERN_C String_t* _stringLiteralABD36E64F36D422B5976BAA05DDDE61E6A94A588;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisType_t_mB9171D7C79BDDA53104605F28E6DD2E02A864D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__1_0_m69195446CF17FD940A9B736B585FECC323D0DD5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3C_cctorU3Eb__1_mFDDDE06A34752750C864E69B4B29387D35911C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9F650CAEBFDD10A2CC291FFFB9442341BF912EA8 
{
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// TapTap.Billboard.OutputStateListener
struct OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E  : public RuntimeObject
{
	// System.Action TapTap.Billboard.OutputStateListener::<OnPlayVoice>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COnPlayVoiceU3Ek__BackingField_0;
	// System.Action TapTap.Billboard.OutputStateListener::<OnStopVoice>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COnStopVoiceU3Ek__BackingField_1;
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

// TapTap.Billboard.TapBillboard
struct TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A  : public RuntimeObject
{
};

struct TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields
{
	// TapTap.Billboard.Internal.Platform.ITapBillboard TapTap.Billboard.TapBillboard::billboard
	RuntimeObject* ___billboard_0;
};

// TapTap.Common.TapConfig
struct TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0  : public RuntimeObject
{
	// System.String TapTap.Common.TapConfig::ClientID
	String_t* ___ClientID_0;
	// System.String TapTap.Common.TapConfig::ClientToken
	String_t* ___ClientToken_1;
	// TapTap.Common.RegionType TapTap.Common.TapConfig::RegionType
	int32_t ___RegionType_2;
	// System.String TapTap.Common.TapConfig::ServerURL
	String_t* ___ServerURL_3;
	// TapTap.Common.TapDBConfig TapTap.Common.TapConfig::DBConfig
	TapDBConfig_t059DF0A408046553C74EC01CAF3437BD0F33A049* ___DBConfig_4;
	// TapTap.Common.TapPaymentConfig TapTap.Common.TapConfig::PaymentConfig
	TapPaymentConfig_t042F14F36929793100BA287BE17AF93F2BE5361E* ___PaymentConfig_5;
	// System.String TapTap.Common.TapConfig::AppID
	String_t* ___AppID_6;
	// TapTap.Common.TapBillboardConfig TapTap.Common.TapConfig::<BillboardConfig>k__BackingField
	TapBillboardConfig_tF0004D48DDD2E7A7475754D76E15AB50B825D25F* ___U3CBillboardConfigU3Ek__BackingField_7;
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

// TapTap.Billboard.TapBillboard/<>c
struct U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC  : public RuntimeObject
{
};

struct U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_StaticFields
{
	// TapTap.Billboard.TapBillboard/<>c TapTap.Billboard.TapBillboard/<>c::<>9
	U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC* ___U3CU3E9_0;
};

// TapTap.Billboard.TapBillboard/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11  : public RuntimeObject
{
	// System.Type TapTap.Billboard.TapBillboard/<>c__DisplayClass1_0::interfaceType
	Type_t* ___interfaceType_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<TapTap.Billboard.BadgeDetails,TapTap.Common.TapError>
struct Action_2_t3164710ADDEBE8CDD78E954C8F1E05F6AF0D60C2  : public MulticastDelegate_t
{
};

// System.Action`2<System.Boolean,TapTap.Common.TapError>
struct Action_2_tCB02727464AC174D1B57A0529189398935D9873E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tDB9851E133717B16EF4D1F0B933444974B766016  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TapTap.Billboard.TapBillboard/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m8D9F85C2F3241EF93FBC9A4EDDD1D1AD5A76153D (U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE7E2BD541D8288445CB79C54B1F9805C5D66D5BB (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Reflection.Assembly,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4 (RuntimeObject* ___source0, Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Type_t* Enumerable_FirstOrDefault_TisType_t_mB9171D7C79BDDA53104605F28E6DD2E02A864D61 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void TapTap.Common.TapLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapLogger_Error_mD50F649AC414CC4F7E4FD98DF2DD66BD61860530 (String_t* ___log0, const RuntimeMethod* method) ;
// System.Void TapTap.Common.TapLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapLogger_Debug_m0792AD65613A01A40E061F1F8E485CCDD30B50C2 (String_t* ___log0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void TapTap.Billboard.TapBillboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0439D89CCFFB16624FF8FB1E64C4C7AE19B7A310 (U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC* __this, const RuntimeMethod* method) ;
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
// System.Action TapTap.Billboard.OutputStateListener::get_OnPlayVoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OutputStateListener_get_OnPlayVoice_mA9C000C29A83FE8B56445445903A726866ED4356 (OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* __this, const RuntimeMethod* method) 
{
	{
		// public Action OnPlayVoice { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COnPlayVoiceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TapTap.Billboard.OutputStateListener::set_OnPlayVoice(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStateListener_set_OnPlayVoice_mEF559D6932A4701CC5D4C3B3C2E8F913E11E4A61 (OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action OnPlayVoice { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___value0;
		__this->___U3COnPlayVoiceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnPlayVoiceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Action TapTap.Billboard.OutputStateListener::get_OnStopVoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OutputStateListener_get_OnStopVoice_m15711673E10C413718073148A7BE5683932446DC (OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* __this, const RuntimeMethod* method) 
{
	{
		// public Action OnStopVoice { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COnStopVoiceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TapTap.Billboard.OutputStateListener::set_OnStopVoice(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStateListener_set_OnStopVoice_m9D0ADA0B61788016E380CFE5F1165518DB87A4C0 (OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action OnStopVoice { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___value0;
		__this->___U3COnStopVoiceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnStopVoiceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void TapTap.Billboard.OutputStateListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStateListener__ctor_m327385220893E3EADAC9C8E7AF616B161AD4AD59 (OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* __this, const RuntimeMethod* method) 
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
// System.Void TapTap.Billboard.TapBillboard::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard__cctor_m3EE0770774F22D0CC21B7196D9D61DB52B0E4497 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisType_t_mB9171D7C79BDDA53104605F28E6DD2E02A864D61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__1_0_m69195446CF17FD940A9B736B585FECC323D0DD5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3C_cctorU3Eb__1_mFDDDE06A34752750C864E69B4B29387D35911C9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168C1BCDF2B3322B92A45D53F5FBBDAF0713D473);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* L_0 = (U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m8D9F85C2F3241EF93FBC9A4EDDD1D1AD5A76153D(L_0, NULL);
		V_0 = L_0;
		// Type interfaceType = typeof(ITapBillboard);
		U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		L_1->___interfaceType_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___interfaceType_0), (void*)L_3);
		// Type platformBillboardType = AppDomain.CurrentDomain.GetAssemblies()
		//     .SelectMany(assembly => assembly.GetTypes())
		//     .FirstOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_4;
		L_4 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_4);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_5;
		L_5 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var);
		U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC* L_6 = ((U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_7 = (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*)il2cpp_codegen_object_new(Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_mE7E2BD541D8288445CB79C54B1F9805C5D66D5BB(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__1_0_m69195446CF17FD940A9B736B585FECC323D0DD5A_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4((RuntimeObject*)L_5, L_7, Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* L_9 = V_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_10 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3C_cctorU3Eb__1_mFDDDE06A34752750C864E69B4B29387D35911C9D_RuntimeMethod_var), NULL);
		Type_t* L_11;
		L_11 = Enumerable_FirstOrDefault_TisType_t_mB9171D7C79BDDA53104605F28E6DD2E02A864D61(L_8, L_10, Enumerable_FirstOrDefault_TisType_t_mB9171D7C79BDDA53104605F28E6DD2E02A864D61_RuntimeMethod_var);
		V_1 = L_11;
		// if (platformBillboardType != null) {
		Type_t* L_12 = V_1;
		bool L_13;
		L_13 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, (Type_t*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// billboard = Activator.CreateInstance(platformBillboardType) as ITapBillboard;
		Type_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_14, NULL);
		((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_15, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var)));
		return;
	}

IL_0061:
	{
		// TapLogger.Error("No class implements ITapBillboard.");
		TapLogger_Error_mD50F649AC414CC4F7E4FD98DF2DD66BD61860530(_stringLiteral168C1BCDF2B3322B92A45D53F5FBBDAF0713D473, NULL);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::Init(TapTap.Common.TapConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_Init_m339873C65296D727DA0A4CF31563428EE75A9B4E (TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD36E64F36D422B5976BAA05DDDE61E6A94A588);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// TapLogger.Debug($"Billboard init");
		TapLogger_Debug_m0792AD65613A01A40E061F1F8E485CCDD30B50C2(_stringLiteralABD36E64F36D422B5976BAA05DDDE61E6A94A588, NULL);
		// billboard?.Init(config);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* L_2 = ___config0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* >::Invoke(0 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::Init(TapTap.Common.TapConfig) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::QueryBadgeDetails(System.Action`2<TapTap.Billboard.BadgeDetails,TapTap.Common.TapError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_QueryBadgeDetails_m826B16F81BCEAAE07B9EADABE026B05B7CE10649 (Action_2_t3164710ADDEBE8CDD78E954C8F1E05F6AF0D60C2* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.QueryBadgeDetails(action);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Action_2_t3164710ADDEBE8CDD78E954C8F1E05F6AF0D60C2* L_2 = ___action0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< Action_2_t3164710ADDEBE8CDD78E954C8F1E05F6AF0D60C2* >::Invoke(1 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::QueryBadgeDetails(System.Action`2<TapTap.Billboard.BadgeDetails,TapTap.Common.TapError>) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::OpenPanel(System.Action`2<System.Boolean,TapTap.Common.TapError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_OpenPanel_m72C75E957BCE0EF1E17A94113B8F03A1306C61AB (Action_2_tCB02727464AC174D1B57A0529189398935D9873E* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.OpenPanel(action);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Action_2_tCB02727464AC174D1B57A0529189398935D9873E* L_2 = ___action0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< Action_2_tCB02727464AC174D1B57A0529189398935D9873E* >::Invoke(2 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::OpenPanel(System.Action`2<System.Boolean,TapTap.Common.TapError>) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::OpenPanel(System.Action`2<System.Boolean,TapTap.Common.TapError>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_OpenPanel_m83DC3A6891736BB6E8A86F4C51F33F86000F2AD5 (Action_2_tCB02727464AC174D1B57A0529189398935D9873E* ___action0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___closeAction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.OpenPanel(action, closeAction);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Action_2_tCB02727464AC174D1B57A0529189398935D9873E* L_2 = ___action0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___closeAction1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< Action_2_tCB02727464AC174D1B57A0529189398935D9873E*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(3 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::OpenPanel(System.Action`2<System.Boolean,TapTap.Common.TapError>,System.Action) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::RegisterCustomLinkListener(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_RegisterCustomLinkListener_m370B499456A5DA538E93B27540209F9BDE48C484 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.RegisterCustomLinkListener(action);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___action0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(4 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::RegisterCustomLinkListener(System.Action`1<System.String>) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::UnRegisterCustomLinkListener(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_UnRegisterCustomLinkListener_mBDCCD62A1A50FE72573B08883345C2741EA5CD91 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.UnRegisterCustomLinkListener(action);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___action0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(5 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::UnRegisterCustomLinkListener(System.Action`1<System.String>) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::OpenSplashPanel(System.Action`2<System.Boolean,TapTap.Common.TapError>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_OpenSplashPanel_mF018713F2C9FE450A89C7850D2C434FD9897D4ED (Action_2_tCB02727464AC174D1B57A0529189398935D9873E* ___action0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___closeAction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.OpenSplashPanel(action, closeAction);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Action_2_tCB02727464AC174D1B57A0529189398935D9873E* L_2 = ___action0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___closeAction1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< Action_2_tCB02727464AC174D1B57A0529189398935D9873E*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(6 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::OpenSplashPanel(System.Action`2<System.Boolean,TapTap.Common.TapError>,System.Action) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::CloseSplashPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_CloseSplashPanel_mD60D7EC5F8A69E7D61EDE9FFBF0A8494CC7EFCD4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.CloseSplashPanel();
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(7 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::CloseSplashPanel() */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::StartFetchMarqueeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_StartFetchMarqueeData_mBF687FDF2D19B48939BABD5D48B01D44426DFCFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.StartFetchMarqueeData();
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(8 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::StartFetchMarqueeData() */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::StopFetchMarqueeData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_StopFetchMarqueeData_mD013588AB2D95A8D6CC09E82D5F6F3748097A352 (bool ___closeNow0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.StopFetchMarqueeData(closeNow);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		bool L_2 = ___closeNow0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::StopFetchMarqueeData(System.Boolean) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::RegisterOutputStateListener(TapTap.Billboard.OutputStateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_RegisterOutputStateListener_m83441921DCFE7009EF74B466860990330D2855DC (OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.RegisterOutputStateListener(listener);
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* L_2 = ___listener0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< OutputStateListener_tFECAB56D9674BD5EB6895FC0E64F2042304D962E* >::Invoke(10 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::RegisterOutputStateListener(TapTap.Billboard.OutputStateListener) */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard::UnregisterOutputStateListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapBillboard_UnregisterOutputStateListener_m2253E1AE4DFF04A1D92346E4CA2490502A30CCB8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// billboard?.UnRegisterOutputStateListener();
		il2cpp_codegen_runtime_class_init_inline(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_StaticFields*)il2cpp_codegen_static_fields_for(TapBillboard_tE1744BFEC76480D6F48C98ED36A47FB13CC3062A_il2cpp_TypeInfo_var))->___billboard_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(11 /* System.Void TapTap.Billboard.Internal.Platform.ITapBillboard::UnRegisterOutputStateListener() */, ITapBillboard_t7CFAB6C918C46D50D94253680BEB0AA7F332939F_il2cpp_TypeInfo_var, G_B2_0);
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
// System.Void TapTap.Billboard.TapBillboard/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m8D9F85C2F3241EF93FBC9A4EDDD1D1AD5A76153D (U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TapTap.Billboard.TapBillboard/<>c__DisplayClass1_0::<.cctor>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3C_cctorU3Eb__1_mFDDDE06A34752750C864E69B4B29387D35911C9D (U3CU3Ec__DisplayClass1_0_t76FF205D6A68C57C7E13480B0F8D570AA0E8CA11* __this, Type_t* ___clazz0, const RuntimeMethod* method) 
{
	{
		// .FirstOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
		Type_t* L_0 = __this->___interfaceType_0;
		Type_t* L_1 = ___clazz0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Type_t* L_3 = ___clazz0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_3, NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
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
// System.Void TapTap.Billboard.TapBillboard/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6FBFB70856F37B46CE1B2614EBB8C0C097DD2F93 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC* L_0 = (U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC*)il2cpp_codegen_object_new(U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0439D89CCFFB16624FF8FB1E64C4C7AE19B7A310(L_0, NULL);
		((U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TapTap.Billboard.TapBillboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0439D89CCFFB16624FF8FB1E64C4C7AE19B7A310 (U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> TapTap.Billboard.TapBillboard/<>c::<.cctor>b__1_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__1_0_m69195446CF17FD940A9B736B585FECC323D0DD5A (U3CU3Ec_tB12A2FD08C483EDFD8181F3CCC3DD5195EDAC3EC* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
{
	{
		// .SelectMany(assembly => assembly.GetTypes())
		Assembly_t* L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(16 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
