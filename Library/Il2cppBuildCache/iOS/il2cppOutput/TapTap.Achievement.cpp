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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>
struct Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<LC.Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_tCD54E322DF8A25F95F7BCBCC5C1D373ADF10B456;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<LC.Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_tAF2F00C6220DD700BC0F6C3B156F0F1DADFD940B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
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
// System.Collections.Generic.IList`1<LC.Newtonsoft.Json.JsonConverter>
struct IList_1_t76F89B41B78F46F7A5BD7FE2A6405EBF91CFCE1E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>
struct List_1_t44D754D117C7EC0C0369C9623F9C640D2030A27B;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>>
struct TaskFactory_1_tD7E1D18C28EA013DCAA396980BB9E164AF332AFE;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>>
struct Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// TapTap.Achievement.Localization.AchievementLocalizationItems
struct AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64;
// TapTap.Achievement.AchievementStats
struct AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// TapTap.Achievement.IAchievementCallback
struct IAchievementCallback_t27BB8AFAB888DF81F94FD2CC183320AC4A98A7C0;
// LC.Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t2E2C243C6C5176FE275961181425B3D80C315E9B;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// LC.Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_tC8759F76F1E0A0ECBB9E5899076F4EEFBFD00568;
// TapTap.Achievement.ITapAchievement
struct ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25;
// LC.Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_tADEA7849717603801829E91021BD1A84D69C8CCA;
// LC.Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6;
// TapTap.Achievement.Localization.Item
struct Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B;
// TapTap.Achievement.Localization.Items
struct Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0;
// LC.Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// TapTap.Achievement.TapAchievement
struct TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF;
// TapTap.Achievement.TapAchievementBean
struct TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD;
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
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TapTap.Achievement.TapAchievement/<>c
struct U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699;
// TapTap.Achievement.TapAchievement/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t308A2C37F171F6280193BD60B07EDD221615BFD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_tC182FD3FB3602BA6C3A1C821F59723C0387A2718_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapLocalizeManager_t9BA0654C8EFE16BC9217CF16323831406B6DADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE27F893D0D42DC4B7DF49CA30C277D80D98A72;
IL2CPP_EXTERN_C String_t* _stringLiteral168D86481B1FEE185AD9C8BE391F427AAAD308F8;
IL2CPP_EXTERN_C String_t* _stringLiteral168DD7A5BDD6D99BFCCB6916AEB1FA5C44308B71;
IL2CPP_EXTERN_C String_t* _stringLiteral1B5DDE20234200362361A06C390C2313989EF13F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F49A2AFFB8FE6B8BC641C901E030D08988147E1;
IL2CPP_EXTERN_C String_t* _stringLiteral22EDABE4D11AE4E13E5BF5F0BE6A3B4D6773C54B;
IL2CPP_EXTERN_C String_t* _stringLiteral2749F61B53D3AE421C0C7D3FA880F77800C26C72;
IL2CPP_EXTERN_C String_t* _stringLiteral45E9611665A0D0E359B667F804E2303FDFA07767;
IL2CPP_EXTERN_C String_t* _stringLiteral4D4F8042A7CE9BDB9C4C18F770F18C6D37C96EBC;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9;
IL2CPP_EXTERN_C String_t* _stringLiteral588261AEE7AB6B23E5639A3DB820CCDE27D24C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral5EB0E0B91E9789736507F39E8853617154087BBC;
IL2CPP_EXTERN_C String_t* _stringLiteral600F5DEAFE1301801976FD6C624BABBF5196CB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6499F5163241D64F9FF2F07C568FB0B9C983BB2D;
IL2CPP_EXTERN_C String_t* _stringLiteral7AF417162EFFDBF61A667C985112766414C594DE;
IL2CPP_EXTERN_C String_t* _stringLiteral837C9A8EDCC0809F5E6215B1737BFCA63D56E2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral8EF2388B7214269EE9F8674FDACB4730A90F8D38;
IL2CPP_EXTERN_C String_t* _stringLiteral9038390D52037D6A65B58EAC92FABE9504F4EB48;
IL2CPP_EXTERN_C String_t* _stringLiteral96609EF44E41668A029AA2934BE1BACAA254ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE381A7D128DE96AC847CB6C109E5D8EE7F80E0;
IL2CPP_EXTERN_C String_t* _stringLiteralA09C7BE5A3747A7C5ECC9D38D5C7AF9BBBFFDDD2;
IL2CPP_EXTERN_C String_t* _stringLiteralA0BE14DC8A0FE1F26D0BA5DBCD1E834BDBD90308;
IL2CPP_EXTERN_C String_t* _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048;
IL2CPP_EXTERN_C String_t* _stringLiteralA3658B3BDC315676453B435779897978D61E3489;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D0B92641A9EF5B4508EF790C28AC35049CDF7C;
IL2CPP_EXTERN_C String_t* _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A01FA986A388EB8F10E26E545140729B38AB52;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F;
IL2CPP_EXTERN_C String_t* _stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF02ADBD46B2C369D8FC6999A8F3EA833840056;
IL2CPP_EXTERN_C String_t* _stringLiteralD417B8B2EFAED56E64F19E2CD846FDDFDB480B50;
IL2CPP_EXTERN_C String_t* _stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4;
IL2CPP_EXTERN_C String_t* _stringLiteralE00648E1F5CB8CAABB51466C114E235F6DABD9D8;
IL2CPP_EXTERN_C String_t* _stringLiteralE00A9F41329C7241DF7C9AA7F7D305B2130AF8B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE618A20A4146A4A77AF573EE2AB9BC24AC5E6699;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF85D820011EAAA0EC9160A64905C073CD7A3F615;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisAchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64_m0B8899B65B38338EAE3C7F67B59C37859AC1BCAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m8CD30EFEC0780525560B04B750FD587556B5C749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_1_mB90CE6DED885BB2947D00D532B3D789045BE3F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3C_cctorU3Eb__2_mB11F9F182A7A007484C1EC7FC820BD14D902777D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1CC4752C16809DC6C84D89D95A6C941467B69838 
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

// TapTap.Achievement.Localization.AchievementLocalizationItems
struct AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64  : public RuntimeObject
{
	// TapTap.Achievement.Localization.Items TapTap.Achievement.Localization.AchievementLocalizationItems::<Items>k__BackingField
	Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* ___U3CItemsU3Ek__BackingField_0;
};

