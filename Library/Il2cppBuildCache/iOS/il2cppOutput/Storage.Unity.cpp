#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// LeanCloud.Common.IPersistence
struct IPersistence_t58F07E4FD6C1CE906884D59C3C9EAA43BE73A3C6;
// LeanCloud.Common.LCAppRouter
struct LCAppRouter_tA632B598BD5AAEE1859E642065AA2A8CBD0BF7CF;
// LeanCloud.LCApplication
struct LCApplication_tCE19137D2BDB7F8EAF54F8EC19F4A7C0181D1E23;
// LeanCloud.Common.LCHttpClient
struct LCHttpClient_tF650D12C75D327D5CD053F5174C08E34B6ACAF84;
// LeanCloud.Common.PersistenceController
struct PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD;
// System.String
struct String_t;
// LeanCloud.Storage.Internal.Persistence.UnityPersistence
struct UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC;

IL2CPP_EXTERN_C RuntimeClass* LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral283CCA919B0296A45DCD245B90D4DF7C34CF775A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAE6889E33F783AB6BC155B13709B4F84A5065486 
{
};
struct Il2CppArrayBounds;

// LeanCloud.LCApplication
struct LCApplication_tCE19137D2BDB7F8EAF54F8EC19F4A7C0181D1E23  : public RuntimeObject
{
};

// LeanCloud.Common.LCCore
struct LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE  : public RuntimeObject
{
};

struct LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_StaticFields
{
	// System.String LeanCloud.Common.LCCore::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_3;
	// System.String LeanCloud.Common.LCCore::<AppKey>k__BackingField
	String_t* ___U3CAppKeyU3Ek__BackingField_4;
	// System.String LeanCloud.Common.LCCore::<MasterKey>k__BackingField
	String_t* ___U3CMasterKeyU3Ek__BackingField_5;
	// LeanCloud.Common.LCAppRouter LeanCloud.Common.LCCore::<AppRouter>k__BackingField
	LCAppRouter_tA632B598BD5AAEE1859E642065AA2A8CBD0BF7CF* ___U3CAppRouterU3Ek__BackingField_6;
	// LeanCloud.Common.LCHttpClient LeanCloud.Common.LCCore::<HttpClient>k__BackingField
	LCHttpClient_tF650D12C75D327D5CD053F5174C08E34B6ACAF84* ___U3CHttpClientU3Ek__BackingField_7;
	// System.Boolean LeanCloud.Common.LCCore::<UseMasterKey>k__BackingField
	bool ___U3CUseMasterKeyU3Ek__BackingField_8;
	// LeanCloud.Common.PersistenceController LeanCloud.Common.LCCore::<PersistenceController>k__BackingField
	PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD* ___U3CPersistenceControllerU3Ek__BackingField_9;
};

