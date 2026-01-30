#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Application_LowMemoryCallback; };
namespace UnityEngine_CoreModule::UnityEngine { struct Application_LogCallback; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_RuntimePlatform.h"
#include "UnityEngine_SystemLanguage.h"
#include "UnityEngine_LogType.h"
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Application : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Application_LowMemoryCallback* lowMemory;
			UnityEngine_CoreModule::UnityEngine::Application_LogCallback* s_LogCallbackHandler;
			UnityEngine_CoreModule::UnityEngine::Application_LogCallback* s_LogCallbackHandlerThreaded;
			mscorlib::System::Action_1<mscorlib::System::Boolean>* focusChanged;
			mscorlib::System::Action_1<mscorlib::System::String>* deepLinkActivated;
			mscorlib::System::Func_1<mscorlib::System::Boolean>* wantsToQuit;
			mscorlib::System::Action* quitting;
			mscorlib::System::Action* unloading;
			UnityEngine_CoreModule::UnityEngine::Application_LogCallback* s_RegisterLogCallbackDeprecated;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Quit(int32_t exitCode);
		static void Quit();
		static bool get_isPlaying();
		static bool get_runInBackground();
		static void set_runInBackground(bool value);
		static mscorlib::System::String* get_dataPath();
		static mscorlib::System::String* get_streamingAssetsPath();
		static mscorlib::System::String* get_persistentDataPath();
		static mscorlib::System::String* get_temporaryCachePath();
		static void Internal_ExternalCall(mscorlib::System::String* script);
		static mscorlib::System::String* get_unityVersion();
		static mscorlib::System::String* get_productName();
		static mscorlib::System::String* get_cloudProjectId();
		static void OpenURL(mscorlib::System::String* url);
		static void set_targetFrameRate(int32_t value);
		static void SetLogCallbackDefined(bool defined);
		static UnityEngine_CoreModule::UnityEngine::RuntimePlatform get_platform();
		static bool get_isMobilePlatform();
		static UnityEngine_CoreModule::UnityEngine::SystemLanguage get_systemLanguage();
		static void CallLowMemory();
		static void add_logMessageReceived(UnityEngine_CoreModule::UnityEngine::Application_LogCallback* value);
		static void remove_logMessageReceived(UnityEngine_CoreModule::UnityEngine::Application_LogCallback* value);
		static void add_logMessageReceivedThreaded(UnityEngine_CoreModule::UnityEngine::Application_LogCallback* value);
		static void remove_logMessageReceivedThreaded(UnityEngine_CoreModule::UnityEngine::Application_LogCallback* value);
		static void CallLogCallback(mscorlib::System::String* logString, mscorlib::System::String* stackTrace, UnityEngine_CoreModule::UnityEngine::LogType type, bool invokedOnMainThread);
		static mscorlib::System::String* ObjectToJSString(mscorlib::System::Object* o);
		static void ExternalCall(mscorlib::System::String* functionName, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* BuildInvocationForArguments(mscorlib::System::String* functionName, IL2CPP::Array<mscorlib::System::Object*>* args);
		static bool Internal_ApplicationWantsToQuit();
		static void Internal_ApplicationQuit();
		static void Internal_ApplicationUnload();
		static void InvokeOnBeforeRender();
		static void InvokeFocusChanged(bool focus);
		static void InvokeDeepLinkActivated(mscorlib::System::String* url);
		static void RegisterLogCallback(UnityEngine_CoreModule::UnityEngine::Application_LogCallback* handler);
		static void RegisterLogCallback(UnityEngine_CoreModule::UnityEngine::Application_LogCallback* handler, bool threaded);
		static bool get_isEditor();
	};
}

