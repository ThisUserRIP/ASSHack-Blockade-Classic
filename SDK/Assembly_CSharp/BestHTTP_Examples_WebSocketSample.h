#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct Exception; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct WebSocketSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* address;
		mscorlib::System::String* msgToSend;
		mscorlib::System::String* Text;
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		void OnDestroy();
		void OnGUI();
		void OnOpen(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws);
		void OnMessageReceived(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, mscorlib::System::String* message);
		void OnClosed(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, uint16_t code, mscorlib::System::String* message);
		void OnError(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* ws, mscorlib::System::Exception* ex);
		void _ctor();
		void _OnGUI_b__6_0();
	};
}

