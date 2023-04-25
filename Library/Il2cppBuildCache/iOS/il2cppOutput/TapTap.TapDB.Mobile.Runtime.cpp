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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TapTap.Common.Result>
struct Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// TapTap.Common.Command
struct Command_t8D907831ABE54215BACADB269C51675B35BD5D37;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// TapTap.Common.EngineBridge
struct EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// TapTap.Common.IBridge
struct IBridge_t346C4D1EDBC19FCAA95CBABD0CD8E03D1C7F7695;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TapTap.TapDB.IDynamicProperties
struct IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// TapTap.Common.Result
struct Result_tBE550EEB85C4A496D58A81389702E1E2E097239A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TapTap.Common.TapBillboardConfig
struct TapBillboardConfig_tF0004D48DDD2E7A7475754D76E15AB50B825D25F;
// TapTap.Common.TapConfig
struct TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0;
// TapTap.Common.TapDBConfig
struct TapDBConfig_t059DF0A408046553C74EC01CAF3437BD0F33A049;
// TapTap.TapDB.Mobile.TapDBDynamicProperties
struct TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182;
// TapTap.TapDB.Mobile.TapDBImpl
struct TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158;
// TapTap.TapDB.Mobile.TapDBMobile
struct TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB;
// TapTap.Common.TapPaymentConfig
struct TapPaymentConfig_t042F14F36929793100BA287BE17AF93F2BE5361E;
// TapTap.TapDB.Mobile.ThemisUtil
struct ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// TapTap.Common.Command/Builder
struct Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// TapTap.TapDB.TapDB/LogCallbackDelegate
struct LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02;
// TapTap.TapDB.Mobile.TapDBImpl/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200;
// TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate
struct TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD;
// TapTap.TapDB.Mobile.ThemisUtil/<>c
struct U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9;
// TapTap.TapDB.Mobile.ThemisUtil/reportExceptionDel
struct reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogSeverity_t2374E6AAAA8923D4560253B997A7F5750F2EE1D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_tBE550EEB85C4A496D58A81389702E1E2E097239A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral012A18907B249DF0954BFA806717C2FD7DDB76F9;
IL2CPP_EXTERN_C String_t* _stringLiteral04B4D153124D9BB8FB4AA8015B24D3C712019EE2;
IL2CPP_EXTERN_C String_t* _stringLiteral077C802C86FF725760025910A3CF16E94A0490E3;
IL2CPP_EXTERN_C String_t* _stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0A48093245B11D1CF41CDBC4AFF508EB42565FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral0C1B69FB61A6CD6964FE8AA0FB8A0D97F79A75D0;
IL2CPP_EXTERN_C String_t* _stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral1630E6A6E4B065CB228F2BB0735FC4EB04ADCF98;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D;
IL2CPP_EXTERN_C String_t* _stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA00EFDADF41DD1A8E3FD110F18FDAD5DEBD35C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral3065FA2C720E40C8FC0DC90188DBEA106500F8EE;
IL2CPP_EXTERN_C String_t* _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral32440B087498D62941E775333255FCC6DB55A3C6;
IL2CPP_EXTERN_C String_t* _stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B;
IL2CPP_EXTERN_C String_t* _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440;
IL2CPP_EXTERN_C String_t* _stringLiteral3BD5972A07863DBAD36A9286C5793DEC1360ECB4;
IL2CPP_EXTERN_C String_t* _stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E;
IL2CPP_EXTERN_C String_t* _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF;
IL2CPP_EXTERN_C String_t* _stringLiteral44F5DD92B33E596A5AF2D73C305C0C73A86E67A0;
IL2CPP_EXTERN_C String_t* _stringLiteral470826B1713829B12EC07CD17F26AE762EBB2DA3;
IL2CPP_EXTERN_C String_t* _stringLiteral4808ACA9668728D6BBF49150A76132057225944C;
IL2CPP_EXTERN_C String_t* _stringLiteral4884823AC0611237DB6B45D5BFA4BA51FAF13BD8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C1BD0F6F123B290A609886443B652A39B80D375;
IL2CPP_EXTERN_C String_t* _stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7;
IL2CPP_EXTERN_C String_t* _stringLiteral5406000010459C9629C23A3F52C5C125B40F73BC;
IL2CPP_EXTERN_C String_t* _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53;
IL2CPP_EXTERN_C String_t* _stringLiteral58F931F10A675BF522498EEA24840EDCBF67884B;
IL2CPP_EXTERN_C String_t* _stringLiteral5DEC62633B91F637A507EB8F0D4EB1A503F2D568;
IL2CPP_EXTERN_C String_t* _stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral669F15A84AF7656AD4522C599D67132E9745C548;
IL2CPP_EXTERN_C String_t* _stringLiteral693D8A53F145C7D11509B15FC34934019E0571D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9B92F50891ACDFD6E5AEDA5FF9718FB6F7974A;
IL2CPP_EXTERN_C String_t* _stringLiteral701DC9E727DA0727D9FC7F0E77504EAE314EC0F1;
IL2CPP_EXTERN_C String_t* _stringLiteral72FA5BE3E4B8531509F69A7F6CA57618D5D43A61;
IL2CPP_EXTERN_C String_t* _stringLiteral73ADA9DA89DFECB7474EC1B738BB885423340DB0;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral781CB9814346C2AE8CFC48A7E11205DF3411362F;
IL2CPP_EXTERN_C String_t* _stringLiteral79CF1D1DCE2B8549C111E53AB789A72410C27E14;
IL2CPP_EXTERN_C String_t* _stringLiteral822B496EE7630A0562263AF42972445ECA49F024;
IL2CPP_EXTERN_C String_t* _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051;
IL2CPP_EXTERN_C String_t* _stringLiteral8A606CD24124B7144770746A88EAB7F3A3347CD5;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB65271BB3F238ED8EEC0DDE3790B40CD1B3E87;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral9005883C37C72962EAC489364C7779107A689749;
IL2CPP_EXTERN_C String_t* _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89;
IL2CPP_EXTERN_C String_t* _stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E;
IL2CPP_EXTERN_C String_t* _stringLiteral93BFC39D9546EEBAA13D06E4EC75EBFFDD73F09F;
IL2CPP_EXTERN_C String_t* _stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137;
IL2CPP_EXTERN_C String_t* _stringLiteral976FB1ACBEFAB7CFF92E7FF8AE7D48D3C05C737E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B473FDCF1E22CC076BA5A783F79F740D8B866BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F;
IL2CPP_EXTERN_C String_t* _stringLiteralA30A319AA687AE3746EC5D2CF63BAAEFB61329EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA;
IL2CPP_EXTERN_C String_t* _stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F;
IL2CPP_EXTERN_C String_t* _stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43;
IL2CPP_EXTERN_C String_t* _stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30;
IL2CPP_EXTERN_C String_t* _stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1;
IL2CPP_EXTERN_C String_t* _stringLiteralB1A549EDBF5E3E972A89625082AEB91FBE4924E7;
IL2CPP_EXTERN_C String_t* _stringLiteralB363C38D69BA2131BFAC6B3A30B068F5D711FDD2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8430047A8CA397F4ED5D0A788D237BC08794FEE;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DBAC9CF56B0AEBB094EFC3B0EA857FBBB2DCCA;
IL2CPP_EXTERN_C String_t* _stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E;
IL2CPP_EXTERN_C String_t* _stringLiteralBC22CDC8B392695D414614FCEE97DE7ACBEDFAD4;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284;
IL2CPP_EXTERN_C String_t* _stringLiteralBD23C70D352AA602D5491E7C7FCEB52064B117B2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4BBEB33DE8EC79F971D06FB4638DBA8B95D8C3;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC099538E088C6E62A247D51EA699EE72124CBCF3;
IL2CPP_EXTERN_C String_t* _stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B1A3AE82DC9BDEAFFF5721A5835BEE2F9979C8;
IL2CPP_EXTERN_C String_t* _stringLiteralCBFB04344FA59B6623FF62810E5DD94961ED14C3;
IL2CPP_EXTERN_C String_t* _stringLiteralCC044A2579C3954D678EBF08C8DAC01AF1D9EFC6;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD17D4BCEFECEE7E1138F2533CA49A4CDC615645B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3956898EE94B4FCD4D77E554E15CD73E025A936;
IL2CPP_EXTERN_C String_t* _stringLiteralD43968A36F3C72405508385965198B56C3FF20DC;
IL2CPP_EXTERN_C String_t* _stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A2AD71D5CE12DDD6953588FA1C8DE96564D962;
IL2CPP_EXTERN_C String_t* _stringLiteralD7B52A9E67083712E08E22E364570ADD87EA8F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE064C4CC4E7B240EB3B341C5881A1AD6B0D6C5DE;
IL2CPP_EXTERN_C String_t* _stringLiteralE9EB1B0A40A99AF7C58ECF13D7E677FBF1C73103;
IL2CPP_EXTERN_C String_t* _stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F;
IL2CPP_EXTERN_C String_t* _stringLiteralEEA4F466105903075D20BC8499F8F8B995DF069C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF6E691A340B49271935DA79C497863362828A90F;
IL2CPP_EXTERN_C String_t* _stringLiteralFF3C46BE916CBA1A40D5EB10CF7D3C9C8254ABCC;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThemisUtil__OnLogCallbackHandler_m64B692CA53EA6683882A1866DB543033E43DF406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThemisUtil__OnUncaughtExceptionHandler_m1AB00A79AED5B832FB84FDF0027A0583DE5B614F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterUnityLogListenerU3Eb__25_0_m97210C4980DDDB6A0FB8FC2263812967981694BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass48_0_U3CGetTapTapDidU3Eb__0_m7A484F1512CF8063FBBA12E998D1E41688372FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t20617B78C624A4C7E38F6942482B7318E4919FA8 
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// TapTap.Common.Command
struct Command_t8D907831ABE54215BACADB269C51675B35BD5D37  : public RuntimeObject
{
	// System.String TapTap.Common.Command::service
	String_t* ___service_0;
	// System.String TapTap.Common.Command::method
	String_t* ___method_1;
	// System.String TapTap.Common.Command::args
	String_t* ___args_2;
	// System.Boolean TapTap.Common.Command::callback
	bool ___callback_3;
	// System.String TapTap.Common.Command::callbackId
	String_t* ___callbackId_4;
	// System.Boolean TapTap.Common.Command::onceTime
	bool ___onceTime_5;
};

// TapTap.Common.EngineBridge
struct EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967  : public RuntimeObject
{
	// TapTap.Common.IBridge TapTap.Common.EngineBridge::_bridge
	RuntimeObject* ____bridge_1;
};

struct EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_StaticFields
{
	// TapTap.Common.EngineBridge modreq(System.Runtime.CompilerServices.IsVolatile) TapTap.Common.EngineBridge::_sInstance
	EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* ____sInstance_0;
	// System.Object TapTap.Common.EngineBridge::Locker
	RuntimeObject* ___Locker_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
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

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// TapTap.Common.Result
struct Result_tBE550EEB85C4A496D58A81389702E1E2E097239A  : public RuntimeObject
{
	// System.Int32 TapTap.Common.Result::code
	int32_t ___code_2;
	// System.String TapTap.Common.Result::message
	String_t* ___message_3;
	// System.String TapTap.Common.Result::content
	String_t* ___content_4;
	// System.String TapTap.Common.Result::callbackId
	String_t* ___callbackId_5;
	// System.Boolean TapTap.Common.Result::onceTime
	bool ___onceTime_6;
};

struct Result_tBE550EEB85C4A496D58A81389702E1E2E097239A_StaticFields
{
	// System.Int32 TapTap.Common.Result::RESULT_SUCCESS
	int32_t ___RESULT_SUCCESS_0;
	// System.Int32 TapTap.Common.Result::RESULT_ERROR
	int32_t ___RESULT_ERROR_1;
};

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t* ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_2;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_3;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_4;
};

struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_5;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_6;
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

// TapTap.Common.TapCommon
struct TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9  : public RuntimeObject
{
};