// TapTap.Achievement.AchievementStats
struct AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78  : public RuntimeObject
{
	// System.Int32 TapTap.Achievement.AchievementStats::level
	int32_t ___level_0;
	// System.Double TapTap.Achievement.AchievementStats::rarity
	double ___rarity_1;
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

// TapTap.Achievement.Localization.Converter
struct Converter_t6531F901903664EB49D3573D4AF3F0914F57B025  : public RuntimeObject
{
};

struct Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_StaticFields
{
	// LC.Newtonsoft.Json.JsonSerializerSettings TapTap.Achievement.Localization.Converter::Settings
	JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* ___Settings_0;
};

// TapTap.Achievement.Localization.Item
struct Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B  : public RuntimeObject
{
	// System.String TapTap.Achievement.Localization.Item::<DetailAchievementData>k__BackingField
	String_t* ___U3CDetailAchievementDataU3Ek__BackingField_0;
	// System.String TapTap.Achievement.Localization.Item::<DetailGetPercent>k__BackingField
	String_t* ___U3CDetailGetPercentU3Ek__BackingField_1;
	// System.String TapTap.Achievement.Localization.Item::<DetailGetPercentlow>k__BackingField
	String_t* ___U3CDetailGetPercentlowU3Ek__BackingField_2;
	// System.String TapTap.Achievement.Localization.Item::<DetailGetDatetime>k__BackingField
	String_t* ___U3CDetailGetDatetimeU3Ek__BackingField_3;
	// System.String TapTap.Achievement.Localization.Item::<InvisibleTitle>k__BackingField
	String_t* ___U3CInvisibleTitleU3Ek__BackingField_4;
	// System.String TapTap.Achievement.Localization.Item::<InvisibleSubtitle>k__BackingField
	String_t* ___U3CInvisibleSubtitleU3Ek__BackingField_5;
	// System.String TapTap.Achievement.Localization.Item::<Unlock>k__BackingField
	String_t* ___U3CUnlockU3Ek__BackingField_6;
	// System.String TapTap.Achievement.Localization.Item::<Lock>k__BackingField
	String_t* ___U3CLockU3Ek__BackingField_7;
	// System.String TapTap.Achievement.Localization.Item::<Common>k__BackingField
	String_t* ___U3CCommonU3Ek__BackingField_8;
	// System.String TapTap.Achievement.Localization.Item::<Uncommom>k__BackingField
	String_t* ___U3CUncommomU3Ek__BackingField_9;
	// System.String TapTap.Achievement.Localization.Item::<Rare>k__BackingField
	String_t* ___U3CRareU3Ek__BackingField_10;
	// System.String TapTap.Achievement.Localization.Item::<UltraRare>k__BackingField
	String_t* ___U3CUltraRareU3Ek__BackingField_11;
	// System.String TapTap.Achievement.Localization.Item::<ToastCongra>k__BackingField
	String_t* ___U3CToastCongraU3Ek__BackingField_12;
};

// TapTap.Achievement.Localization.Items
struct Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0  : public RuntimeObject
{
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<Zhs>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CZhsU3Ek__BackingField_0;
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<En>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CEnU3Ek__BackingField_1;
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<Id>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CIdU3Ek__BackingField_2;
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<Ja>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CJaU3Ek__BackingField_3;
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<Ko>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CKoU3Ek__BackingField_4;
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<Th>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CThU3Ek__BackingField_5;
	// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::<Zht>k__BackingField
	Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___U3CZhtU3Ek__BackingField_6;
};

// LC.Newtonsoft.Json.JsonConverter
struct JsonConverter_tDEB236183011E2076190E763ADEA8A2394E63679  : public RuntimeObject
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

// TapTap.Achievement.Localization.Serialize
struct Serialize_t1400000ED5FC8689920041DD7155397B40CCC3A0  : public RuntimeObject
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

// TapTap.Achievement.TapAchievement
struct TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF  : public RuntimeObject
{
};

struct TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields
{
	// TapTap.Achievement.ITapAchievement TapTap.Achievement.TapAchievement::platformWrapper
	RuntimeObject* ___platformWrapper_6;
};

// TapTap.Achievement.TapAchievementBean
struct TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD  : public RuntimeObject
{
	// System.String TapTap.Achievement.TapAchievementBean::id
	String_t* ___id_4;
	// System.String TapTap.Achievement.TapAchievementBean::displayId
	String_t* ___displayId_5;
	// System.Int32 TapTap.Achievement.TapAchievementBean::visible
	int32_t ___visible_6;
	// System.String TapTap.Achievement.TapAchievementBean::title
	String_t* ___title_7;
	// System.String TapTap.Achievement.TapAchievementBean::subTitle
	String_t* ___subTitle_8;
	// System.String TapTap.Achievement.TapAchievementBean::achieveIcon
	String_t* ___achieveIcon_9;
	// System.Int32 TapTap.Achievement.TapAchievementBean::step
	int32_t ___step_10;
	// System.Int64 TapTap.Achievement.TapAchievementBean::createTime
	int64_t ___createTime_11;
	// System.Int32 TapTap.Achievement.TapAchievementBean::showOrder
	int32_t ___showOrder_12;
	// System.Boolean TapTap.Achievement.TapAchievementBean::fullReached
	bool ___fullReached_13;
	// System.Int32 TapTap.Achievement.TapAchievementBean::reachedStep
	int32_t ___reachedStep_14;
	// System.Int64 TapTap.Achievement.TapAchievementBean::reachedTime
	int64_t ___reachedTime_15;
	// System.Boolean TapTap.Achievement.TapAchievementBean::isChanged
	bool ___isChanged_16;
	// System.Int32 TapTap.Achievement.TapAchievementBean::type
	int32_t ___type_17;
	// TapTap.Achievement.AchievementStats TapTap.Achievement.TapAchievementBean::stats
	AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* ___stats_18;
};

struct TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields
{
	// System.Int32 TapTap.Achievement.TapAchievementBean::StateUnReached
	int32_t ___StateUnReached_0;
	// System.Int32 TapTap.Achievement.TapAchievementBean::StateReached
	int32_t ___StateReached_1;
	// System.Int32 TapTap.Achievement.TapAchievementBean::VisibleFalse
	int32_t ___VisibleFalse_2;
	// System.Int32 TapTap.Achievement.TapAchievementBean::VisibleTrue
	int32_t ___VisibleTrue_3;
};

// TapTap.Achievement.TapAchievementConstants
struct TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4  : public RuntimeObject
{
};

struct TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields
{
	// System.String TapTap.Achievement.TapAchievementConstants::TapAchievementService
	String_t* ___TapAchievementService_0;
	// System.String TapTap.Achievement.TapAchievementConstants::TapAchievementClz
	String_t* ___TapAchievementClz_1;
	// System.String TapTap.Achievement.TapAchievementConstants::TapAchievementImpl
	String_t* ___TapAchievementImpl_2;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// TapTap.Achievement.TapAchievement/<>c
struct U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699  : public RuntimeObject
{
};

struct U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_StaticFields
{
	// TapTap.Achievement.TapAchievement/<>c TapTap.Achievement.TapAchievement/<>c::<>9
	U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* ___U3CU3E9_0;
};

// TapTap.Achievement.TapAchievement/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8  : public RuntimeObject
{
	// System.Type TapTap.Achievement.TapAchievement/<>c__DisplayClass7_0::interfaceType
	Type_t* ___interfaceType_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE33D087608A768FB2F1C64C2174CDA53D5DB85B7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t043FDE3F04C6C630F9B5AD2B642ECF987C64F29E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.DateParseHandling>
struct Nullable_1_t3D33EFBAB90BB4A0273A36A0609B8B40F9003EFE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_t486A01C63D8CE74AA4CCECD073B98F3825597FE3 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tEC446FF9ACD5B59FF3B336A4C09428B702989C86 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tAD3194E01EC756F84824A35F575606E4BD5337E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_t9DD4C288D9994A285F41A4644A503EAF0339B9A2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.Formatting>
struct Nullable_1_tC1C7274F68C824069B24E942CC22DAD5C2B8D6D9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t6269CDB6D45633CE477510747D0C7E4EFFEB6F1A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t68816EFA2F5433812B495AEEEAFD4199FA9BD524 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t9EF5D98A2A909F8F59F1135CD9B8FD3A33F6B61D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_tC1B4746A24EA0DA5308CC7AAA743D0B97E888B6B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_tEFFB40D12F7047DD6EBE4215088D3DFF1A09F1DE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t81AD659A329027F36B559C173F7A91730AED21C3 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t94349FF62F4E2463DF8FC1A7766A6F840BECACF6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t4FBF21693BDE6D80E53D3B115EB903C16B164318 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<LC.Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tFED1910A2933B8FE4DACD8BD895FE4EECF9E3F84 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>>
struct Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t44D754D117C7EC0C0369C9623F9C640D2030A27B* ___m_result_38;
};

struct Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD7E1D18C28EA013DCAA396980BB9E164AF332AFE* ___s_defaultFactory_39;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

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

// LC.Newtonsoft.Json.Converters.DateTimeConverterBase
struct DateTimeConverterBase_t3EBEC8F52BF864CAA10C44288F2D87A1AE510CFD  : public JsonConverter_tDEB236183011E2076190E763ADEA8A2394E63679
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
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

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_9;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_10;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_6;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_7;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_8;
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

// LC.Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6  : public DateTimeConverterBase_t3EBEC8F52BF864CAA10C44288F2D87A1AE510CFD
{
	// System.Globalization.DateTimeStyles LC.Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeStyles
	int32_t ____dateTimeStyles_1;
	// System.String LC.Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeFormat
	String_t* ____dateTimeFormat_2;
	// System.Globalization.CultureInfo LC.Newtonsoft.Json.Converters.IsoDateTimeConverter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_3;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// LC.Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95  : public RuntimeObject
{
	// System.Nullable`1<LC.Newtonsoft.Json.Formatting> LC.Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tC1C7274F68C824069B24E942CC22DAD5C2B8D6D9 ____formatting_21;
	// System.Nullable`1<LC.Newtonsoft.Json.DateFormatHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t043FDE3F04C6C630F9B5AD2B642ECF987C64F29E ____dateFormatHandling_22;
	// System.Nullable`1<LC.Newtonsoft.Json.DateTimeZoneHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_t486A01C63D8CE74AA4CCECD073B98F3825597FE3 ____dateTimeZoneHandling_23;
	// System.Nullable`1<LC.Newtonsoft.Json.DateParseHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_t3D33EFBAB90BB4A0273A36A0609B8B40F9003EFE ____dateParseHandling_24;
	// System.Nullable`1<LC.Newtonsoft.Json.FloatFormatHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tAD3194E01EC756F84824A35F575606E4BD5337E8 ____floatFormatHandling_25;
	// System.Nullable`1<LC.Newtonsoft.Json.FloatParseHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_t9DD4C288D9994A285F41A4644A503EAF0339B9A2 ____floatParseHandling_26;
	// System.Nullable`1<LC.Newtonsoft.Json.StringEscapeHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t94349FF62F4E2463DF8FC1A7766A6F840BECACF6 ____stringEscapeHandling_27;
	// System.Globalization.CultureInfo LC.Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_28;
	// System.Nullable`1<System.Boolean> LC.Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_29;
	// System.Nullable`1<System.Int32> LC.Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_30;
	// System.Boolean LC.Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_31;
	// System.String LC.Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_32;
	// System.Boolean LC.Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_33;
	// System.Nullable`1<LC.Newtonsoft.Json.TypeNameAssemblyFormatHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t4FBF21693BDE6D80E53D3B115EB903C16B164318 ____typeNameAssemblyFormatHandling_34;
	// System.Nullable`1<LC.Newtonsoft.Json.DefaultValueHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_tEC446FF9ACD5B59FF3B336A4C09428B702989C86 ____defaultValueHandling_35;
	// System.Nullable`1<LC.Newtonsoft.Json.PreserveReferencesHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_tEFFB40D12F7047DD6EBE4215088D3DFF1A09F1DE ____preserveReferencesHandling_36;
	// System.Nullable`1<LC.Newtonsoft.Json.NullValueHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_t9EF5D98A2A909F8F59F1135CD9B8FD3A33F6B61D ____nullValueHandling_37;
	// System.Nullable`1<LC.Newtonsoft.Json.ObjectCreationHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_tC1B4746A24EA0DA5308CC7AAA743D0B97E888B6B ____objectCreationHandling_38;
	// System.Nullable`1<LC.Newtonsoft.Json.MissingMemberHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t68816EFA2F5433812B495AEEEAFD4199FA9BD524 ____missingMemberHandling_39;
	// System.Nullable`1<LC.Newtonsoft.Json.ReferenceLoopHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t81AD659A329027F36B559C173F7A91730AED21C3 ____referenceLoopHandling_40;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> LC.Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_41;
	// System.Nullable`1<LC.Newtonsoft.Json.ConstructorHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE33D087608A768FB2F1C64C2174CDA53D5DB85B7 ____constructorHandling_42;
	// System.Nullable`1<LC.Newtonsoft.Json.TypeNameHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tFED1910A2933B8FE4DACD8BD895FE4EECF9E3F84 ____typeNameHandling_43;
	// System.Nullable`1<LC.Newtonsoft.Json.MetadataPropertyHandling> LC.Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t6269CDB6D45633CE477510747D0C7E4EFFEB6F1A ____metadataPropertyHandling_44;
	// System.Collections.Generic.IList`1<LC.Newtonsoft.Json.JsonConverter> LC.Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_45;
	// LC.Newtonsoft.Json.Serialization.IContractResolver LC.Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_46;
	// System.Collections.IEqualityComparer LC.Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_47;
	// System.Func`1<LC.Newtonsoft.Json.Serialization.IReferenceResolver> LC.Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_tAF2F00C6220DD700BC0F6C3B156F0F1DADFD940B* ___U3CReferenceResolverProviderU3Ek__BackingField_48;
	// LC.Newtonsoft.Json.Serialization.ITraceWriter LC.Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_49;
	// LC.Newtonsoft.Json.Serialization.ISerializationBinder LC.Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_50;
	// System.EventHandler`1<LC.Newtonsoft.Json.Serialization.ErrorEventArgs> LC.Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_tCD54E322DF8A25F95F7BCBCC5C1D373ADF10B456* ___U3CErrorU3Ek__BackingField_51;
};

struct JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95_StaticFields
{
	// System.Runtime.Serialization.StreamingContext LC.Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo LC.Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>
struct Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9  : public MulticastDelegate_t
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

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Object>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SafeDictionary_GetValue_TisRuntimeObject_m9C978A1193EE61E4BCD5499251BA17546BA728C6_gshared (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, RuntimeObject* ___defaultVal2, const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Int32>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_gshared (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, int32_t ___defaultVal2, const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Boolean>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_gshared (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, bool ___defaultVal2, const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Int64>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_gshared (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, int64_t ___defaultVal2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Double>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_gshared (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, double ___defaultVal2, const RuntimeMethod* method) ;
// T LC.Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String,LC.Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m55A67386A47654A8F6A503C025A5343C9F199A56_gshared (String_t* ___value0, JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* ___settings1, const RuntimeMethod* method) ;

// System.Void TapTap.Achievement.TapAchievement/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE560E0C2AE090188C4500854FAD3AFDE914C9F17 (U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* __this, const RuntimeMethod* method) ;
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
// System.Void TapTap.Common.TapLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapLogger_Error_mD50F649AC414CC4F7E4FD98DF2DD66BD61860530 (String_t* ___log0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void TapTap.Achievement.TapAchievement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97AEFC2BA00CEB9B334D08CD7D2F60262DDBF196 (U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* __this, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssemblyName_get_FullName_m668C2F147964E6C40B4FB23CE7655EFFE447EF22 (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean TapTap.Achievement.TapAchievementBean::IsFullReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_IsFullReached_m6B38FDC8C81213FA6E62141032C13299EECD54E0 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) ;
// System.Boolean TapTap.Achievement.TapAchievementBean::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_IsVisible_m511DE12332731862800ADE85CB8F3705391D8AD2 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Object TapTap.Common.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mA576F5E49872FF8A362CB66226DA1155E806FA2B (String_t* ___json0, const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.String>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
inline String_t* SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, String_t* ___defaultVal2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, String_t*, const RuntimeMethod*))SafeDictionary_GetValue_TisRuntimeObject_m9C978A1193EE61E4BCD5499251BA17546BA728C6_gshared)(___dic0, ___key1, ___defaultVal2, method);
}
// T TapTap.Common.SafeDictionary::GetValue<System.Int32>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
inline int32_t SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, int32_t ___defaultVal2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, int32_t, const RuntimeMethod*))SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_gshared)(___dic0, ___key1, ___defaultVal2, method);
}
// T TapTap.Common.SafeDictionary::GetValue<System.Boolean>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
inline bool SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, bool ___defaultVal2, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, bool, const RuntimeMethod*))SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_gshared)(___dic0, ___key1, ___defaultVal2, method);
}
// T TapTap.Common.SafeDictionary::GetValue<System.Int64>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
inline int64_t SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, int64_t ___defaultVal2, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, int64_t, const RuntimeMethod*))SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_gshared)(___dic0, ___key1, ___defaultVal2, method);
}
// System.Boolean TapTap.Common.Platform::IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsIOS_m21A7C2007D6392091E88A7089322532332D2DCF4 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void TapTap.Achievement.AchievementStats::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementStats__ctor_m79265E6D17D0CFB0D5DB3A5949DCA09B3E0ED034 (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* __this, String_t* ___json0, const RuntimeMethod* method) ;
// System.Boolean TapTap.Common.Platform::IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED (const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___defaultVal2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))SafeDictionary_GetValue_TisRuntimeObject_m9C978A1193EE61E4BCD5499251BA17546BA728C6_gshared)(___dic0, ___key1, ___defaultVal2, method);
}
// System.Void TapTap.Achievement.AchievementStats::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementStats__ctor_m147810F060C21DEEA488DB8E50F1C222816E1CF3 (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, const RuntimeMethod* method) ;
// System.Void TapTap.Achievement.TapAchievementBean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievementBean__ctor_mD469F54E3F35D158E0B9C3B316460BC82AD92775 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.DateTimeOffset System.DateTimeOffset::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 DateTimeOffset_get_UtcNow_mD315065704E3FE153970E6BD06362AEDD3D9765F (const RuntimeMethod* method) ;
// System.Int64 System.DateTimeOffset::ToUnixTimeMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Boolean TapTap.Achievement.TapAchievementBean::Make(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_Make_m3D929BA3436FC4262FE47B7DBAB9D326703BFDD4 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, int32_t ___step0, const RuntimeMethod* method) ;
// System.Void TapTap.Achievement.AchievementStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementStats__ctor_m2C6A19822D3FC463E8D2D171B5A66887A4D0533F (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* __this, const RuntimeMethod* method) ;
// T TapTap.Common.SafeDictionary::GetValue<System.Double>(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,T)
inline double SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, String_t* ___key1, double ___defaultVal2, const RuntimeMethod* method)
{
	return ((  double (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, double, const RuntimeMethod*))SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_gshared)(___dic0, ___key1, ___defaultVal2, method);
}
// TapTap.Common.TapLanguage TapTap.Common.TapLocalizeManager::GetCurrentLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapLocalizeManager_GetCurrentLanguage_m780BDF99D37861FE74D4DF1B232C6C812148FFE9 (const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Items TapTap.Achievement.Localization.AchievementLocalizationItems::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Zhs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Zhs_m14B9D267B4B5C3B1D157009517A5AD49A38EF0C2_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_En()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_En_mF42FD3C2D04886DB8C9B1F4418AD8AD8DCA321E7_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Id_m8724AE2966A3A69A32B823F2B8AD4AA16832A42A_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Ja()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Ja_mC1FB9E07D5ACBA324DE2FA3C2A09DC317911F5CE_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Ko()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Ko_m19509158AFA73031A923C15C7312139100445E81_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Th()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Th_m124628D8C269CCD2A309CFBB6F8B146B726C5E8C_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Zht()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Zht_m36AB9CAD868938A603B3B42E875EC6E3DB72D0CF_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) ;
// T LC.Newtonsoft.Json.JsonConvert::DeserializeObject<TapTap.Achievement.Localization.AchievementLocalizationItems>(System.String,LC.Newtonsoft.Json.JsonSerializerSettings)
inline AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* JsonConvert_DeserializeObject_TisAchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64_m0B8899B65B38338EAE3C7F67B59C37859AC1BCAD (String_t* ___value0, JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* ___settings1, const RuntimeMethod* method)
{
	return ((  AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* (*) (String_t*, JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m55A67386A47654A8F6A503C025A5343C9F199A56_gshared)(___value0, ___settings1, method);
}
// System.String LC.Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,LC.Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mC503FACB0F97FC40E7D9DD434FD5E9BF135A910F (RuntimeObject* ___value0, JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* ___settings1, const RuntimeMethod* method) ;
// System.Void LC.Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_m05A2564AE73838B3F8763103AB1B829A4752A2FD (JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* __this, const RuntimeMethod* method) ;
// System.Void LC.Newtonsoft.Json.JsonSerializerSettings::set_MetadataPropertyHandling(LC.Newtonsoft.Json.MetadataPropertyHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_MetadataPropertyHandling_m17BE1878D38EFA8DAB0389046DEB2DE2BB42412D (JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void LC.Newtonsoft.Json.JsonSerializerSettings::set_DateParseHandling(LC.Newtonsoft.Json.DateParseHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_DateParseHandling_mED7DA989CF2F624BE020746BD75F968FD89D3C04 (JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<LC.Newtonsoft.Json.JsonConverter> LC.Newtonsoft.Json.JsonSerializerSettings::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_m5F9D9E50B94117E4CF9B6549A1EAC7EABDF0BE4C_inline (JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* __this, const RuntimeMethod* method) ;
// System.Void LC.Newtonsoft.Json.Converters.IsoDateTimeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsoDateTimeConverter__ctor_m6D793AE30B79561A3E1F7C12967A035FE0CB781A (IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6* __this, const RuntimeMethod* method) ;
// System.Void LC.Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeStyles(System.Globalization.DateTimeStyles)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IsoDateTimeConverter_set_DateTimeStyles_mAA655D43E1135E390E3039D9226FA2D66F362E23_inline (IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6* __this, int32_t ___value0, const RuntimeMethod* method) ;
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
// System.Void TapTap.Achievement.TapAchievementConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievementConstants__cctor_mDB24D7D0AFC6AAF16575E42E07AE30AE70E7E6EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE27F893D0D42DC4B7DF49CA30C277D80D98A72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral837C9A8EDCC0809F5E6215B1737BFCA63D56E2DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EE381A7D128DE96AC847CB6C109E5D8EE7F80E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string TapAchievementService = "TDSAchievementService";
		((TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var))->___TapAchievementService_0 = _stringLiteral0EE27F893D0D42DC4B7DF49CA30C277D80D98A72;
		Il2CppCodeGenWriteBarrier((void**)(&((TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var))->___TapAchievementService_0), (void*)_stringLiteral0EE27F893D0D42DC4B7DF49CA30C277D80D98A72);
		// public static readonly string TapAchievementClz = "com.tds.achievement.wrapper.TDSAchievementService";
		((TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var))->___TapAchievementClz_1 = _stringLiteral837C9A8EDCC0809F5E6215B1737BFCA63D56E2DA;
		Il2CppCodeGenWriteBarrier((void**)(&((TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var))->___TapAchievementClz_1), (void*)_stringLiteral837C9A8EDCC0809F5E6215B1737BFCA63D56E2DA);
		// public static readonly string TapAchievementImpl = "com.tds.achievement.wrapper.TDSAchievementServiceImpl";
		((TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var))->___TapAchievementImpl_2 = _stringLiteral9EE381A7D128DE96AC847CB6C109E5D8EE7F80E0;
		Il2CppCodeGenWriteBarrier((void**)(&((TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementConstants_t1F0D649D18479A33A6232378EA31B64FBFF916F4_il2cpp_TypeInfo_var))->___TapAchievementImpl_2), (void*)_stringLiteral9EE381A7D128DE96AC847CB6C109E5D8EE7F80E0);
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
// System.Void TapTap.Achievement.TapAchievement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement__cctor_m9F68FC0D12AAC8ADC1764D03B65A11F330460780 (const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m8CD30EFEC0780525560B04B750FD587556B5C749_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_1_mB90CE6DED885BB2947D00D532B3D789045BE3F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3C_cctorU3Eb__2_mB11F9F182A7A007484C1EC7FC820BD14D902777D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600F5DEAFE1301801976FD6C624BABBF5196CB9D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* L_0 = (U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_mE560E0C2AE090188C4500854FAD3AFDE914C9F17(L_0, NULL);
		V_0 = L_0;
		// Type interfaceType = typeof(ITapAchievement);
		U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		L_1->___interfaceType_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___interfaceType_0), (void*)L_3);
		// Type platformDBType = AppDomain.CurrentDomain.GetAssemblies()
		//     .Where(assembly => assembly.GetName().FullName.StartsWith("TapTap.Achievement"))
		//     .SelectMany(assembly => assembly.GetTypes())
		//     .SingleOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_4;
		L_4 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_4);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_5;
		L_5 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var);
		U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* L_6 = ((U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* L_7 = (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*)il2cpp_codegen_object_new(Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m0289D3B3C9D7A664C27794590540D4EA6C813CDF(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m8CD30EFEC0780525560B04B750FD587556B5C749_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA((RuntimeObject*)L_5, L_7, Enumerable_Where_TisAssembly_t_mA37C0A033F9CB6D2AB40E4F66BC1538F800365EA_RuntimeMethod_var);
		U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* L_9 = ((U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_10 = (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*)il2cpp_codegen_object_new(Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mE7E2BD541D8288445CB79C54B1F9805C5D66D5BB(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_1_mB90CE6DED885BB2947D00D532B3D789045BE3F0D_RuntimeMethod_var), NULL);
		RuntimeObject* L_11;
		L_11 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4(L_8, L_10, Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* L_12 = V_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_13 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3C_cctorU3Eb__2_mB11F9F182A7A007484C1EC7FC820BD14D902777D_RuntimeMethod_var), NULL);
		Type_t* L_14;
		L_14 = Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56(L_11, L_13, Enumerable_SingleOrDefault_TisType_t_m93E9E9D59DDEA9C97AB1CBA865C3EBD188DA2F56_RuntimeMethod_var);
		V_1 = L_14;
		// if (platformDBType != null)
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, (Type_t*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		// platformWrapper = Activator.CreateInstance(platformDBType) as ITapAchievement;
		Type_t* L_17 = V_1;
		RuntimeObject* L_18;
		L_18 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_17, NULL);
		((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var)));
		return;
	}

IL_0076:
	{
		// TapLogger.Error("No class implements ITapAchievement.");
		TapLogger_Error_mD50F649AC414CC4F7E4FD98DF2DD66BD61860530(_stringLiteral600F5DEAFE1301801976FD6C624BABBF5196CB9D, NULL);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::Init(TapTap.Common.TapConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_Init_m9FB64329C71E5395DCBAD56F0F4755433D58E864 (TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.Init(config);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* L_1 = ___config0;
		NullCheck(L_0);
		InterfaceActionInvoker1< TapConfig_t78913A18B0F0A05AF4009A8CE6ACB9F77A9716F0* >::Invoke(0 /* System.Void TapTap.Achievement.ITapAchievement::Init(TapTap.Common.TapConfig) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::RegisterCallback(TapTap.Achievement.IAchievementCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_RegisterCallback_m8D635A5511CFBD3B4D0809EF0A6A0C4A87E2A1AC (RuntimeObject* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.RegisterCallback(callback);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		RuntimeObject* L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void TapTap.Achievement.ITapAchievement::RegisterCallback(TapTap.Achievement.IAchievementCallback) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::InitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_InitData_m11D5D295DA623A38933D383B19EA5B35631FE5B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.InitData();
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void TapTap.Achievement.ITapAchievement::InitData() */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::FetchAllAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_FetchAllAchievementList_m25D9F45808852965D8311541F8478C548D08947C (Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.FetchAllAchievementList(action);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* L_1 = ___action0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* >::Invoke(7 /* System.Void TapTap.Achievement.ITapAchievement::FetchAllAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::GetLocalAllAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_GetLocalAllAchievementList_m3F1C7B6D367404FCB8F7659E6B73519F7E87E869 (Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.GetLocalAllAchievementList(action);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* L_1 = ___action0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* >::Invoke(8 /* System.Void TapTap.Achievement.ITapAchievement::GetLocalAllAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::GetLocalUserAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_GetLocalUserAchievementList_m7382EB5783E7EF90286D663CDAACB3C7B6AE0838 (Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.GetLocalUserAchievementList(action);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* L_1 = ___action0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* >::Invoke(9 /* System.Void TapTap.Achievement.ITapAchievement::GetLocalUserAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::FetchUserAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_FetchUserAchievementList_mF4767D31E6B4F9F37856089FB23F3266151BBEE7 (Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.FetchUserAchievementList(action);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* L_1 = ___action0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_2_tF0586EE37A48DA86440810596164E92C3CB06DE9* >::Invoke(10 /* System.Void TapTap.Achievement.ITapAchievement::FetchUserAchievementList(System.Action`2<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>,TapTap.Common.TapError>) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.TapAchievement::FetchAllAchievementList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* TapAchievement_FetchAllAchievementList_m4132BAA999A60248F320F8DEA55B7F23CB304D22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return platformWrapper.FetchAllAchievementList();
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		NullCheck(L_0);
		Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* L_1;
		L_1 = InterfaceFuncInvoker0< Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* >::Invoke(3 /* System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.ITapAchievement::FetchAllAchievementList() */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.TapAchievement::GetLocalUserAchievementList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* TapAchievement_GetLocalUserAchievementList_m4896FDDC09B3698201BE930117F8F30ADC110B65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return platformWrapper.GetLocalUserAchievementList();
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		NullCheck(L_0);
		Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* L_1;
		L_1 = InterfaceFuncInvoker0< Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* >::Invoke(5 /* System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.ITapAchievement::GetLocalUserAchievementList() */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.TapAchievement::GetLocalAllAchievementList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* TapAchievement_GetLocalAllAchievementList_mA8403C2244618560A396ACA7FD497C80B6380E53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return platformWrapper.GetLocalAllAchievementList();
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		NullCheck(L_0);
		Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* L_1;
		L_1 = InterfaceFuncInvoker0< Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* >::Invoke(4 /* System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.ITapAchievement::GetLocalAllAchievementList() */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.TapAchievement::FetchUserAchievementList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* TapAchievement_FetchUserAchievementList_mA295D7F6EC8D7BC17A998267D4BA5920DE40FDD2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return platformWrapper.FetchUserAchievementList();
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		NullCheck(L_0);
		Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* L_1;
		L_1 = InterfaceFuncInvoker0< Task_1_tB287900E9B3B2C0F5BED6A48692EA67E8CC41624* >::Invoke(6 /* System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<TapTap.Achievement.TapAchievementBean>> TapTap.Achievement.ITapAchievement::FetchUserAchievementList() */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void TapTap.Achievement.TapAchievement::Reach(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_Reach_m6A8BDC2AE129474153DD50AFD59467D9E9E132D6 (String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.Reach(id);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(11 /* System.Void TapTap.Achievement.ITapAchievement::Reach(System.String) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::GrowSteps(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_GrowSteps_mA8F93CCD244FFA0368585E5CDDD8D519E17509DF (String_t* ___id0, int32_t ___step1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.GrowSteps(id, step);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		String_t* L_1 = ___id0;
		int32_t L_2 = ___step1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(12 /* System.Void TapTap.Achievement.ITapAchievement::GrowSteps(System.String,System.Int32) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::MakeSteps(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_MakeSteps_m4AFA09DC6DEF7E890F22116760CDACFFD7783887 (String_t* ___id0, int32_t ___step1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.MakeSteps(id, step);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		String_t* L_1 = ___id0;
		int32_t L_2 = ___step1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(13 /* System.Void TapTap.Achievement.ITapAchievement::MakeSteps(System.String,System.Int32) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::ShowAchievementPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_ShowAchievementPage_m1209BE02117F5BA7465A87AE4CF346EB87731E9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.ShowAchievementPage();
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(14 /* System.Void TapTap.Achievement.ITapAchievement::ShowAchievementPage() */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::SetShowToast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_SetShowToast_mE55B1FD4C9F249F706032154DA7BFBFC4013E4C7 (bool ___showToast0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.SetShowToast(showToast);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		bool L_1 = ___showToast0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(15 /* System.Void TapTap.Achievement.ITapAchievement::SetShowToast(System.Boolean) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::SetApplicationName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_SetApplicationName_m124981C8D39C3713D11DABD3BCD186A053241F6C (String_t* ___applicationName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.SetApplicationName(applicationName);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		String_t* L_1 = ___applicationName0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void TapTap.Achievement.ITapAchievement::SetApplicationName(System.String) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::SetApplicationIcon(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement_SetApplicationIcon_mB5FE598C10AB2B608B2E8931FB33E82A539C769C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___applicationIcon0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformWrapper.SetApplicationIcon(applicationIcon);
		il2cpp_codegen_runtime_class_init_inline(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF_il2cpp_TypeInfo_var))->___platformWrapper_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___applicationIcon0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* >::Invoke(17 /* System.Void TapTap.Achievement.ITapAchievement::SetApplicationIcon(UnityEngine.Texture2D) */, ITapAchievement_t5DE11821C8687695A79D2F89990BF51114773A25_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievement__ctor_mD9FC5FCAD11E521CC0D7D3FD06C0A2179352FC20 (TapAchievement_t65D612FEA7C18EED5C30A7B16B4FAD9FE03AB4DF* __this, const RuntimeMethod* method) 
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
// System.Void TapTap.Achievement.TapAchievement/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE560E0C2AE090188C4500854FAD3AFDE914C9F17 (U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TapTap.Achievement.TapAchievement/<>c__DisplayClass7_0::<.cctor>b__2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3C_cctorU3Eb__2_mB11F9F182A7A007484C1EC7FC820BD14D902777D (U3CU3Ec__DisplayClass7_0_t7D8BDC42AC0BDCFBFBE4EAF94F73344B64C989B8* __this, Type_t* ___clazz0, const RuntimeMethod* method) 
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
// System.Void TapTap.Achievement.TapAchievement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9A25E3DD4EDB6494F753AD31C5289295162C5199 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* L_0 = (U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699*)il2cpp_codegen_object_new(U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m97AEFC2BA00CEB9B334D08CD7D2F60262DDBF196(L_0, NULL);
		((U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97AEFC2BA00CEB9B334D08CD7D2F60262DDBF196 (U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean TapTap.Achievement.TapAchievement/<>c::<.cctor>b__7_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__7_0_m8CD30EFEC0780525560B04B750FD587556B5C749 (U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0BE14DC8A0FE1F26D0BA5DBCD1E834BDBD90308);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(assembly => assembly.GetName().FullName.StartsWith("TapTap.Achievement"))
		Assembly_t* L_0 = ___assembly0;
		NullCheck(L_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_1;
		L_1 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(19 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AssemblyName_get_FullName_m668C2F147964E6C40B4FB23CE7655EFFE447EF22(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteralA0BE14DC8A0FE1F26D0BA5DBCD1E834BDBD90308, NULL);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> TapTap.Achievement.TapAchievement/<>c::<.cctor>b__7_1(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__7_1_mB90CE6DED885BB2947D00D532B3D789045BE3F0D (U3CU3Ec_t5E05DFB4C263E5B0636212DF524FDD7DAD08F699* __this, Assembly_t* ___assembly0, const RuntimeMethod* method) 
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
// System.Boolean TapTap.Achievement.TapAchievementBean::IsCanShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_IsCanShow_m9F9340C2F5A9123C478D0FB89F08BA79049AE0DF (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	{
		// return IsFullReached() || IsVisible();
		bool L_0;
		L_0 = TapAchievementBean_IsFullReached_m6B38FDC8C81213FA6E62141032C13299EECD54E0(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = TapAchievementBean_IsVisible_m511DE12332731862800ADE85CB8F3705391D8AD2(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::IsFullReached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_IsFullReached_m6B38FDC8C81213FA6E62141032C13299EECD54E0 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	{
		// return fullReached || reachedStep == step;
		bool L_0 = __this->___fullReached_13;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->___reachedStep_14;
		int32_t L_2 = __this->___step_10;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_IsVisible_m511DE12332731862800ADE85CB8F3705391D8AD2 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return visible == VisibleFalse;
		int32_t L_0 = __this->___visible_6;
		il2cpp_codegen_runtime_class_init_inline(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___VisibleFalse_2;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::IsFullAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_IsFullAchievement_mF9EDA86A0F9AC3EB0C690ECEDC8A2B605962EB0E (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	{
		// return type == 99;
		int32_t L_0 = __this->___type_17;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)99)))? 1 : 0);
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::NeeShowProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_NeeShowProgress_m96831FA8FBE0ACED26F46003542C1DF4D4D4541D (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	{
		// return IsVisible() &&
		//        !IsFullReached() && step > 1 && reachedStep > 0;
		bool L_0;
		L_0 = TapAchievementBean_IsVisible_m511DE12332731862800ADE85CB8F3705391D8AD2(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		bool L_1;
		L_1 = TapAchievementBean_IsFullReached_m6B38FDC8C81213FA6E62141032C13299EECD54E0(__this, NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = __this->___step_10;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___reachedStep_14;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.String TapTap.Achievement.TapAchievementBean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TapAchievementBean_ToString_mEE9B70DAC14F88866C9C61293F57089FCC8B8266 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B5DDE20234200362361A06C390C2313989EF13F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AF417162EFFDBF61A667C985112766414C594DE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	double G_B5_0 = 0.0;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_3 = NULL;
	String_t* G_B8_4 = NULL;
	{
		// if (stats == null)
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_0 = __this->___stats_18;
		if (L_0)
		{
			goto IL_00d7;
		}
	}
	{
		// return string.Format(
		//     $"id: {id}\t displayId: {displayId}\t visible: {visible}\t title: {title}\t subTitle: {subTitle}\t achieveIcon: {achieveIcon}\t type: {type}\t step: {step}\t reachedStep: {reachedStep}\t fullReached: {fullReached}\t reachedTime: {reachedTime}\t reachedTime: {reachedTime}\t showOrder: {showOrder}\t isChanged: {isChanged}");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = __this->___id_4;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___displayId_5;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = __this->___visible_6;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		String_t* L_11 = __this->___title_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = __this->___subTitle_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		String_t* L_15 = __this->___achieveIcon_9;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = __this->___type_17;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21 = __this->___step_10;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		int32_t L_25 = __this->___reachedStep_14;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		bool L_29 = __this->___fullReached_13;
		bool L_30 = L_29;
		RuntimeObject* L_31 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		int64_t L_33 = __this->___reachedTime_15;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		int64_t L_37 = __this->___reachedTime_15;
		int64_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_36;
		int32_t L_41 = __this->___showOrder_12;
		int32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_40;
		bool L_45 = __this->___isChanged_16;
		bool L_46 = L_45;
		RuntimeObject* L_47 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_47);
		String_t* L_48;
		L_48 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral7AF417162EFFDBF61A667C985112766414C594DE, L_44, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49;
		L_49 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_50;
		L_50 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_48, L_49, NULL);
		return L_50;
	}

IL_00d7:
	{
		// return string.Format(
		//     $"id: {id}\t displayId: {displayId}\t visible: {visible}\t title: {title}\t subTitle: {subTitle}\t achieveIcon: {achieveIcon}\t type: {type}\t rarity: {(stats == null ? -1 : stats.rarity)}\t level: {(stats == null ? -1 : stats.level)}\t step: {step}\t reachedStep: {reachedStep}\t fullReached: {fullReached}\t reachedTime: {reachedTime}\t reachedTime: {reachedTime}\t showOrder: {showOrder}\t isChanged: {isChanged}");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_51;
		String_t* L_53 = __this->___id_4;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_53);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_52;
		String_t* L_55 = __this->___displayId_5;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_55);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_54;
		int32_t L_57 = __this->___visible_6;
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_56;
		String_t* L_61 = __this->___title_7;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_61);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_60;
		String_t* L_63 = __this->___subTitle_8;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_62;
		String_t* L_65 = __this->___achieveIcon_9;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_65);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_64;
		int32_t L_67 = __this->___type_17;
		int32_t L_68 = L_67;
		RuntimeObject* L_69 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_69);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = L_66;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_71 = __this->___stats_18;
		G_B3_0 = 7;
		G_B3_1 = L_70;
		G_B3_2 = L_70;
		G_B3_3 = _stringLiteral1B5DDE20234200362361A06C390C2313989EF13F;
		if (!L_71)
		{
			G_B4_0 = 7;
			G_B4_1 = L_70;
			G_B4_2 = L_70;
			G_B4_3 = _stringLiteral1B5DDE20234200362361A06C390C2313989EF13F;
			goto IL_0143;
		}
	}
	{
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_72 = __this->___stats_18;
		NullCheck(L_72);
		double L_73 = L_72->___rarity_1;
		G_B5_0 = L_73;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_014c;
	}

IL_0143:
	{
		G_B5_0 = (-1.0);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_014c:
	{
		double L_74 = G_B5_0;
		RuntimeObject* L_75 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_74);
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, L_75);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (RuntimeObject*)L_75);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76 = G_B5_3;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_77 = __this->___stats_18;
		G_B6_0 = 8;
		G_B6_1 = L_76;
		G_B6_2 = L_76;
		G_B6_3 = G_B5_4;
		if (!L_77)
		{
			G_B7_0 = 8;
			G_B7_1 = L_76;
			G_B7_2 = L_76;
			G_B7_3 = G_B5_4;
			goto IL_0169;
		}
	}
	{
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_78 = __this->___stats_18;
		NullCheck(L_78);
		int32_t L_79 = L_78->___level_0;
		G_B8_0 = L_79;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_016a;
	}

IL_0169:
	{
		G_B8_0 = (-1);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_016a:
	{
		int32_t L_80 = G_B8_0;
		RuntimeObject* L_81 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_80);
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, L_81);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (RuntimeObject*)L_81);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = G_B8_3;
		int32_t L_83 = __this->___step_10;
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_85);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_85);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = L_82;
		int32_t L_87 = __this->___reachedStep_14;
		int32_t L_88 = L_87;
		RuntimeObject* L_89 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_88);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_89);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_89);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_90 = L_86;
		bool L_91 = __this->___fullReached_13;
		bool L_92 = L_91;
		RuntimeObject* L_93 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_92);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_93);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_93);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_94 = L_90;
		int64_t L_95 = __this->___reachedTime_15;
		int64_t L_96 = L_95;
		RuntimeObject* L_97 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_96);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_97);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_97);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = L_94;
		int64_t L_99 = __this->___reachedTime_15;
		int64_t L_100 = L_99;
		RuntimeObject* L_101 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_100);
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_101);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_101);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_102 = L_98;
		int32_t L_103 = __this->___showOrder_12;
		int32_t L_104 = L_103;
		RuntimeObject* L_105 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_104);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_105);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_105);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = L_102;
		bool L_107 = __this->___isChanged_16;
		bool L_108 = L_107;
		RuntimeObject* L_109 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_108);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_109);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject*)L_109);
		String_t* L_110;
		L_110 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B8_4, L_106, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_111;
		L_111 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_112;
		L_112 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_110, L_111, NULL);
		return L_112;
	}
}
// System.Void TapTap.Achievement.TapAchievementBean::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievementBean__ctor_mD332408562A8E96F94B3D65851215A968117DA81 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168D86481B1FEE185AD9C8BE391F427AAAD308F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D4F8042A7CE9BDB9C4C18F770F18C6D37C96EBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral588261AEE7AB6B23E5639A3DB820CCDE27D24C3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF2388B7214269EE9F8674FDACB4730A90F8D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA09C7BE5A3747A7C5ECC9D38D5C7AF9BBBFFDDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3658B3BDC315676453B435779897978D61E3489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D0B92641A9EF5B4508EF790C28AC35049CDF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE618A20A4146A4A77AF573EE2AB9BC24AC5E6699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	{
		// public int visible = VisibleFalse;
		il2cpp_codegen_runtime_class_init_inline(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___VisibleFalse_2;
		__this->___visible_6 = L_0;
		// public TapAchievementBean(string json)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var dic = Json.Deserialize(json) as Dictionary<string, object>;
		String_t* L_1 = ___json0;
		RuntimeObject* L_2;
		L_2 = Json_Deserialize_mA576F5E49872FF8A362CB66226DA1155E806FA2B(L_1, NULL);
		V_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_2, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		// id = SafeDictionary.GetValue<string>(dic, "id");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = V_0;
		String_t* L_4;
		L_4 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_3, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___id_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_4), (void*)L_4);
		// displayId = SafeDictionary.GetValue<string>(dic, "displayId");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = V_0;
		String_t* L_6;
		L_6 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_5, _stringLiteralA3658B3BDC315676453B435779897978D61E3489, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___displayId_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayId_5), (void*)L_6);
		// visible = SafeDictionary.GetValue<int>(dic, "visible");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		int32_t L_8;
		L_8 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_7, _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___visible_6 = L_8;
		// title = SafeDictionary.GetValue<string>(dic, "title");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = V_0;
		String_t* L_10;
		L_10 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_9, _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___title_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_7), (void*)L_10);
		// subTitle = SafeDictionary.GetValue<string>(dic, "subTitle");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = V_0;
		String_t* L_12;
		L_12 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_11, _stringLiteral588261AEE7AB6B23E5639A3DB820CCDE27D24C3F, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___subTitle_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subTitle_8), (void*)L_12);
		// achieveIcon = SafeDictionary.GetValue<string>(dic, "achieveIcon");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14;
		L_14 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_13, _stringLiteralA09C7BE5A3747A7C5ECC9D38D5C7AF9BBBFFDDD2, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___achieveIcon_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___achieveIcon_9), (void*)L_14);
		// step = SafeDictionary.GetValue<int>(dic, "step");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = V_0;
		int32_t L_16;
		L_16 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_15, _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___step_10 = L_16;
		// reachedStep = SafeDictionary.GetValue<int>(dic, "reachedStep");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = V_0;
		int32_t L_18;
		L_18 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_17, _stringLiteral8EF2388B7214269EE9F8674FDACB4730A90F8D38, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___reachedStep_14 = L_18;
		// fullReached = SafeDictionary.GetValue<bool>(dic, "fullReached");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = V_0;
		bool L_20;
		L_20 = SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1(L_19, _stringLiteralE618A20A4146A4A77AF573EE2AB9BC24AC5E6699, (bool)0, SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		__this->___fullReached_13 = L_20;
		// reachedTime = SafeDictionary.GetValue<long>(dic, "reachedTime");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = V_0;
		int64_t L_22;
		L_22 = SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163(L_21, _stringLiteral4D4F8042A7CE9BDB9C4C18F770F18C6D37C96EBC, ((int64_t)0), SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		__this->___reachedTime_15 = L_22;
		// createTime = SafeDictionary.GetValue<long>(dic, "createTime");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23 = V_0;
		int64_t L_24;
		L_24 = SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163(L_23, _stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4, ((int64_t)0), SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		__this->___createTime_11 = L_24;
		// showOrder = SafeDictionary.GetValue<int>(dic, "showOrder");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = V_0;
		int32_t L_26;
		L_26 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_25, _stringLiteral168D86481B1FEE185AD9C8BE391F427AAAD308F8, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___showOrder_12 = L_26;
		// isChanged = SafeDictionary.GetValue<bool>(dic, "isChanged");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = V_0;
		bool L_28;
		L_28 = SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1(L_27, _stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7, (bool)0, SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		__this->___isChanged_16 = L_28;
		// type = SafeDictionary.GetValue<int>(dic, "type");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_29 = V_0;
		int32_t L_30;
		L_30 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_29, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___type_17 = L_30;
		// if (Platform.IsIOS())
		bool L_31;
		L_31 = Platform_IsIOS_m21A7C2007D6392091E88A7089322532332D2DCF4(NULL);
		if (!L_31)
		{
			goto IL_0155;
		}
	}
	{
		// Debug.Log($"AchievementStats:{SafeDictionary.GetValue<string>(dic, "stats")}");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = V_0;
		String_t* L_33;
		L_33 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_32, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA8D0B92641A9EF5B4508EF790C28AC35049CDF7C, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_34, NULL);
		// stats = new AchievementStats(SafeDictionary.GetValue<string>(dic, "stats"));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35 = V_0;
		String_t* L_36;
		L_36 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_35, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_37 = (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78*)il2cpp_codegen_object_new(AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		AchievementStats__ctor_m79265E6D17D0CFB0D5DB3A5949DCA09B3E0ED034(L_37, L_36, NULL);
		__this->___stats_18 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stats_18), (void*)L_37);
		return;
	}

IL_0155:
	{
		// else if (Platform.IsAndroid())
		bool L_38;
		L_38 = Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED(NULL);
		if (!L_38)
		{
			goto IL_0178;
		}
	}
	{
		// if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "stats") is Dictionary<string, object>
		//     statsDic)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_39 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_40;
		L_40 = SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286(L_39, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL, SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286_RuntimeMethod_var);
		V_1 = L_40;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_41 = V_1;
		if (!L_41)
		{
			goto IL_0178;
		}
	}
	{
		// stats = new AchievementStats(statsDic);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_42 = V_1;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_43 = (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78*)il2cpp_codegen_object_new(AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		AchievementStats__ctor_m147810F060C21DEEA488DB8E50F1C222816E1CF3(L_43, L_42, NULL);
		__this->___stats_18 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stats_18), (void*)L_43);
	}

