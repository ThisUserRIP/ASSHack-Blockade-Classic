#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Mobile_MobileFacebookGameObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity::Mobile::Android
{
	struct AndroidFacebookGameObject : Facebook_Unity::Facebook::Unity::Mobile::MobileFacebookGameObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnAwake();
		void OnEnable();
		void OnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void OnDisable();
		void onPurchaseCompleteHandler(mscorlib::System::Object* data);
		void OnLoginStatusRetrieved(mscorlib::System::String* message);
		void _ctor();
	};
}