struct TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_StaticFields
{
	// System.String TapTap.Common.TapCommon::SDKVersion
	String_t* ___SDKVersion_0;
	// System.Int32 TapTap.Common.TapCommon::SDKVersionCode
	int32_t ___SDKVersionCode_1;
	// TapTap.Common.TapConfig TapTap.Common.TapCommon::config
	TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* ___config_2;
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

// TapTap.Common.TapDBConfig
struct TapDBConfig_t059DF0A408046553C74EC01CAF3437BD0F33A049  : public RuntimeObject
{
	// System.Boolean TapTap.Common.TapDBConfig::Enable
	bool ___Enable_0;
	// System.String TapTap.Common.TapDBConfig::Channel
	String_t* ___Channel_1;
	// System.String TapTap.Common.TapDBConfig::GameVersion
	String_t* ___GameVersion_2;
	// System.Boolean TapTap.Common.TapDBConfig::AdvertiserIDCollectionEnabled
	bool ___AdvertiserIDCollectionEnabled_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TapTap.Common.TapDBConfig::DeviceLoginProperties
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___DeviceLoginProperties_4;
};

// TapTap.TapDB.Mobile.TapDBConstants
struct TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146  : public RuntimeObject
{
};

struct TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields
{
	// System.String TapTap.TapDB.Mobile.TapDBConstants::TAPDB_SERVICE
	String_t* ___TAPDB_SERVICE_0;
	// System.String TapTap.TapDB.Mobile.TapDBConstants::TAPDB_CLZ
	String_t* ___TAPDB_CLZ_1;
	// System.String TapTap.TapDB.Mobile.TapDBConstants::TAPDB_IMPL
	String_t* ___TAPDB_IMPL_2;
};

// TapTap.TapDB.Mobile.TapDBImpl
struct TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158  : public RuntimeObject
{
	// TapTap.TapDB.IDynamicProperties TapTap.TapDB.Mobile.TapDBImpl::_dynamicProperties
	RuntimeObject* ____dynamicProperties_2;
	// UnityEngine.AndroidJavaObject TapTap.TapDB.Mobile.TapDBImpl::_dbServiceImpl
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____dbServiceImpl_3;
};

struct TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields
{
	// TapTap.TapDB.Mobile.TapDBImpl modreq(System.Runtime.CompilerServices.IsVolatile) TapTap.TapDB.Mobile.TapDBImpl::_sInstance
	TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* ____sInstance_0;
	// System.Object TapTap.TapDB.Mobile.TapDBImpl::Locker
	RuntimeObject* ___Locker_1;
};

// TapTap.TapDB.Mobile.TapDBMobile
struct TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB  : public RuntimeObject
{
};

// TapTap.TapDB.Mobile.ThemisUtil
struct ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF  : public RuntimeObject
{
};

struct ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields
{
	// TapTap.TapDB.TapDB/LogCallbackDelegate TapTap.TapDB.Mobile.ThemisUtil::_LogCallbackEventHandler
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ____LogCallbackEventHandler_0;
	// TapTap.TapDB.LogSeverity TapTap.TapDB.Mobile.ThemisUtil::_autoReportLogLevel
	int32_t ____autoReportLogLevel_1;
	// System.Boolean TapTap.TapDB.Mobile.ThemisUtil::_autoQuitApplicationAfterReport
	bool ____autoQuitApplicationAfterReport_2;
	// System.Int32 TapTap.TapDB.Mobile.ThemisUtil::EXCEPTION_TYPE_UNCAUGHT
	int32_t ___EXCEPTION_TYPE_UNCAUGHT_3;
	// System.Int32 TapTap.TapDB.Mobile.ThemisUtil::EXCEPTION_TYPE_CAUGHT
	int32_t ___EXCEPTION_TYPE_CAUGHT_4;
	// System.Boolean TapTap.TapDB.Mobile.ThemisUtil::enableDebug
	bool ___enableDebug_5;
	// System.Boolean TapTap.TapDB.Mobile.ThemisUtil::_uncaughtAutoReportOnce
	bool ____uncaughtAutoReportOnce_6;
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

// TapTap.Common.Command/Builder
struct Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9  : public RuntimeObject
{
	// System.String TapTap.Common.Command/Builder::service
	String_t* ___service_0;
	// System.String TapTap.Common.Command/Builder::method
	String_t* ___method_1;
	// System.Boolean TapTap.Common.Command/Builder::callback
	bool ___callback_2;
	// System.String TapTap.Common.Command/Builder::callbackId
	String_t* ___callbackId_3;
	// System.Boolean TapTap.Common.Command/Builder::onceTime
	bool ___onceTime_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TapTap.Common.Command/Builder::args
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___args_5;
};

// TapTap.TapDB.Mobile.TapDBImpl/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200  : public RuntimeObject
{
	// System.Action`1<System.String> TapTap.TapDB.Mobile.TapDBImpl/<>c__DisplayClass48_0::action
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action_0;
};

// TapTap.TapDB.Mobile.ThemisUtil/<>c
struct U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9  : public RuntimeObject
{
};

struct U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields
{
	// TapTap.TapDB.Mobile.ThemisUtil/<>c TapTap.TapDB.Mobile.ThemisUtil/<>c::<>9
	U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9* ___U3CU3E9_0;
	// System.Action`1<TapTap.Common.Result> TapTap.TapDB.Mobile.ThemisUtil/<>c::<>9__25_0
	Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* ___U3CU3E9__25_0_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object System.UnhandledExceptionEventArgs::_exception
	RuntimeObject* ____exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_isTerminating
	bool ____isTerminating_2;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
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

// TapTap.TapDB.Mobile.TapDBDynamicProperties
struct TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// TapTap.TapDB.IDynamicProperties TapTap.TapDB.Mobile.TapDBDynamicProperties::_properties
	RuntimeObject* ____properties_4;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<TapTap.Common.Result>
struct Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// TapTap.TapDB.TapDB/LogCallbackDelegate
struct LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02  : public MulticastDelegate_t
{
};

// TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate
struct TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD  : public MulticastDelegate_t
{
};

// TapTap.TapDB.Mobile.ThemisUtil/reportExceptionDel
struct reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.String TapTap.TapDB.Mobile.TapDBImpl::DynamicPropertiesDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TapTap.Common.EngineBridge TapTap.Common.EngineBridge::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7 (const RuntimeMethod* method) ;
// System.Void TapTap.Common.EngineBridge::Register(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge_Register_m840F3CA574A4574F8F94390083FBF090F643ABD0 (EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* __this, String_t* ___serviceClzName0, String_t* ___serviceImplName1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl__ctor_m78533CB1EC5CEFB1F21DA19B79F8AC24590EAB22 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) ;
// System.Void TapTap.Common.Command/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, const RuntimeMethod* method) ;
// TapTap.Common.Command/Builder TapTap.Common.Command/Builder::Service(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2 (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, String_t* ___service0, const RuntimeMethod* method) ;
// TapTap.Common.Command/Builder TapTap.Common.Command/Builder::Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, String_t* ___method0, const RuntimeMethod* method) ;
// TapTap.Common.Command/Builder TapTap.Common.Command/Builder::Args(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TapTap.Common.Command TapTap.Common.Command/Builder::CommandBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Command_t8D907831ABE54215BACADB269C51675B35BD5D37* Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44 (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, const RuntimeMethod* method) ;
// System.Void TapTap.Common.EngineBridge::CallHandler(TapTap.Common.Command)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2 (EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* __this, Command_t8D907831ABE54215BACADB269C51675B35BD5D37* ___command0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::RegisterUnityLogListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_RegisterUnityLogListener_m0A09FDAAADFBBDA3E0684CED705C908484C5FA97 (const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::EnableIDFA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_EnableIDFA_m01DD68C3BC23B3CC93F3593C78861B21C7FAE517 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterStaticPropertiesCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterStaticPropertiesCommon_m3B3C1022A0B2062EE28E23E74ADD473504F3E74B (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___superProperties0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TapTap.Common.Command::.ctor(System.String,System.String,System.Boolean,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606 (Command_t8D907831ABE54215BACADB269C51675B35BD5D37* __this, String_t* ___service0, String_t* ___method1, bool ___callback2, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic3, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetUser_mC628857E63DEBEAEF33903E971E93EF342BC70B0 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___userId0, const RuntimeMethod* method) ;
// TapTap.Common.Command/Builder TapTap.Common.Command/Builder::Callback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, bool ___callback0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnChargeCommon(System.String,System.String,System.Int64,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnChargeCommon_m6A089B172FA343C0733B7E8C5026128BB0CD7E92 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, RuntimeObject* ___properties5, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::TrackEventCommon(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_TrackEventCommon_m12A63BA1911FEC3C954BB0B6AEEAB0B91D1B35AE (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventName0, RuntimeObject* ___properties1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceInitializeCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceInitializeCommon_m5219991DEC5E81E8D8537935193A3ACADAA1945D (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceUpdateCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceUpdateCommon_mF78BA10FF57C1B74EB17805AF833AED43D5AE20C (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceAddCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceAddCommon_m4D352328B2BE670294DD411C470940037A607270 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserInitializeCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserInitializeCommon_m20B1AEA10A7212BC8461BFB20EAFF71C9F043CF5 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserUpdateCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserUpdateCommon_m4207F1BF2B44929C85ECF3EC1DEF14C861BC464A (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserAddCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserAddCommon_mD36549E0E61C2AF2CBE6E73572ABC7F6C813906E (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::SetEnableDebug(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThemisUtil_SetEnableDebug_m98F7DF69331AC0A65C8E97351EA2C217AC6DC805_inline (bool ___enable0, const RuntimeMethod* method) ;
// System.Boolean TapTap.Common.Platform::IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED (const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m90E0B097C58736B642F23BB6DC43C2B5F9F39A86 (U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* __this, const RuntimeMethod* method) ;
// TapTap.Common.Command/Builder TapTap.Common.Command/Builder::OnceTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* Builder_OnceTime_mF429D389381EA40CA4B50D623C34C5BFC6E63660 (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* __this, bool ___onceTime0, const RuntimeMethod* method) ;
// System.Void System.Action`1<TapTap.Common.Result>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB777D320DBF09E0673EDEBE6D6CD7A1FF9FBA5AB (Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TapTap.Common.EngineBridge::CallHandler(TapTap.Common.Command,System.Action`1<TapTap.Common.Result>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EngineBridge_CallHandler_m7C6FFD831026C389649338CC2C933673059423E8 (EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* __this, Command_t8D907831ABE54215BACADB269C51675B35BD5D37* ___command0, Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* ___action1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBDynamicProperties::.ctor(TapTap.TapDB.IDynamicProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBDynamicProperties__ctor_m359CBAF5C208C001F6BCC5958849D64E90F133B1 (TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean TapTap.Common.Platform::IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsIOS_m21A7C2007D6392091E88A7089322532332D2DCF4 (const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBDynamicPropertiesDelegate__ctor_mFD78014A332CE7304A86C3492D5587A07BF5A878 (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::registerDynamicProperties(TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_registerDynamicProperties_m3FAD17BF6714A7200DA3D6C427A2854F890E0558 (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* ___propertiesDelegate0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoReportLogLevel_mFE5B9604B1F1C09A02572F404008A4DF27BB6314_inline (int32_t ___level0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_ConfigAutoQuitApplication(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoQuitApplication_mC516F51559AC3F399B64D9F056D5B11E3D402AB8_inline (bool ___autoQuit0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_RegisterLogCallback_m5DE4878837AF85B12B47227A08F5CE6D0732E3F9 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_UnregisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_UnregisterLogCallback_m5807B5D12F4C3773369BA2506AC3D3E4945E4E63 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::ExceptionReport(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_ExceptionReport_mF3AA672E88883C987EAD233DCC7D6E306BB97795 (Exception_t* ___e0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String TapTap.Common.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mD5116E9694094C07A4E858093646915C53205466 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TapTap.Common.TapConfig TapTap.Common.TapCommon::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* TapCommon_get_Config_m32A2FAD3A99D7382E0A5EF1BB18FC341108D1F5F_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TapTap.TapDB.Mobile.TapDBImpl TapTap.TapDB.Mobile.TapDBImpl::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E (const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::Init(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_Init_mEF507F6A4BAD281051290A808BA2BB07B4FD081E (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, bool ___isCN3, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_Init_m1B1F825E7835AA2283F319CA1F6DD2058DDFF223 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, int32_t ___region3, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties4, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetUser_m6424B50A6ABB6FEDC1045A511233AD47BFA02A66 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___userId0, String_t* ___loginType1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetUserWithProperties_m08186266BDC9C408132267206FD50A1C8B3261A8 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___userId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetName_m04C9EAA138BCD23446DA39FA2796BFC1F623A74A (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetLevel_m6C48803CCDCFB56F5A7B30CAE15FB52FC2E1A1E0 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetServer_m00461CA80B6DE5460A900DA37159DBC17F2FA482 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___server0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnCharge(System.String,System.String,System.Int64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnCharge_mAD93C163C240877A8A313939FDB0C37ECE5E98E7 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnCharge_mFFDE90D862DD783B492D3A92F090231DDD455095 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, String_t* ___properties5, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnCharge_m4B4FBC0795E5A6D695381BC24C9F0C56C23937AA (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties5, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnEvent_m00410C8389478C00B4DA31162CBAE5D153B5C5C2 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventCode0, String_t* ___properties1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::TrackEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_TrackEvent_mFE211497C4FD37AC5DB6BEC401245606424301C2 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventName0, String_t* ___properties1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_TrackEvent_mE73A5F9B6D2CA7A0849A960DB4F83585B148B2EF (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventName0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterStaticProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterStaticProperties_mA85021331757AA2E68CCE117816BE86071C985D2 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___superProperties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterStaticProperties_m7E020A6B73B781A8FE9FE7A89C8AFA7C59A719DA (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___superProperties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UnregisterStaticProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UnregisterStaticProperty_m8B3BE67189F65F5317C3E3EA6025A3A5AAB0B9F3 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterDynamicProperties_mE8AA11318B44A98EB6576197E1DDAD1D37C5A050 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ClearStaticProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ClearStaticProperties_m295BA3234731196367D121A143AA2364C681155B (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceInitialize_mC7803CBF80389BCAE35310CDE5DA50A46F349590 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceInitialize_m4605679C33CE7BCE6D3DE8DCB5F1897A434A709A (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceUpdate_m88F67034BFFA34179AAD50260619BD05908AEB39 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceUpdate_mB208CC16E8F46B66403E20DEF8E8EA8D7EE8F46B (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceAdd_m7A8C71AAA67047643697563D84AA2820B1551F86 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceAdd_mCA042B501748D655C203D5A3C47CE71BAFF37ADC (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserInitialize_m54B676940B8C8B9F154005EDE41672E10D421DF5 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserInitialize_mD91A2B8C822187BEBCBC9AB31407DAEE8CFA4208 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserUpdate_m7C6E4246067F685C389715248DBD03F893D81153 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserUpdate_m764019012BED6940235482EA91E8CDA6138A80F6 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserAdd_m455C6870E8EFC192B8919B0704266D96A8E8D115 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserAdd_m6056289842A6AC1CD4EA09A153C300BA86E75DC9 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::EnableLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_EnableLog_m1688043406D26401CE8069E45704016D3B272F1E (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::AdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_AdvertiserIDCollectionEnabled_mC28076597371F1277CE914F4C2969645BA2FC6D4 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::CloseFetchTapTapDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_CloseFetchTapTapDeviceId_mAD7EA4AC1E775EA859AD485E31F741B5DB5FAA96 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ClearUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ClearUser_m3D47982E36F20857B26B005D59690E3307593D47 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::GetTapTapDid(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_GetTapTapDid_m8CA673F6A4BE16FE2E7E9F80F55E488FFBD73C1F (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ConfigAutoReportLogLevel_m1960546CB00FCBDA7B6A75432E47D662D1CE9935 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ConfigAutoQuitApplication_mA801609C21ABE774FA613A7220C7067375D877F5 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterLogCallback_m78CAFC88F6A2C1E11A91894FC8808D0014F3E436 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UnRegisterLogCallback_mE4ABE1CAD9A14664AEF8ABE2FED02060E8A943CC (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ReportException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ReportException_m534D679EEA2F93AD54F63E2F852F9DBA775E1249 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Exception_t* ___e0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetOAIDCert(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetOAIDCert_m20BCDDB2D0CBB4B737E98684815E5EFF1B26420C (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___cert0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.TapDBImpl::EnableThemis(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_EnableThemis_m076402B0B70B033D75FC0B1F2DFBADEBF1524F57 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::LocalDebugLog(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::add__LogCallbackEventHandler(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_add__LogCallbackEventHandler_m30A3CDB68452002FFE595AC89B3BE9D530DD217B (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___value0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::remove__LogCallbackEventHandler(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_remove__LogCallbackEventHandler_mE77FF294341D740B0CC581EFB29794B59A3EB57D (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___value0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_HandleException(System.Exception,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__HandleException_m83F217DA81A1FD4E641F35255CA478C679F1FF4D (Exception_t* ___e0, String_t* ___message1, bool ___uncaught2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_UnhandledException_mB02B27A301E597F7F4D581ED6058E9DBA3F6EABA (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_inline (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_HandleException(TapTap.TapDB.LogSeverity,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__HandleException_mF2A950444F0BF977E126712022CAABFDBC0D94DE (int32_t ___logLevel0, String_t* ___name1, String_t* ___message2, String_t* ___stackTrace3, bool ___uncaught4, const RuntimeMethod* method) ;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___e0, bool ___fNeedFileInfo1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_reportException(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__reportException_mEF63E76C20D1617A7392A991ACFEE5779A377C52 (String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, bool ___uncaught3, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___groupname0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200 (const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::ReportException(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_ReportException_m21C789446ADF4BBA91D8F2FD2323293BC3BBF56C (String_t* ___name0, String_t* ___message1, String_t* ___stackTrace2, bool ___isQuitApp3, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m256B2536C1E76683FA506BDA5EC3D3FD7E4D4C18 (U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9* __this, const RuntimeMethod* method) ;
// System.Boolean TapTap.Common.EngineBridge::CheckResult(TapTap.Common.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EngineBridge_CheckResult_mCCEAD784C31723C6CF48ADCE6071896E020EC0BA (Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* ___result0, const RuntimeMethod* method) ;
// System.Int16 System.Int16::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_RegisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__RegisterExceptionHandler_mEE9BFEB74600889623990DF92986BA044207FA9B (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL registerDynamicProperties(Il2CppMethodPointer);
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
// System.Void TapTap.TapDB.Mobile.TapDBConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBConstants__cctor_m78B3B971D39809C49991CC6211BCA07E49838FDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F5DD92B33E596A5AF2D73C305C0C73A86E67A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral470826B1713829B12EC07CD17F26AE762EBB2DA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58F931F10A675BF522498EEA24840EDCBF67884B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string TAPDB_SERVICE = "TDSTapDBService";
		((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0 = _stringLiteral44F5DD92B33E596A5AF2D73C305C0C73A86E67A0;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0), (void*)_stringLiteral44F5DD92B33E596A5AF2D73C305C0C73A86E67A0);
		// public static string TAPDB_CLZ = "com.tds.tapdb.wrapper.TapDBService";
		((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_CLZ_1 = _stringLiteral58F931F10A675BF522498EEA24840EDCBF67884B;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_CLZ_1), (void*)_stringLiteral58F931F10A675BF522498EEA24840EDCBF67884B);
		// public static string TAPDB_IMPL = "com.tds.tapdb.wrapper.TapDBServiceImpl";
		((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_IMPL_2 = _stringLiteral470826B1713829B12EC07CD17F26AE762EBB2DA3;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_IMPL_2), (void*)_stringLiteral470826B1713829B12EC07CD17F26AE762EBB2DA3);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	returnValue = TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C(NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl__ctor_m78533CB1EC5CEFB1F21DA19B79F8AC24590EAB22 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TapDBImpl()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// EngineBridge.GetInstance().Register(TapDBConstants.TAPDB_CLZ, TapDBConstants.TAPDB_IMPL);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_CLZ_1;
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_IMPL_2;
		NullCheck(L_0);
		EngineBridge_Register_m840F3CA574A4574F8F94390083FBF090F643ABD0(L_0, L_1, L_2, NULL);
		// _dbServiceImpl = new AndroidJavaObject(TapDBConstants.TAPDB_IMPL);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_IMPL_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_5, L_3, L_4, NULL);
		__this->____dbServiceImpl_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbServiceImpl_3), (void*)L_5);
		// }
		return;
	}
}
// TapTap.TapDB.Mobile.TapDBImpl TapTap.TapDB.Mobile.TapDBImpl::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (Locker)
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->___Locker_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (_sInstance == null)
				il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
				TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_4 = ((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->____sInstance_0;
				il2cpp_codegen_memory_barrier();
				if (L_4)
				{
					goto IL_0025_1;
				}
			}
			{
				// _sInstance = new TapDBImpl();
				TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_5 = (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158*)il2cpp_codegen_object_new(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				TapDBImpl__ctor_m78533CB1EC5CEFB1F21DA19B79F8AC24590EAB22(L_5, NULL);
				il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
				il2cpp_codegen_memory_barrier();
				((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->____sInstance_0 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->____sInstance_0), (void*)L_5);
			}

IL_0025_1:
			{
				// }
				goto IL_0031;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// return _sInstance;
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_6 = ((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->____sInstance_0;
		il2cpp_codegen_memory_barrier();
		return L_6;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::Init(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_Init_mEF507F6A4BAD281051290A808BA2BB07B4FD081E (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, bool ___isCN3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC099538E088C6E62A247D51EA699EE72124CBCF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3C46BE916CBA1A40D5EB10CF7D3C9C8254ABCC);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("init")
		//     .Args("clientId", clientId)
		//     .Args("channel", channel)
		//     .Args("isCN", isCN)
		//     .Args("gameVersion", gameVersion).CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, NULL);
		String_t* L_4 = ___clientId0;
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_3, _stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302, L_4, NULL);
		String_t* L_6 = ___channel1;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF, L_6, NULL);
		bool L_8 = ___isCN3;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_11;
		L_11 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_7, _stringLiteralC099538E088C6E62A247D51EA699EE72124CBCF3, L_10, NULL);
		String_t* L_12 = ___gameVersion2;
		NullCheck(L_11);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_13;
		L_13 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_11, _stringLiteralFF3C46BE916CBA1A40D5EB10CF7D3C9C8254ABCC, L_12, NULL);
		NullCheck(L_13);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_14;
		L_14 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_13, NULL);
		V_0 = L_14;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_15;
		L_15 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_16 = V_0;
		NullCheck(L_15);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_15, L_16, NULL);
		// ThemisUtil.RegisterUnityLogListener();
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_RegisterUnityLogListener_m0A09FDAAADFBBDA3E0684CED705C908484C5FA97(NULL);
		// EnableIDFA();
		TapDBImpl_EnableIDFA_m01DD68C3BC23B3CC93F3593C78861B21C7FAE517(__this, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_Init_m1B1F825E7835AA2283F319CA1F6DD2058DDFF223 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, int32_t ___region3, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF3C46BE916CBA1A40D5EB10CF7D3C9C8254ABCC);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// if (properties == null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties4;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// properties = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		___properties4 = L_1;
	}