// LeanCloud.Common.PersistenceController
struct PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD  : public RuntimeObject
{
	// LeanCloud.Common.IPersistence LeanCloud.Common.PersistenceController::persistence
	RuntimeObject* ___persistence_0;
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

// LeanCloud.Storage.Internal.Persistence.UnityPersistence
struct UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC  : public RuntimeObject
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



// System.Boolean LeanCloud.Common.LCCore::get_UseMasterKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LCCore_get_UseMasterKey_m0E75FC4D263587EEE3DDD3DC12157BB4E90D960A_inline (const RuntimeMethod* method) ;
// System.Void LeanCloud.Common.LCCore::set_UseMasterKey(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LCCore_set_UseMasterKey_m49F4A8E6629A939875FD5253CD053489A2887A00_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Void LeanCloud.LCLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LCLogger_Debug_m0867CC14106DC2CE49C89ADC8A384BF9A6C78638 (String_t* ___log0, const RuntimeMethod* method) ;
// System.Void LeanCloud.Storage.Internal.LCStorage::Initialize(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LCStorage_Initialize_m3E9B81CA16719C4F29C52139A434265083363EE0 (String_t* ___appId0, String_t* ___appKey1, String_t* ___server2, String_t* ___masterKey3, const RuntimeMethod* method) ;
// System.Void LeanCloud.Storage.Internal.Persistence.UnityPersistence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPersistence__ctor_m6D628DFB8B5F121855A48A3545D857C809EC974B (UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC* __this, const RuntimeMethod* method) ;
// System.Void LeanCloud.Common.PersistenceController::.ctor(LeanCloud.Common.IPersistence)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistenceController__ctor_m366943407EE40308F58368FB974AB1AB4DC445CF (PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD* __this, RuntimeObject* ___persistence0, const RuntimeMethod* method) ;
// System.Void LeanCloud.Common.LCCore::set_PersistenceController(LeanCloud.Common.PersistenceController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LCCore_set_PersistenceController_m5605672EC0E5F4FC294946A72232E976369F6ABA_inline (PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
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
// System.Boolean LeanCloud.LCApplication::get_UseMasterKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LCApplication_get_UseMasterKey_m14547723B9E116EAC976DD2341518123F36FDCF8 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = LCCore_get_UseMasterKey_m0E75FC4D263587EEE3DDD3DC12157BB4E90D960A_inline(NULL);
		return L_0;
	}
}
// System.Void LeanCloud.LCApplication::set_UseMasterKey(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LCApplication_set_UseMasterKey_m27300409A8D40C49E3DE9E5C94E3E9AD549BF719 (bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		LCCore_set_UseMasterKey_m49F4A8E6629A939875FD5253CD053489A2887A00_inline(L_0, NULL);
		return;
	}
}
// System.Void LeanCloud.LCApplication::Initialize(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LCApplication_Initialize_mA4B28FF46F10E21F9761EBF937A0F0D64B800615 (String_t* ___appId0, String_t* ___appKey1, String_t* ___server2, String_t* ___masterKey3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283CCA919B0296A45DCD245B90D4DF7C34CF775A);
		s_Il2CppMethodInitialized = true;
	}
	{
		LCLogger_Debug_m0867CC14106DC2CE49C89ADC8A384BF9A6C78638(_stringLiteral283CCA919B0296A45DCD245B90D4DF7C34CF775A, NULL);
		String_t* L_0 = ___appId0;
		String_t* L_1 = ___appKey1;
		String_t* L_2 = ___server2;
		String_t* L_3 = ___masterKey3;
		LCStorage_Initialize_m3E9B81CA16719C4F29C52139A434265083363EE0(L_0, L_1, L_2, L_3, NULL);
		UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC* L_4 = (UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC*)il2cpp_codegen_object_new(UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityPersistence__ctor_m6D628DFB8B5F121855A48A3545D857C809EC974B(L_4, NULL);
		PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD* L_5 = (PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD*)il2cpp_codegen_object_new(PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PersistenceController__ctor_m366943407EE40308F58368FB974AB1AB4DC445CF(L_5, L_4, NULL);
		LCCore_set_PersistenceController_m5605672EC0E5F4FC294946A72232E976369F6ABA_inline(L_5, NULL);
		return;
	}
}
// System.Void LeanCloud.LCApplication::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LCApplication__ctor_m6A72CE512E2C763B80D9DE5EC48C5F95EE951A48 (LCApplication_tCE19137D2BDB7F8EAF54F8EC19F4A7C0181D1E23* __this, const RuntimeMethod* method) 
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
// System.String LeanCloud.Storage.Internal.Persistence.UnityPersistence::GetPersistencePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPersistence_GetPersistencePath_mD6D405E8539DE766D27D7234F40C37AC3ED6C9D0 (UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		return L_0;
	}
}
// System.Void LeanCloud.Storage.Internal.Persistence.UnityPersistence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPersistence__ctor_m6D628DFB8B5F121855A48A3545D857C809EC974B (UnityPersistence_t8FEB964ED4A03C15DAB9030579E3D886E9E069BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LCCore_get_UseMasterKey_m0E75FC4D263587EEE3DDD3DC12157BB4E90D960A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_StaticFields*)il2cpp_codegen_static_fields_for(LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var))->___U3CUseMasterKeyU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LCCore_set_UseMasterKey_m49F4A8E6629A939875FD5253CD053489A2887A00_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_StaticFields*)il2cpp_codegen_static_fields_for(LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var))->___U3CUseMasterKeyU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LCCore_set_PersistenceController_m5605672EC0E5F4FC294946A72232E976369F6ABA_inline (PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PersistenceController_t4B963817085DF992A144D80F7157EAE9A61180BD* L_0 = ___value0;
		((LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_StaticFields*)il2cpp_codegen_static_fields_for(LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var))->___U3CPersistenceControllerU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_StaticFields*)il2cpp_codegen_static_fields_for(LCCore_tC6B70F33755D6B779879C540DE2ED94AE89D6DAE_il2cpp_TypeInfo_var))->___U3CPersistenceControllerU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