IL_0178:
	{
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievementBean::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievementBean__ctor_m2EA1EAEA16823CD731CB82BF6A08E2AFC1541461 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168D86481B1FEE185AD9C8BE391F427AAAD308F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D4F8042A7CE9BDB9C4C18F770F18C6D37C96EBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral588261AEE7AB6B23E5639A3DB820CCDE27D24C3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF2388B7214269EE9F8674FDACB4730A90F8D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA09C7BE5A3747A7C5ECC9D38D5C7AF9BBBFFDDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3658B3BDC315676453B435779897978D61E3489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D0B92641A9EF5B4508EF790C28AC35049CDF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE618A20A4146A4A77AF573EE2AB9BC24AC5E6699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// public int visible = VisibleFalse;
		il2cpp_codegen_runtime_class_init_inline(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___VisibleFalse_2;
		__this->___visible_6 = L_0;
		// public TapAchievementBean(Dictionary<string, object> dic)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// id = SafeDictionary.GetValue<string>(dic, "id");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___dic0;
		String_t* L_2;
		L_2 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_1, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___id_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_4), (void*)L_2);
		// displayId = SafeDictionary.GetValue<string>(dic, "displayId");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ___dic0;
		String_t* L_4;
		L_4 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_3, _stringLiteralA3658B3BDC315676453B435779897978D61E3489, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___displayId_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayId_5), (void*)L_4);
		// visible = SafeDictionary.GetValue<int>(dic, "visible");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___dic0;
		int32_t L_6;
		L_6 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_5, _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___visible_6 = L_6;
		// title = SafeDictionary.GetValue<string>(dic, "title");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ___dic0;
		String_t* L_8;
		L_8 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_7, _stringLiteralC7B4D926EF9532A71B25AEC040A33D52C926425F, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___title_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_7), (void*)L_8);
		// subTitle = SafeDictionary.GetValue<string>(dic, "subTitle");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ___dic0;
		String_t* L_10;
		L_10 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_9, _stringLiteral588261AEE7AB6B23E5639A3DB820CCDE27D24C3F, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___subTitle_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subTitle_8), (void*)L_10);
		// achieveIcon = SafeDictionary.GetValue<string>(dic, "achieveIcon");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___dic0;
		String_t* L_12;
		L_12 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_11, _stringLiteralA09C7BE5A3747A7C5ECC9D38D5C7AF9BBBFFDDD2, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		__this->___achieveIcon_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___achieveIcon_9), (void*)L_12);
		// step = SafeDictionary.GetValue<int>(dic, "step");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = ___dic0;
		int32_t L_14;
		L_14 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_13, _stringLiteralA3624EE238A5278BC2F6CF42F8D45EA11C9C3048, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___step_10 = L_14;
		// createTime = SafeDictionary.GetValue<long>(dic, "createTime");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = ___dic0;
		int64_t L_16;
		L_16 = SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163(L_15, _stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4, ((int64_t)0), SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		__this->___createTime_11 = L_16;
		// showOrder = SafeDictionary.GetValue<int>(dic, "showOrder");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = ___dic0;
		int32_t L_18;
		L_18 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_17, _stringLiteral168D86481B1FEE185AD9C8BE391F427AAAD308F8, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___showOrder_12 = L_18;
		// fullReached = SafeDictionary.GetValue<bool>(dic, "fullReached");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = ___dic0;
		bool L_20;
		L_20 = SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1(L_19, _stringLiteralE618A20A4146A4A77AF573EE2AB9BC24AC5E6699, (bool)0, SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		__this->___fullReached_13 = L_20;
		// reachedStep = SafeDictionary.GetValue<int>(dic, "reachedStep");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = ___dic0;
		int32_t L_22;
		L_22 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_21, _stringLiteral8EF2388B7214269EE9F8674FDACB4730A90F8D38, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___reachedStep_14 = L_22;
		// reachedTime = SafeDictionary.GetValue<long>(dic, "reachedTime");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23 = ___dic0;
		int64_t L_24;
		L_24 = SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163(L_23, _stringLiteral4D4F8042A7CE9BDB9C4C18F770F18C6D37C96EBC, ((int64_t)0), SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		__this->___reachedTime_15 = L_24;
		// isChanged = SafeDictionary.GetValue<bool>(dic, "isChanged");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = ___dic0;
		bool L_26;
		L_26 = SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1(L_25, _stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7, (bool)0, SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		__this->___isChanged_16 = L_26;
		// type = SafeDictionary.GetValue<int>(dic, "type");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_27 = ___dic0;
		int32_t L_28;
		L_28 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_27, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___type_17 = L_28;
		// if (Platform.IsIOS())
		bool L_29;
		L_29 = Platform_IsIOS_m21A7C2007D6392091E88A7089322532332D2DCF4(NULL);
		if (!L_29)
		{
			goto IL_0149;
		}
	}
	{
		// Debug.Log($"AchievementStats:{SafeDictionary.GetValue<string>(dic, "stats")}");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_30 = ___dic0;
		String_t* L_31;
		L_31 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_30, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA8D0B92641A9EF5B4508EF790C28AC35049CDF7C, L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_32, NULL);
		// stats = new AchievementStats(SafeDictionary.GetValue<string>(dic, "stats"));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_33 = ___dic0;
		String_t* L_34;
		L_34 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_33, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_35 = (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78*)il2cpp_codegen_object_new(AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		AchievementStats__ctor_m79265E6D17D0CFB0D5DB3A5949DCA09B3E0ED034(L_35, L_34, NULL);
		__this->___stats_18 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stats_18), (void*)L_35);
		return;
	}

IL_0149:
	{
		// else if (Platform.IsAndroid())
		bool L_36;
		L_36 = Platform_IsAndroid_mC05D88AA65E4212FECFE0AAE41A466D3C9D502ED(NULL);
		if (!L_36)
		{
			goto IL_016c;
		}
	}
	{
		// if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "stats") is Dictionary<string, object>
		//     statsDic)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_37 = ___dic0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_38;
		L_38 = SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286(L_37, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL, SafeDictionary_GetValue_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_mDB635F2CBDD88E879D6ABD1729C950EE1DAE7286_RuntimeMethod_var);
		V_0 = L_38;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_39 = V_0;
		if (!L_39)
		{
			goto IL_016c;
		}
	}
	{
		// stats = new AchievementStats(statsDic);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_40 = V_0;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_41 = (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78*)il2cpp_codegen_object_new(AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		AchievementStats__ctor_m147810F060C21DEEA488DB8E50F1C222816E1CF3(L_41, L_40, NULL);
		__this->___stats_18 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stats_18), (void*)L_41);
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void TapTap.Achievement.TapAchievementBean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievementBean__ctor_mD469F54E3F35D158E0B9C3B316460BC82AD92775 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int visible = VisibleFalse;
		il2cpp_codegen_runtime_class_init_inline(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___VisibleFalse_2;
		__this->___visible_6 = L_0;
		// public TapAchievementBean() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// TapTap.Achievement.TapAchievementBean TapTap.Achievement.TapAchievementBean::Parse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* TapAchievementBean_Parse_mAC394B46082B7E956FDA38903DB7C581146324BA (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral168DD7A5BDD6D99BFCCB6916AEB1FA5C44308B71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F49A2AFFB8FE6B8BC641C901E030D08988147E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22EDABE4D11AE4E13E5BF5F0BE6A3B4D6773C54B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2749F61B53D3AE421C0C7D3FA880F77800C26C72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EB0E0B91E9789736507F39E8853617154087BBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6499F5163241D64F9FF2F07C568FB0B9C983BB2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9038390D52037D6A65B58EAC92FABE9504F4EB48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96609EF44E41668A029AA2934BE1BACAA254ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A01FA986A388EB8F10E26E545140729B38AB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF02ADBD46B2C369D8FC6999A8F3EA833840056);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD417B8B2EFAED56E64F19E2CD846FDDFDB480B50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE00648E1F5CB8CAABB51466C114E235F6DABD9D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE00A9F41329C7241DF7C9AA7F7D305B2130AF8B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85D820011EAAA0EC9160A64905C073CD7A3F615);
		s_Il2CppMethodInitialized = true;
	}
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_4 = NULL;
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* G_B2_0 = NULL;
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* G_B2_1 = NULL;
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* G_B1_0 = NULL;
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* G_B3_1 = NULL;
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* G_B3_2 = NULL;
	{
		// TapAchievementBean achievement = new TapAchievementBean {
		//     id = SafeDictionary.GetValue<string>(dic, "achievement_id"),
		//     displayId = SafeDictionary.GetValue<string>(dic, "achievement_open_id"),
		//     visible = SafeDictionary.GetValue<int>(dic, "is_hide"),
		//     step = SafeDictionary.GetValue<int>(dic, "count_step"),
		//     //"?????1-?????99-????", ????? SafeDictionary ???? defaultValue,?????? 0 -> 1
		//     type = SafeDictionary.GetValue<int>(dic, "achievement_type") == 0 ? 1 : SafeDictionary.GetValue<int>(dic, "achievement_type"),
		//     showOrder = SafeDictionary.GetValue<int>(dic, "show_order"),
		//     createTime = SafeDictionary.GetValue<long>(dic, "createTime"),
		//     fullReached = SafeDictionary.GetValue<bool>(dic, "full_completed"),
		//     reachedStep = SafeDictionary.GetValue<int>(dic, "completed_step"),
		//     reachedTime = SafeDictionary.GetValue<long>(dic, "complete_time"),
		//     isChanged = SafeDictionary.GetValue<bool>(dic, "isChanged")
		// };
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_0 = (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD*)il2cpp_codegen_object_new(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TapAchievementBean__ctor_mD469F54E3F35D158E0B9C3B316460BC82AD92775(L_0, NULL);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_1 = L_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___dic0;
		String_t* L_3;
		L_3 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_2, _stringLiteral9038390D52037D6A65B58EAC92FABE9504F4EB48, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___id_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___id_4), (void*)L_3);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_4 = L_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___dic0;
		String_t* L_6;
		L_6 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_5, _stringLiteral168DD7A5BDD6D99BFCCB6916AEB1FA5C44308B71, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___displayId_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___displayId_5), (void*)L_6);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_7 = L_4;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ___dic0;
		int32_t L_9;
		L_9 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_8, _stringLiteral6499F5163241D64F9FF2F07C568FB0B9C983BB2D, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___visible_6 = L_9;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_10 = L_7;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___dic0;
		int32_t L_12;
		L_12 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_11, _stringLiteralCDF02ADBD46B2C369D8FC6999A8F3EA833840056, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___step_10 = L_12;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_13 = L_10;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = ___dic0;
		int32_t L_15;
		L_15 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_14, _stringLiteral22EDABE4D11AE4E13E5BF5F0BE6A3B4D6773C54B, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		G_B1_0 = L_13;
		G_B1_1 = L_13;
		if (!L_15)
		{
			G_B2_0 = L_13;
			G_B2_1 = L_13;
			goto IL_006a;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = ___dic0;
		int32_t L_17;
		L_17 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_16, _stringLiteral22EDABE4D11AE4E13E5BF5F0BE6A3B4D6773C54B, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		G_B3_0 = L_17;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_006b;
	}

