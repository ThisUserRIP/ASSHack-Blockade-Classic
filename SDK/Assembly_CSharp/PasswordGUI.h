#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct CServerData; };
#include "GUIGS.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct PasswordGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		mscorlib::System::String* msg;
		mscorlib::System::String* password;
		Assembly_CSharp::CServerData* server;
		Assembly_CSharp::GUIGS _lastState;
		void Show(bool val, Assembly_CSharp::CServerData* _server);
		void OnGUI();
		void _ctor();
	};
}

