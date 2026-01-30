#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct EventSource; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_ServerSentEvents_States.h"
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct Message; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct SimpleTest : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* address;
		Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource;
		mscorlib::System::String* Text;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		void OnGUI();
		void OnOpen(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource);
		void OnClosed(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource);
		void OnError(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, mscorlib::System::String* error);
		void OnStateChanged(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::States oldState, Assembly_CSharp::BestHTTP::ServerSentEvents::States newState);
		void OnMessage(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::Message* message);
		void OnDateTime(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* eventSource, Assembly_CSharp::BestHTTP::ServerSentEvents::Message* message);
		void OnDestroy();
		void _ctor();
		void _OnGUI_b__4_0();
	};
}