IL_006a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_006b:
	{
		NullCheck(G_B3_1);
		G_B3_1->___type_17 = G_B3_0;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_18 = G_B3_2;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = ___dic0;
		int32_t L_20;
		L_20 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_19, _stringLiteralB9A01FA986A388EB8F10E26E545140729B38AB52, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		NullCheck(L_18);
		L_18->___showOrder_12 = L_20;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_21 = L_18;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22 = ___dic0;
		int64_t L_23;
		L_23 = SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163(L_22, _stringLiteralD8B5F50C6A32FAEDB79CA45865236140209624C4, ((int64_t)0), SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		NullCheck(L_21);
		L_21->___createTime_11 = L_23;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_24 = L_21;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_25 = ___dic0;
		bool L_26;
		L_26 = SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1(L_25, _stringLiteral5EB0E0B91E9789736507F39E8853617154087BBC, (bool)0, SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		NullCheck(L_24);
		L_24->___fullReached_13 = L_26;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_27 = L_24;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28 = ___dic0;
		int32_t L_29;
		L_29 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_28, _stringLiteral2749F61B53D3AE421C0C7D3FA880F77800C26C72, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		NullCheck(L_27);
		L_27->___reachedStep_14 = L_29;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_30 = L_27;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = ___dic0;
		int64_t L_32;
		L_32 = SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163(L_31, _stringLiteral96609EF44E41668A029AA2934BE1BACAA254ACCC, ((int64_t)0), SafeDictionary_GetValue_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA0DF7A21EF74936EFF592D831BEF24F762EF0163_RuntimeMethod_var);
		NullCheck(L_30);
		L_30->___reachedTime_15 = L_32;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_33 = L_30;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_34 = ___dic0;
		bool L_35;
		L_35 = SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1(L_34, _stringLiteralC99E5C26DF70A1DFD3DB78DB2BEE1D201560BAA7, (bool)0, SafeDictionary_GetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7679885FA7E54B4E04D0EB588D6B2D26D19A05A1_RuntimeMethod_var);
		NullCheck(L_33);
		L_33->___isChanged_16 = L_35;
		V_0 = L_33;
		// if (dic.TryGetValue("achievement_config_out_dto", out object dtoObj) &&
		//         dtoObj is Dictionary<string, object> dto) {
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_36 = ___dic0;
		NullCheck(L_36);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_36, _stringLiteral1F49A2AFFB8FE6B8BC641C901E030D08988147E1, (&V_1), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_012e;
		}
	}
	{
		RuntimeObject* L_38 = V_1;
		V_2 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_38, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_39 = V_2;
		if (!L_39)
		{
			goto IL_012e;
		}
	}
	{
		// achievement.title = SafeDictionary.GetValue<string>(dto, "achievement_title");
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_40 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_41 = V_2;
		String_t* L_42;
		L_42 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_41, _stringLiteralE00648E1F5CB8CAABB51466C114E235F6DABD9D8, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		NullCheck(L_40);
		L_40->___title_7 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___title_7), (void*)L_42);
		// achievement.subTitle = SafeDictionary.GetValue<string>(dto, "achievement_sub_title");
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_43 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_44 = V_2;
		String_t* L_45;
		L_45 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_44, _stringLiteralF85D820011EAAA0EC9160A64905C073CD7A3F615, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		NullCheck(L_43);
		L_43->___subTitle_8 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___subTitle_8), (void*)L_45);
		// achievement.achieveIcon = SafeDictionary.GetValue<string>(dto, "achievement_icon");
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_46 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_2;
		String_t* L_48;
		L_48 = SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483(L_47, _stringLiteralE00A9F41329C7241DF7C9AA7F7D305B2130AF8B3, (String_t*)NULL, SafeDictionary_GetValue_TisString_t_mD2F4F4D1E9B5313D16CA6AE2CF9B6879D9B05483_RuntimeMethod_var);
		NullCheck(L_46);
		L_46->___achieveIcon_9 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___achieveIcon_9), (void*)L_48);
	}