IL_000b:
	{
		// var command = new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("init")
		//     .Args("clientId", clientId)
		//     .Args("channel", channel)
		//     .Args("gameVersion", gameVersion)
		//     .Args("region", (int)region)
		//     .Args("properties",properties)
		//     .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_2, L_3, NULL);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_4, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, NULL);
		String_t* L_6 = ___clientId0;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302, L_6, NULL);
		String_t* L_8 = ___channel1;
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_9;
		L_9 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_7, _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF, L_8, NULL);
		String_t* L_10 = ___gameVersion2;
		NullCheck(L_9);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_11;
		L_11 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_9, _stringLiteralFF3C46BE916CBA1A40D5EB10CF7D3C9C8254ABCC, L_10, NULL);
		int32_t L_12 = ___region3;
		int32_t L_13 = ((int32_t)L_12);
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_15;
		L_15 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_11, _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89, L_14, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = ___properties4;
		NullCheck(L_15);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_17;
		L_17 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_15, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, L_16, NULL);
		NullCheck(L_17);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_18;
		L_18 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_17, NULL);
		V_0 = L_18;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_19;
		L_19 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_20 = V_0;
		NullCheck(L_19);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_19, L_20, NULL);
		// ThemisUtil.RegisterUnityLogListener();
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_RegisterUnityLogListener_m0A09FDAAADFBBDA3E0684CED705C908484C5FA97(NULL);
		// EnableIDFA();
		TapDBImpl_EnableIDFA_m01DD68C3BC23B3CC93F3593C78861B21C7FAE517(__this, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterStaticProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterStaticProperties_mA85021331757AA2E68CCE117816BE86071C985D2 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___superProperties0, const RuntimeMethod* method) 
{
	{
		// RegisterStaticPropertiesCommon(superProperties);
		String_t* L_0 = ___superProperties0;
		TapDBImpl_RegisterStaticPropertiesCommon_m3B3C1022A0B2062EE28E23E74ADD473504F3E74B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterStaticPropertiesCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterStaticPropertiesCommon_m3B3C1022A0B2062EE28E23E74ADD473504F3E74B (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___superProperties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32440B087498D62941E775333255FCC6DB55A3C6);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command.Builder()
		//    .Service(TapDBConstants.TAPDB_SERVICE)
		//    .Method("registerStaticProperties")
		//    .Args("registerStaticProperties", superProperties)
		//    .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteral32440B087498D62941E775333255FCC6DB55A3C6, NULL);
		RuntimeObject* L_4 = ___superProperties0;
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_3, _stringLiteral32440B087498D62941E775333255FCC6DB55A3C6, L_4, NULL);
		NullCheck(L_5);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_6;
		L_6 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_5, NULL);
		V_0 = L_6;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_7;
		L_7 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_8 = V_0;
		NullCheck(L_7);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterStaticProperties_m7E020A6B73B781A8FE9FE7A89C8AFA7C59A719DA (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___superProperties0, const RuntimeMethod* method) 
{
	{
		// RegisterStaticPropertiesCommon(superProperties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___superProperties0;
		TapDBImpl_RegisterStaticPropertiesCommon_m3B3C1022A0B2062EE28E23E74ADD473504F3E74B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UnregisterStaticProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UnregisterStaticProperty_m8B3BE67189F65F5317C3E3EA6025A3A5AAB0B9F3 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___propertyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04B4D153124D9BB8FB4AA8015B24D3C712019EE2);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object> {{"unregisterStaticProperty", propertyName}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = ___propertyName0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteral04B4D153124D9BB8FB4AA8015B24D3C712019EE2, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "unregisterStaticProperty", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_5 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_5, L_3, _stringLiteral04B4D153124D9BB8FB4AA8015B24D3C712019EE2, (bool)0, L_4, NULL);
		V_1 = L_5;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_6;
		L_6 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = V_1;
		NullCheck(L_6);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ClearStaticProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ClearStaticProperties_m295BA3234731196367D121A143AA2364C681155B (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3956898EE94B4FCD4D77E554E15CD73E025A936);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "clearStaticProperties", false, null);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_1 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_1, L_0, _stringLiteralD3956898EE94B4FCD4D77E554E15CD73E025A936, (bool)0, (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL, NULL);
		V_0 = L_1;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_2;
		L_2 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_3 = V_0;
		NullCheck(L_2);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ClearUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ClearUser_m3D47982E36F20857B26B005D59690E3307593D47 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781CB9814346C2AE8CFC48A7E11205DF3411362F);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "clearUser", false, null);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_1 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_1, L_0, _stringLiteral781CB9814346C2AE8CFC48A7E11205DF3411362F, (bool)0, (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL, NULL);
		V_0 = L_1;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_2;
		L_2 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_3 = V_0;
		NullCheck(L_2);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetUser_mC628857E63DEBEAEF33903E971E93EF342BC70B0 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___userId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93BFC39D9546EEBAA13D06E4EC75EBFFDD73F09F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object> {{"userId", userId}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = ___userId0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "setUser", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_5 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_5, L_3, _stringLiteral93BFC39D9546EEBAA13D06E4EC75EBFFDD73F09F, (bool)0, L_4, NULL);
		V_1 = L_5;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_6;
		L_6 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = V_1;
		NullCheck(L_6);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetUser_m6424B50A6ABB6FEDC1045A511233AD47BFA02A66 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___userId0, String_t* ___loginType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3065FA2C720E40C8FC0DC90188DBEA106500F8EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DBAC9CF56B0AEBB094EFC3B0EA857FBBB2DCCA);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object> {{"userId", userId}, {"loginType", loginType}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = ___userId0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = L_1;
		String_t* L_4 = ___loginType1;
		NullCheck(L_3);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_3, _stringLiteral3065FA2C720E40C8FC0DC90188DBEA106500F8EE, L_4, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_3;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "setUserWithParams", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_7, L_5, _stringLiteralB9DBAC9CF56B0AEBB094EFC3B0EA857FBBB2DCCA, (bool)0, L_6, NULL);
		V_1 = L_7;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_8;
		L_8 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9 = V_1;
		NullCheck(L_8);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetUserWithProperties_m08186266BDC9C408132267206FD50A1C8B3261A8 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___userId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA30A319AA687AE3746EC5D2CF63BAAEFB61329EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// if (properties == null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// SetUser(userId);
		String_t* L_1 = ___userId0;
		TapDBImpl_SetUser_mC628857E63DEBEAEF33903E971E93EF342BC70B0(__this, L_1, NULL);
		return;
	}

