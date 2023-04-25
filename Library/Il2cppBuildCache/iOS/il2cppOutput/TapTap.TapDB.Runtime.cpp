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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tDB9851E133717B16EF4D1F0B933444974B766016;
// System.Func`2<System.Reflection.Assembly,System.Boolean>
struct Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9;
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
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TapTap.TapDB.IDynamicProperties
struct IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724;
// TapTap.TapDB.ITapDB
struct ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// TapTap.TapDB.TapDBLoginType
struct TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TapTap.TapDB.TapDB/<>c
struct U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642;
// TapTap.TapDB.TapDB/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057;
// TapTap.TapDB.TapDB/LogCallbackDelegate
struct LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02;

IL2CPP_EXTERN_C RuntimeClass* Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1922A269226320880C26477201963A7E5599819E;
IL2CPP_EXTERN_C String_t* _stringLiteral25DFFD6E58E4EDAD41F8C52C6134E56DCDFC25E6;
IL2CPP_EXTERN_C String_t* _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral27862913227F95E01CAC52A0248569DAB0AFDD35;
IL2CPP_EXTERN_C String_t* _stringLiteral344858F84BF75184D7EB53DF002720030F2EEE87;
IL2CPP_EXTERN_C String_t* _stringLiteral559189A8585AB299E507385F350D1892FF019D48;
IL2CPP_EXTERN_C String_t* _stringLiteral8E4C3CF41180D5BD66522A0F9BD3D1ECB3002A05;
IL2CPP_EXTERN_C String_t* _stringLiteral903E91126BA0CFBC99AD164BAE2B40E104879FB1;
IL2CPP_EXTERN_C String_t* _stringLiteralD005D19277FC2AE1D51583839AB4411488E00D79;
IL2CPP_EXTERN_C String_t* _stringLiteralDD4EB296962CBD188431DC8577F324FD76E69ED5;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D7EEB995EC2A00359C161470B8E49D0182FACF;
IL2CPP_EXTERN_C String_t* _stringLiteralFC208B1CCCD55D025A08EC00D6E2F92EC9E9A3F1;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__2_0_mAF659068556C48D70F2B62C962F977D35FD89C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__2_1_m16141A7D6ABC5A94A77EC0651D8574A42111CCE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__2_mBA412C0C7AA7B42DE088EED9E42A1817EAB184A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4FBD562BB714DEA6D946D0264BA1201905E48366 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
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

// TapTap.TapDB.TapDB
struct TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35  : public RuntimeObject
{
};

struct TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields
{
	// TapTap.TapDB.ITapDB TapTap.TapDB.TapDB::db
	RuntimeObject* ___db_0;
};

// TapTap.TapDB.TapDBLoginType
struct TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499  : public RuntimeObject
{
};