IL_012e:
	{
		// if (dic.TryGetValue("achievement_rarity", out object statObj) &&
		//     statObj is Dictionary<string, object> stat) {
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_49 = ___dic0;
		NullCheck(L_49);
		bool L_50;
		L_50 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_49, _stringLiteralD417B8B2EFAED56E64F19E2CD846FDDFDB480B50, (&V_3), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		if (!L_50)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_51 = V_3;
		V_4 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_51, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_52 = V_4;
		if (!L_52)
		{
			goto IL_0156;
		}
	}
	{
		// achievement.stats = new AchievementStats(stat);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_53 = V_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_54 = V_4;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_55 = (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78*)il2cpp_codegen_object_new(AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		AchievementStats__ctor_m147810F060C21DEEA488DB8E50F1C222816E1CF3(L_55, L_54, NULL);
		NullCheck(L_53);
		L_53->___stats_18 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_53->___stats_18), (void*)L_55);
	}

IL_0156:
	{
		// return achievement;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_56 = V_0;
		return L_56;
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::Reach()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_Reach_m73D382D396500DDAA95273D6AB50D17CF8101CCA (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (IsFullReached()) {
		bool L_0;
		L_0 = TapAchievementBean_IsFullReached_m6B38FDC8C81213FA6E62141032C13299EECD54E0(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// fullReached = true;
		__this->___fullReached_13 = (bool)1;
		// reachedStep = step;
		int32_t L_1 = __this->___step_10;
		__this->___reachedStep_14 = L_1;
		// reachedTime = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2;
		L_2 = DateTimeOffset_get_UtcNow_mD315065704E3FE153970E6BD06362AEDD3D9765F(NULL);
		V_0 = L_2;
		int64_t L_3;
		L_3 = DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC((&V_0), NULL);
		__this->___reachedTime_15 = L_3;
		// return true;
		return (bool)1;
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_Grow_m8F9A26CD073A0975EFC0B4A7F2F4E4EC8DC66C9D (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, int32_t ___step0, const RuntimeMethod* method) 
{
	{
		// return Make(reachedStep + step);
		int32_t L_0 = __this->___reachedStep_14;
		int32_t L_1 = ___step0;
		bool L_2;
		L_2 = TapAchievementBean_Make_m3D929BA3436FC4262FE47B7DBAB9D326703BFDD4(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		return L_2;
	}
}
// System.Boolean TapTap.Achievement.TapAchievementBean::Make(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapAchievementBean_Make_m3D929BA3436FC4262FE47B7DBAB9D326703BFDD4 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, int32_t ___step0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (IsFullReached()) {
		bool L_0;
		L_0 = TapAchievementBean_IsFullReached_m6B38FDC8C81213FA6E62141032C13299EECD54E0(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (step <= reachedStep) {
		int32_t L_1 = ___step0;
		int32_t L_2 = __this->___reachedStep_14;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
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
		// reachedStep = step;
		int32_t L_3 = ___step0;
		__this->___reachedStep_14 = L_3;
		// if (reachedStep >= this.step) {
		int32_t L_4 = __this->___reachedStep_14;
		int32_t L_5 = __this->___step_10;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003d;
		}
	}
	{
		// fullReached = true;
		__this->___fullReached_13 = (bool)1;
		// reachedStep = this.step;
		int32_t L_6 = __this->___step_10;
		__this->___reachedStep_14 = L_6;
	}

IL_003d:
	{
		// reachedTime = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_7;
		L_7 = DateTimeOffset_get_UtcNow_mD315065704E3FE153970E6BD06362AEDD3D9765F(NULL);
		V_0 = L_7;
		int64_t L_8;
		L_8 = DateTimeOffset_ToUnixTimeMilliseconds_mDC0FF57434DBFAFC47B63F1119CAABE402F8CDEC((&V_0), NULL);
		__this->___reachedTime_15 = L_8;
		// return true;
		return (bool)1;
	}
}
// System.Object TapTap.Achievement.TapAchievementBean::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TapAchievementBean_Clone_mD0975668AFDA75B2DABFEAE1AFB3659DCB6144B6 (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* V_0 = NULL;
	{
		// TapAchievementBean bean = new TapAchievementBean {
		//     id = id,
		//     displayId = displayId,
		//     visible = visible,
		//     title = title,
		//     subTitle = subTitle,
		//     achieveIcon = achieveIcon,
		//     step = step,
		//     createTime = createTime,
		//     showOrder = showOrder,
		//     fullReached = fullReached,
		//     reachedStep = reachedStep,
		//     reachedTime = reachedTime,
		//     type = type,
		// };
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_0 = (TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD*)il2cpp_codegen_object_new(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TapAchievementBean__ctor_mD469F54E3F35D158E0B9C3B316460BC82AD92775(L_0, NULL);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_1 = L_0;
		String_t* L_2 = __this->___id_4;
		NullCheck(L_1);
		L_1->___id_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___id_4), (void*)L_2);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_3 = L_1;
		String_t* L_4 = __this->___displayId_5;
		NullCheck(L_3);
		L_3->___displayId_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___displayId_5), (void*)L_4);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_5 = L_3;
		int32_t L_6 = __this->___visible_6;
		NullCheck(L_5);
		L_5->___visible_6 = L_6;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_7 = L_5;
		String_t* L_8 = __this->___title_7;
		NullCheck(L_7);
		L_7->___title_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___title_7), (void*)L_8);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_9 = L_7;
		String_t* L_10 = __this->___subTitle_8;
		NullCheck(L_9);
		L_9->___subTitle_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___subTitle_8), (void*)L_10);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_11 = L_9;
		String_t* L_12 = __this->___achieveIcon_9;
		NullCheck(L_11);
		L_11->___achieveIcon_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___achieveIcon_9), (void*)L_12);
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_13 = L_11;
		int32_t L_14 = __this->___step_10;
		NullCheck(L_13);
		L_13->___step_10 = L_14;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_15 = L_13;
		int64_t L_16 = __this->___createTime_11;
		NullCheck(L_15);
		L_15->___createTime_11 = L_16;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_17 = L_15;
		int32_t L_18 = __this->___showOrder_12;
		NullCheck(L_17);
		L_17->___showOrder_12 = L_18;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_19 = L_17;
		bool L_20 = __this->___fullReached_13;
		NullCheck(L_19);
		L_19->___fullReached_13 = L_20;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_21 = L_19;
		int32_t L_22 = __this->___reachedStep_14;
		NullCheck(L_21);
		L_21->___reachedStep_14 = L_22;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_23 = L_21;
		int64_t L_24 = __this->___reachedTime_15;
		NullCheck(L_23);
		L_23->___reachedTime_15 = L_24;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_25 = L_23;
		int32_t L_26 = __this->___type_17;
		NullCheck(L_25);
		L_25->___type_17 = L_26;
		V_0 = L_25;
		// if (stats != null) {
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_27 = __this->___stats_18;
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		// bean.stats = new AchievementStats {
		//     level = stats.level,
		//     rarity = stats.rarity
		// };
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_28 = V_0;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_29 = (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78*)il2cpp_codegen_object_new(AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		AchievementStats__ctor_m2C6A19822D3FC463E8D2D171B5A66887A4D0533F(L_29, NULL);
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_30 = L_29;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_31 = __this->___stats_18;
		NullCheck(L_31);
		int32_t L_32 = L_31->___level_0;
		NullCheck(L_30);
		L_30->___level_0 = L_32;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_33 = L_30;
		AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* L_34 = __this->___stats_18;
		NullCheck(L_34);
		double L_35 = L_34->___rarity_1;
		NullCheck(L_33);
		L_33->___rarity_1 = L_35;
		NullCheck(L_28);
		L_28->___stats_18 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___stats_18), (void*)L_33);
	}

