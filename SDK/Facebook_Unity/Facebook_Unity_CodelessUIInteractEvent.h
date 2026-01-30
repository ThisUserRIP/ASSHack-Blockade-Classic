#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Facebook_Unity::Facebook::Unity { struct FBSDKEventBindingManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct CodelessUIInteractEvent : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager* _eventBindingManager_k__BackingField;
		Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager* get_eventBindingManager();
		void set_eventBindingManager(Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager* value);
		void Awake();
		static void SetLoggerInitAndroid();
		static void SetLoggerInitIos();
		void Update();
		void OnReceiveMapping(mscorlib::System::String* message);
		void _ctor();
	};
}

