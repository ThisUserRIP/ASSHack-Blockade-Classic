#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Config_UpdateLoopSetting.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Platforms_WindowsStandalonePrimaryInputSource.h"
#include "Rewired_Platforms_OSXStandalonePrimaryInputSource.h"
#include "Rewired_Platforms_LinuxStandalonePrimaryInputSource.h"
#include "Rewired_Platforms_WindowsUWPPrimaryInputSource.h"
#include "Rewired_Platforms_XboxOnePrimaryInputSource.h"
#include "Rewired_Platforms_GameCoreXboxOnePrimaryInputSource.h"
#include "Rewired_Platforms_GameCoreScarlettPrimaryInputSource.h"
#include "Rewired_Platforms_PS4PrimaryInputSource.h"
#include "Rewired_Platforms_PS5PrimaryInputSource.h"
#include "Rewired_Platforms_WebGLPrimaryInputSource.h"
#include "Rewired_Platforms_StadiaPrimaryInputSource.h"
namespace Rewired_Core::Rewired::Data { struct ConfigVars_PlatformVars_WindowsStandalone; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_PlatformVars; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_PlatformVars_WindowsUWP; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_PlatformVars_GameCoreXboxOne; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_PlatformVars_GameCoreScarlett; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_PlatformVars_Stadia; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_DeadZone2DType.h"
#include "Rewired_AxisSensitivity2DType.h"
#include "Rewired_AxisSensitivityType.h"
#include "Rewired_Config_ThrottleCalibrationMode.h"
#include "Rewired_Config_LogLevelFlags.h"
namespace Rewired_Core::Rewired::Data { struct ConfigVars_EditorVars; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey> struct KeyedGetSetValueStore_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Platforms_Platform.h"
#include "Rewired_Platforms_WebplayerPlatform.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Rewired_Data_ConfigVars_AllPlatformVar.h"
#include "Rewired_MultiBoolValue.h"
#include "Rewired_ControllerType.h"
#include "Rewired_Platforms_EditorPlatform.h"

namespace Rewired_Core::Rewired::Data
{
	struct ConfigVars : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoop;
		bool alwaysUseUnityInput;
		Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource windowsStandalonePrimaryInputSource;
		Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource osx_primaryInputSource;
		Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource linux_primaryInputSource;
		Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource windowsUWP_primaryInputSource;
		Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource xboxOne_primaryInputSource;
		Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource gameCoreXboxOne_primaryInputSource;
		Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource gameCoreScarlett_primaryInputSource;
		Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource ps4_primaryInputSource;
		Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource ps5_primaryInputSource;
		Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource webGL_primaryInputSource;
		Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource stadia_primaryInputSource;
		bool useXInput;
		bool useNativeMouse;
		bool useEnhancedDeviceSupport;
		bool windowsStandalone_useSteamRawInputControllerWorkaround;
		bool osxStandalone_useEnhancedDeviceSupport;
		bool android_supportUnknownGamepads;
		bool ps4_assignJoysticksByPS4JoyId;
		bool useSteamControllerSupport;
		bool logToScreen;
		bool runInEditMode;
		bool allowInputInEditorSceneView;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone* platformVars_windowsStandalone;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_linuxStandalone;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_osxStandalone;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_windows8Store;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP* platformVars_windowsUWP;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_iOS;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_tvOS;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_android;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_ps3;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_ps4;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_ps5;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_psVita;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_xbox360;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_xboxOne;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne* platformVars_gameCoreXboxOne;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett* platformVars_gameCoreScarlett;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_wii;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_wiiu;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_switch;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_webGL;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars_Stadia* platformVars_stadia;
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* platformVars_unknown;
		int32_t maxJoysticksPerPlayer;
		bool autoAssignJoysticks;
		bool assignJoysticksToPlayingPlayersOnly;
		bool distributeJoysticksEvenly;
		bool reassignJoystickToPreviousOwnerOnReconnect;
		Rewired_Core::Rewired::DeadZone2DType defaultJoystickAxis2DDeadZoneType;
		Rewired_Core::Rewired::AxisSensitivity2DType defaultJoystickAxis2DSensitivityType;
		Rewired_Core::Rewired::AxisSensitivityType defaultAxisSensitivityType;
		bool force4WayHats;
		Rewired_Core::Rewired::Config::ThrottleCalibrationMode throttleCalibrationMode;
		bool activateActionButtonsOnNegativeValue;
		bool deferControllerConnectedEventsOnStart;
		Rewired_Core::Rewired::Config::LogLevelFlags logLevel;
		Rewired_Core::Rewired::Data::ConfigVars_EditorVars* editorSettings;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH>* __platformVarsDict;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy>* __getSetPlatformVariableDict;
		Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>* __configVarsValues;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* __valueDelegates;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH>* get_platformVarsDict();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy>* get_getSetPlatformVariableDict();
		void _ctor();
		bool DoesPlatformUseFallback(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, bool isEditor);
		bool DoesPlatformUseSDL2(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, bool isEditor);
		mscorlib::System::String* GetDebugConfigSettings();
		mscorlib::System::String* GetPlatformVarsRelPath(Rewired_Core::Rewired::Platforms::Platform platform);
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* GetPlatformVars(Rewired_Core::Rewired::Platforms::Platform platform);
		template <typename T> T* Editor_GetAllSerializedPlatformVar(Rewired_Core::Rewired::Data::ConfigVars_AllPlatformVar var)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Editor_GetAllSerializedPlatformVar", std::vector<std::string> { "Rewired.Data.ConfigVars/AllPlatformVar" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&var;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void Editor_SetAllSerializedPlatformVar(Rewired_Core::Rewired::Data::ConfigVars_AllPlatformVar var, mscorlib::System::Object* value);
		bool GetPlatformVar_disableKeyboard();
		bool SetPlatformVar_disableKeyboard(bool value);
		bool GetPlatformVar_ignoreInputWhenAppNotInFocus();
		bool GetPlatformVar_useEnhancedDeviceSupport();
		bool GetPlatformVar_useNativeMouse();
		bool GetPlatformVar_useNativeKeyboard();
		int32_t GetPlatformVar_joystickRefreshRate();
		bool GetPlatformVar_assignJoysticksBySystemId();
		bool SetPlatformVar_ignoreInputWhenAppNotInFocus(bool value);
		bool SetPlatformVar_useEnhancedDeviceSupport(bool value);
		bool SetPlatformVar_useNativeMouse(bool value);
		bool SetPlatformVar_useNativeKeyboard(bool value);
		bool SetPlatformVar_joystickRefreshRate(int32_t value);
		bool SetPlatformVar_assignJoysticksBySystemId(bool value);
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* GetPlatformVars();
		template <typename T> T* GetOrCreatePlatformVars(T& var)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrCreatePlatformVars", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&var;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::MultiBoolValue GetAllSerializedPlatformVar_multiBool(Rewired_Core::Rewired::Data::ConfigVars_AllPlatformVar var);
		bool IsEditModeInputSupported(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform);
		Rewired_Core::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<mscorlib::System::String>* Rewired_Data_IConfigVars_Internal_get_values();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_valueDelegates();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__1();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__2();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__3();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__4();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__5();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__6();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__7();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__8();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__9();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__a();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__b();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__c();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__d();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__e();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__f();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__10();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__11();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__12();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__13();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__14();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__15();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__16();
		Rewired_Core::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__17();
		mscorlib::System::Object* _get_getSetPlatformVariableDict_b__19(Rewired_Core::Rewired::Platforms::Platform p);
		void _get_getSetPlatformVariableDict_b__1a(Rewired_Core::Rewired::Platforms::Platform platform, mscorlib::System::Object* value);
		mscorlib::System::Object* _get_getSetPlatformVariableDict_b__1b(Rewired_Core::Rewired::Platforms::Platform platform);
		void _get_getSetPlatformVariableDict_b__1c(Rewired_Core::Rewired::Platforms::Platform platform, mscorlib::System::Object* value);
		Rewired_Core::Rewired::Config::UpdateLoopSetting _get_valueDelegates_b__1e();
		void _get_valueDelegates_b__1f(Rewired_Core::Rewired::Config::UpdateLoopSetting x);
		bool _get_valueDelegates_b__20();
		void _get_valueDelegates_b__21(bool x);
		Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource _get_valueDelegates_b__22();
		void _get_valueDelegates_b__23(Rewired_Core::Rewired::Platforms::WindowsStandalonePrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource _get_valueDelegates_b__24();
		void _get_valueDelegates_b__25(Rewired_Core::Rewired::Platforms::OSXStandalonePrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource _get_valueDelegates_b__26();
		void _get_valueDelegates_b__27(Rewired_Core::Rewired::Platforms::LinuxStandalonePrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource _get_valueDelegates_b__28();
		void _get_valueDelegates_b__29(Rewired_Core::Rewired::Platforms::WindowsUWPPrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource _get_valueDelegates_b__2a();
		void _get_valueDelegates_b__2b(Rewired_Core::Rewired::Platforms::XboxOnePrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource _get_valueDelegates_b__2c();
		void _get_valueDelegates_b__2d(Rewired_Core::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource _get_valueDelegates_b__2e();
		void _get_valueDelegates_b__2f(Rewired_Core::Rewired::Platforms::GameCoreScarlettPrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource _get_valueDelegates_b__30();
		void _get_valueDelegates_b__31(Rewired_Core::Rewired::Platforms::PS4PrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource _get_valueDelegates_b__32();
		void _get_valueDelegates_b__33(Rewired_Core::Rewired::Platforms::PS5PrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource _get_valueDelegates_b__34();
		void _get_valueDelegates_b__35(Rewired_Core::Rewired::Platforms::WebGLPrimaryInputSource x);
		Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource _get_valueDelegates_b__36();
		void _get_valueDelegates_b__37(Rewired_Core::Rewired::Platforms::StadiaPrimaryInputSource x);
		bool _get_valueDelegates_b__38();
		void _get_valueDelegates_b__39(bool x);
		bool _get_valueDelegates_b__3a();
		void _get_valueDelegates_b__3b(bool x);
		bool _get_valueDelegates_b__3c();
		void _get_valueDelegates_b__3d(bool x);
		bool _get_valueDelegates_b__3e();
		void _get_valueDelegates_b__3f(bool x);
		bool _get_valueDelegates_b__40();
		void _get_valueDelegates_b__41(bool x);
		bool _get_valueDelegates_b__42();
		void _get_valueDelegates_b__43(bool x);
		bool _get_valueDelegates_b__44();
		void _get_valueDelegates_b__45(bool x);
		bool _get_valueDelegates_b__46();
		void _get_valueDelegates_b__47(bool x);
		bool _get_valueDelegates_b__48();
		void _get_valueDelegates_b__49(bool x);
		int32_t _get_valueDelegates_b__4a();
		void _get_valueDelegates_b__4b(int32_t x);
		bool _get_valueDelegates_b__4c();
		void _get_valueDelegates_b__4d(bool x);
		bool _get_valueDelegates_b__4e();
		void _get_valueDelegates_b__4f(bool x);
		bool _get_valueDelegates_b__50();
		void _get_valueDelegates_b__51(bool x);
		bool _get_valueDelegates_b__52();
		void _get_valueDelegates_b__53(bool x);
		Rewired_Core::Rewired::DeadZone2DType _get_valueDelegates_b__54();
		void _get_valueDelegates_b__55(Rewired_Core::Rewired::DeadZone2DType x);
		Rewired_Core::Rewired::AxisSensitivity2DType _get_valueDelegates_b__56();
		void _get_valueDelegates_b__57(Rewired_Core::Rewired::AxisSensitivity2DType x);
		Rewired_Core::Rewired::AxisSensitivityType _get_valueDelegates_b__58();
		void _get_valueDelegates_b__59(Rewired_Core::Rewired::AxisSensitivityType x);
		bool _get_valueDelegates_b__5a();
		void _get_valueDelegates_b__5b(bool x);
		Rewired_Core::Rewired::Config::ThrottleCalibrationMode _get_valueDelegates_b__5c();
		void _get_valueDelegates_b__5d(Rewired_Core::Rewired::Config::ThrottleCalibrationMode x);
		bool _get_valueDelegates_b__5e();
		void _get_valueDelegates_b__5f(bool x);
		bool _get_valueDelegates_b__60();
		void _get_valueDelegates_b__61(bool x);
		Rewired_Core::Rewired::Config::LogLevelFlags _get_valueDelegates_b__62();
		void _get_valueDelegates_b__63(Rewired_Core::Rewired::Config::LogLevelFlags x);
		bool _get_valueDelegates_b__64();
		void _get_valueDelegates_b__65(bool x);
		bool _get_valueDelegates_b__66();
		void _get_valueDelegates_b__67(bool x);
		bool _get_valueDelegates_b__68();
		void _get_valueDelegates_b__69(bool x);
		bool _get_valueDelegates_b__6a();
		void _get_valueDelegates_b__6b(bool x);
		bool _get_valueDelegates_b__6c();
		void _get_valueDelegates_b__6d(bool x);
		int32_t _get_valueDelegates_b__6e();
		void _get_valueDelegates_b__6f(int32_t x);
		bool _get_valueDelegates_b__70();
		void _get_valueDelegates_b__71(bool x);
	};
}