IL_00d7:
	{
		// return bean;
		TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD* L_36 = V_0;
		return L_36;
	}
}
// System.Void TapTap.Achievement.TapAchievementBean::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapAchievementBean__cctor_m924839EBB739AD247D4DBC33FD384DCD43544E2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int StateUnReached = 0;
		((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___StateUnReached_0 = 0;
		// public static readonly int StateReached = 1;
		((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___StateReached_1 = 1;
		// public static readonly int VisibleFalse = 0;
		((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___VisibleFalse_2 = 0;
		// public static readonly int VisibleTrue = 1;
		((TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_StaticFields*)il2cpp_codegen_static_fields_for(TapAchievementBean_tC2FB9AE8886A6219A98402ACF0CC24BF2E67CEFD_il2cpp_TypeInfo_var))->___VisibleTrue_3 = 1;
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
// System.Void TapTap.Achievement.AchievementStats::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementStats__ctor_m147810F060C21DEEA488DB8E50F1C222816E1CF3 (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___dic0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E9611665A0D0E359B667F804E2303FDFA07767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AchievementStats(Dictionary<string, object> dic)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// level = SafeDictionary.GetValue<int>(dic, "level");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___dic0;
		int32_t L_1;
		L_1 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_0, _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___level_0 = L_1;
		// rarity = SafeDictionary.GetValue<double>(dic, "rarity");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___dic0;
		double L_3;
		L_3 = SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2(L_2, _stringLiteral45E9611665A0D0E359B667F804E2303FDFA07767, (0.0), SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_RuntimeMethod_var);
		__this->___rarity_1 = L_3;
		// }
		return;
	}
}
// System.Void TapTap.Achievement.AchievementStats::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementStats__ctor_m79265E6D17D0CFB0D5DB3A5949DCA09B3E0ED034 (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E9611665A0D0E359B667F804E2303FDFA07767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// public AchievementStats(string json)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var dic = Json.Deserialize(json) as Dictionary<string, object>;
		String_t* L_0 = ___json0;
		RuntimeObject* L_1;
		L_1 = Json_Deserialize_mA576F5E49872FF8A362CB66226DA1155E806FA2B(L_0, NULL);
		V_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		// level = SafeDictionary.GetValue<int>(dic, "level");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
		int32_t L_3;
		L_3 = SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7(L_2, _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, 0, SafeDictionary_GetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA21D256B6A27C6B47650D5196905586236B862C7_RuntimeMethod_var);
		__this->___level_0 = L_3;
		// rarity = SafeDictionary.GetValue<double>(dic, "rarity");
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
		double L_5;
		L_5 = SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2(L_4, _stringLiteral45E9611665A0D0E359B667F804E2303FDFA07767, (0.0), SafeDictionary_GetValue_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3BCC5D3886D22759321F10FB6F7A5207E3FD8EF2_RuntimeMethod_var);
		__this->___rarity_1 = L_5;
		// }
		return;
	}
}
// System.Void TapTap.Achievement.AchievementStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementStats__ctor_m2C6A19822D3FC463E8D2D171B5A66887A4D0533F (AchievementStats_t433620DA75ED7226316858FCE8767E4267DEEE78* __this, const RuntimeMethod* method) 
{
	{
		// internal AchievementStats() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// internal AchievementStats() { }
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
// System.Void TapTap.Achievement.Localization.AchievementLocalizationItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementLocalizationItems__ctor_mE03DB1EB29415D1FA6CFA6E1E1DD968757EBB251 (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* __this, const RuntimeMethod* method) 
{
	{
		// public AchievementLocalizationItems()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// TapTap.Achievement.Localization.Items TapTap.Achievement.Localization.AchievementLocalizationItems::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* __this, const RuntimeMethod* method) 
{
	{
		// public Items Items { get; set; }
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_0 = __this->___U3CItemsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.AchievementLocalizationItems::set_Items(TapTap.Achievement.Localization.Items)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementLocalizationItems_set_Items_m80B8C6A268EBABA429BC3AC8994658F7093A3E63 (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* __this, Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* ___value0, const RuntimeMethod* method) 
{
	{
		// public Items Items { get; set; }
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_0 = ___value0;
		__this->___U3CItemsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.AchievementLocalizationItems::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* AchievementLocalizationItems_get_Current_m1AF96AD8EF5178CA8803AD64DA80EF25388632A3 (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapLocalizeManager_t9BA0654C8EFE16BC9217CF16323831406B6DADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (TapTap.Common.TapLocalizeManager.GetCurrentLanguage())
		il2cpp_codegen_runtime_class_init_inline(TapLocalizeManager_t9BA0654C8EFE16BC9217CF16323831406B6DADDE_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TapLocalizeManager_GetCurrentLanguage_m780BDF99D37861FE74D4DF1B232C6C812148FFE9(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0074;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_005c;
			}
			case 5:
			{
				goto IL_0068;
			}
			case 6:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_002c:
	{
		// return this.Items.Zhs;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_2;
		L_2 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_2);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_3;
		L_3 = Items_get_Zhs_m14B9D267B4B5C3B1D157009517A5AD49A38EF0C2_inline(L_2, NULL);
		return L_3;
	}

IL_0038:
	{
		// return this.Items.En;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_4;
		L_4 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_4);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_5;
		L_5 = Items_get_En_mF42FD3C2D04886DB8C9B1F4418AD8AD8DCA321E7_inline(L_4, NULL);
		return L_5;
	}

IL_0044:
	{
		// return this.Items.Id;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_6;
		L_6 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_6);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_7;
		L_7 = Items_get_Id_m8724AE2966A3A69A32B823F2B8AD4AA16832A42A_inline(L_6, NULL);
		return L_7;
	}

IL_0050:
	{
		// return this.Items.Ja;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_8;
		L_8 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_8);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_9;
		L_9 = Items_get_Ja_mC1FB9E07D5ACBA324DE2FA3C2A09DC317911F5CE_inline(L_8, NULL);
		return L_9;
	}

IL_005c:
	{
		// return this.Items.Ko;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_10;
		L_10 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_10);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_11;
		L_11 = Items_get_Ko_m19509158AFA73031A923C15C7312139100445E81_inline(L_10, NULL);
		return L_11;
	}

IL_0068:
	{
		// return this.Items.Th;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_12;
		L_12 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_12);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_13;
		L_13 = Items_get_Th_m124628D8C269CCD2A309CFBB6F8B146B726C5E8C_inline(L_12, NULL);
		return L_13;
	}

IL_0074:
	{
		// return this.Items.Zht;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_14;
		L_14 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_14);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_15;
		L_15 = Items_get_Zht_m36AB9CAD868938A603B3B42E875EC6E3DB72D0CF_inline(L_14, NULL);
		return L_15;
	}

IL_0080:
	{
		// return this.Items.En;
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_16;
		L_16 = AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline(__this, NULL);
		NullCheck(L_16);
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_17;
		L_17 = Items_get_En_mF42FD3C2D04886DB8C9B1F4418AD8AD8DCA321E7_inline(L_16, NULL);
		return L_17;
	}
}
// TapTap.Achievement.Localization.AchievementLocalizationItems TapTap.Achievement.Localization.AchievementLocalizationItems::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* AchievementLocalizationItems_FromJson_mDA9B9799485978CC8C0421985C27AAB45A67BD99 (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisAchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64_m0B8899B65B38338EAE3C7F67B59C37859AC1BCAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tC182FD3FB3602BA6C3A1C821F59723C0387A2718_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AchievementLocalizationItems FromJson(string json) => JsonConvert.DeserializeObject<AchievementLocalizationItems>(json, TapTap.Achievement.Localization.Converter.Settings);
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var);
		JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* L_1 = ((Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_StaticFields*)il2cpp_codegen_static_fields_for(Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var))->___Settings_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_tC182FD3FB3602BA6C3A1C821F59723C0387A2718_il2cpp_TypeInfo_var);
		AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* L_2;
		L_2 = JsonConvert_DeserializeObject_TisAchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64_m0B8899B65B38338EAE3C7F67B59C37859AC1BCAD(L_0, L_1, JsonConvert_DeserializeObject_TisAchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64_m0B8899B65B38338EAE3C7F67B59C37859AC1BCAD_RuntimeMethod_var);
		return L_2;
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
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Zhs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Zhs_m14B9D267B4B5C3B1D157009517A5AD49A38EF0C2 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Zhs { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CZhsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_Zhs(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_Zhs_m8BE58746A96702E1AB18D9F21526598317CA46F1 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item Zhs { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CZhsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CZhsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_En()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_En_mF42FD3C2D04886DB8C9B1F4418AD8AD8DCA321E7 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item En { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CEnU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_En(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_En_m25BD22BF408769E6D3B39DE1E65D9850A4A34181 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item En { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CEnU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Id_m8724AE2966A3A69A32B823F2B8AD4AA16832A42A (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Id { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_Id(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_Id_m071568492FB7906C8218858A13DF1B0F78B18324 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item Id { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Ja()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Ja_mC1FB9E07D5ACBA324DE2FA3C2A09DC317911F5CE (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Ja { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CJaU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_Ja(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_Ja_mB222E3C27D8020ADE0CA7366602118DACE320000 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item Ja { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CJaU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJaU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Ko()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Ko_m19509158AFA73031A923C15C7312139100445E81 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Ko { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CKoU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_Ko(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_Ko_mAEC949088F3C81FBD0E45F1DBAD07E3F5E270E6B (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item Ko { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CKoU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKoU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Th()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Th_m124628D8C269CCD2A309CFBB6F8B146B726C5E8C (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Th { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CThU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_Th(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_Th_m226A9734D64B95B0B6080A77C0F51F4170A987A8 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item Th { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CThU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CThU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// TapTap.Achievement.Localization.Item TapTap.Achievement.Localization.Items::get_Zht()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Zht_m36AB9CAD868938A603B3B42E875EC6E3DB72D0CF (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Zht { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CZhtU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Items::set_Zht(TapTap.Achievement.Localization.Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items_set_Zht_mB201F6F5511E791C5920DE521B21872791156E08 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Item Zht { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = ___value0;
		__this->___U3CZhtU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CZhtU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void TapTap.Achievement.Localization.Items::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items__ctor_m78E983E27B45D8577C612A9B1C4969EE580578F9 (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
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
// System.String TapTap.Achievement.Localization.Item::get_DetailAchievementData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_DetailAchievementData_m68C3133EA0FC10A52831EE6A2C1BCDF22C47BA28 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string DetailAchievementData { get; set; }
		String_t* L_0 = __this->___U3CDetailAchievementDataU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_DetailAchievementData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_DetailAchievementData_mE765A0AE7D319BC35F16326C37D77E9D735A0864 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DetailAchievementData { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDetailAchievementDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailAchievementDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_DetailGetPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_DetailGetPercent_m1E991B9FF3E81161A027D2DCEFC45DE5107A193F (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string DetailGetPercent { get; set; }
		String_t* L_0 = __this->___U3CDetailGetPercentU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_DetailGetPercent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_DetailGetPercent_m2B31D07CF69CC0FCE82F7A59B3CD46E420508553 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DetailGetPercent { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDetailGetPercentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailGetPercentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_DetailGetPercentlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_DetailGetPercentlow_mCC26AF33F69BEF7BED24D55D0CB197457EC6DC93 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string DetailGetPercentlow { get; set; }
		String_t* L_0 = __this->___U3CDetailGetPercentlowU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_DetailGetPercentlow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_DetailGetPercentlow_m876040324CCDFC87F69D0926C326427CC14F1EAB (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DetailGetPercentlow { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDetailGetPercentlowU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailGetPercentlowU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_DetailGetDatetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_DetailGetDatetime_m7D83B143E2974578F6E0E2797F40CE4A46F12E81 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string DetailGetDatetime { get; set; }
		String_t* L_0 = __this->___U3CDetailGetDatetimeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_DetailGetDatetime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_DetailGetDatetime_mC6DF70C2CE5B79575B01B7B4B579ED865D3F10C5 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string DetailGetDatetime { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDetailGetDatetimeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailGetDatetimeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_InvisibleTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_InvisibleTitle_m75BB147C700661254869A3CBC6059E30A8F7D65C (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string InvisibleTitle { get; set; }
		String_t* L_0 = __this->___U3CInvisibleTitleU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_InvisibleTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_InvisibleTitle_mF6991568D2BABE23D6C00670B24B12148C8B96BF (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string InvisibleTitle { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CInvisibleTitleU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInvisibleTitleU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_InvisibleSubtitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_InvisibleSubtitle_mDECF0072FAF2B687F7C185E1927B2F0C271A2489 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string InvisibleSubtitle { get; set; }
		String_t* L_0 = __this->___U3CInvisibleSubtitleU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_InvisibleSubtitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_InvisibleSubtitle_m20DA68CB21D3D167F2C5094E4DE6532E7B032BD4 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string InvisibleSubtitle { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CInvisibleSubtitleU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInvisibleSubtitleU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_Unlock_mED17D21D79DF7BC478142C0057C53C0BB083C76D (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string Unlock { get; set; }
		String_t* L_0 = __this->___U3CUnlockU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_Unlock(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_Unlock_m5FC30107B5B1425D0BF1A876299B00C310CCB0EA (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Unlock { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUnlockU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnlockU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_Lock_mA4BD5443F260D741F92F7A6A07C6C0A458099A8C (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string Lock { get; set; }
		String_t* L_0 = __this->___U3CLockU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_Lock(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_Lock_m68419AA9C9F83EFC169088BE35A95B16B58B3C32 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Lock { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CLockU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLockU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_Common()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_Common_m8A5BFBBBF8E87013243126B47E5B9E28794CBEEC (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string Common { get; set; }
		String_t* L_0 = __this->___U3CCommonU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_Common(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_Common_m52FF8C32C62D5451F0BC05D447573F36D090F2C3 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Common { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CCommonU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCommonU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_Uncommom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_Uncommom_m9DD2DD098D575AE9D03998FA25E3C6AACD22AEF3 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string Uncommom { get; set; }
		String_t* L_0 = __this->___U3CUncommomU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_Uncommom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_Uncommom_m95C6593F45E7C74587B9F355416C74B87259D425 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Uncommom { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUncommomU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUncommomU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_Rare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_Rare_m6C43FFB5F44F08F6D7A84AA4482FE16A5B9B024D (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string Rare { get; set; }
		String_t* L_0 = __this->___U3CRareU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_Rare(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_Rare_mCB804655999CF5A0C40B604D4641BFF701D184E8 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Rare { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CRareU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRareU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_UltraRare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_UltraRare_mF82F205B8B6D00EAC9C2F2BB044AE562A4B3E059 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string UltraRare { get; set; }
		String_t* L_0 = __this->___U3CUltraRareU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_UltraRare(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_UltraRare_mC5BBC3E9B1F9C2A2140272D5CFF30FAEBA20EE87 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string UltraRare { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUltraRareU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUltraRareU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.String TapTap.Achievement.Localization.Item::get_ToastCongra()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Item_get_ToastCongra_mDF779F8D8F93148935FAC825D5BE99CD648B8729 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
{
	{
		// public string ToastCongra { get; set; }
		String_t* L_0 = __this->___U3CToastCongraU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TapTap.Achievement.Localization.Item::set_ToastCongra(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_set_ToastCongra_m7AF39BD3870745785F18F4005F2B4716807F0FA3 (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ToastCongra { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CToastCongraU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CToastCongraU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Void TapTap.Achievement.Localization.Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_mC0BF609B7388D6E9FB74A2AF0A10953DF7A0E04E (Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* __this, const RuntimeMethod* method) 
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
// System.String TapTap.Achievement.Localization.Serialize::ToJson(TapTap.Achievement.Localization.AchievementLocalizationItems)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serialize_ToJson_mF5BC65872EB99A6A8C0659A10E677A77004F021E (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_tC182FD3FB3602BA6C3A1C821F59723C0387A2718_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string ToJson(this AchievementLocalizationItems self) => JsonConvert.SerializeObject(self, TapTap.Achievement.Localization.Converter.Settings);
		AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* L_0 = ___self0;
		il2cpp_codegen_runtime_class_init_inline(Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var);
		JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* L_1 = ((Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_StaticFields*)il2cpp_codegen_static_fields_for(Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var))->___Settings_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_tC182FD3FB3602BA6C3A1C821F59723C0387A2718_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonConvert_SerializeObject_mC503FACB0F97FC40E7D9DD434FD5E9BF135A910F(L_0, L_1, NULL);
		return L_2;
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
// System.Void TapTap.Achievement.Localization.Converter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter__cctor_m6653CC068421220C77D2DC2A4F337B15BCC581C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t308A2C37F171F6280193BD60B07EDD221615BFD4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly JsonSerializerSettings Settings = new JsonSerializerSettings
		// {
		//     MetadataPropertyHandling = MetadataPropertyHandling.Ignore,
		//     DateParseHandling = DateParseHandling.None,
		//     Converters =
		//     {
		//         new IsoDateTimeConverter { DateTimeStyles = DateTimeStyles.AssumeUniversal }
		//     },
		// };
		JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* L_0 = (JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95*)il2cpp_codegen_object_new(JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_m05A2564AE73838B3F8763103AB1B829A4752A2FD(L_0, NULL);
		JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* L_1 = L_0;
		NullCheck(L_1);
		JsonSerializerSettings_set_MetadataPropertyHandling_m17BE1878D38EFA8DAB0389046DEB2DE2BB42412D(L_1, 2, NULL);
		JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* L_2 = L_1;
		NullCheck(L_2);
		JsonSerializerSettings_set_DateParseHandling_mED7DA989CF2F624BE020746BD75F968FD89D3C04(L_2, 0, NULL);
		JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* L_3 = L_2;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = JsonSerializerSettings_get_Converters_m5F9D9E50B94117E4CF9B6549A1EAC7EABDF0BE4C_inline(L_3, NULL);
		IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6* L_5 = (IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6*)il2cpp_codegen_object_new(IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IsoDateTimeConverter__ctor_m6D793AE30B79561A3E1F7C12967A035FE0CB781A(L_5, NULL);
		IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6* L_6 = L_5;
		NullCheck(L_6);
		IsoDateTimeConverter_set_DateTimeStyles_mAA655D43E1135E390E3039D9226FA2D66F362E23_inline(L_6, ((int32_t)64), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< JsonConverter_tDEB236183011E2076190E763ADEA8A2394E63679* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LC.Newtonsoft.Json.JsonConverter>::Add(T) */, ICollection_1_t308A2C37F171F6280193BD60B07EDD221615BFD4_il2cpp_TypeInfo_var, L_4, L_6);
		((Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_StaticFields*)il2cpp_codegen_static_fields_for(Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var))->___Settings_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_StaticFields*)il2cpp_codegen_static_fields_for(Converter_t6531F901903664EB49D3573D4AF3F0914F57B025_il2cpp_TypeInfo_var))->___Settings_0), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* AchievementLocalizationItems_get_Items_mC2A4E7844D36B7C8A84710CF268A5741A69ACD3F_inline (AchievementLocalizationItems_t36A8AB10CE103E452CBE0D2DA935898C6B7FCC64* __this, const RuntimeMethod* method) 
{
	{
		// public Items Items { get; set; }
		Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* L_0 = __this->___U3CItemsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Zhs_m14B9D267B4B5C3B1D157009517A5AD49A38EF0C2_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Zhs { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CZhsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_En_mF42FD3C2D04886DB8C9B1F4418AD8AD8DCA321E7_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item En { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CEnU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Id_m8724AE2966A3A69A32B823F2B8AD4AA16832A42A_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Id { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Ja_mC1FB9E07D5ACBA324DE2FA3C2A09DC317911F5CE_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Ja { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CJaU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Ko_m19509158AFA73031A923C15C7312139100445E81_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Ko { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CKoU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Th_m124628D8C269CCD2A309CFBB6F8B146B726C5E8C_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Th { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CThU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* Items_get_Zht_m36AB9CAD868938A603B3B42E875EC6E3DB72D0CF_inline (Items_tA5FEA0C505B83D9EB7E5C9AEAAAEEAA744D4E2B0* __this, const RuntimeMethod* method) 
{
	{
		// public Item Zht { get; set; }
		Item_t5B45934A4E5DA1B437AAFE611163100EA9DBA76B* L_0 = __this->___U3CZhtU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_m5F9D9E50B94117E4CF9B6549A1EAC7EABDF0BE4C_inline (JsonSerializerSettings_tB2FC14055BE25FFCF4DB0859C1F8105A9BFC6B95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConvertersU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IsoDateTimeConverter_set_DateTimeStyles_mAA655D43E1135E390E3039D9226FA2D66F362E23_inline (IsoDateTimeConverter_t99B7A12436B992EF2179F9F0C00558D198AF06C6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____dateTimeStyles_1 = L_0;
		return;
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
