#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct AuthenticationSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		Assembly_CSharp::BestHTTP::SignalR::Connection* signalRConnection;
		mscorlib::System::String* userName;
		mscorlib::System::String* role;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		void Start();
		void OnDestroy();
		void OnGUI();
		void signalRConnection_OnConnected(Assembly_CSharp::BestHTTP::SignalR::Connection* manager);
		void Restart();
		void _ctor();
		void _OnGUI_b__7_0();
	};
}

