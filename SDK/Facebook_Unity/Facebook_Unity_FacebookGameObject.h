#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Facebook_Unity::Facebook::Unity { struct IFacebookImplementation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FacebookGameObject : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::IFacebookImplementation* _Facebook_k__BackingField;
		Facebook_Unity::Facebook::Unity::IFacebookImplementation* get_Facebook();
		void set_Facebook(Facebook_Unity::Facebook::Unity::IFacebookImplementation* value);
		void Awake();
		void OnInitComplete(mscorlib::System::String* message);
		void OnLoginComplete(mscorlib::System::String* message);
		void OnLogoutComplete(mscorlib::System::String* message);
		void OnGetAppLinkComplete(mscorlib::System::String* message);
		void OnAppRequestsComplete(mscorlib::System::String* message);
		void OnShareLinkComplete(mscorlib::System::String* message);
		void OnAwake();
		void _ctor();
	};
}

