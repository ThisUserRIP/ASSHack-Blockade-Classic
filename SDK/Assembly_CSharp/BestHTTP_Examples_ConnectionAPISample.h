#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::Examples { struct GUIMessageList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "BestHTTP_SignalR_ConnectionStates.h"

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct ConnectionAPISample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		Assembly_CSharp::BestHTTP::SignalR::Connection* signalRConnection;
		mscorlib::System::String* ToEveryBodyText;
		mscorlib::System::String* ToMeText;
		mscorlib::System::String* PrivateMessageText;
		mscorlib::System::String* PrivateMessageUserOrGroupName;
		Assembly_CSharp::BestHTTP::Examples::GUIMessageList* messages;
		void Start();
		void OnGUI();
		void OnDestroy();
		void signalRConnection_OnGeneralMessage(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, mscorlib::System::Object* data);
		void signalRConnection_OnStateChanged(Assembly_CSharp::BestHTTP::SignalR::Connection* manager, Assembly_CSharp::BestHTTP::SignalR::ConnectionStates oldState, Assembly_CSharp::BestHTTP::SignalR::ConnectionStates newState);
		void Broadcast(mscorlib::System::String* text);
		void BroadcastExceptMe(mscorlib::System::String* text);
		void EnterName(mscorlib::System::String* name);
		void JoinGroup(mscorlib::System::String* groupName);
		void LeaveGroup(mscorlib::System::String* groupName);
		void SendToMe(mscorlib::System::String* text);
		void SendToUser(mscorlib::System::String* userOrGroupName, mscorlib::System::String* text);
		void SendToGroup(mscorlib::System::String* userOrGroupName, mscorlib::System::String* text);
		void _ctor();
		void _OnGUI_b__9_0();
	};
}

