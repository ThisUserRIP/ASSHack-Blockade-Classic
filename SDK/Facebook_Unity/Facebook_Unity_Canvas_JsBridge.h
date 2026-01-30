#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Facebook_Unity::Facebook::Unity::Canvas { struct ICanvasFacebookCallbackHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct JsBridge : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::Canvas::ICanvasFacebookCallbackHandler* facebook;
		void Start();
		void OnLoginComplete(mscorlib::System::String* responseJsonData);
		void OnFacebookAuthResponseChange(mscorlib::System::String* responseJsonData);
		void OnPayComplete(mscorlib::System::String* responseJsonData);
		void OnAppRequestsComplete(mscorlib::System::String* responseJsonData);
		void OnShareLinkComplete(mscorlib::System::String* responseJsonData);
		void OnFacebookFocus(mscorlib::System::String* state);
		void OnInitComplete(mscorlib::System::String* responseJsonData);
		void OnUrlResponse(mscorlib::System::String* url);
		void _ctor();
	};
}

