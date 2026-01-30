#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data { struct UserData; };
namespace Rewired_Core::Rewired::Data { struct ControllerDataFiles; };
#include "Rewired_Platforms_EditorPlatform.h"
#include "Rewired_Platforms_Platform.h"
#include "Rewired_Platforms_WebplayerPlatform.h"
#include "Rewired_Platforms_ScriptingBackend.h"
#include "Rewired_Platforms_ScriptingAPILevel.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_UpdateLoopType.h"
#include "Rewired_Config_UpdateLoopSetting.h"
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace mscorlib::System { struct String; };
#include "Rewired_InputManager_Base_ExceptionPoint.h"
namespace mscorlib::System { struct Exception; };
namespace Rewired_Core::Rewired::Utils::Interfaces { struct IExternalTools; };

namespace Rewired_Core::Rewired
{
	struct InputManager_Base : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _dontDestroyOnLoad;
		Rewired_Core::Rewired::Data::UserData* _userData;
		Rewired_Core::Rewired::Data::ControllerDataFiles* _controllerDataFiles;
		bool isCompiling;
		bool initialized;
		bool criticalError;
		Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform;
		Rewired_Core::Rewired::Platforms::Platform platform;
		Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform;
		bool isEditor;
		bool _detectedPlatformInEditor;
		Rewired_Core::Rewired::Platforms::ScriptingBackend scriptingBackend;
		Rewired_Core::Rewired::Platforms::ScriptingAPILevel scriptingAPILevel;
		bool _duplicateRIMError;
		bool _isAwake;
		Rewired_Core::Rewired::Data::UserData* get_userData();
		void set_userData(Rewired_Core::Rewired::Data::UserData* value);
		Rewired_Core::Rewired::Data::ControllerDataFiles* get_dataFiles();
		bool get_runInEditMode();
		void set_runInEditMode(bool value);
		bool get_isRunningInEditMode();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void OnApplicationFocus(bool isFocused);
		void Start();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void OnGUIUpdate();
		void DoUpdate(Rewired_Core::Rewired::UpdateLoopType updateLoopType, Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSettingBit);
		void TryStartRunInEditMode();
		void TryStopRunInEditMode();
		bool ManualInitialize();
		void Initialize();
		mscorlib::System::Object* InitializePlatform(Rewired_Core::Rewired::Data::ConfigVars* configVars);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::Assembly>* GetNativeAssembliesFromResources();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Reflection::Assembly>* GetNativeAssembliesByReflection();
		IL2CPP::Array<uint8_t>* GetNativeDLLBytesByReflection();
		void AddTextAssetInResourcesToList(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::TextAsset>* list, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* dllPaths);
		mscorlib::System::String* SetPlatformToEditorPlatform();
		bool CheckEditorPlatformMatches();
		mscorlib::System::String* GetPlatformSpecificAssemblyName();
		bool IsOnlyManagerInScene();
		void RecompileStart();
		void RecompileEnd();
		void OnSceneLoaded();
		void HandleException(Rewired_Core::Rewired::InputManager_Base_ExceptionPoint location, mscorlib::System::String* message, mscorlib::System::Exception* exception);
		void ResetAll();
		Rewired_Core::Rewired::Platforms::EditorPlatform GetEditorPlatform();
		void GetSupportedEditModeControllerTypes(bool& keyboardSupported, bool& mouseSupported, bool& joystickSupported);
		bool IsEditModeSupported();
		void OnInitialized();
		void OnDeinitialized();
		void DetectPlatform();
		void CheckRecompile();
		Rewired_Core::Rewired::Utils::Interfaces::IExternalTools* GetExternalTools();
		void _ctor();
		bool _GetNativeAssembliesByReflection_b__1(mscorlib::System::Reflection::Assembly* x);
	};
}