struct TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields
{
	// System.String TapTap.TapDB.TapDBLoginType::TapTap
	String_t* ___TapTap_0;
	// System.String TapTap.TapDB.TapDBLoginType::WeiXin
	String_t* ___WeiXin_1;
	// System.String TapTap.TapDB.TapDBLoginType::QQ
	String_t* ___QQ_2;
	// System.String TapTap.TapDB.TapDBLoginType::Tourist
	String_t* ___Tourist_3;
	// System.String TapTap.TapDB.TapDBLoginType::Apple
	String_t* ___Apple_4;
	// System.String TapTap.TapDB.TapDBLoginType::Alipay
	String_t* ___Alipay_5;
	// System.String TapTap.TapDB.TapDBLoginType::Facebook
	String_t* ___Facebook_6;
	// System.String TapTap.TapDB.TapDBLoginType::Google
	String_t* ___Google_7;
	// System.String TapTap.TapDB.TapDBLoginType::Twitter
	String_t* ___Twitter_8;
	// System.String TapTap.TapDB.TapDBLoginType::PhoneNumer
	String_t* ___PhoneNumer_9;
	// System.String TapTap.TapDB.TapDBLoginType::Custom
	String_t* ___Custom_10;
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

// TapTap.TapDB.TapDB/<>c
struct U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642  : public RuntimeObject
{
};

struct U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_StaticFields
{
	// TapTap.TapDB.TapDB/<>c TapTap.TapDB.TapDB/<>c::<>9
	U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* ___U3CU3E9_0;
};

// TapTap.TapDB.TapDB/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057  : public RuntimeObject
{
	// System.Type TapTap.TapDB.TapDB/<>c__DisplayClass2_0::interfaceType
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tDB9851E133717B16EF4D1F0B933444974B766016  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.Assembly,System.Boolean>
struct Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// TapTap.TapDB.TapDB/LogCallbackDelegate
struct LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02  : public MulticastDelegate_t
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


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SingleOrDefault_TisRuntimeObject_m96E15D999D3DAF8B31946255524EBB46907CFF17_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;

// System.Void TapTap.TapDB.TapDB/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m84D3C0BB51287E5CEAD7336AB47E2FA8C815EE7B (U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.Assembly,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0289D3B3C9D7A664C27794590540D4EA6C813CDF (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.Assembly>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA (RuntimeObject* ___source0, Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
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
// TSource System.Linq.Enumerable::SingleOrDefault<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Type_t* Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m96E15D999D3DAF8B31946255524EBB46907CFF17_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.TapDB::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_Init_m8648050951B0E0B6EA3511D2A2D9C781BAC382BD (String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, int32_t ___region3, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties4, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.TapDB/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m68BAFF136011D06CAAB1ECA151A368B2FC938E9D (U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* __this, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyName_get_FullName_m668C2F147964E6C40B4FB23CE7655EFFE447EF22 (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
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
// System.Void TapTap.TapDB.TapDB::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB__cctor_mF2752A855E239B829303AC874815AE19A7312952 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__2_0_mAF659068556C48D70F2B62C962F977D35FD89C3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__2_1_m16141A7D6ABC5A94A77EC0651D8574A42111CCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__2_mBA412C0C7AA7B42DE088EED9E42A1817EAB184A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* L_0 = (U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m84D3C0BB51287E5CEAD7336AB47E2FA8C815EE7B(L_0, NULL);
		V_0 = L_0;
		// Type interfaceType = typeof(ITapDB);
		U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		L_1->___interfaceType_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___interfaceType_0), (void*)L_3);
		// Type platformDBType = AppDomain.CurrentDomain.GetAssemblies()
		//     .Where(assembly => assembly.GetName().FullName.StartsWith("TapTap.TapDB"))
		//     .SelectMany(assembly => assembly.GetTypes())
		//     .SingleOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_4;
		L_4 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_4);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_5;
		L_5 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var);
		U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* L_6 = ((U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* L_7 = (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*)il2cpp_codegen_object_new(Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m0289D3B3C9D7A664C27794590540D4EA6C813CDF(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__2_0_mAF659068556C48D70F2B62C962F977D35FD89C3D_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA((RuntimeObject*)L_5, L_7, Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA_RuntimeMethod_var);
		U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* L_9 = ((U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_10 = (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*)il2cpp_codegen_object_new(Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mE7E2BD541D8288445CB79C54B1F9805C5D66D5BB(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__2_1_m16141A7D6ABC5A94A77EC0651D8574A42111CCE2_RuntimeMethod_var), NULL);
		RuntimeObject* L_11;
		L_11 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4(L_8, L_10, Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* L_12 = V_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_13 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__2_mBA412C0C7AA7B42DE088EED9E42A1817EAB184A1_RuntimeMethod_var), NULL);
		Type_t* L_14;
		L_14 = Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56(L_11, L_13, Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56_RuntimeMethod_var);
		V_1 = L_14;
		// if (platformDBType != null) {
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, (Type_t*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// db = Activator.CreateInstance(platformDBType) as ITapDB;
		Type_t* L_17 = V_1;
		RuntimeObject* L_18;
		L_18 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_17, NULL);
		((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var)));
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::InitFromBootstrap(System.String,System.String,System.String,TapTap.Common.RegionType,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_InitFromBootstrap_m3E15F0B7C92090C3FBF1713E21DD63CDFCDA77E8 (String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, int32_t ___region3, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// TapDBRegion tapDBRegion = region == RegionType.CN ? TapDBRegion.CN : TapDBRegion.IO;
		int32_t L_0 = ___region3;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 0;
	}

IL_0007:
	{
		V_0 = G_B3_0;
		// Init(clientId, channel, gameVersion, tapDBRegion, properties);
		String_t* L_1 = ___clientId0;
		String_t* L_2 = ___channel1;
		String_t* L_3 = ___gameVersion2;
		int32_t L_4 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___properties4;
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		TapDB_Init_m8648050951B0E0B6EA3511D2A2D9C781BAC382BD(L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::Init(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_Init_mE712A909CFD90F8D2092C45E5FDE29CF3C4E69F9 (String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, bool ___isCN3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.Init(clientId, channel, gameVersion, isCN);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___clientId0;
		String_t* L_2 = ___channel1;
		String_t* L_3 = ___gameVersion2;
		bool L_4 = ___isCN3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, String_t*, String_t*, bool >::Invoke(0 /* System.Void TapTap.TapDB.ITapDB::Init(System.String,System.String,System.String,System.Boolean) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_Init_m8648050951B0E0B6EA3511D2A2D9C781BAC382BD (String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, int32_t ___region3, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.Init(clientId, channel, gameVersion, region, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___clientId0;
		String_t* L_2 = ___channel1;
		String_t* L_3 = ___gameVersion2;
		int32_t L_4 = ___region3;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___properties4;
		NullCheck(L_0);
		InterfaceActionInvoker5< String_t*, String_t*, String_t*, int32_t, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(1 /* System.Void TapTap.TapDB.ITapDB::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetUser_mD62E24861158692E309717B77FE861F6EF16AF19 (String_t* ___userId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetUser(userId);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___userId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void TapTap.TapDB.ITapDB::SetUser(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetUser_mA00E43A88C4D7A5CECFEEC09B67B251AE09D8E10 (String_t* ___userId0, String_t* ___loginType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetUser(userId, loginType);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___userId0;
		String_t* L_2 = ___loginType1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(3 /* System.Void TapTap.TapDB.ITapDB::SetUser(System.String,System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetUserWithProperties_m95B664A6A44D06CC2888BFD54D8FAE118341D4D9 (String_t* ___userId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetUserWithProperties(userId, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___userId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___properties1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(4 /* System.Void TapTap.TapDB.ITapDB::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetName_mD1F9097744F4DC101CC9780E5C38DC86746F7336 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetName(name);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void TapTap.TapDB.ITapDB::SetName(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetLevel_mCB69BC362C66F5C6474FF64CE6059FF4671D6528 (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetLevel(level);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(6 /* System.Void TapTap.TapDB.ITapDB::SetLevel(System.Int32) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetServer_mB0661F3FD47C3D069ED3A72C1B4B3E2DF71EFE32 (String_t* ___server0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetServer(server);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___server0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(7 /* System.Void TapTap.TapDB.ITapDB::SetServer(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_OnCharge_m0775856E5EFDD83BFA562942673AE8D03702C95E (String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.OnCharge(orderId, product, amount, currencyType, payment);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___orderId0;
		String_t* L_2 = ___product1;
		int64_t L_3 = ___amount2;
		String_t* L_4 = ___currencyType3;
		String_t* L_5 = ___payment4;
		NullCheck(L_0);
		InterfaceActionInvoker5< String_t*, String_t*, int64_t, String_t*, String_t* >::Invoke(8 /* System.Void TapTap.TapDB.ITapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_OnCharge_mE4D94F7AE8F267144090EF8F5D94406F01B5D6CE (String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, String_t* ___properties5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.OnCharge(orderId, product, amount, currencyType, payment, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___orderId0;
		String_t* L_2 = ___product1;
		int64_t L_3 = ___amount2;
		String_t* L_4 = ___currencyType3;
		String_t* L_5 = ___payment4;
		String_t* L_6 = ___properties5;
		NullCheck(L_0);
		InterfaceActionInvoker6< String_t*, String_t*, int64_t, String_t*, String_t*, String_t* >::Invoke(9 /* System.Void TapTap.TapDB.ITapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_OnCharge_m364C13460E6C5552A879535FA27EBBD4976C73D5 (String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.OnCharge(orderId, product, amount, currencyType, payment, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___orderId0;
		String_t* L_2 = ___product1;
		int64_t L_3 = ___amount2;
		String_t* L_4 = ___currencyType3;
		String_t* L_5 = ___payment4;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___properties5;
		NullCheck(L_0);
		InterfaceActionInvoker6< String_t*, String_t*, int64_t, String_t*, String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(10 /* System.Void TapTap.TapDB.ITapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::OnEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_OnEvent_m9C99BF7CC4F6B91E25F14C4A65ED505A30899135 (String_t* ___eventCode0, String_t* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.OnEvent(eventCode, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___eventCode0;
		String_t* L_2 = ___properties1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void TapTap.TapDB.ITapDB::OnEvent(System.String,System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::TrackEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_TrackEvent_mE23A496517564B5D1AB5CB8D59D0F3F853E27B6E (String_t* ___eventName0, String_t* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.TrackEvent(eventName, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___eventName0;
		String_t* L_2 = ___properties1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void TapTap.TapDB.ITapDB::TrackEvent(System.String,System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_TrackEvent_m339443C45BF17D7E3446BAEABECB517BC72A5B30 (String_t* ___eventName0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.TrackEvent(eventName, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___eventName0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___properties1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(13 /* System.Void TapTap.TapDB.ITapDB::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::RegisterStaticProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_RegisterStaticProperties_m7ABA3B5DB16A04841E098B532D2486840CB4686D (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.RegisterStaticProperties(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(14 /* System.Void TapTap.TapDB.ITapDB::RegisterStaticProperties(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_RegisterStaticProperties_mEDDD078E54F039B6E96BE8156DD03E7CF562B66D (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.RegisterStaticProperties(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(15 /* System.Void TapTap.TapDB.ITapDB::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UnregisterStaticProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UnregisterStaticProperty_m2017987ACC220DFE14C150F421411D1A96A6EEBD (String_t* ___propertKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UnregisterStaticProperty(propertKey);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___propertKey0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void TapTap.TapDB.ITapDB::UnregisterStaticProperty(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_RegisterDynamicProperties_mF182F683A435E949BAD038D87D9576EC42AA9004 (RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.RegisterDynamicProperties(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		RuntimeObject* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(17 /* System.Void TapTap.TapDB.ITapDB::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::ClearStaticProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_ClearStaticProperties_m463193534AA45ECC4A7549EB69726632B2099423 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.ClearStaticProperties();
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void TapTap.TapDB.ITapDB::ClearStaticProperties() */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::DeviceInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_DeviceInitialize_mDE9E0FF149F88ED7F56EBDC1C1DA3D68BB2359A0 (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.DeviceInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(19 /* System.Void TapTap.TapDB.ITapDB::DeviceInitialize(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_DeviceInitialize_m8CF3DC123DB7F83C3F703BC3A841959202BAF033 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.DeviceInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(20 /* System.Void TapTap.TapDB.ITapDB::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::DeviceUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_DeviceUpdate_m42B68C7E6C08A53419023EE20C55B63EF636AAB2 (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.DeviceUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(21 /* System.Void TapTap.TapDB.ITapDB::DeviceUpdate(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_DeviceUpdate_m1D5B8BB476A558C3569C88BB8DAF6AE2BCDD3F17 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.DeviceUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(22 /* System.Void TapTap.TapDB.ITapDB::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::DeviceAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_DeviceAdd_m979983DAEE27E3B5FF85BC927F6A1C9B3008415F (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.DeviceAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(23 /* System.Void TapTap.TapDB.ITapDB::DeviceAdd(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_DeviceAdd_mE50B1968680866567E9923A1813AAFE0AEBD402B (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.DeviceAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(24 /* System.Void TapTap.TapDB.ITapDB::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UserInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UserInitialize_m9AA1DA5BE42DD89D3054462B8CE571C1776D44C1 (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UserInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(25 /* System.Void TapTap.TapDB.ITapDB::UserInitialize(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UserInitialize_mA4169FBD57CCED8137FAE927DB403118C62E834D (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UserInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(26 /* System.Void TapTap.TapDB.ITapDB::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UserUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UserUpdate_m1080F1D7E80A20DBBDB641D4DE3441EF322E6651 (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UserUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(27 /* System.Void TapTap.TapDB.ITapDB::UserUpdate(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UserUpdate_m54E740A3133C56FC01C7122D92DBDF97161596B9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UserUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(28 /* System.Void TapTap.TapDB.ITapDB::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UserAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UserAdd_m8C5D664963A79D46A38619444FDFD51A1C594FAE (String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UserAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(29 /* System.Void TapTap.TapDB.ITapDB::UserAdd(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UserAdd_m805E5D38DA4345E2DDDC252513E83D9778DED602 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UserAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(30 /* System.Void TapTap.TapDB.ITapDB::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::EnableLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_EnableLog_mA14B1C4E2936D7834B388157E003EC18B3FC6508 (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.EnableLog(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(31 /* System.Void TapTap.TapDB.ITapDB::EnableLog(System.Boolean) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::AdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_AdvertiserIDCollectionEnabled_m4F579FC11FC44A64CF6DC84CAB51731A278C44BB (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.AdvertiserIDCollectionEnabled(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(32 /* System.Void TapTap.TapDB.ITapDB::AdvertiserIDCollectionEnabled(System.Boolean) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::CloseFetchTapTapDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_CloseFetchTapTapDeviceId_mC9D6279DDBBB47C623FD73090A5551740A2A3F7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.CloseFetchTapTapDeviceId();
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(33 /* System.Void TapTap.TapDB.ITapDB::CloseFetchTapTapDeviceId() */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::ClearUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_ClearUser_m3EB99FAABAB8A37E166FE0B1DF0F4CA741B7E763 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.ClearUser();
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(34 /* System.Void TapTap.TapDB.ITapDB::ClearUser() */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::GetTapTapDid(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_GetTapTapDid_m5D75F12C7A4CE8C1CDD55644156A0CAD0257134F (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.GetTapTapDid(action);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___action0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* >::Invoke(35 /* System.Void TapTap.TapDB.ITapDB::GetTapTapDid(System.Action`1<System.String>) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_ConfigAutoReportLogLevel_m1A7A633C3C2C0D7D38173044763498242B6FDE8D (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.ConfigAutoReportLogLevel(level);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(36 /* System.Void TapTap.TapDB.ITapDB::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_ConfigAutoQuitApplication_mEE6FD92E6B446F5615F889351503FB5FAC2B669B (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.ConfigAutoQuitApplication(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(37 /* System.Void TapTap.TapDB.ITapDB::ConfigAutoQuitApplication(System.Boolean) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_RegisterLogCallback_m16E798DFB81B58C37F6260ABB7793CF50B7EAFE7 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.RegisterLogCallback(handler);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = ___handler0;
		NullCheck(L_0);
		InterfaceActionInvoker1< LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* >::Invoke(38 /* System.Void TapTap.TapDB.ITapDB::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_UnRegisterLogCallback_m8555D7FAB2A9BF7DFF8AE91877A53B0E2D89BA07 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.UnRegisterLogCallback(handler);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = ___handler0;
		NullCheck(L_0);
		InterfaceActionInvoker1< LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* >::Invoke(39 /* System.Void TapTap.TapDB.ITapDB::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::ReportException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_ReportException_mF7F5868C65CB1430C12F3DCA5B8E9469382F2CD6 (Exception_t* ___e0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.ReportException(e, message);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		Exception_t* L_1 = ___e0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Exception_t*, String_t* >::Invoke(40 /* System.Void TapTap.TapDB.ITapDB::ReportException(System.Exception,System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::SetOAIDCert(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_SetOAIDCert_m35761C405A62218AE04B1C3E233D38CD7E10CBDC (String_t* ___cert0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.SetOAIDCert(cert);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		String_t* L_1 = ___cert0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(41 /* System.Void TapTap.TapDB.ITapDB::SetOAIDCert(System.String) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.TapDB::EnableThemis(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDB_EnableThemis_m438F9353D1C507562C6A5C002EF0B47D0EBC092D (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// db.EnableThemis(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_StaticFields*)il2cpp_codegen_static_fields_for(TapDB_tE90B19E3BB6F3057A10E2C923ADEFC22FD692A35_il2cpp_TypeInfo_var))->___db_0;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(42 /* System.Void TapTap.TapDB.ITapDB::EnableThemis(System.Boolean) */, ITapDB_t52B2D289DB37A0F9BC7B2D3937925A9EA4E44492_il2cpp_TypeInfo_var, L_0, L_1);
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
void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_Multicast(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* currentDelegate = reinterpret_cast<LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___condition0, ___stackTrace1, ___type2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_OpenInst(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	NullCheck(___condition0);
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___condition0, ___stackTrace1, ___type2, method);
}
void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_OpenStatic(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___condition0, ___stackTrace1, ___type2, method);
}
void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_OpenStaticInvoker(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___condition0, ___stackTrace1, ___type2);
}
void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_ClosedStaticInvoker(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___condition0, ___stackTrace1, ___type2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___condition0' to native representation
	char* ____condition0_marshaled = NULL;
	____condition0_marshaled = il2cpp_codegen_marshal_string(___condition0);

	// Marshaling of parameter '___stackTrace1' to native representation
	char* ____stackTrace1_marshaled = NULL;
	____stackTrace1_marshaled = il2cpp_codegen_marshal_string(___stackTrace1);

	// Native function invocation
	il2cppPInvokeFunc(____condition0_marshaled, ____stackTrace1_marshaled, ___type2);

	// Marshaling cleanup of parameter '___condition0' native representation
	il2cpp_codegen_marshal_free(____condition0_marshaled);
	____condition0_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace1' native representation
	il2cpp_codegen_marshal_free(____stackTrace1_marshaled);
	____stackTrace1_marshaled = NULL;

}
// System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_mFF9AC6F2619A9F8FAD379E1AD8283AFB35BD1649 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_Multicast;
}
// System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___condition0, ___stackTrace1, ___type2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TapTap.TapDB.TapDB/LogCallbackDelegate::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m342487BB6FE9066D40B63C7A1B15B3B7C564E54A (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition0;
	__d_args[1] = ___stackTrace1;
	__d_args[2] = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &___type2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m822BB83D591075C271446FB0D988C5E01CC8C882 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapTap.TapDB.TapDB/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m84D3C0BB51287E5CEAD7336AB47E2FA8C815EE7B (U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TapTap.TapDB.TapDB/<>c__DisplayClass2_0::<.cctor>b__2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__2_mBA412C0C7AA7B42DE088EED9E42A1817EAB184A1 (U3CU3Ec__DisplayClass2_0_tCD3C1B0CF73D33789722E63E6A4CDAF64C398057* __this, Type_t* ___clazz0, const RuntimeMethod* method) 
{
	{
		// .SingleOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
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
// System.Void TapTap.TapDB.TapDB/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD9AE7115E4D64DE1B3C42955B8812ACB822EF49D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* L_0 = (U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642*)il2cpp_codegen_object_new(U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m68BAFF136011D06CAAB1ECA151A368B2FC938E9D(L_0, NULL);
		((U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TapTap.TapDB.TapDB/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m68BAFF136011D06CAAB1ECA151A368B2FC938E9D (U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TapTap.TapDB.TapDB/<>c::<.cctor>b__2_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__2_0_mAF659068556C48D70F2B62C962F977D35FD89C3D (U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559189A8585AB299E507385F350D1892FF019D48);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(assembly => assembly.GetName().FullName.StartsWith("TapTap.TapDB"))
		Assembly_t* L_0 = ___assembly0;
		NullCheck(L_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_1;
		L_1 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(19 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AssemblyName_get_FullName_m668C2F147964E6C40B4FB23CE7655EFFE447EF22(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteral559189A8585AB299E507385F350D1892FF019D48, NULL);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> TapTap.TapDB.TapDB/<>c::<.cctor>b__2_1(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__2_1_m16141A7D6ABC5A94A77EC0651D8574A42111CCE2 (U3CU3Ec_t7841A59D7A0ECED58463EBB3678E3C55D57E9642* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapTap.TapDB.TapDBLoginType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBLoginType__ctor_m05584E18D8A5F4453112F9191E7C8C2AF96FFA02 (TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TapTap.TapDB.TapDBLoginType::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBLoginType__cctor_mC513CF9876EF257C83499AFDB995BB70784474EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1922A269226320880C26477201963A7E5599819E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25DFFD6E58E4EDAD41F8C52C6134E56DCDFC25E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27862913227F95E01CAC52A0248569DAB0AFDD35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral344858F84BF75184D7EB53DF002720030F2EEE87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E4C3CF41180D5BD66522A0F9BD3D1ECB3002A05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral903E91126BA0CFBC99AD164BAE2B40E104879FB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD005D19277FC2AE1D51583839AB4411488E00D79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD4EB296962CBD188431DC8577F324FD76E69ED5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D7EEB995EC2A00359C161470B8E49D0182FACF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC208B1CCCD55D025A08EC00D6E2F92EC9E9A3F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string TapTap = "TapTap";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___TapTap_0 = _stringLiteralDD4EB296962CBD188431DC8577F324FD76E69ED5;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___TapTap_0), (void*)_stringLiteralDD4EB296962CBD188431DC8577F324FD76E69ED5);
		// public static string WeiXin = "WeiXin";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___WeiXin_1 = _stringLiteral344858F84BF75184D7EB53DF002720030F2EEE87;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___WeiXin_1), (void*)_stringLiteral344858F84BF75184D7EB53DF002720030F2EEE87);
		// public static string QQ = "QQ";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___QQ_2 = _stringLiteral903E91126BA0CFBC99AD164BAE2B40E104879FB1;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___QQ_2), (void*)_stringLiteral903E91126BA0CFBC99AD164BAE2B40E104879FB1);
		// public static string Tourist = "Tourist";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Tourist_3 = _stringLiteralFC208B1CCCD55D025A08EC00D6E2F92EC9E9A3F1;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Tourist_3), (void*)_stringLiteralFC208B1CCCD55D025A08EC00D6E2F92EC9E9A3F1);
		// public static string Apple = "Apple";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Apple_4 = _stringLiteral27862913227F95E01CAC52A0248569DAB0AFDD35;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Apple_4), (void*)_stringLiteral27862913227F95E01CAC52A0248569DAB0AFDD35);
		// public static string Alipay = "Alipay";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Alipay_5 = _stringLiteral1922A269226320880C26477201963A7E5599819E;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Alipay_5), (void*)_stringLiteral1922A269226320880C26477201963A7E5599819E);
		// public static string Facebook = "Facebook";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Facebook_6 = _stringLiteral25DFFD6E58E4EDAD41F8C52C6134E56DCDFC25E6;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Facebook_6), (void*)_stringLiteral25DFFD6E58E4EDAD41F8C52C6134E56DCDFC25E6);
		// public static string Google = "Google";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Google_7 = _stringLiteralD005D19277FC2AE1D51583839AB4411488E00D79;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Google_7), (void*)_stringLiteralD005D19277FC2AE1D51583839AB4411488E00D79);
		// public static string Twitter = "Twitter";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Twitter_8 = _stringLiteralE4D7EEB995EC2A00359C161470B8E49D0182FACF;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Twitter_8), (void*)_stringLiteralE4D7EEB995EC2A00359C161470B8E49D0182FACF);
		// public static string PhoneNumer = "PhoneNumber";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___PhoneNumer_9 = _stringLiteral8E4C3CF41180D5BD66522A0F9BD3D1ECB3002A05;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___PhoneNumer_9), (void*)_stringLiteral8E4C3CF41180D5BD66522A0F9BD3D1ECB3002A05);
		// public static string Custom = "Custom";
		((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Custom_10 = _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_StaticFields*)il2cpp_codegen_static_fields_for(TapDBLoginType_t5B6EE333F4B08F6D0DC99A737BA30FBD2982C499_il2cpp_TypeInfo_var))->___Custom_10), (void*)_stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
