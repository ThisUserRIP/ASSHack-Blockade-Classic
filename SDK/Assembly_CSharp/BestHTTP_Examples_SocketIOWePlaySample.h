#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BestHTTP_Examples_SocketIOWePlaySample_States.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct SocketIOWePlaySample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* controls;
		int32_t MaxMessages;
		Assembly_CSharp::BestHTTP::Examples::SocketIOWePlaySample_States State;
		Assembly_CSharp::BestHTTP::SocketIO::Socket* Socket;
		mscorlib::System::String* Nick;
		mscorlib::System::String* messageToSend;
		int32_t connections;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* messages;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		UnityEngine_CoreModule::UnityEngine::Texture2D* FrameTexture;
		struct StaticFields
		{
			float ratio;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		void OnDestroy();
		void Update();
		void OnGUI();
		void DrawLoginScreen();
		void DrawControls();
		void DrawChat(bool withInput);
		void AddMessage(mscorlib::System::String* msg);
		void SendMessage();
		void Join();
		void Reload();
		void OnConnected(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnJoined(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnReload(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnMessage(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnMove(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnJoin(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnConnections(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnFrame(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void OnError(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void _ctor();
		void _OnGUI_b__15_1();
		void _OnGUI_b__15_2();
	};
}

