#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void TapTap.TapDB.ITapDB::Init(System.String,System.String,System.String,System.Boolean)
// 0x00000002 System.Void TapTap.TapDB.ITapDB::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000003 System.Void TapTap.TapDB.ITapDB::SetUser(System.String)
// 0x00000004 System.Void TapTap.TapDB.ITapDB::SetUser(System.String,System.String)
// 0x00000005 System.Void TapTap.TapDB.ITapDB::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000006 System.Void TapTap.TapDB.ITapDB::SetName(System.String)
// 0x00000007 System.Void TapTap.TapDB.ITapDB::SetLevel(System.Int32)
// 0x00000008 System.Void TapTap.TapDB.ITapDB::SetServer(System.String)
// 0x00000009 System.Void TapTap.TapDB.ITapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String)
// 0x0000000A System.Void TapTap.TapDB.ITapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String)
// 0x0000000B System.Void TapTap.TapDB.ITapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x0000000C System.Void TapTap.TapDB.ITapDB::OnEvent(System.String,System.String)
// 0x0000000D System.Void TapTap.TapDB.ITapDB::TrackEvent(System.String,System.String)
// 0x0000000E System.Void TapTap.TapDB.ITapDB::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x0000000F System.Void TapTap.TapDB.ITapDB::RegisterStaticProperties(System.String)
// 0x00000010 System.Void TapTap.TapDB.ITapDB::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000011 System.Void TapTap.TapDB.ITapDB::UnregisterStaticProperty(System.String)
// 0x00000012 System.Void TapTap.TapDB.ITapDB::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties)
// 0x00000013 System.Void TapTap.TapDB.ITapDB::ClearStaticProperties()
// 0x00000014 System.Void TapTap.TapDB.ITapDB::DeviceInitialize(System.String)
// 0x00000015 System.Void TapTap.TapDB.ITapDB::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000016 System.Void TapTap.TapDB.ITapDB::DeviceUpdate(System.String)
// 0x00000017 System.Void TapTap.TapDB.ITapDB::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000018 System.Void TapTap.TapDB.ITapDB::DeviceAdd(System.String)
// 0x00000019 System.Void TapTap.TapDB.ITapDB::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x0000001A System.Void TapTap.TapDB.ITapDB::UserInitialize(System.String)
// 0x0000001B System.Void TapTap.TapDB.ITapDB::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x0000001C System.Void TapTap.TapDB.ITapDB::UserUpdate(System.String)
// 0x0000001D System.Void TapTap.TapDB.ITapDB::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x0000001E System.Void TapTap.TapDB.ITapDB::UserAdd(System.String)
// 0x0000001F System.Void TapTap.TapDB.ITapDB::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000020 System.Void TapTap.TapDB.ITapDB::EnableLog(System.Boolean)
// 0x00000021 System.Void TapTap.TapDB.ITapDB::AdvertiserIDCollectionEnabled(System.Boolean)
// 0x00000022 System.Void TapTap.TapDB.ITapDB::CloseFetchTapTapDeviceId()
// 0x00000023 System.Void TapTap.TapDB.ITapDB::ClearUser()
// 0x00000024 System.Void TapTap.TapDB.ITapDB::GetTapTapDid(System.Action`1<System.String>)
// 0x00000025 System.Void TapTap.TapDB.ITapDB::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
// 0x00000026 System.Void TapTap.TapDB.ITapDB::ConfigAutoQuitApplication(System.Boolean)
// 0x00000027 System.Void TapTap.TapDB.ITapDB::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
// 0x00000028 System.Void TapTap.TapDB.ITapDB::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
// 0x00000029 System.Void TapTap.TapDB.ITapDB::ReportException(System.Exception,System.String)
// 0x0000002A System.Void TapTap.TapDB.ITapDB::SetOAIDCert(System.String)
// 0x0000002B System.Void TapTap.TapDB.ITapDB::EnableThemis(System.Boolean)
// 0x0000002C System.Collections.Generic.Dictionary`2<System.String,System.Object> TapTap.TapDB.IDynamicProperties::GetDynamicProperties()
// 0x0000002D System.Void TapTap.TapDB.TapDB::.cctor()
extern void TapDB__cctor_mF2752A855E239B829303AC874815AE19A7312952 (void);
// 0x0000002E System.Void TapTap.TapDB.TapDB::InitFromBootstrap(System.String,System.String,System.String,TapTap.Common.RegionType,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_InitFromBootstrap_m3E15F0B7C92090C3FBF1713E21DD63CDFCDA77E8 (void);
// 0x0000002F System.Void TapTap.TapDB.TapDB::Init(System.String,System.String,System.String,System.Boolean)
extern void TapDB_Init_mE712A909CFD90F8D2092C45E5FDE29CF3C4E69F9 (void);
// 0x00000030 System.Void TapTap.TapDB.TapDB::Init(System.String,System.String,System.String,TapTap.TapDB.TapDBRegion,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_Init_m8648050951B0E0B6EA3511D2A2D9C781BAC382BD (void);
// 0x00000031 System.Void TapTap.TapDB.TapDB::SetUser(System.String)
extern void TapDB_SetUser_mD62E24861158692E309717B77FE861F6EF16AF19 (void);
// 0x00000032 System.Void TapTap.TapDB.TapDB::SetUser(System.String,System.String)
extern void TapDB_SetUser_mA00E43A88C4D7A5CECFEEC09B67B251AE09D8E10 (void);
// 0x00000033 System.Void TapTap.TapDB.TapDB::SetUserWithProperties(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_SetUserWithProperties_m95B664A6A44D06CC2888BFD54D8FAE118341D4D9 (void);
// 0x00000034 System.Void TapTap.TapDB.TapDB::SetName(System.String)
extern void TapDB_SetName_mD1F9097744F4DC101CC9780E5C38DC86746F7336 (void);
// 0x00000035 System.Void TapTap.TapDB.TapDB::SetLevel(System.Int32)
extern void TapDB_SetLevel_mCB69BC362C66F5C6474FF64CE6059FF4671D6528 (void);
// 0x00000036 System.Void TapTap.TapDB.TapDB::SetServer(System.String)
extern void TapDB_SetServer_mB0661F3FD47C3D069ED3A72C1B4B3E2DF71EFE32 (void);
// 0x00000037 System.Void TapTap.TapDB.TapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String)
extern void TapDB_OnCharge_m0775856E5EFDD83BFA562942673AE8D03702C95E (void);
// 0x00000038 System.Void TapTap.TapDB.TapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.String)
extern void TapDB_OnCharge_mE4D94F7AE8F267144090EF8F5D94406F01B5D6CE (void);
// 0x00000039 System.Void TapTap.TapDB.TapDB::OnCharge(System.String,System.String,System.Int64,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_OnCharge_m364C13460E6C5552A879535FA27EBBD4976C73D5 (void);
// 0x0000003A System.Void TapTap.TapDB.TapDB::OnEvent(System.String,System.String)
extern void TapDB_OnEvent_m9C99BF7CC4F6B91E25F14C4A65ED505A30899135 (void);
// 0x0000003B System.Void TapTap.TapDB.TapDB::TrackEvent(System.String,System.String)
extern void TapDB_TrackEvent_mE23A496517564B5D1AB5CB8D59D0F3F853E27B6E (void);
// 0x0000003C System.Void TapTap.TapDB.TapDB::TrackEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_TrackEvent_m339443C45BF17D7E3446BAEABECB517BC72A5B30 (void);
// 0x0000003D System.Void TapTap.TapDB.TapDB::RegisterStaticProperties(System.String)
extern void TapDB_RegisterStaticProperties_m7ABA3B5DB16A04841E098B532D2486840CB4686D (void);
// 0x0000003E System.Void TapTap.TapDB.TapDB::RegisterStaticProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_RegisterStaticProperties_mEDDD078E54F039B6E96BE8156DD03E7CF562B66D (void);
// 0x0000003F System.Void TapTap.TapDB.TapDB::UnregisterStaticProperty(System.String)
extern void TapDB_UnregisterStaticProperty_m2017987ACC220DFE14C150F421411D1A96A6EEBD (void);
// 0x00000040 System.Void TapTap.TapDB.TapDB::RegisterDynamicProperties(TapTap.TapDB.IDynamicProperties)
extern void TapDB_RegisterDynamicProperties_mF182F683A435E949BAD038D87D9576EC42AA9004 (void);
// 0x00000041 System.Void TapTap.TapDB.TapDB::ClearStaticProperties()
extern void TapDB_ClearStaticProperties_m463193534AA45ECC4A7549EB69726632B2099423 (void);
// 0x00000042 System.Void TapTap.TapDB.TapDB::DeviceInitialize(System.String)
extern void TapDB_DeviceInitialize_mDE9E0FF149F88ED7F56EBDC1C1DA3D68BB2359A0 (void);
// 0x00000043 System.Void TapTap.TapDB.TapDB::DeviceInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_DeviceInitialize_m8CF3DC123DB7F83C3F703BC3A841959202BAF033 (void);
// 0x00000044 System.Void TapTap.TapDB.TapDB::DeviceUpdate(System.String)
extern void TapDB_DeviceUpdate_m42B68C7E6C08A53419023EE20C55B63EF636AAB2 (void);
// 0x00000045 System.Void TapTap.TapDB.TapDB::DeviceUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_DeviceUpdate_m1D5B8BB476A558C3569C88BB8DAF6AE2BCDD3F17 (void);
// 0x00000046 System.Void TapTap.TapDB.TapDB::DeviceAdd(System.String)
extern void TapDB_DeviceAdd_m979983DAEE27E3B5FF85BC927F6A1C9B3008415F (void);
// 0x00000047 System.Void TapTap.TapDB.TapDB::DeviceAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_DeviceAdd_mE50B1968680866567E9923A1813AAFE0AEBD402B (void);
// 0x00000048 System.Void TapTap.TapDB.TapDB::UserInitialize(System.String)
extern void TapDB_UserInitialize_m9AA1DA5BE42DD89D3054462B8CE571C1776D44C1 (void);
// 0x00000049 System.Void TapTap.TapDB.TapDB::UserInitialize(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_UserInitialize_mA4169FBD57CCED8137FAE927DB403118C62E834D (void);
// 0x0000004A System.Void TapTap.TapDB.TapDB::UserUpdate(System.String)
extern void TapDB_UserUpdate_m1080F1D7E80A20DBBDB641D4DE3441EF322E6651 (void);
// 0x0000004B System.Void TapTap.TapDB.TapDB::UserUpdate(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_UserUpdate_m54E740A3133C56FC01C7122D92DBDF97161596B9 (void);
// 0x0000004C System.Void TapTap.TapDB.TapDB::UserAdd(System.String)
extern void TapDB_UserAdd_m8C5D664963A79D46A38619444FDFD51A1C594FAE (void);
// 0x0000004D System.Void TapTap.TapDB.TapDB::UserAdd(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void TapDB_UserAdd_m805E5D38DA4345E2DDDC252513E83D9778DED602 (void);
// 0x0000004E System.Void TapTap.TapDB.TapDB::EnableLog(System.Boolean)
extern void TapDB_EnableLog_mA14B1C4E2936D7834B388157E003EC18B3FC6508 (void);
// 0x0000004F System.Void TapTap.TapDB.TapDB::AdvertiserIDCollectionEnabled(System.Boolean)
extern void TapDB_AdvertiserIDCollectionEnabled_m4F579FC11FC44A64CF6DC84CAB51731A278C44BB (void);
// 0x00000050 System.Void TapTap.TapDB.TapDB::CloseFetchTapTapDeviceId()
extern void TapDB_CloseFetchTapTapDeviceId_mC9D6279DDBBB47C623FD73090A5551740A2A3F7E (void);
// 0x00000051 System.Void TapTap.TapDB.TapDB::ClearUser()
extern void TapDB_ClearUser_m3EB99FAABAB8A37E166FE0B1DF0F4CA741B7E763 (void);
// 0x00000052 System.Void TapTap.TapDB.TapDB::GetTapTapDid(System.Action`1<System.String>)
extern void TapDB_GetTapTapDid_m5D75F12C7A4CE8C1CDD55644156A0CAD0257134F (void);
// 0x00000053 System.Void TapTap.TapDB.TapDB::ConfigAutoReportLogLevel(TapTap.TapDB.LogSeverity)
extern void TapDB_ConfigAutoReportLogLevel_m1A7A633C3C2C0D7D38173044763498242B6FDE8D (void);
// 0x00000054 System.Void TapTap.TapDB.TapDB::ConfigAutoQuitApplication(System.Boolean)
extern void TapDB_ConfigAutoQuitApplication_mEE6FD92E6B446F5615F889351503FB5FAC2B669B (void);
// 0x00000055 System.Void TapTap.TapDB.TapDB::RegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
extern void TapDB_RegisterLogCallback_m16E798DFB81B58C37F6260ABB7793CF50B7EAFE7 (void);
// 0x00000056 System.Void TapTap.TapDB.TapDB::UnRegisterLogCallback(TapTap.TapDB.TapDB/LogCallbackDelegate)
extern void TapDB_UnRegisterLogCallback_m8555D7FAB2A9BF7DFF8AE91877A53B0E2D89BA07 (void);
// 0x00000057 System.Void TapTap.TapDB.TapDB::ReportException(System.Exception,System.String)
extern void TapDB_ReportException_mF7F5868C65CB1430C12F3DCA5B8E9469382F2CD6 (void);
// 0x00000058 System.Void TapTap.TapDB.TapDB::SetOAIDCert(System.String)
extern void TapDB_SetOAIDCert_m35761C405A62218AE04B1C3E233D38CD7E10CBDC (void);
// 0x00000059 System.Void TapTap.TapDB.TapDB::EnableThemis(System.Boolean)
extern void TapDB_EnableThemis_m438F9353D1C507562C6A5C002EF0B47D0EBC092D (void);
// 0x0000005A System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
extern void LogCallbackDelegate__ctor_mFF9AC6F2619A9F8FAD379E1AD8283AFB35BD1649 (void);
// 0x0000005B System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
extern void LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD (void);
// 0x0000005C System.IAsyncResult TapTap.TapDB.TapDB/LogCallbackDelegate::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern void LogCallbackDelegate_BeginInvoke_m342487BB6FE9066D40B63C7A1B15B3B7C564E54A (void);
// 0x0000005D System.Void TapTap.TapDB.TapDB/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
extern void LogCallbackDelegate_EndInvoke_m822BB83D591075C271446FB0D988C5E01CC8C882 (void);
// 0x0000005E System.Void TapTap.TapDB.TapDB/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m84D3C0BB51287E5CEAD7336AB47E2FA8C815EE7B (void);
// 0x0000005F System.Boolean TapTap.TapDB.TapDB/<>c__DisplayClass2_0::<.cctor>b__2(System.Type)
extern void U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__2_mBA412C0C7AA7B42DE088EED9E42A1817EAB184A1 (void);
// 0x00000060 System.Void TapTap.TapDB.TapDB/<>c::.cctor()
extern void U3CU3Ec__cctor_mD9AE7115E4D64DE1B3C42955B8812ACB822EF49D (void);
// 0x00000061 System.Void TapTap.TapDB.TapDB/<>c::.ctor()
extern void U3CU3Ec__ctor_m68BAFF136011D06CAAB1ECA151A368B2FC938E9D (void);
// 0x00000062 System.Boolean TapTap.TapDB.TapDB/<>c::<.cctor>b__2_0(System.Reflection.Assembly)
extern void U3CU3Ec_U3C_cctorU3Eb__2_0_mAF659068556C48D70F2B62C962F977D35FD89C3D (void);
// 0x00000063 System.Collections.Generic.IEnumerable`1<System.Type> TapTap.TapDB.TapDB/<>c::<.cctor>b__2_1(System.Reflection.Assembly)
extern void U3CU3Ec_U3C_cctorU3Eb__2_1_m16141A7D6ABC5A94A77EC0651D8574A42111CCE2 (void);
// 0x00000064 System.Void TapTap.TapDB.TapDBLoginType::.ctor()
extern void TapDBLoginType__ctor_m05584E18D8A5F4453112F9191E7C8C2AF96FFA02 (void);
// 0x00000065 System.Void TapTap.TapDB.TapDBLoginType::.cctor()
extern void TapDBLoginType__cctor_mC513CF9876EF257C83499AFDB995BB70784474EC (void);
static Il2CppMethodPointer s_methodPointers[101] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TapDB__cctor_mF2752A855E239B829303AC874815AE19A7312952,
	TapDB_InitFromBootstrap_m3E15F0B7C92090C3FBF1713E21DD63CDFCDA77E8,
	TapDB_Init_mE712A909CFD90F8D2092C45E5FDE29CF3C4E69F9,
	TapDB_Init_m8648050951B0E0B6EA3511D2A2D9C781BAC382BD,
	TapDB_SetUser_mD62E24861158692E309717B77FE861F6EF16AF19,
	TapDB_SetUser_mA00E43A88C4D7A5CECFEEC09B67B251AE09D8E10,
	TapDB_SetUserWithProperties_m95B664A6A44D06CC2888BFD54D8FAE118341D4D9,
	TapDB_SetName_mD1F9097744F4DC101CC9780E5C38DC86746F7336,
	TapDB_SetLevel_mCB69BC362C66F5C6474FF64CE6059FF4671D6528,
	TapDB_SetServer_mB0661F3FD47C3D069ED3A72C1B4B3E2DF71EFE32,
	TapDB_OnCharge_m0775856E5EFDD83BFA562942673AE8D03702C95E,
	TapDB_OnCharge_mE4D94F7AE8F267144090EF8F5D94406F01B5D6CE,
	TapDB_OnCharge_m364C13460E6C5552A879535FA27EBBD4976C73D5,
	TapDB_OnEvent_m9C99BF7CC4F6B91E25F14C4A65ED505A30899135,
	TapDB_TrackEvent_mE23A496517564B5D1AB5CB8D59D0F3F853E27B6E,
	TapDB_TrackEvent_m339443C45BF17D7E3446BAEABECB517BC72A5B30,
	TapDB_RegisterStaticProperties_m7ABA3B5DB16A04841E098B532D2486840CB4686D,
	TapDB_RegisterStaticProperties_mEDDD078E54F039B6E96BE8156DD03E7CF562B66D,
	TapDB_UnregisterStaticProperty_m2017987ACC220DFE14C150F421411D1A96A6EEBD,
	TapDB_RegisterDynamicProperties_mF182F683A435E949BAD038D87D9576EC42AA9004,
	TapDB_ClearStaticProperties_m463193534AA45ECC4A7549EB69726632B2099423,
	TapDB_DeviceInitialize_mDE9E0FF149F88ED7F56EBDC1C1DA3D68BB2359A0,
	TapDB_DeviceInitialize_m8CF3DC123DB7F83C3F703BC3A841959202BAF033,
	TapDB_DeviceUpdate_m42B68C7E6C08A53419023EE20C55B63EF636AAB2,
	TapDB_DeviceUpdate_m1D5B8BB476A558C3569C88BB8DAF6AE2BCDD3F17,
	TapDB_DeviceAdd_m979983DAEE27E3B5FF85BC927F6A1C9B3008415F,
	TapDB_DeviceAdd_mE50B1968680866567E9923A1813AAFE0AEBD402B,
	TapDB_UserInitialize_m9AA1DA5BE42DD89D3054462B8CE571C1776D44C1,
	TapDB_UserInitialize_mA4169FBD57CCED8137FAE927DB403118C62E834D,
	TapDB_UserUpdate_m1080F1D7E80A20DBBDB641D4DE3441EF322E6651,
	TapDB_UserUpdate_m54E740A3133C56FC01C7122D92DBDF97161596B9,
	TapDB_UserAdd_m8C5D664963A79D46A38619444FDFD51A1C594FAE,
	TapDB_UserAdd_m805E5D38DA4345E2DDDC252513E83D9778DED602,
	TapDB_EnableLog_mA14B1C4E2936D7834B388157E003EC18B3FC6508,
	TapDB_AdvertiserIDCollectionEnabled_m4F579FC11FC44A64CF6DC84CAB51731A278C44BB,
	TapDB_CloseFetchTapTapDeviceId_mC9D6279DDBBB47C623FD73090A5551740A2A3F7E,
	TapDB_ClearUser_m3EB99FAABAB8A37E166FE0B1DF0F4CA741B7E763,
	TapDB_GetTapTapDid_m5D75F12C7A4CE8C1CDD55644156A0CAD0257134F,
	TapDB_ConfigAutoReportLogLevel_m1A7A633C3C2C0D7D38173044763498242B6FDE8D,
	TapDB_ConfigAutoQuitApplication_mEE6FD92E6B446F5615F889351503FB5FAC2B669B,
	TapDB_RegisterLogCallback_m16E798DFB81B58C37F6260ABB7793CF50B7EAFE7,
	TapDB_UnRegisterLogCallback_m8555D7FAB2A9BF7DFF8AE91877A53B0E2D89BA07,
	TapDB_ReportException_mF7F5868C65CB1430C12F3DCA5B8E9469382F2CD6,
	TapDB_SetOAIDCert_m35761C405A62218AE04B1C3E233D38CD7E10CBDC,
	TapDB_EnableThemis_m438F9353D1C507562C6A5C002EF0B47D0EBC092D,
	LogCallbackDelegate__ctor_mFF9AC6F2619A9F8FAD379E1AD8283AFB35BD1649,
	LogCallbackDelegate_Invoke_mC466DBC4AE7BD04150368083632953315CDAD9CD,
	LogCallbackDelegate_BeginInvoke_m342487BB6FE9066D40B63C7A1B15B3B7C564E54A,
	LogCallbackDelegate_EndInvoke_m822BB83D591075C271446FB0D988C5E01CC8C882,
	U3CU3Ec__DisplayClass2_0__ctor_m84D3C0BB51287E5CEAD7336AB47E2FA8C815EE7B,
	U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__2_mBA412C0C7AA7B42DE088EED9E42A1817EAB184A1,
	U3CU3Ec__cctor_mD9AE7115E4D64DE1B3C42955B8812ACB822EF49D,
	U3CU3Ec__ctor_m68BAFF136011D06CAAB1ECA151A368B2FC938E9D,
	U3CU3Ec_U3C_cctorU3Eb__2_0_mAF659068556C48D70F2B62C962F977D35FD89C3D,
	U3CU3Ec_U3C_cctorU3Eb__2_1_m16141A7D6ABC5A94A77EC0651D8574A42111CCE2,
	TapDBLoginType__ctor_m05584E18D8A5F4453112F9191E7C8C2AF96FFA02,
	TapDBLoginType__cctor_mC513CF9876EF257C83499AFDB995BB70784474EC,
};
static const int32_t s_InvokerIndices[101] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7516,
	5513,
	5865,
	5513,
	7381,
	6813,
	6813,
	7381,
	7377,
	7381,
	5510,
	5263,
	5263,
	6813,
	6813,
	6813,
	7381,
	7381,
	7381,
	7381,
	7516,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7381,
	7373,
	7373,
	7516,
	7516,
	7381,
	7377,
	7373,
	7381,
	7381,
	6813,
	7381,
	7373,
	2393,
	1402,
	466,
	4055,
	4950,
	2978,
	7516,
	4950,
	2978,
	3637,
	4950,
	7516,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_TapTap_TapDB_Runtime_CodeGenModule;
const Il2CppCodeGenModule g_TapTap_TapDB_Runtime_CodeGenModule = 
{
	"TapTap.TapDB.Runtime.dll",
	101,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