IL_000b:
	{
		//  var command = new Command.Builder()
		// .Service(TapDBConstants.TAPDB_SERVICE)
		// .Method("setUserWithProperties")
		// .Args("userId", userId)
		// .Args("properties", properties)
		// .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_2, L_3, NULL);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_4, _stringLiteralA30A319AA687AE3746EC5D2CF63BAAEFB61329EA, NULL);
		String_t* L_6 = ___userId0;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteralA3D208B8D59BE45DA847378972F5873C295095CA, L_6, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ___properties1;
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_9;
		L_9 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_7, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, L_8, NULL);
		NullCheck(L_9);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_10;
		L_10 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_9, NULL);
		V_0 = L_10;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_11;
		L_11 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_12 = V_0;
		NullCheck(L_11);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetName_m04C9EAA138BCD23446DA39FA2796BFC1F623A74A (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD23C70D352AA602D5491E7C7FCEB52064B117B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object> {{"name", name}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "setName", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_5 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_5, L_3, _stringLiteralBD23C70D352AA602D5491E7C7FCEB52064B117B2, (bool)0, L_4, NULL);
		V_1 = L_5;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_6;
		L_6 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = V_1;
		NullCheck(L_6);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetLevel_m6C48803CCDCFB56F5A7B30CAE15FB52FC2E1A1E0 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ADA9DA89DFECB7474EC1B738BB885423340DB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object> {{"level", level}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		int32_t L_2 = ___level0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_4, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "setLevel", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_7, L_5, _stringLiteral73ADA9DA89DFECB7474EC1B738BB885423340DB0, (bool)0, L_6, NULL);
		V_1 = L_7;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_8;
		L_8 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9 = V_1;
		NullCheck(L_8);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetServer_m00461CA80B6DE5460A900DA37159DBC17F2FA482 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___server0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4BBEB33DE8EC79F971D06FB4638DBA8B95D8C3);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object> {{"server", server}};
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = ___server0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "setServer", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_5 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_5, L_3, _stringLiteralBF4BBEB33DE8EC79F971D06FB4638DBA8B95D8C3, (bool)0, L_4, NULL);
		V_1 = L_5;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_6;
		L_6 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = V_1;
		NullCheck(L_6);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnCharge(System.String,System.String,System.Int64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnCharge_mAD93C163C240877A8A313939FDB0C37ECE5E98E7 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1630E6A6E4B065CB228F2BB0735FC4EB04ADCF98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD5972A07863DBAD36A9286C5793DEC1360ECB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral693D8A53F145C7D11509B15FC34934019E0571D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral701DC9E727DA0727D9FC7F0E77504EAE314EC0F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79CF1D1DCE2B8549C111E53AB789A72410C27E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC22CDC8B392695D414614FCEE97DE7ACBEDFAD4);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command.Builder()
		//  .Service(TapDBConstants.TAPDB_SERVICE)
		//  .Method("onCharge")
		//  .Args("orderId", orderId)
		//  .Args("product", product)
		//  .Args("amount", amount)
		//  .Args("currencyType", currencyType)
		//  .Args("payment", payment)
		//  .Callback(false)
		//  .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteralBC22CDC8B392695D414614FCEE97DE7ACBEDFAD4, NULL);
		String_t* L_4 = ___orderId0;
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_3, _stringLiteral3BD5972A07863DBAD36A9286C5793DEC1360ECB4, L_4, NULL);
		String_t* L_6 = ___product1;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral1630E6A6E4B065CB228F2BB0735FC4EB04ADCF98, L_6, NULL);
		int64_t L_8 = ___amount2;
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_11;
		L_11 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_7, _stringLiteral701DC9E727DA0727D9FC7F0E77504EAE314EC0F1, L_10, NULL);
		String_t* L_12 = ___currencyType3;
		NullCheck(L_11);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_13;
		L_13 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_11, _stringLiteral693D8A53F145C7D11509B15FC34934019E0571D1, L_12, NULL);
		String_t* L_14 = ___payment4;
		NullCheck(L_13);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_15;
		L_15 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_13, _stringLiteral79CF1D1DCE2B8549C111E53AB789A72410C27E14, L_14, NULL);
		NullCheck(L_15);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_16;
		L_16 = Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F(L_15, (bool)0, NULL);
		NullCheck(L_16);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_17;
		L_17 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_16, NULL);
		V_0 = L_17;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_18;
		L_18 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_19 = V_0;
		NullCheck(L_18);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnCharge_mFFDE90D862DD783B492D3A92F090231DDD455095 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, String_t* ___properties5, const RuntimeMethod* method) 
{
	{
		// OnChargeCommon(orderId, product, amount, currencyType, payment, properties);
		String_t* L_0 = ___orderId0;
		String_t* L_1 = ___product1;
		int64_t L_2 = ___amount2;
		String_t* L_3 = ___currencyType3;
		String_t* L_4 = ___payment4;
		String_t* L_5 = ___properties5;
		TapDBImpl_OnChargeCommon_m6A089B172FA343C0733B7E8C5026128BB0CD7E92(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnCharge_m4B4FBC0795E5A6D695381BC24C9F0C56C23937AA (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties5, const RuntimeMethod* method) 
{
	{
		// OnChargeCommon(orderId, product, amount, currencyType, payment, properties);
		String_t* L_0 = ___orderId0;
		String_t* L_1 = ___product1;
		int64_t L_2 = ___amount2;
		String_t* L_3 = ___currencyType3;
		String_t* L_4 = ___payment4;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___properties5;
		TapDBImpl_OnChargeCommon_m6A089B172FA343C0733B7E8C5026128BB0CD7E92(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnChargeCommon(System.String,System.String,System.Int64,System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnChargeCommon_m6A089B172FA343C0733B7E8C5026128BB0CD7E92 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, RuntimeObject* ___properties5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1630E6A6E4B065CB228F2BB0735FC4EB04ADCF98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD5972A07863DBAD36A9286C5793DEC1360ECB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral693D8A53F145C7D11509B15FC34934019E0571D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral701DC9E727DA0727D9FC7F0E77504EAE314EC0F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79CF1D1DCE2B8549C111E53AB789A72410C27E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE064C4CC4E7B240EB3B341C5881A1AD6B0D6C5DE);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command.Builder()
		//  .Service(TapDBConstants.TAPDB_SERVICE)
		//  .Method("onChargeWithProperties")
		//  .Args("orderId", orderId)
		//  .Args("product", product)
		//  .Args("amount", amount)
		//  .Args("currencyType", currencyType)
		//  .Args("payment", payment)
		//  .Args("properties",properties)
		//  .Callback(false)
		//  .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteralE064C4CC4E7B240EB3B341C5881A1AD6B0D6C5DE, NULL);
		String_t* L_4 = ___orderId0;
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_3, _stringLiteral3BD5972A07863DBAD36A9286C5793DEC1360ECB4, L_4, NULL);
		String_t* L_6 = ___product1;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral1630E6A6E4B065CB228F2BB0735FC4EB04ADCF98, L_6, NULL);
		int64_t L_8 = ___amount2;
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_11;
		L_11 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_7, _stringLiteral701DC9E727DA0727D9FC7F0E77504EAE314EC0F1, L_10, NULL);
		String_t* L_12 = ___currencyType3;
		NullCheck(L_11);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_13;
		L_13 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_11, _stringLiteral693D8A53F145C7D11509B15FC34934019E0571D1, L_12, NULL);
		String_t* L_14 = ___payment4;
		NullCheck(L_13);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_15;
		L_15 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_13, _stringLiteral79CF1D1DCE2B8549C111E53AB789A72410C27E14, L_14, NULL);
		RuntimeObject* L_16 = ___properties5;
		NullCheck(L_15);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_17;
		L_17 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_15, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, L_16, NULL);
		NullCheck(L_17);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_18;
		L_18 = Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F(L_17, (bool)0, NULL);
		NullCheck(L_18);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_19;
		L_19 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_18, NULL);
		V_0 = L_19;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_20;
		L_20 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_21 = V_0;
		NullCheck(L_20);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::OnEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_OnEvent_m00410C8389478C00B4DA31162CBAE5D153B5C5C2 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventCode0, String_t* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9005883C37C72962EAC489364C7779107A689749);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1A549EDBF5E3E972A89625082AEB91FBE4924E7);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		// var dic = new Dictionary<string, object>
		// {
		//     {"eventCode", eventCode}, {"properties", properties}
		// };
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		String_t* L_2 = ___eventCode0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteral9005883C37C72962EAC489364C7779107A689749, L_2, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = L_1;
		String_t* L_4 = ___properties1;
		NullCheck(L_3);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_3, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, L_4, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_3;
		// var command = new Command(TapDBConstants.TAPDB_SERVICE, "onEvent", false, dic);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_0;
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7 = (Command_t8D907831ABE54215BACADB269C51675B35BD5D37*)il2cpp_codegen_object_new(Command_t8D907831ABE54215BACADB269C51675B35BD5D37_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Command__ctor_m7DB816019F4E4D17004137EABC5ACB921B369606(L_7, L_5, _stringLiteralB1A549EDBF5E3E972A89625082AEB91FBE4924E7, (bool)0, L_6, NULL);
		V_1 = L_7;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_8;
		L_8 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9 = V_1;
		NullCheck(L_8);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::TrackEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_TrackEvent_mFE211497C4FD37AC5DB6BEC401245606424301C2 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventName0, String_t* ___properties1, const RuntimeMethod* method) 
{
	{
		// TrackEventCommon(eventName, properties);
		String_t* L_0 = ___eventName0;
		String_t* L_1 = ___properties1;
		TapDBImpl_TrackEventCommon_m12A63BA1911FEC3C954BB0B6AEEAB0B91D1B35AE(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_TrackEvent_mE73A5F9B6D2CA7A0849A960DB4F83585B148B2EF (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventName0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) 
{
	{
		// TrackEventCommon(eventName, properties);
		String_t* L_0 = ___eventName0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties1;
		TapDBImpl_TrackEventCommon_m12A63BA1911FEC3C954BB0B6AEEAB0B91D1B35AE(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::TrackEventCommon(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_TrackEventCommon_m12A63BA1911FEC3C954BB0B6AEEAB0B91D1B35AE (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___eventName0, RuntimeObject* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6E691A340B49271935DA79C497863362828A90F);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command.Builder()
		//  .Service(TapDBConstants.TAPDB_SERVICE)
		//  .Method("trackEvent")
		//  .Args("eventName", eventName)
		//  .Args("properties", properties)
		//  .Callback(false)
		//  .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteral2C98C0756A33C8EFDFB681374340D99FD56A2B06, NULL);
		String_t* L_4 = ___eventName0;
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_3, _stringLiteralF6E691A340B49271935DA79C497863362828A90F, L_4, NULL);
		RuntimeObject* L_6 = ___properties1;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral8640B5B3EA5D79BF55FFD3D0D0AADA17A24415C1, L_6, NULL);
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_8;
		L_8 = Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F(L_7, (bool)0, NULL);
		NullCheck(L_8);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9;
		L_9 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_8, NULL);
		V_0 = L_9;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_10;
		L_10 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_11 = V_0;
		NullCheck(L_10);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceInitialize_mC7803CBF80389BCAE35310CDE5DA50A46F349590 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	{
		// DeviceInitializeCommon(properties);
		String_t* L_0 = ___properties0;
		TapDBImpl_DeviceInitializeCommon_m5219991DEC5E81E8D8537935193A3ACADAA1945D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceInitialize_m4605679C33CE7BCE6D3DE8DCB5F1897A434A709A (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	{
		// DeviceInitializeCommon(properties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties0;
		TapDBImpl_DeviceInitializeCommon_m5219991DEC5E81E8D8537935193A3ACADAA1945D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceInitializeCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceInitializeCommon_m5219991DEC5E81E8D8537935193A3ACADAA1945D (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8430047A8CA397F4ED5D0A788D237BC08794FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("deviceInitialize")
		//     .Args("deviceInitialize", properties)
		//     .Callback(true)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteralB8430047A8CA397F4ED5D0A788D237BC08794FEE, NULL);
		RuntimeObject* L_5 = ___properties0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteralB8430047A8CA397F4ED5D0A788D237BC08794FEE, L_5, NULL);
		NullCheck(L_6);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F(L_6, (bool)1, NULL);
		NullCheck(L_7);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_8;
		L_8 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_7, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceUpdate_m88F67034BFFA34179AAD50260619BD05908AEB39 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	{
		// DeviceUpdateCommon(properties);
		String_t* L_0 = ___properties0;
		TapDBImpl_DeviceUpdateCommon_mF78BA10FF57C1B74EB17805AF833AED43D5AE20C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceUpdate_mB208CC16E8F46B66403E20DEF8E8EA8D7EE8F46B (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	{
		// DeviceUpdateCommon(properties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties0;
		TapDBImpl_DeviceUpdateCommon_mF78BA10FF57C1B74EB17805AF833AED43D5AE20C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceUpdateCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceUpdateCommon_mF78BA10FF57C1B74EB17805AF833AED43D5AE20C (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC044A2579C3954D678EBF08C8DAC01AF1D9EFC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("deviceUpdate")
		//     .Args("deviceUpdate", properties)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteralCC044A2579C3954D678EBF08C8DAC01AF1D9EFC6, NULL);
		RuntimeObject* L_5 = ___properties0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteralCC044A2579C3954D678EBF08C8DAC01AF1D9EFC6, L_5, NULL);
		NullCheck(L_6);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7;
		L_7 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_6, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceAdd_m7A8C71AAA67047643697563D84AA2820B1551F86 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	{
		// DeviceAddCommon(properties);
		String_t* L_0 = ___properties0;
		TapDBImpl_DeviceAddCommon_m4D352328B2BE670294DD411C470940037A607270(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceAdd_mCA042B501748D655C203D5A3C47CE71BAFF37ADC (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	{
		// DeviceAddCommon(properties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties0;
		TapDBImpl_DeviceAddCommon_m4D352328B2BE670294DD411C470940037A607270(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::DeviceAddCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_DeviceAddCommon_m4D352328B2BE670294DD411C470940037A607270 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEA4F466105903075D20BC8499F8F8B995DF069C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("deviceAdd")
		//     .Args("deviceAdd", properties)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteralEEA4F466105903075D20BC8499F8F8B995DF069C, NULL);
		RuntimeObject* L_5 = ___properties0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteralEEA4F466105903075D20BC8499F8F8B995DF069C, L_5, NULL);
		NullCheck(L_6);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7;
		L_7 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_6, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserInitialize_m54B676940B8C8B9F154005EDE41672E10D421DF5 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	{
		// UserInitializeCommon(properties);
		String_t* L_0 = ___properties0;
		TapDBImpl_UserInitializeCommon_m20B1AEA10A7212BC8461BFB20EAFF71C9F043CF5(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserInitialize_mD91A2B8C822187BEBCBC9AB31407DAEE8CFA4208 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	{
		// UserInitializeCommon(properties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties0;
		TapDBImpl_UserInitializeCommon_m20B1AEA10A7212BC8461BFB20EAFF71C9F043CF5(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserInitializeCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserInitializeCommon_m20B1AEA10A7212BC8461BFB20EAFF71C9F043CF5 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB65271BB3F238ED8EEC0DDE3790B40CD1B3E87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("userInitialize")
		//     .Args("userInitialize", properties)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteral8DB65271BB3F238ED8EEC0DDE3790B40CD1B3E87, NULL);
		RuntimeObject* L_5 = ___properties0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteral8DB65271BB3F238ED8EEC0DDE3790B40CD1B3E87, L_5, NULL);
		NullCheck(L_6);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7;
		L_7 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_6, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserUpdate_m7C6E4246067F685C389715248DBD03F893D81153 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	{
		// UserUpdateCommon(properties);
		String_t* L_0 = ___properties0;
		TapDBImpl_UserUpdateCommon_m4207F1BF2B44929C85ECF3EC1DEF14C861BC464A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserUpdate_m764019012BED6940235482EA91E8CDA6138A80F6 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	{
		// UserUpdateCommon(properties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties0;
		TapDBImpl_UserUpdateCommon_m4207F1BF2B44929C85ECF3EC1DEF14C861BC464A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserUpdateCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserUpdateCommon_m4207F1BF2B44929C85ECF3EC1DEF14C861BC464A (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral976FB1ACBEFAB7CFF92E7FF8AE7D48D3C05C737E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("userUpdate")
		//     .Args("userUpdate", properties)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteral976FB1ACBEFAB7CFF92E7FF8AE7D48D3C05C737E, NULL);
		RuntimeObject* L_5 = ___properties0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteral976FB1ACBEFAB7CFF92E7FF8AE7D48D3C05C737E, L_5, NULL);
		NullCheck(L_6);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7;
		L_7 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_6, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserAdd_m455C6870E8EFC192B8919B0704266D96A8E8D115 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	{
		// UserAddCommon(properties);
		String_t* L_0 = ___properties0;
		TapDBImpl_UserAddCommon_mD36549E0E61C2AF2CBE6E73572ABC7F6C813906E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserAdd_m6056289842A6AC1CD4EA09A153C300BA86E75DC9 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	{
		// UserAddCommon(properties);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___properties0;
		TapDBImpl_UserAddCommon_mD36549E0E61C2AF2CBE6E73572ABC7F6C813906E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UserAddCommon(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UserAddCommon_mD36549E0E61C2AF2CBE6E73572ABC7F6C813906E (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72FA5BE3E4B8531509F69A7F6CA57618D5D43A61);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("userAdd")
		//     .Args("userAdd", properties)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteral72FA5BE3E4B8531509F69A7F6CA57618D5D43A61, NULL);
		RuntimeObject* L_5 = ___properties0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteral72FA5BE3E4B8531509F69A7F6CA57618D5D43A61, L_5, NULL);
		NullCheck(L_6);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_7;
		L_7 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_6, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::EnableLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_EnableLog_m1688043406D26401CE8069E45704016D3B272F1E (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9EB1B0A40A99AF7C58ECF13D7E677FBF1C73103);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("enableLog")
		//     .Args("enableLog", enable)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteralE9EB1B0A40A99AF7C58ECF13D7E677FBF1C73103, NULL);
		bool L_5 = ___enable0;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_8;
		L_8 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteralE9EB1B0A40A99AF7C58ECF13D7E677FBF1C73103, L_7, NULL);
		NullCheck(L_8);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9;
		L_9 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_8, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_9, NULL);
		// ThemisUtil.SetEnableDebug(enable);
		bool L_10 = ___enable0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_SetEnableDebug_m98F7DF69331AC0A65C8E97351EA2C217AC6DC805_inline(L_10, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::CloseFetchTapTapDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_CloseFetchTapTapDeviceId_mAD7EA4AC1E775EA859AD485E31F741B5DB5FAA96 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4884823AC0611237DB6B45D5BFA4BA51FAF13BD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Platform.IsAndroid()) return;
		bool L_0;
		L_0 = Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Platform.IsAndroid()) return;
		return;
	}

IL_0008:
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("closeFetchTapTapDeviceId")
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_1;
		L_1 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_2, L_3, NULL);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_4, _stringLiteral4884823AC0611237DB6B45D5BFA4BA51FAF13BD8, NULL);
		NullCheck(L_5);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_6;
		L_6 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_5, NULL);
		NullCheck(L_1);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::GetTapTapDid(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_GetTapTapDid_m8CA673F6A4BE16FE2E7E9F80F55E488FFBD73C1F (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_U3CGetTapTapDidU3Eb__0_m7A484F1512CF8063FBBA12E998D1E41688372FD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5406000010459C9629C23A3F52C5C125B40F73BC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* V_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* L_0 = (U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass48_0__ctor_m90E0B097C58736B642F23BB6DC43C2B5F9F39A86(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* L_1 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___action0;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// if (!Platform.IsAndroid()) return;
		bool L_3;
		L_3 = Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED(NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		// if (!Platform.IsAndroid()) return;
		return;
	}

IL_0015:
	{
		// var command = new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("getTapTapDID")
		//     .Callback(true)
		//     .OnceTime(true)
		//     .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_5 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_6;
		L_6 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_4, L_5, NULL);
		NullCheck(L_6);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_6, _stringLiteral5406000010459C9629C23A3F52C5C125B40F73BC, NULL);
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_8;
		L_8 = Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F(L_7, (bool)1, NULL);
		NullCheck(L_8);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_9;
		L_9 = Builder_OnceTime_mF429D389381EA40CA4B50D623C34C5BFC6E63660(L_8, (bool)1, NULL);
		NullCheck(L_9);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_10;
		L_10 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_9, NULL);
		V_1 = L_10;
		// EngineBridge.GetInstance().CallHandler(command, result =>
		// {
		//     if (result.code != Result.RESULT_SUCCESS)
		//     {
		//         action(null);
		//         return;
		//     }
		// 
		//     action(result.content);
		// });
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_11;
		L_11 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_12 = V_1;
		U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* L_13 = V_0;
		Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* L_14 = (Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9*)il2cpp_codegen_object_new(Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_mB777D320DBF09E0673EDEBE6D6CD7A1FF9FBA5AB(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass48_0_U3CGetTapTapDidU3Eb__0_m7A484F1512CF8063FBBA12E998D1E41688372FD3_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		EngineBridge_CallHandler_m7C6FFD831026C389649338CC2C933673059423E8(L_11, L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::AdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_AdvertiserIDCollectionEnabled_mC28076597371F1277CE914F4C2969645BA2FC6D4 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("advertiserIDCollectionEnabled")
		//     .Args("advertiserIDCollectionEnabled", enable)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137, NULL);
		bool L_5 = ___enable0;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_8;
		L_8 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137, L_7, NULL);
		NullCheck(L_8);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9;
		L_9 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_8, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterDynamicProperties_mE8AA11318B44A98EB6576197E1DDAD1D37C5A050 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43968A36F3C72405508385965198B56C3FF20DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Platform.IsAndroid())
		bool L_0;
		L_0 = Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED(NULL);
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// if (_dbServiceImpl == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->____dbServiceImpl_3;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// _dbServiceImpl.Call("registerDynamicProperties", new TapDBDynamicProperties(properties));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->____dbServiceImpl_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RuntimeObject* L_5 = ___properties0;
		TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182* L_6 = (TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182*)il2cpp_codegen_object_new(TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TapDBDynamicProperties__ctor_m359CBAF5C208C001F6BCC5958849D64E90F133B1(L_6, L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralD43968A36F3C72405508385965198B56C3FF20DC, L_4, NULL);
		return;
	}

IL_0030:
	{
		// else if (Platform.IsIOS())
		bool L_7;
		L_7 = Platform_IsIOS_m21A7C2007D6392091E88A7089322532332D2DCF4(NULL);
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		// _dynamicProperties = properties;
		RuntimeObject* L_8 = ___properties0;
		__this->____dynamicProperties_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dynamicProperties_2), (void*)L_8);
		// registerDynamicProperties(DynamicPropertiesDelegate);
		TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* L_9 = (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD*)il2cpp_codegen_object_new(TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TapDBDynamicPropertiesDelegate__ctor_mFD78014A332CE7304A86C3492D5587A07BF5A878(L_9, NULL, (intptr_t)((void*)TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_registerDynamicProperties_m3FAD17BF6714A7200DA3D6C427A2854F890E0558(L_9, NULL);
		// EngineBridge.GetInstance().CallHandler(new Command.Builder().Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("registerDynamicProperties")
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_10;
		L_10 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_11 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_12 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_11);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_13;
		L_13 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_11, L_12, NULL);
		NullCheck(L_13);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_14;
		L_14 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_13, _stringLiteralD43968A36F3C72405508385965198B56C3FF20DC, NULL);
		NullCheck(L_14);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_15;
		L_15 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_14, NULL);
		NullCheck(L_10);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_10, L_15, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ConfigAutoReportLogLevel_m1960546CB00FCBDA7B6A75432E47D662D1CE9935 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThemisUtil.U3d_ConfigAutoReportLogLevel(level);
		int32_t L_0 = ___level0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_U3d_ConfigAutoReportLogLevel_mFE5B9604B1F1C09A02572F404008A4DF27BB6314_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ConfigAutoQuitApplication_mA801609C21ABE774FA613A7220C7067375D877F5 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThemisUtil.U3d_ConfigAutoQuitApplication(enable);
		bool L_0 = ___enable0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_U3d_ConfigAutoQuitApplication_mC516F51559AC3F399B64D9F056D5B11E3D402AB8_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_RegisterLogCallback_m78CAFC88F6A2C1E11A91894FC8808D0014F3E436 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThemisUtil.U3d_RegisterLogCallback(handler);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ___handler0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_U3d_RegisterLogCallback_m5DE4878837AF85B12B47227A08F5CE6D0732E3F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_UnRegisterLogCallback_mE4ABE1CAD9A14664AEF8ABE2FED02060E8A943CC (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThemisUtil.U3d_UnregisterLogCallback(handler);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ___handler0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_U3d_UnregisterLogCallback_m5807B5D12F4C3773369BA2506AC3D3E4945E4E63(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::ReportException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_ReportException_m534D679EEA2F93AD54F63E2F852F9DBA775E1249 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, Exception_t* ___e0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThemisUtil.ExceptionReport(e, message);
		Exception_t* L_0 = ___e0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_ExceptionReport_mF3AA672E88883C987EAD233DCC7D6E306BB97795(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::SetOAIDCert(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_SetOAIDCert_m20BCDDB2D0CBB4B737E98684815E5EFF1B26420C (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, String_t* ___cert0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C1B69FB61A6CD6964FE8AA0FB8A0D97F79A75D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Platform.IsAndroid())
		bool L_0;
		L_0 = Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED(NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder().Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("setOAIDCert")
		//     .Args("setOAIDCert", cert)
		//     .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_1;
		L_1 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_2, L_3, NULL);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_4, _stringLiteral0C1B69FB61A6CD6964FE8AA0FB8A0D97F79A75D0, NULL);
		String_t* L_6 = ___cert0;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral0C1B69FB61A6CD6964FE8AA0FB8A0D97F79A75D0, L_6, NULL);
		NullCheck(L_7);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_8;
		L_8 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_7, NULL);
		NullCheck(L_1);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_1, L_8, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::EnableThemis(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_EnableThemis_m076402B0B70B033D75FC0B1F2DFBADEBF1524F57 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B473FDCF1E22CC076BA5A783F79F740D8B866BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EngineBridge.GetInstance().CallHandler(new Command.Builder().Service(TapDBConstants.TAPDB_SERVICE)
		//        .Method("enableThemis")
		//        .Args("enableThemis", enable)
		//        .CommandBuilder());
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_0;
		L_0 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteral9B473FDCF1E22CC076BA5A783F79F740D8B866BF, NULL);
		bool L_5 = ___enable0;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_8;
		L_8 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_4, _stringLiteral9B473FDCF1E22CC076BA5A783F79F740D8B866BF, L_7, NULL);
		NullCheck(L_8);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_9;
		L_9 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_8, NULL);
		NullCheck(L_0);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.String TapTap.TapDB.Mobile.TapDBImpl::DynamicPropertiesDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TapDBImpl_DynamicPropertiesDelegate_m0B821CABB52ABA55F7E48D4BCD96AE6006A2620C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _sInstance._dynamicProperties == null
		//     ? null
		//     : Json.Serialize(_sInstance._dynamicProperties.GetDynamicProperties());
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0 = ((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->____sInstance_0;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->____dynamicProperties_2;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_2 = ((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->____sInstance_0;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->____dynamicProperties_2;
		NullCheck(L_3);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4;
		L_4 = InterfaceFuncInvoker0< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> TapTap.TapDB.IDynamicProperties::GetDynamicProperties() */, IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = Json_Serialize_mD5116E9694094C07A4E858093646915C53205466(L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		return (String_t*)NULL;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::registerDynamicProperties(TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_registerDynamicProperties_m3FAD17BF6714A7200DA3D6C427A2854F890E0558 (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* ___propertiesDelegate0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___propertiesDelegate0' to native representation
	Il2CppMethodPointer ____propertiesDelegate0_marshaled = NULL;
	____propertiesDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___propertiesDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(registerDynamicProperties)(____propertiesDelegate0_marshaled);

}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::EnableIDFA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl_EnableIDFA_m01DD68C3BC23B3CC93F3593C78861B21C7FAE517 (TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* G_B5_2 = NULL;
	{
		// if (!Platform.IsIOS()) return;
		bool L_0;
		L_0 = Platform_IsIOS_m21A7C2007D6392091E88A7089322532332D2DCF4(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Platform.IsIOS()) return;
		return;
	}

IL_0008:
	{
		// var idfaCommand = new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("advertiserIDCollectionEnabled")
		//     .Args("advertiserIDCollectionEnabled", TapCommon.Config.DBConfig.AdvertiserIDCollectionEnabled == true ? 1 : 0)
		//     .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_1 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_1);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_1, L_2, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_3, _stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_il2cpp_TypeInfo_var);
		TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* L_5;
		L_5 = TapCommon_get_Config_m32A2FAD3A99D7382E0A5EF1BB18FC341108D1F5F_inline(NULL);
		NullCheck(L_5);
		TapDBConfig_t059DF0A408046553C74EC01CAF3437BD0F33A049* L_6 = L_5->___DBConfig_4;
		NullCheck(L_6);
		bool L_7 = L_6->___AdvertiserIDCollectionEnabled_3;
		G_B3_0 = _stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137;
		G_B3_1 = L_4;
		if (L_7)
		{
			G_B4_0 = _stringLiteral96D678D1A608A935DB00AA7F63C37B3491880137;
			G_B4_1 = L_4;
			goto IL_003a;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003b:
	{
		int32_t L_8 = G_B5_0;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(G_B5_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_10;
		L_10 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(G_B5_2, G_B5_1, L_9, NULL);
		NullCheck(L_10);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_11;
		L_11 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_10, NULL);
		V_0 = L_11;
		// EngineBridge.GetInstance().CallHandler(idfaCommand);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_12;
		L_12 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_13 = V_0;
		NullCheck(L_12);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBImpl__cctor_mD6C7A524F2378921F8692D563782E1AE366246B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Locker = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->___Locker_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_StaticFields*)il2cpp_codegen_static_fields_for(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var))->___Locker_1), (void*)L_0);
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
String_t* TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_Multicast(TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* currentDelegate = reinterpret_cast<TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_OpenInst(TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
String_t* TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_OpenStatic(TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
String_t* TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_OpenStaticInvoker(TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< String_t* >::Invoke(__this->___method_ptr_0, method, NULL);
}
String_t* TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_ClosedStaticInvoker(TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	char* returnValue = il2cppPInvokeFunc();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBDynamicPropertiesDelegate__ctor_mFD78014A332CE7304A86C3492D5587A07BF5A878 (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD_Multicast;
}
// System.String TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TapDBDynamicPropertiesDelegate_Invoke_m9401A78B9FFD06E5E4E3ABCBDF65FABB1AEA54BD (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TapDBDynamicPropertiesDelegate_BeginInvoke_m3B8DDC7AF932052D7934B3E856077FCAE45F06E1 (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.String TapTap.TapDB.Mobile.TapDBImpl/TapDBDynamicPropertiesDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TapDBDynamicPropertiesDelegate_EndInvoke_m82AB0956C4721A63484BDFE9960DDCCAFBD2BEB0 (TapDBDynamicPropertiesDelegate_t957B437ED986E285E2BD28C2C0611C871CAC16CD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapTap.TapDB.Mobile.TapDBImpl/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m90E0B097C58736B642F23BB6DC43C2B5F9F39A86 (U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBImpl/<>c__DisplayClass48_0::<GetTapTapDid>b__0(TapTap.Common.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CGetTapTapDidU3Eb__0_m7A484F1512CF8063FBBA12E998D1E41688372FD3 (U3CU3Ec__DisplayClass48_0_t8DF4239ADCF0006ED561E750F79DC9E5ED5A9200* __this, Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_tBE550EEB85C4A496D58A81389702E1E2E097239A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (result.code != Result.RESULT_SUCCESS)
		Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* L_0 = ___result0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___code_2;
		il2cpp_codegen_runtime_class_init_inline(Result_tBE550EEB85C4A496D58A81389702E1E2E097239A_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Result_tBE550EEB85C4A496D58A81389702E1E2E097239A_StaticFields*)il2cpp_codegen_static_fields_for(Result_tBE550EEB85C4A496D58A81389702E1E2E097239A_il2cpp_TypeInfo_var))->___RESULT_SUCCESS_0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		// action(null);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = __this->___action_0;
		NullCheck(L_3);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_3, (String_t*)NULL, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// action(result.content);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = __this->___action_0;
		Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* L_5 = ___result0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___content_4;
		NullCheck(L_4);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_4, L_6, NULL);
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
// System.Void TapTap.TapDB.Mobile.TapDBDynamicProperties::.ctor(TapTap.TapDB.IDynamicProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBDynamicProperties__ctor_m359CBAF5C208C001F6BCC5958849D64E90F133B1 (TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C1BD0F6F123B290A609886443B652A39B80D375);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(new AndroidJavaClass("com.tds.tapdb.wrapper.TapDBDynamicProperties"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4C1BD0F6F123B290A609886443B652A39B80D375, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5(__this, L_0, NULL);
		// _properties = properties;
		RuntimeObject* L_1 = ___properties0;
		__this->____properties_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____properties_4), (void*)L_1);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject TapTap.TapDB.Mobile.TapDBDynamicProperties::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* TapDBDynamicProperties_Invoke_mF2B4F97E97FB31000C50E5114809CE55CC850ECE (TapDBDynamicProperties_tC0CB2CA10B7229C2808099D004AB625F6F379182* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _properties != null
		//     ? new AndroidJavaObject("java.lang.String", Json.Serialize(_properties.GetDynamicProperties()))
		//     : base.Invoke(methodName, args);
		RuntimeObject* L_0 = __this->____properties_4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB(__this, L_1, L_2, NULL);
		return L_3;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = __this->____properties_4;
		NullCheck(L_6);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7;
		L_7 = InterfaceFuncInvoker0< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(0 /* System.Collections.Generic.Dictionary`2<System.String,System.Object> TapTap.TapDB.IDynamicProperties::GetDynamicProperties() */, IDynamicProperties_tE5BBE424260AE5CE2A48769BC73CAA889FA31724_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = Json_Serialize_mD5116E9694094C07A4E858093646915C53205466(L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_9, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_5, NULL);
		return L_9;
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
// System.Void TapTap.TapDB.Mobile.TapDBMobile::Init(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_Init_mFD911F40525D76AF65E3780E839DD548D1471985 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, bool ___isCN3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().Init(clientId, channel, gameVersion, isCN);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___clientId0;
		String_t* L_2 = ___channel1;
		String_t* L_3 = ___gameVersion2;
		bool L_4 = ___isCN3;
		NullCheck(L_0);
		TapDBImpl_Init_mEF507F6A4BAD281051290A808BA2BB07B4FD081E(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_Init_mEC18C668ACD091D02CF0E5296962B332AB33413B (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___clientId0, String_t* ___channel1, String_t* ___gameVersion2, int32_t ___region3, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().Init(clientId, channel, gameVersion, region, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___clientId0;
		String_t* L_2 = ___channel1;
		String_t* L_3 = ___gameVersion2;
		int32_t L_4 = ___region3;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___properties4;
		NullCheck(L_0);
		TapDBImpl_Init_m1B1F825E7835AA2283F319CA1F6DD2058DDFF223(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetUser_m12E35D6663CBE3B3F9BEA861699775B5B0CA5145 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___userId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetUser(userId);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___userId0;
		NullCheck(L_0);
		TapDBImpl_SetUser_mC628857E63DEBEAEF33903E971E93EF342BC70B0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetUser_m35BB614FBFE7E230088A893C76D583C91761E0F9 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___userId0, String_t* ___loginType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetUser(userId, loginType);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___userId0;
		String_t* L_2 = ___loginType1;
		NullCheck(L_0);
		TapDBImpl_SetUser_m6424B50A6ABB6FEDC1045A511233AD47BFA02A66(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetUserWithProperties_m7CC66F8444E456E5317F6BB5040FC9CE510DE015 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___userId0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetUserWithProperties(userId, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___userId0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___properties1;
		NullCheck(L_0);
		TapDBImpl_SetUserWithProperties_m08186266BDC9C408132267206FD50A1C8B3261A8(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetName_m893E3EEDA3994CDBDB4800A6D8CE1035643AC57B (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetName(name);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		TapDBImpl_SetName_m04C9EAA138BCD23446DA39FA2796BFC1F623A74A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetLevel_m311A20FB8F53BF914D76111B9854349E2E57421D (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetLevel(level);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		TapDBImpl_SetLevel_m6C48803CCDCFB56F5A7B30CAE15FB52FC2E1A1E0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetServer_m7CFABAF62FACC8824C8E358B16C0F4185DD30058 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___server0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetServer(server);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___server0;
		NullCheck(L_0);
		TapDBImpl_SetServer_m00461CA80B6DE5460A900DA37159DBC17F2FA482(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::OnCharge(System.String,System.String,System.Int64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_OnCharge_mE7FC356DE91356A01E75F52451B7073EAEA66DD2 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().OnCharge(orderId, product, amount, currencyType, payment);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___orderId0;
		String_t* L_2 = ___product1;
		int64_t L_3 = ___amount2;
		String_t* L_4 = ___currencyType3;
		String_t* L_5 = ___payment4;
		NullCheck(L_0);
		TapDBImpl_OnCharge_mAD93C163C240877A8A313939FDB0C37ECE5E98E7(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_OnCharge_m57C62B2D720931D3EEDE8C4758CBC3E758857B39 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, String_t* ___properties5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().OnCharge(orderId, product, amount, currencyType, payment, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___orderId0;
		String_t* L_2 = ___product1;
		int64_t L_3 = ___amount2;
		String_t* L_4 = ___currencyType3;
		String_t* L_5 = ___payment4;
		String_t* L_6 = ___properties5;
		NullCheck(L_0);
		TapDBImpl_OnCharge_mFFDE90D862DD783B492D3A92F090231DDD455095(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_OnCharge_m3E6EC1EF32577712239D2420B77D3E1F87D1133E (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___orderId0, String_t* ___product1, int64_t ___amount2, String_t* ___currencyType3, String_t* ___payment4, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().OnCharge(orderId, product, amount, currencyType, payment, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___orderId0;
		String_t* L_2 = ___product1;
		int64_t L_3 = ___amount2;
		String_t* L_4 = ___currencyType3;
		String_t* L_5 = ___payment4;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ___properties5;
		NullCheck(L_0);
		TapDBImpl_OnCharge_m4B4FBC0795E5A6D695381BC24C9F0C56C23937AA(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::OnEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_OnEvent_mA9DC99B9102FDA1B5DD3FA5F870DCD073432862B (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___eventCode0, String_t* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().OnEvent(eventCode, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___eventCode0;
		String_t* L_2 = ___properties1;
		NullCheck(L_0);
		TapDBImpl_OnEvent_m00410C8389478C00B4DA31162CBAE5D153B5C5C2(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::TrackEvent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_TrackEvent_m90415D285FD4046B7D528BE9C7AC8CB2C144CC89 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___eventName0, String_t* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().TrackEvent(eventName, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___eventName0;
		String_t* L_2 = ___properties1;
		NullCheck(L_0);
		TapDBImpl_TrackEvent_mFE211497C4FD37AC5DB6BEC401245606424301C2(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_TrackEvent_mFB43D89C83E62750963BB0823FC5B20750CD4AD8 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___eventName0, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().TrackEvent(eventName, properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___eventName0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___properties1;
		NullCheck(L_0);
		TapDBImpl_TrackEvent_mE73A5F9B6D2CA7A0849A960DB4F83585B148B2EF(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::RegisterStaticProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_RegisterStaticProperties_mE73333FFD3CDAC3488EC611995D027F9FD2D5FAB (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().RegisterStaticProperties(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_RegisterStaticProperties_mA85021331757AA2E68CCE117816BE86071C985D2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_RegisterStaticProperties_m8813A054231B97DDACD7A6F6A300F63CFE97E051 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().RegisterStaticProperties(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_RegisterStaticProperties_m7E020A6B73B781A8FE9FE7A89C8AFA7C59A719DA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UnregisterStaticProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UnregisterStaticProperty_m1766D7DB411E5B81CD85CBE439D99329BB1FA762 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___propertKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UnregisterStaticProperty(propertKey);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___propertKey0;
		NullCheck(L_0);
		TapDBImpl_UnregisterStaticProperty_m8B3BE67189F65F5317C3E3EA6025A3A5AAB0B9F3(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_RegisterDynamicProperties_m7734FF280943481F19198D9FBF614B079CCC375C (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, RuntimeObject* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().RegisterDynamicProperties(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		RuntimeObject* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_RegisterDynamicProperties_mE8AA11318B44A98EB6576197E1DDAD1D37C5A050(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::ClearStaticProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_ClearStaticProperties_mDFF27F6EED7353A1D5BC531AD27B9BDEA4014029 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().ClearStaticProperties();
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		NullCheck(L_0);
		TapDBImpl_ClearStaticProperties_m295BA3234731196367D121A143AA2364C681155B(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::DeviceInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_DeviceInitialize_mAD3AFBAF8DF9ED1D7FF32D7B40D7B1D2294DF914 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().DeviceInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_DeviceInitialize_mC7803CBF80389BCAE35310CDE5DA50A46F349590(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_DeviceInitialize_mF8ADEDF8800D0E3072DF20D21D98CE4B94D5D5EB (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().DeviceInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_DeviceInitialize_m4605679C33CE7BCE6D3DE8DCB5F1897A434A709A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::DeviceUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_DeviceUpdate_m7A324057A1ABC14B495171A96693FA10FD6F6625 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().DeviceUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_DeviceUpdate_m88F67034BFFA34179AAD50260619BD05908AEB39(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_DeviceUpdate_mBF088444B506D59C900551B1D496493642C89A5D (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().DeviceUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_DeviceUpdate_mB208CC16E8F46B66403E20DEF8E8EA8D7EE8F46B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::DeviceAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_DeviceAdd_mA27F388848DA4E47054B79EA441F390A0947E7AD (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().DeviceAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_DeviceAdd_m7A8C71AAA67047643697563D84AA2820B1551F86(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_DeviceAdd_m7219D09CDDE1BF9869361A8CF076CB9E803B44D3 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().DeviceAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_DeviceAdd_mCA042B501748D655C203D5A3C47CE71BAFF37ADC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UserInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UserInitialize_m108B5E73D86E73313C8D51FCEDA829AEABEF516B (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UserInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_UserInitialize_m54B676940B8C8B9F154005EDE41672E10D421DF5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UserInitialize_m1B85E66C9C81FB80567901153AD7A345B568B51A (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UserInitialize(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_UserInitialize_mD91A2B8C822187BEBCBC9AB31407DAEE8CFA4208(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UserUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UserUpdate_m1C435D794CF79D0ABAB5A225596B5FE5FD2F6578 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UserUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_UserUpdate_m7C6E4246067F685C389715248DBD03F893D81153(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UserUpdate_m56A5B9554E03465F6F2CFEE2C7083FAE518B02A3 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UserUpdate(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_UserUpdate_m764019012BED6940235482EA91E8CDA6138A80F6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UserAdd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UserAdd_mD3313E591069B12A165299397F07F3F550EF82F1 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UserAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_UserAdd_m455C6870E8EFC192B8919B0704266D96A8E8D115(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UserAdd_mC4FBC622EFC7FF5717E038C256D30469522EDBF0 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UserAdd(properties);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___properties0;
		NullCheck(L_0);
		TapDBImpl_UserAdd_m6056289842A6AC1CD4EA09A153C300BA86E75DC9(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::EnableLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_EnableLog_m7D4318006EF283D84AC90D614F49CAE002C5095D (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().EnableLog(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		bool L_1 = ___enable0;
		NullCheck(L_0);
		TapDBImpl_EnableLog_m1688043406D26401CE8069E45704016D3B272F1E(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::AdvertiserIDCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_AdvertiserIDCollectionEnabled_m96BCD75B95E59ED237A4EC7D18289504518A29F8 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().AdvertiserIDCollectionEnabled(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		bool L_1 = ___enable0;
		NullCheck(L_0);
		TapDBImpl_AdvertiserIDCollectionEnabled_mC28076597371F1277CE914F4C2969645BA2FC6D4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::CloseFetchTapTapDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_CloseFetchTapTapDeviceId_m65A1CBCA461F709AA4C8759D3FAD225325438228 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().CloseFetchTapTapDeviceId();
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		NullCheck(L_0);
		TapDBImpl_CloseFetchTapTapDeviceId_mAD7EA4AC1E775EA859AD485E31F741B5DB5FAA96(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::ClearUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_ClearUser_mDA6F02CE06DFB8C0B016F2DBB29911F7489F8A20 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().ClearUser();
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		NullCheck(L_0);
		TapDBImpl_ClearUser_m3D47982E36F20857B26B005D59690E3307593D47(L_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::GetTapTapDid(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_GetTapTapDid_mFE12692B7F5778628C22E16815FAA17FC9DFBC1B (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().GetTapTapDid(action);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___action0;
		NullCheck(L_0);
		TapDBImpl_GetTapTapDid_m8CA673F6A4BE16FE2E7E9F80F55E488FFBD73C1F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_ConfigAutoReportLogLevel_m2E8CAD7D9942CA3509472FA20DB0B06565FDB441 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().ConfigAutoReportLogLevel(level);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		TapDBImpl_ConfigAutoReportLogLevel_m1960546CB00FCBDA7B6A75432E47D662D1CE9935(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_ConfigAutoQuitApplication_m3AA188B3E84AB75B842ED8C71C0121AB75FF39DF (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().ConfigAutoQuitApplication(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		bool L_1 = ___enable0;
		NullCheck(L_0);
		TapDBImpl_ConfigAutoQuitApplication_mA801609C21ABE774FA613A7220C7067375D877F5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_RegisterLogCallback_mF2FACB044AE95B07ED92CF7BBD4D774224F80349 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().RegisterLogCallback(handler);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = ___handler0;
		NullCheck(L_0);
		TapDBImpl_RegisterLogCallback_m78CAFC88F6A2C1E11A91894FC8808D0014F3E436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_UnRegisterLogCallback_mA6B5D9F5E3443E9549690CE459178F9460842633 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().UnRegisterLogCallback(handler);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = ___handler0;
		NullCheck(L_0);
		TapDBImpl_UnRegisterLogCallback_mE4ABE1CAD9A14664AEF8ABE2FED02060E8A943CC(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::ReportException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_ReportException_m0789016A74D6E69788282A3EC4C45EC7D6C62319 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, Exception_t* ___e0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().ReportException(e, message);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		Exception_t* L_1 = ___e0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		TapDBImpl_ReportException_m534D679EEA2F93AD54F63E2F852F9DBA775E1249(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::SetOAIDCert(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_SetOAIDCert_m168D44DF70F549AEA00102C3391811CDAFA0636B (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, String_t* ___cert0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().SetOAIDCert(cert);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		String_t* L_1 = ___cert0;
		NullCheck(L_0);
		TapDBImpl_SetOAIDCert_m20BCDDB2D0CBB4B737E98684815E5EFF1B26420C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::EnableThemis(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile_EnableThemis_m45B826CEC301DEDA1079CDD1494A8B8D7FA34A9F (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TapDBImpl.GetInstance().EnableThemis(enable);
		il2cpp_codegen_runtime_class_init_inline(TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158_il2cpp_TypeInfo_var);
		TapDBImpl_t187E5F4E11B7962BCD883EEB6F60810CDEC2D158* L_0;
		L_0 = TapDBImpl_GetInstance_mCD3BC08E90DD36139C528ECA2F79B1AA371A9F7E(NULL);
		bool L_1 = ___enable0;
		NullCheck(L_0);
		TapDBImpl_EnableThemis_m076402B0B70B033D75FC0B1F2DFBADEBF1524F57(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.TapDBMobile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapDBMobile__ctor_mCB8379F3AB0AC390DB7E1433150E628EBDC9CF99 (TapDBMobile_t88EB9E19A055122179A85C1F4AF7FCC39695D2FB* __this, const RuntimeMethod* method) 
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
// System.Void TapTap.TapDB.Mobile.ThemisUtil::add__LogCallbackEventHandler(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_add__LogCallbackEventHandler_m30A3CDB68452002FFE595AC89B3BE9D530DD217B (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* V_0 = NULL;
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* V_1 = NULL;
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_0;
		V_0 = L_0;
	}

IL_0006:
	{
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = V_0;
		V_1 = L_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_2 = V_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*)CastclassSealed((RuntimeObject*)L_4, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_5 = V_2;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_6 = V_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_7;
		L_7 = InterlockedCompareExchangeImpl<LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*>((&((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_0), L_5, L_6);
		V_0 = L_7;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_8 = V_0;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_9 = V_1;
		if ((!(((RuntimeObject*)(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*)L_8) == ((RuntimeObject*)(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::remove__LogCallbackEventHandler(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_remove__LogCallbackEventHandler_mE77FF294341D740B0CC581EFB29794B59A3EB57D (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* V_0 = NULL;
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* V_1 = NULL;
	LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_0;
		V_0 = L_0;
	}

IL_0006:
	{
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = V_0;
		V_1 = L_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_2 = V_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*)CastclassSealed((RuntimeObject*)L_4, LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_5 = V_2;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_6 = V_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_7;
		L_7 = InterlockedCompareExchangeImpl<LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*>((&((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_0), L_5, L_6);
		V_0 = L_7;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_8 = V_0;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_9 = V_1;
		if ((!(((RuntimeObject*)(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*)L_8) == ((RuntimeObject*)(LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoReportLogLevel_mFE5B9604B1F1C09A02572F404008A4DF27BB6314 (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoReportLogLevel = level;
		int32_t L_0 = ___level0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoReportLogLevel_1 = L_0;
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_RegisterLogCallback_m5DE4878837AF85B12B47227A08F5CE6D0732E3F9 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null)
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ___handler0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// LocalDebugLog("Add log callback handler: {0}", handler);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_3 = ___handler0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F, L_2, NULL);
		// _LogCallbackEventHandler += handler;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_4 = ___handler0;
		ThemisUtil_add__LogCallbackEventHandler_m30A3CDB68452002FFE595AC89B3BE9D530DD217B(L_4, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_UnregisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_UnregisterLogCallback_m5807B5D12F4C3773369BA2506AC3D3E4945E4E63 (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null)
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ___handler0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// LocalDebugLog("Remove log callback handler");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E, L_1, NULL);
		// _LogCallbackEventHandler -= handler;
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_2 = ___handler0;
		ThemisUtil_remove__LogCallbackEventHandler_mE77FF294341D740B0CC581EFB29794B59A3EB57D(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoQuitApplication_mC516F51559AC3F399B64D9F056D5B11E3D402AB8 (bool ___autoQuit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___autoQuit0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_2 = L_0;
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::U3d_ConfigAutoQuitApplicationTest(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoQuitApplicationTest_m39D5F03811C60A39E8A5B3EDD7A6DC09F12913C6 (bool ___autoQuit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___autoQuit0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_2 = L_0;
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::ExceptionReport(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_ExceptionReport_mF3AA672E88883C987EAD233DCC7D6E306BB97795 (Exception_t* ___e0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LocalDebugLog("Report exception: {0}\n------------\n{1}\n------------", message, e);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___message1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		Exception_t* L_4 = ___e0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1, L_3, NULL);
		// _HandleException(e, message, false);
		Exception_t* L_5 = ___e0;
		String_t* L_6 = ___message1;
		ThemisUtil__HandleException_m83F217DA81A1FD4E641F35255CA478C679F1FF4D(L_5, L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_RegisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__RegisterExceptionHandler_mEE9BFEB74600889623990DF92986BA044207FA9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil__OnLogCallbackHandler_m64B692CA53EA6683882A1866DB543033E43DF406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil__OnUncaughtExceptionHandler_m1AB00A79AED5B832FB84FDF0027A0583DE5B614F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Application.logMessageReceived += _OnLogCallbackHandler;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, NULL, (intptr_t)((void*)ThemisUtil__OnLogCallbackHandler_m64B692CA53EA6683882A1866DB543033E43DF406_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// AppDomain.CurrentDomain.UnhandledException += _OnUncaughtExceptionHandler;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_2 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_2, NULL, (intptr_t)((void*)ThemisUtil__OnUncaughtExceptionHandler_m1AB00A79AED5B832FB84FDF0027A0583DE5B614F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7(L_1, L_2, NULL);
		// LocalDebugLog("Register the log callback in Unity {0}", Application.unityVersion);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5;
		L_5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80, L_4, NULL);
		// }
		goto IL_0044;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0044;
	}// end catch (depth: 1)

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_UnregisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__UnregisterExceptionHandler_m8A839DC447F21F4901C162332A8CEA8C6E5F8B6E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil__OnLogCallbackHandler_m64B692CA53EA6683882A1866DB543033E43DF406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil__OnUncaughtExceptionHandler_m1AB00A79AED5B832FB84FDF0027A0583DE5B614F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Application.logMessageReceived -= _OnLogCallbackHandler;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, NULL, (intptr_t)((void*)ThemisUtil__OnLogCallbackHandler_m64B692CA53EA6683882A1866DB543033E43DF406_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		// System.AppDomain.CurrentDomain.UnhandledException -= _OnUncaughtExceptionHandler;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_2 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_2, NULL, (intptr_t)((void*)ThemisUtil__OnUncaughtExceptionHandler_m1AB00A79AED5B832FB84FDF0027A0583DE5B614F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppDomain_remove_UnhandledException_mB02B27A301E597F7F4D581ED6058E9DBA3F6EABA(L_1, L_2, NULL);
		// LocalDebugLog("Unregister the log callback in unity {0}", Application.unityVersion);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5;
		L_5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F, L_4, NULL);
		// }
		goto IL_0044;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0044;
	}// end catch (depth: 1)

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::LocalDebugLog(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBFB04344FA59B6623FF62810E5DD94961ED14C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(format))
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
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
		// if (enableDebug)
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		bool L_2 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->___enableDebug_5;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// UnityEngine.Debug.Log("THEMIS: TapThemis: {0}" + string.Format(format, args));
		String_t* L_3 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCBFB04344FA59B6623FF62810E5DD94961ED14C3, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::SetEnableDebug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_SetEnableDebug_m98F7DF69331AC0A65C8E97351EA2C217AC6DC805 (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enableDebug = enable;
		bool L_0 = ___enable0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->___enableDebug_5 = L_0;
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_OnLogCallbackHandler(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__OnLogCallbackHandler_m64B692CA53EA6683882A1866DB543033E43DF406 (String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B1A3AE82DC9BDEAFFF5721A5835BEE2F9979C8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_LogCallbackEventHandler != null)
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_0 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _LogCallbackEventHandler(condition, stackTrace, type);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* L_1 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_0;
		String_t* L_2 = ___condition0;
		String_t* L_3 = ___stackTrace1;
		int32_t L_4 = ___type2;
		NullCheck(L_1);
		LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0014:
	{
		// if (!string.IsNullOrEmpty(condition) && condition.Contains("THEMIS:"))
		String_t* L_5 = ___condition0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = ___condition0;
		NullCheck(L_7);
		bool L_8;
		L_8 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_7, _stringLiteralC7B1A3AE82DC9BDEAFFF5721A5835BEE2F9979C8, NULL);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// if (_uncaughtAutoReportOnce)
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		bool L_9 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_6;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		return;
	}

IL_0032:
	{
		// LogSeverity logLevel = LogSeverity.Log;
		V_0 = 0;
		int32_t L_10 = ___type2;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0060;
			}
			case 4:
			{
				goto IL_0050;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0050:
	{
		// logLevel = LogSeverity.LogException;
		V_0 = 6;
		// break;
		goto IL_0062;
	}

IL_0054:
	{
		// logLevel = LogSeverity.LogError;
		V_0 = 5;
		// break;
		goto IL_0062;
	}

IL_0058:
	{
		// logLevel = LogSeverity.LogAssert;
		V_0 = 4;
		// break;
		goto IL_0062;
	}

IL_005c:
	{
		// logLevel = LogSeverity.LogWarning;
		V_0 = 3;
		// break;
		goto IL_0062;
	}

IL_0060:
	{
		// logLevel = LogSeverity.LogDebug;
		V_0 = 1;
	}

IL_0062:
	{
		// if (LogSeverity.Log == logLevel)
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0066;
		}
	}
	{
		// return;
		return;
	}

IL_0066:
	{
		// _HandleException(logLevel, null, condition, stackTrace, true);
		int32_t L_12 = V_0;
		String_t* L_13 = ___condition0;
		String_t* L_14 = ___stackTrace1;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil__HandleException_mF2A950444F0BF977E126712022CAABFDBC0D94DE(L_12, (String_t*)NULL, L_13, L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_OnUncaughtExceptionHandler(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__OnUncaughtExceptionHandler_m1AB00A79AED5B832FB84FDF0027A0583DE5B614F (RuntimeObject* ___sender0, UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (args == null || args.ExceptionObject == null)
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_0 = ___args1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (args.ExceptionObject.GetType() != typeof(System.Exception))
			UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_3 = ___args1;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_3, NULL);
			NullCheck(L_4);
			Type_t* L_5;
			L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			bool L_8;
			L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
			if (!L_8)
			{
				goto IL_002b_1;
			}
		}
		{
			// return;
			goto IL_005b;
		}

IL_002b_1:
		{
			// }
			goto IL_0041;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Object)
		{
			// catch
			// if (UnityEngine.Debug.isDebugBuild == true)
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			bool L_9;
			L_9 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
			if (!L_9)
			{
				goto IL_003f;
			}
		}
		{
			// UnityEngine.Debug.Log("THEMIS: Failed to report Unity 3D uncaught exception");
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5DEC62633B91F637A507EB8F0D4EB1A503F2D568)), NULL);
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005b;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (_uncaughtAutoReportOnce)
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		bool L_10 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_6;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// _HandleException((System.Exception)args.ExceptionObject, null, true);
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_11 = ___args1;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil__HandleException_m83F217DA81A1FD4E641F35255CA478C679F1FF4D(((Exception_t*)CastclassClass((RuntimeObject*)L_12, Exception_t_il2cpp_TypeInfo_var)), (String_t*)NULL, (bool)1, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_HandleException(System.Exception,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__HandleException_m83F217DA81A1FD4E641F35255CA478C679F1FF4D (Exception_t* ___e0, String_t* ___message1, bool ___uncaught2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A2AD71D5CE12DDD6953588FA1C8DE96564D962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_6 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// if (e == null)
		Exception_t* L_0 = ___e0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// string name = e.GetType().Name;
		Exception_t* L_1 = ___e0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		V_0 = L_3;
		// string reason = e.Message;
		Exception_t* L_4 = ___e0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		V_1 = L_5;
		// if (!string.IsNullOrEmpty(message))
		String_t* L_6 = ___message1;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		// reason = string.Format("{0}***{1}", reason, message);
		String_t* L_8 = V_1;
		String_t* L_9 = ___message1;
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD6A2AD71D5CE12DDD6953588FA1C8DE96564D962, L_8, L_9, NULL);
		V_1 = L_10;
	}

IL_002c:
	{
		// StringBuilder stackTraceBuilder = new StringBuilder("");
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_2 = L_11;
		// StackTrace stackTrace = new StackTrace(e, true);
		Exception_t* L_12 = ___e0;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_13 = (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853*)il2cpp_codegen_object_new(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF(L_13, L_12, (bool)1, NULL);
		V_3 = L_13;
		// int count = stackTrace.FrameCount;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_14);
		V_4 = L_15;
		// for (int i = 0; i < count; i++)
		V_5 = 0;
		goto IL_01b0;
	}

IL_004f:
	{
		// StackFrame frame = stackTrace.GetFrame(i);
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_18;
		L_18 = VirtualFuncInvoker1< StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_16, L_17);
		V_6 = L_18;
		// stackTraceBuilder.AppendFormat("{0}.{1}", frame.GetMethod().DeclaringType.Name, frame.GetMethod().Name);
		StringBuilder_t* L_19 = V_2;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_20 = V_6;
		NullCheck(L_20);
		MethodBase_t* L_21;
		L_21 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_20);
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_24 = V_6;
		NullCheck(L_24);
		MethodBase_t* L_25;
		L_25 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_24);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		NullCheck(L_19);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_19, _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_23, L_26, NULL);
		// ParameterInfo[] parameters = frame.GetMethod().GetParameters();
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_28 = V_6;
		NullCheck(L_28);
		MethodBase_t* L_29;
		L_29 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_28);
		NullCheck(L_29);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_30;
		L_30 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_29);
		V_7 = L_30;
		// if (parameters == null || parameters.Length == 0)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_31 = V_7;
		if (!L_31)
		{
			goto IL_0099;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_32 = V_7;
		NullCheck(L_32);
		if ((((RuntimeArray*)L_32)->max_length))
		{
			goto IL_00a7;
		}
	}

IL_0099:
	{
		// stackTraceBuilder.Append(" () ");
		StringBuilder_t* L_33 = V_2;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E, NULL);
		goto IL_0116;
	}

IL_00a7:
	{
		// stackTraceBuilder.Append(" (");
		StringBuilder_t* L_35 = V_2;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		// int pcount = parameters.Length;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_37 = V_7;
		NullCheck(L_37);
		V_9 = ((int32_t)(((RuntimeArray*)L_37)->max_length));
		// ParameterInfo param = null;
		V_10 = (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*)NULL;
		// for (int p = 0; p < pcount; p++)
		V_11 = 0;
		goto IL_0101;
	}

IL_00c1:
	{
		// param = parameters[p];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_38 = V_7;
		int32_t L_39 = V_11;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_10 = L_41;
		// stackTraceBuilder.AppendFormat("{0} {1}", param.ParameterType.Name, param.Name);
		StringBuilder_t* L_42 = V_2;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_43 = V_10;
		NullCheck(L_43);
		Type_t* L_44;
		L_44 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_43);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_44);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_46 = V_10;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_46);
		NullCheck(L_42);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_42, _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_45, L_47, NULL);
		// if (p != pcount - 1)
		int32_t L_49 = V_11;
		int32_t L_50 = V_9;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_50, 1)))))
		{
			goto IL_00fb;
		}
	}
	{
		// stackTraceBuilder.Append(", ");
		StringBuilder_t* L_51 = V_2;
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00fb:
	{
		// for (int p = 0; p < pcount; p++)
		int32_t L_53 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0101:
	{
		// for (int p = 0; p < pcount; p++)
		int32_t L_54 = V_11;
		int32_t L_55 = V_9;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00c1;
		}
	}
	{
		// param = null;
		V_10 = (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*)NULL;
		// stackTraceBuilder.Append(") ");
		StringBuilder_t* L_56 = V_2;
		NullCheck(L_56);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
	}

IL_0116:
	{
		// string fileName = frame.GetFileName();
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_58 = V_6;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_58);
		V_8 = L_59;
		// if (!string.IsNullOrEmpty(fileName) && !fileName.ToLower().Equals("unknown"))
		String_t* L_60 = V_8;
		bool L_61;
		L_61 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_60, NULL);
		if (L_61)
		{
			goto IL_01a3;
		}
	}
	{
		String_t* L_62 = V_8;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_62, NULL);
		NullCheck(L_63);
		bool L_64;
		L_64 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_63, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, NULL);
		if (L_64)
		{
			goto IL_01a3;
		}
	}
	{
		// fileName = fileName.Replace("\\", "/");
		String_t* L_65 = V_8;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_65, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_8 = L_66;
		// int loc = fileName.ToLower().IndexOf("/assets/");
		String_t* L_67 = V_8;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_67, NULL);
		NullCheck(L_68);
		int32_t L_69;
		L_69 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_68, _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373, NULL);
		V_12 = L_69;
		// if (loc < 0)
		int32_t L_70 = V_12;
		if ((((int32_t)L_70) >= ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		// loc = fileName.ToLower().IndexOf("assets/");
		String_t* L_71 = V_8;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_71, NULL);
		NullCheck(L_72);
		int32_t L_73;
		L_73 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_72, _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F, NULL);
		V_12 = L_73;
	}

IL_0179:
	{
		// if (loc > 0)
		int32_t L_74 = V_12;
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_0189;
		}
	}
	{
		// fileName = fileName.Substring(loc);
		String_t* L_75 = V_8;
		int32_t L_76 = V_12;
		NullCheck(L_75);
		String_t* L_77;
		L_77 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_75, L_76, NULL);
		V_8 = L_77;
	}

IL_0189:
	{
		// stackTraceBuilder.AppendFormat("(at {0}:{1})", fileName, frame.GetFileLineNumber());
		StringBuilder_t* L_78 = V_2;
		String_t* L_79 = V_8;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_80 = V_6;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_80);
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_82);
		NullCheck(L_78);
		StringBuilder_t* L_84;
		L_84 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_78, _stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5, L_79, L_83, NULL);
	}

IL_01a3:
	{
		// stackTraceBuilder.AppendLine();
		StringBuilder_t* L_85 = V_2;
		NullCheck(L_85);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_85, NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_87 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01b0:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_88 = V_5;
		int32_t L_89 = V_4;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_004f;
		}
	}
	{
		// _reportException(name, reason, stackTraceBuilder.ToString(), uncaught);
		String_t* L_90 = V_0;
		String_t* L_91 = V_1;
		StringBuilder_t* L_92 = V_2;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
		bool L_94 = ___uncaught2;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil__reportException_mEF63E76C20D1617A7392A991ACFEE5779A377C52(L_90, L_91, L_93, L_94, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_HandleException(TapTap.TapDB.LogSeverity,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__HandleException_mF2A950444F0BF977E126712022CAABFDBC0D94DE (int32_t ___logLevel0, String_t* ___name1, String_t* ___message2, String_t* ___stackTrace3, bool ___uncaught4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogSeverity_t2374E6AAAA8923D4560253B997A7F5750F2EE1D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DE1E906F1FC76998185695007FB138A32E707D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669F15A84AF7656AD4522C599D67132E9745C548);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822B496EE7630A0562263AF42972445ECA49F024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB363C38D69BA2131BFAC6B3A30B068F5D711FDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_2 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (logLevel == LogSeverity.Log)
		int32_t L_0 = ___logLevel0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if ((uncaught && logLevel < _autoReportLogLevel))
		bool L_1 = ___uncaught4;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_2 = ___logLevel0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoReportLogLevel_1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		// LocalDebugLog("Not report exception for level {0}", logLevel.ToString());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(LogSeverity_t2374E6AAAA8923D4560253B997A7F5750F2EE1D6_il2cpp_TypeInfo_var, (&___logLevel0));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58, L_5, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// string type = null;
		V_0 = (String_t*)NULL;
		// string reason = null;
		V_1 = (String_t*)NULL;
		// if (!string.IsNullOrEmpty(message))
		String_t* L_8 = ___message2;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_02a9;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// if ((LogSeverity.LogException == logLevel) && message.Contains("Exception"))
			int32_t L_10 = ___logLevel0;
			if ((!(((uint32_t)6) == ((uint32_t)L_10))))
			{
				goto IL_00aa_1;
			}
		}
		{
			String_t* L_11 = ___message2;
			NullCheck(L_11);
			bool L_12;
			L_12 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_11, _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53, NULL);
			if (!L_12)
			{
				goto IL_00aa_1;
			}
		}
		{
			// Match match = new Regex(@"^(?<errorType>\S+):\s*(?<errorMessage>.*)", RegexOptions.Singleline).Match(message);
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_13 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_13, _stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7, ((int32_t)16), NULL);
			String_t* L_14 = ___message2;
			NullCheck(L_13);
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_15;
			L_15 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_13, L_14, NULL);
			V_2 = L_15;
			// if (match.Success)
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_16 = V_2;
			NullCheck(L_16);
			bool L_17;
			L_17 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_16, NULL);
			if (!L_17)
			{
				goto IL_029a_1;
			}
		}
		{
			// type = match.Groups["errorType"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_18 = V_2;
			NullCheck(L_18);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_19;
			L_19 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_18);
			NullCheck(L_19);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_20;
			L_20 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_19, _stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E, NULL);
			NullCheck(L_20);
			String_t* L_21;
			L_21 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_20, NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_21, NULL);
			V_0 = L_22;
			// reason = match.Groups["errorMessage"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_23 = V_2;
			NullCheck(L_23);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_24;
			L_24 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_23);
			NullCheck(L_24);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_25;
			L_25 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_24, _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D, NULL);
			NullCheck(L_25);
			String_t* L_26;
			L_26 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_25, NULL);
			NullCheck(L_26);
			String_t* L_27;
			L_27 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_26, NULL);
			V_1 = L_27;
			goto IL_029a_1;
		}

IL_00aa_1:
		{
			// else if ((LogSeverity.LogError == logLevel))
			int32_t L_28 = ___logLevel0;
			if ((!(((uint32_t)5) == ((uint32_t)L_28))))
			{
				goto IL_029a_1;
			}
		}
		{
			// if (message.StartsWith("Unhandled Exception:", System.StringComparison.Ordinal))
			String_t* L_29 = ___message2;
			NullCheck(L_29);
			bool L_30;
			L_30 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_29, _stringLiteral669F15A84AF7656AD4522C599D67132E9745C548, 4, NULL);
			if (!L_30)
			{
				goto IL_023b_1;
			}
		}
		{
			// Match match = new Regex(@"^Unhandled\s+Exception:\s*(?<exceptionName>\S+):\s*(?<exceptionDetail>.*)", RegexOptions.Singleline).Match(message);
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_31 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_31, _stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30, ((int32_t)16), NULL);
			String_t* L_32 = ___message2;
			NullCheck(L_31);
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_33;
			L_33 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_31, L_32, NULL);
			V_3 = L_33;
			// if (match.Success)
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_34 = V_3;
			NullCheck(L_34);
			bool L_35;
			L_35 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_34, NULL);
			if (!L_35)
			{
				goto IL_029a_1;
			}
		}
		{
			// string exceptionName = match.Groups["exceptionName"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_36 = V_3;
			NullCheck(L_36);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_37;
			L_37 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_36);
			NullCheck(L_37);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_38;
			L_38 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_37, _stringLiteral822B496EE7630A0562263AF42972445ECA49F024, NULL);
			NullCheck(L_38);
			String_t* L_39;
			L_39 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_38, NULL);
			NullCheck(L_39);
			String_t* L_40;
			L_40 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_39, NULL);
			V_4 = L_40;
			// string exceptionDetail = match.Groups["exceptionDetail"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_41 = V_3;
			NullCheck(L_41);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_42;
			L_42 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_41);
			NullCheck(L_42);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_43;
			L_43 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_42, _stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5, NULL);
			NullCheck(L_43);
			String_t* L_44;
			L_44 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_43, NULL);
			NullCheck(L_44);
			String_t* L_45;
			L_45 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_44, NULL);
			V_5 = L_45;
			// int dotLocation = exceptionName.LastIndexOf(".");
			String_t* L_46 = V_4;
			NullCheck(L_46);
			int32_t L_47;
			L_47 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_46, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			V_6 = L_47;
			// if (dotLocation > 0 && dotLocation != exceptionName.Length)
			int32_t L_48 = V_6;
			if ((((int32_t)L_48) <= ((int32_t)0)))
			{
				goto IL_0144_1;
			}
		}
		{
			int32_t L_49 = V_6;
			String_t* L_50 = V_4;
			NullCheck(L_50);
			int32_t L_51;
			L_51 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_50, NULL);
			if ((((int32_t)L_49) == ((int32_t)L_51)))
			{
				goto IL_0144_1;
			}
		}
		{
			// type = exceptionName.Substring(dotLocation + 1);
			String_t* L_52 = V_4;
			int32_t L_53 = V_6;
			NullCheck(L_52);
			String_t* L_54;
			L_54 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_52, ((int32_t)il2cpp_codegen_add(L_53, 1)), NULL);
			V_0 = L_54;
			goto IL_0147_1;
		}

IL_0144_1:
		{
			// type = exceptionName;
			String_t* L_55 = V_4;
			V_0 = L_55;
		}

IL_0147_1:
		{
			// int stackLocation = exceptionDetail.IndexOf(" at ");
			String_t* L_56 = V_5;
			NullCheck(L_56);
			int32_t L_57;
			L_57 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_56, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, NULL);
			V_7 = L_57;
			// if (stackLocation > 0)
			int32_t L_58 = V_7;
			if ((((int32_t)L_58) <= ((int32_t)0)))
			{
				goto IL_01b5_1;
			}
		}
		{
			// reason = exceptionDetail.Substring(0, stackLocation);
			String_t* L_59 = V_5;
			int32_t L_60 = V_7;
			NullCheck(L_59);
			String_t* L_61;
			L_61 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_59, 0, L_60, NULL);
			V_1 = L_61;
			// string callStacks = exceptionDetail.Substring(stackLocation + 3).Replace(" at ", "\n").Replace("in <filename unknown>:0", "").Replace("[0x00000]", "");
			String_t* L_62 = V_5;
			int32_t L_63 = V_7;
			NullCheck(L_62);
			String_t* L_64;
			L_64 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_62, ((int32_t)il2cpp_codegen_add(L_63, 3)), NULL);
			NullCheck(L_64);
			String_t* L_65;
			L_65 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_64, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			NullCheck(L_65);
			String_t* L_66;
			L_66 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_65, _stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			NullCheck(L_66);
			String_t* L_67;
			L_67 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_66, _stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_8 = L_67;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_68 = ___stackTrace3;
			String_t* L_69 = V_8;
			NullCheck(L_69);
			String_t* L_70;
			L_70 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_69, NULL);
			String_t* L_71;
			L_71 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_68, L_70, NULL);
			___stackTrace3 = L_71;
			goto IL_01b8_1;
		}

IL_01b5_1:
		{
			// reason = exceptionDetail;
			String_t* L_72 = V_5;
			V_1 = L_72;
		}

IL_01b8_1:
		{
			// if (type.Equals("LuaScriptException") && exceptionDetail.Contains(".lua") && exceptionDetail.Contains("stack traceback:"))
			String_t* L_73 = V_0;
			NullCheck(L_73);
			bool L_74;
			L_74 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_73, _stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284, NULL);
			if (!L_74)
			{
				goto IL_029a_1;
			}
		}
		{
			String_t* L_75 = V_5;
			NullCheck(L_75);
			bool L_76;
			L_76 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_75, _stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051, NULL);
			if (!L_76)
			{
				goto IL_029a_1;
			}
		}
		{
			String_t* L_77 = V_5;
			NullCheck(L_77);
			bool L_78;
			L_78 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_77, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			if (!L_78)
			{
				goto IL_029a_1;
			}
		}
		{
			// stackLocation = exceptionDetail.IndexOf("stack traceback:");
			String_t* L_79 = V_5;
			NullCheck(L_79);
			int32_t L_80;
			L_80 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_79, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			V_7 = L_80;
			// if (stackLocation > 0)
			int32_t L_81 = V_7;
			if ((((int32_t)L_81) <= ((int32_t)0)))
			{
				goto IL_029a_1;
			}
		}
		{
			// reason = exceptionDetail.Substring(0, stackLocation);
			String_t* L_82 = V_5;
			int32_t L_83 = V_7;
			NullCheck(L_82);
			String_t* L_84;
			L_84 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_82, 0, L_83, NULL);
			V_1 = L_84;
			// string callStacks = exceptionDetail.Substring(stackLocation).Replace("stack traceback:", "lua_stack_traceback:");
			String_t* L_85 = V_5;
			int32_t L_86 = V_7;
			NullCheck(L_85);
			String_t* L_87;
			L_87 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_85, L_86, NULL);
			NullCheck(L_87);
			String_t* L_88;
			L_88 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_87, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, _stringLiteralB363C38D69BA2131BFAC6B3A30B068F5D711FDD2, NULL);
			V_9 = L_88;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_89 = ___stackTrace3;
			String_t* L_90 = V_9;
			NullCheck(L_90);
			String_t* L_91;
			L_91 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_90, NULL);
			String_t* L_92;
			L_92 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_89, L_91, NULL);
			___stackTrace3 = L_92;
			goto IL_029a_1;
		}

IL_023b_1:
		{
			// else if (message.Contains("stack traceback:"))
			String_t* L_93 = ___message2;
			NullCheck(L_93);
			bool L_94;
			L_94 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_93, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			if (!L_94)
			{
				goto IL_029a_1;
			}
		}
		{
			// int stackLocation = message.IndexOf("stack traceback:");
			String_t* L_95 = ___message2;
			NullCheck(L_95);
			int32_t L_96;
			L_96 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_95, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			V_10 = L_96;
			// if (stackLocation > 0)
			int32_t L_97 = V_10;
			if ((((int32_t)L_97) <= ((int32_t)0)))
			{
				goto IL_029a_1;
			}
		}
		{
			// reason = message.Substring(0, stackLocation).Trim();
			String_t* L_98 = ___message2;
			int32_t L_99 = V_10;
			NullCheck(L_98);
			String_t* L_100;
			L_100 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_98, 0, L_99, NULL);
			NullCheck(L_100);
			String_t* L_101;
			L_101 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_100, NULL);
			V_1 = L_101;
			// string callStacks = message.Substring(stackLocation);
			String_t* L_102 = ___message2;
			int32_t L_103 = V_10;
			NullCheck(L_102);
			String_t* L_104;
			L_104 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_102, L_103, NULL);
			V_11 = L_104;
			// callStacks = callStacks.Replace("stack traceback:", "lua_stack_traceback:");
			String_t* L_105 = V_11;
			NullCheck(L_105);
			String_t* L_106;
			L_106 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_105, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, _stringLiteralB363C38D69BA2131BFAC6B3A30B068F5D711FDD2, NULL);
			V_11 = L_106;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_107 = ___stackTrace3;
			String_t* L_108 = V_11;
			NullCheck(L_108);
			String_t* L_109;
			L_109 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_108, NULL);
			String_t* L_110;
			L_110 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_107, L_109, NULL);
			___stackTrace3 = L_110;
		}

IL_029a_1:
		{
			// }
			goto IL_029f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029c;
		}
		throw e;
	}

CATCH_029c:
	{// begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_029f;
	}// end catch (depth: 1)

IL_029f:
	{
		// if (string.IsNullOrEmpty(reason))
		String_t* L_111 = V_1;
		bool L_112;
		L_112 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_111, NULL);
		if (!L_112)
		{
			goto IL_02a9;
		}
	}
	{
		// reason = message;
		String_t* L_113 = ___message2;
		V_1 = L_113;
	}

IL_02a9:
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_114 = ___name1;
		bool L_115;
		L_115 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_114, NULL);
		if (!L_115)
		{
			goto IL_02d3;
		}
	}
	{
		// if (string.IsNullOrEmpty(type))
		String_t* L_116 = V_0;
		bool L_117;
		L_117 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_116, NULL);
		if (!L_117)
		{
			goto IL_02d5;
		}
	}
	{
		// type = string.Format("Unity{0}", logLevel.ToString());
		Il2CppFakeBox<int32_t> L_118(LogSeverity_t2374E6AAAA8923D4560253B997A7F5750F2EE1D6_il2cpp_TypeInfo_var, (&___logLevel0));
		String_t* L_119;
		L_119 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_118), NULL);
		String_t* L_120;
		L_120 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E, L_119, NULL);
		V_0 = L_120;
		goto IL_02d5;
	}

IL_02d3:
	{
		// type = name;
		String_t* L_121 = ___name1;
		V_0 = L_121;
	}

IL_02d5:
	{
		// _reportException(type, reason, stackTrace, uncaught);
		String_t* L_122 = V_0;
		String_t* L_123 = V_1;
		String_t* L_124 = ___stackTrace3;
		bool L_125 = ___uncaught4;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil__reportException_mEF63E76C20D1617A7392A991ACFEE5779A377C52(L_122, L_123, L_124, L_125, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::_reportException(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__reportException_mEF63E76C20D1617A7392A991ACFEE5779A377C52 (String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, bool ___uncaught3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A48093245B11D1CF41CDBC4AFF508EB42565FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4808ACA9668728D6BBF49150A76132057225944C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A606CD24124B7144770746A88EAB7F3A3347CD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB363C38D69BA2131BFAC6B3A30B068F5D711FDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B33_0 = 0;
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
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
		// if (string.IsNullOrEmpty(stackTrace))
		String_t* L_2 = ___stackTrace2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// stackTrace = StackTraceUtility.ExtractStackTrace();
		il2cpp_codegen_runtime_class_init_inline(StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200(NULL);
		___stackTrace2 = L_4;
	}

IL_0018:
	{
		// if (string.IsNullOrEmpty(stackTrace))
		String_t* L_5 = ___stackTrace2;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// stackTrace = "Empty";
		___stackTrace2 = _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
		goto IL_019b;
	}

IL_002c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// string[] frames = stackTrace.Split('\n');
			String_t* L_7 = ___stackTrace2;
			NullCheck(L_7);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
			L_8 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_7, ((int32_t)10), 0, NULL);
			V_0 = L_8;
			// if (frames != null && frames.Length > 0)
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
			if (!L_9)
			{
				goto IL_017e_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
			NullCheck(L_10);
			if (!(((RuntimeArray*)L_10)->max_length))
			{
				goto IL_017e_1;
			}
		}
		{
			// StringBuilder trimFrameBuilder = new StringBuilder();
			StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
			V_1 = L_11;
			// string frame = null;
			V_2 = (String_t*)NULL;
			// int count = frames.Length;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
			NullCheck(L_12);
			V_3 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
			// bool isLua = false;
			V_4 = (bool)0;
			// for (int i = 0; i < count; i++)
			V_5 = 0;
			goto IL_016e_1;
		}

IL_005b_1:
		{
			// frame = frames[i];
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
			int32_t L_14 = V_5;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_2 = L_16;
			// if (frame.StartsWith("lua_stack_traceback:"))
			String_t* L_17 = V_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_17, _stringLiteralB363C38D69BA2131BFAC6B3A30B068F5D711FDD2, NULL);
			if (!L_18)
			{
				goto IL_0077_1;
			}
		}
		{
			// isLua = true;
			V_4 = (bool)1;
			// trimFrameBuilder.AppendLine();
			StringBuilder_t* L_19 = V_1;
			NullCheck(L_19);
			StringBuilder_t* L_20;
			L_20 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_19, NULL);
		}

IL_0077_1:
		{
			// if (isLua)
			bool L_21 = V_4;
			if (!L_21)
			{
				goto IL_008f_1;
			}
		}
		{
			// trimFrameBuilder.Append(frame);
			StringBuilder_t* L_22 = V_1;
			String_t* L_23 = V_2;
			NullCheck(L_22);
			StringBuilder_t* L_24;
			L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
			// trimFrameBuilder.AppendLine();
			StringBuilder_t* L_25 = V_1;
			NullCheck(L_25);
			StringBuilder_t* L_26;
			L_26 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_25, NULL);
			// continue;
			goto IL_0168_1;
		}

IL_008f_1:
		{
			// if (string.IsNullOrEmpty(frame) || string.IsNullOrEmpty(frame.Trim()))
			String_t* L_27 = V_2;
			bool L_28;
			L_28 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_27, NULL);
			if (L_28)
			{
				goto IL_0168_1;
			}
		}
		{
			String_t* L_29 = V_2;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_29, NULL);
			bool L_31;
			L_31 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_30, NULL);
			if (L_31)
			{
				goto IL_0168_1;
			}
		}
		{
			// frame = frame.Trim();
			String_t* L_32 = V_2;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_32, NULL);
			V_2 = L_33;
			// if (frame.StartsWith("System.Collections.Generic.") || frame.StartsWith("ShimEnumerator"))
			String_t* L_34 = V_2;
			NullCheck(L_34);
			bool L_35;
			L_35 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_34, _stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B, NULL);
			if (L_35)
			{
				goto IL_0168_1;
			}
		}
		{
			String_t* L_36 = V_2;
			NullCheck(L_36);
			bool L_37;
			L_37 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_36, _stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF, NULL);
			if (L_37)
			{
				goto IL_0168_1;
			}
		}
		{
			// if (frame.StartsWith("THEMIS"))
			String_t* L_38 = V_2;
			NullCheck(L_38);
			bool L_39;
			L_39 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_38, _stringLiteral0A48093245B11D1CF41CDBC4AFF508EB42565FFF, NULL);
			if (L_39)
			{
				goto IL_0168_1;
			}
		}
		{
			// if (frame.Contains("..ctor"))
			String_t* L_40 = V_2;
			NullCheck(L_40);
			bool L_41;
			L_41 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_40, _stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102, NULL);
			if (L_41)
			{
				goto IL_0168_1;
			}
		}
		{
			// int start = frame.ToLower().IndexOf("(at");
			String_t* L_42 = V_2;
			NullCheck(L_42);
			String_t* L_43;
			L_43 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_42, NULL);
			NullCheck(L_43);
			int32_t L_44;
			L_44 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_43, _stringLiteral4808ACA9668728D6BBF49150A76132057225944C, NULL);
			V_6 = L_44;
			// int end = frame.ToLower().IndexOf("/assets/");
			String_t* L_45 = V_2;
			NullCheck(L_45);
			String_t* L_46;
			L_46 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_45, NULL);
			NullCheck(L_46);
			int32_t L_47;
			L_47 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_46, _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373, NULL);
			V_7 = L_47;
			// if (start > 0 && end > 0)
			int32_t L_48 = V_6;
			if ((((int32_t)L_48) <= ((int32_t)0)))
			{
				goto IL_014a_1;
			}
		}
		{
			int32_t L_49 = V_7;
			if ((((int32_t)L_49) <= ((int32_t)0)))
			{
				goto IL_014a_1;
			}
		}
		{
			// trimFrameBuilder.AppendFormat("{0}(at {1}", frame.Substring(0, start).Replace(":", "."), frame.Substring(end));
			StringBuilder_t* L_50 = V_1;
			String_t* L_51 = V_2;
			int32_t L_52 = V_6;
			NullCheck(L_51);
			String_t* L_53;
			L_53 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_51, 0, L_52, NULL);
			NullCheck(L_53);
			String_t* L_54;
			L_54 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_53, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			String_t* L_55 = V_2;
			int32_t L_56 = V_7;
			NullCheck(L_55);
			String_t* L_57;
			L_57 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_55, L_56, NULL);
			NullCheck(L_50);
			StringBuilder_t* L_58;
			L_58 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_50, _stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF, L_54, L_57, NULL);
			goto IL_0161_1;
		}

IL_014a_1:
		{
			// trimFrameBuilder.Append(frame.Replace(":", "."));
			StringBuilder_t* L_59 = V_1;
			String_t* L_60 = V_2;
			NullCheck(L_60);
			String_t* L_61;
			L_61 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_60, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			NullCheck(L_59);
			StringBuilder_t* L_62;
			L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_59, L_61, NULL);
		}

IL_0161_1:
		{
			// trimFrameBuilder.AppendLine();
			StringBuilder_t* L_63 = V_1;
			NullCheck(L_63);
			StringBuilder_t* L_64;
			L_64 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_63, NULL);
		}

IL_0168_1:
		{
			// for (int i = 0; i < count; i++)
			int32_t L_65 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		}

IL_016e_1:
		{
			// for (int i = 0; i < count; i++)
			int32_t L_66 = V_5;
			int32_t L_67 = V_3;
			if ((((int32_t)L_66) < ((int32_t)L_67)))
			{
				goto IL_005b_1;
			}
		}
		{
			// stackTrace = trimFrameBuilder.ToString();
			StringBuilder_t* L_68 = V_1;
			NullCheck(L_68);
			String_t* L_69;
			L_69 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
			___stackTrace2 = L_69;
		}

IL_017e_1:
		{
			// }
			goto IL_019b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0180;
		}
		throw e;
	}

CATCH_0180:
	{// begin catch(System.Object)
		// catch
		// LocalDebugLog("{0}", "Error to parse the stack trace");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = L_70;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290)));
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var)));
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94)), L_71, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019b;
	}// end catch (depth: 1)

IL_019b:
	{
		// LocalDebugLog("ReportException: name = {0}\n reason = {1}\nstackTrace = {2}", name, reason, stackTrace);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
		String_t* L_74 = ___name0;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_74);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = L_73;
		String_t* L_76 = ___reason1;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_76);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_76);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = L_75;
		String_t* L_78 = ___stackTrace2;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_78);
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil_LocalDebugLog_m65B6344C965317BCAA02C2C3087DCAFC32EB1873(_stringLiteral8A606CD24124B7144770746A88EAB7F3A3347CD5, L_77, NULL);
		// _uncaughtAutoReportOnce = uncaught && _autoQuitApplicationAfterReport;
		bool L_79 = ___uncaught3;
		if (!L_79)
		{
			goto IL_01c1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		bool L_80 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_2;
		G_B33_0 = ((int32_t)(L_80));
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B33_0 = 0;
	}

IL_01c2:
	{
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_6 = (bool)G_B33_0;
		// ReportException(name, reason, stackTrace, _uncaughtAutoReportOnce);
		String_t* L_81 = ___name0;
		String_t* L_82 = ___reason1;
		String_t* L_83 = ___stackTrace2;
		bool L_84 = ((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_6;
		ThemisUtil_ReportException_m21C789446ADF4BBA91D8F2FD2323293BC3BBF56C(L_81, L_82, L_83, L_84, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::RegisterUnityLogListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_RegisterUnityLogListener_m0A09FDAAADFBBDA3E0684CED705C908484C5FA97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterUnityLogListenerU3Eb__25_0_m97210C4980DDDB6A0FB8FC2263812967981694BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077C802C86FF725760025910A3CF16E94A0490E3);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* G_B2_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* G_B2_1 = NULL;
	EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* G_B2_2 = NULL;
	Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* G_B1_0 = NULL;
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* G_B1_1 = NULL;
	EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* G_B1_2 = NULL;
	{
		// var command = new Command.Builder()
		//     .Service(TapDBConstants.TAPDB_SERVICE)
		//     .Method("isThemisValid")
		//     .Callback(true)
		//     .OnceTime(true)
		//     .CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteral077C802C86FF725760025910A3CF16E94A0490E3, NULL);
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_4;
		L_4 = Builder_Callback_m1EB195480B92DF17D52189A77E30122108F3ED4F(L_3, (bool)1, NULL);
		NullCheck(L_4);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_OnceTime_mF429D389381EA40CA4B50D623C34C5BFC6E63660(L_4, (bool)1, NULL);
		NullCheck(L_5);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_6;
		L_6 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_5, NULL);
		V_0 = L_6;
		// EngineBridge.GetInstance().CallHandler(command, result =>
		// {
		// 
		//     if (EngineBridge.CheckResult(result))
		//     {
		//         bool isValid = short.Parse(result.content) > 0;
		//         if (isValid)
		//         {
		//             _RegisterExceptionHandler();
		//         }
		//     }
		//     else
		//     {
		//         UnityEngine.Debug.Log("THEMIS get native lib response = " + result.code + " content = " + result.content); ;
		//     }
		// });
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_7;
		L_7 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var);
		Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* L_9 = ((U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1;
		Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		G_B1_2 = L_7;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			G_B2_2 = L_7;
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9* L_11 = ((U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* L_12 = (Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9*)il2cpp_codegen_object_new(Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mB777D320DBF09E0673EDEBE6D6CD7A1FF9FBA5AB(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CRegisterUnityLogListenerU3Eb__25_0_m97210C4980DDDB6A0FB8FC2263812967981694BD_RuntimeMethod_var), NULL);
		Action_1_t90276C1B1C41C979293681AE793E1B02684DF5E9* L_13 = L_12;
		((U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1), (void*)L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0050:
	{
		NullCheck(G_B2_2);
		EngineBridge_CallHandler_m7C6FFD831026C389649338CC2C933673059423E8(G_B2_2, G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::ReportException(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil_ReportException_m21C789446ADF4BBA91D8F2FD2323293BC3BBF56C (String_t* ___name0, String_t* ___message1, String_t* ___stackTrace2, bool ___isQuitApp3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral012A18907B249DF0954BFA806717C2FD7DDB76F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9B92F50891ACDFD6E5AEDA5FF9718FB6F7974A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7B52A9E67083712E08E22E364570ADD87EA8F7A);
		s_Il2CppMethodInitialized = true;
	}
	Command_t8D907831ABE54215BACADB269C51675B35BD5D37* V_0 = NULL;
	{
		// var command = new Command.Builder()
		//    .Service(TapDBConstants.TAPDB_SERVICE)
		//    .Method("reportCustomException")
		//    .Args("name", name)
		//    .Args("reason", message)
		//    .Args("message", stackTrace)
		//    .Args("isQuit", isQuitApp).CommandBuilder();
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_0 = (Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9*)il2cpp_codegen_object_new(Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1618592160F994AABFA741AE5A20D315D7E02CAA(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_StaticFields*)il2cpp_codegen_static_fields_for(TapDBConstants_t27208B5E4EAB3A7ABA486370283B5855B0E37146_il2cpp_TypeInfo_var))->___TAPDB_SERVICE_0;
		NullCheck(L_0);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_2;
		L_2 = Builder_Service_m8ED188AA5AD0EF1FF6B7E6AE5FC64AA827B201D2(L_0, L_1, NULL);
		NullCheck(L_2);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_3;
		L_3 = Builder_Method_mA8A5B081936E158BA788E903826268B31AF8D5FC(L_2, _stringLiteral6E9B92F50891ACDFD6E5AEDA5FF9718FB6F7974A, NULL);
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_5;
		L_5 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_3, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_4, NULL);
		String_t* L_6 = ___message1;
		NullCheck(L_5);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_7;
		L_7 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_5, _stringLiteral012A18907B249DF0954BFA806717C2FD7DDB76F9, L_6, NULL);
		String_t* L_8 = ___stackTrace2;
		NullCheck(L_7);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_9;
		L_9 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_7, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, L_8, NULL);
		bool L_10 = ___isQuitApp3;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		Builder_t42B9DCAF60B3972E9B1F7B1428CF71E49AEFD2C9* L_13;
		L_13 = Builder_Args_m411B1EC97813705C8B30C4618EFDBF472A0897EC(L_9, _stringLiteralD7B52A9E67083712E08E22E364570ADD87EA8F7A, L_12, NULL);
		NullCheck(L_13);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_14;
		L_14 = Builder_CommandBuilder_m78F6EC369C2A3A10E536F534BC8D51FC76D5BC44(L_13, NULL);
		V_0 = L_14;
		// EngineBridge.GetInstance().CallHandler(command);
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967* L_15;
		L_15 = EngineBridge_GetInstance_mD07871BFCFF95A85A124C5360FBD1AF76E267FF7(NULL);
		Command_t8D907831ABE54215BACADB269C51675B35BD5D37* L_16 = V_0;
		NullCheck(L_15);
		EngineBridge_CallHandler_m4837CFEB083FF2ACC81BDB70330B6464A1F1AAA2(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__ctor_m549435FA46821059B7840D901A0EA9A7D32DE65A (ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemisUtil__cctor_mBC7A8F4BEB46900E0B7BE958FB37D345EF760342 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static LogSeverity _autoReportLogLevel = LogSeverity.LogError;
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoReportLogLevel_1 = 5;
		// private static bool _autoQuitApplicationAfterReport = false;
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_2 = (bool)0;
		// private static readonly int EXCEPTION_TYPE_UNCAUGHT = 1;
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_UNCAUGHT_3 = 1;
		// private static readonly int EXCEPTION_TYPE_CAUGHT = 2;
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_CAUGHT_4 = 2;
		// private static bool enableDebug = false;
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->___enableDebug_5 = (bool)0;
		// private static bool _uncaughtAutoReportOnce = false;
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_6 = (bool)0;
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
void reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_Multicast(reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* currentDelegate = reinterpret_cast<reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, int32_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___name0, ___reason1, ___stackTrace2, ___type3, ___isQuitApp4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_OpenInst(reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method)
{
	NullCheck(___name0);
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___name0, ___reason1, ___stackTrace2, ___type3, ___isQuitApp4, method);
}
void reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_OpenStatic(reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___name0, ___reason1, ___stackTrace2, ___type3, ___isQuitApp4, method);
}
void reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_OpenStaticInvoker(reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< String_t*, String_t*, String_t*, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___name0, ___reason1, ___stackTrace2, ___type3, ___isQuitApp4);
}
void reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_ClosedStaticInvoker(reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, String_t*, String_t*, String_t*, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___name0, ___reason1, ___stackTrace2, ___type3, ___isQuitApp4);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40 (reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter '___reason1' to native representation
	char* ____reason1_marshaled = NULL;
	____reason1_marshaled = il2cpp_codegen_marshal_string(___reason1);

	// Marshaling of parameter '___stackTrace2' to native representation
	char* ____stackTrace2_marshaled = NULL;
	____stackTrace2_marshaled = il2cpp_codegen_marshal_string(___stackTrace2);

	// Native function invocation
	il2cppPInvokeFunc(____name0_marshaled, ____reason1_marshaled, ____stackTrace2_marshaled, ___type3, static_cast<int32_t>(___isQuitApp4));

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___reason1' native representation
	il2cpp_codegen_marshal_free(____reason1_marshaled);
	____reason1_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace2' native representation
	il2cpp_codegen_marshal_free(____stackTrace2_marshaled);
	____stackTrace2_marshaled = NULL;

}
// System.Void TapTap.TapDB.Mobile.ThemisUtil/reportExceptionDel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reportExceptionDel__ctor_m61FF2987F10C10A78591CE3FCA0F47E45526D817 (reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA_Multicast;
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil/reportExceptionDel::Invoke(System.String,System.String,System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reportExceptionDel_Invoke_mE2B413DE363DA94832865DDBC9AFC432C6CF76CA (reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___name0, ___reason1, ___stackTrace2, ___type3, ___isQuitApp4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TapTap.TapDB.Mobile.ThemisUtil/reportExceptionDel::BeginInvoke(System.String,System.String,System.String,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* reportExceptionDel_BeginInvoke_mEDD5FD5968558A0FB01C553AC2669B26E7DD8494 (reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, int32_t ___type3, bool ___isQuitApp4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___name0;
	__d_args[1] = ___reason1;
	__d_args[2] = ___stackTrace2;
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___type3);
	__d_args[4] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isQuitApp4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil/reportExceptionDel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void reportExceptionDel_EndInvoke_m64AAD3B03E534C652A06DD7EA838007B3904675A (reportExceptionDel_t1BEE56592E1E1E182E67E48D6CB404B3CD0F1E40* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void TapTap.TapDB.Mobile.ThemisUtil/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m60129FFAE17CCF01A476E00EFFD10DE98E36CF86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9* L_0 = (U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9*)il2cpp_codegen_object_new(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m256B2536C1E76683FA506BDA5EC3D3FD7E4D4C18(L_0, NULL);
		((U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m256B2536C1E76683FA506BDA5EC3D3FD7E4D4C18 (U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TapTap.TapDB.Mobile.ThemisUtil/<>c::<RegisterUnityLogListener>b__25_0(TapTap.Common.Result)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterUnityLogListenerU3Eb__25_0_m97210C4980DDDB6A0FB8FC2263812967981694BD (U3CU3Ec_t131BF29327BB1DAFC4C172691229A66BB6E183C9* __this, Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA00EFDADF41DD1A8E3FD110F18FDAD5DEBD35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD17D4BCEFECEE7E1138F2533CA49A4CDC615645B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EngineBridge.CheckResult(result))
		Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* L_0 = ___result0;
		il2cpp_codegen_runtime_class_init_inline(EngineBridge_tCC55DAA286028E631F82C0826C9ED6CC9D4E0967_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EngineBridge_CheckResult_mCCEAD784C31723C6CF48ADCE6071896E020EC0BA(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// bool isValid = short.Parse(result.content) > 0;
		Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* L_2 = ___result0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___content_4;
		int16_t L_4;
		L_4 = Int16_Parse_m35EE2AC9ECC88472FAB3E68A9FCDE5ADF5CD6C60(L_3, NULL);
		// if (isValid)
		if (!((((int32_t)L_4) > ((int32_t)0))? 1 : 0))
		{
			goto IL_0043;
		}
	}
	{
		// _RegisterExceptionHandler();
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		ThemisUtil__RegisterExceptionHandler_mEE9BFEB74600889623990DF92986BA044207FA9B(NULL);
		return;
	}

IL_001e:
	{
		// UnityEngine.Debug.Log("THEMIS get native lib response = " + result.code + " content = " + result.content); ;
		Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* L_5 = ___result0;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___code_2);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		Result_tBE550EEB85C4A496D58A81389702E1E2E097239A* L_8 = ___result0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___content_4;
		String_t* L_10;
		L_10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralD17D4BCEFECEE7E1138F2533CA49A4CDC615645B, L_7, _stringLiteral2BA00EFDADF41DD1A8E3FD110F18FDAD5DEBD35C, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
	}

IL_0043:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThemisUtil_SetEnableDebug_m98F7DF69331AC0A65C8E97351EA2C217AC6DC805_inline (bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enableDebug = enable;
		bool L_0 = ___enable0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->___enableDebug_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoReportLogLevel_mFE5B9604B1F1C09A02572F404008A4DF27BB6314_inline (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoReportLogLevel = level;
		int32_t L_0 = ___level0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoReportLogLevel_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThemisUtil_U3d_ConfigAutoQuitApplication_mC516F51559AC3F399B64D9F056D5B11E3D402AB8_inline (bool ___autoQuit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___autoQuit0;
		il2cpp_codegen_runtime_class_init_inline(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var);
		((ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_StaticFields*)il2cpp_codegen_static_fields_for(ThemisUtil_tCEEA0C0DEE07F51B57C08C141F9ABAC3B27739DF_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_2 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* TapCommon_get_Config_m32A2FAD3A99D7382E0A5EF1BB18FC341108D1F5F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_il2cpp_TypeInfo_var);
		TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* L_0 = ((TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_StaticFields*)il2cpp_codegen_static_fields_for(TapCommon_t87BA8AC45E9027DE48B564ABE7D8236EAFE0D3A9_il2cpp_TypeInfo_var))->___config_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD_inline (LogCallbackDelegate_tFE0A380A34613888A6A933A16DED45604A5DBC02* __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___condition0, ___stackTrace1, ___type2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____exception_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
