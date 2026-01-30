#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct SocketManager; };
#include "BestHTTP_Examples_SocketIOChatSample_ChatStates.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct SocketIOChatSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan TYPING_TIMER_LENGTH;
		Assembly_CSharp::BestHTTP::SocketIO::SocketManager* Manager;
		Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample_ChatStates State;
		mscorlib::System::String* userName;
		mscorlib::System::String* message;
		mscorlib::System::String* chatLog;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		bool typing;
		mscorlib::System::DateTime lastTypingTime;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* typingUsers;
		void Start();
		void OnDestroy();
		void Update();
		void OnGUI();
		void DrawLoginScreen();
		void DrawChatScreen();
		void SetUserName();
		void SendMessage();
		void UpdateTyping();
		void addParticipantsMessage(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data);
		void addChatMessage(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data);
		void AddChatTyping(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data);
		void RemoveChatTyping(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data);
		void OnLogin(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnNewMessage(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnUserJoined(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnUserLeft(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnTyping(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnStopTyping(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void _ctor();
		void _DrawLoginScreen_b__15_0();
		void _DrawChatScreen_b__16_0();
	};
}

