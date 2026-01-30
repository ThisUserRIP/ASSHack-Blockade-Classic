#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_WebSocket_WebSocketStates.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::WebSocket::Extensions { struct IExtension; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketOpenDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketMessageDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketBinaryDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketClosedDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketErrorDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketErrorDescriptionDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct OnWebSocketIncompleteFrameDelegate; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocketResponse; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrame; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct Object; };
#include "BestHTTP_WebSocket_Frames_WebSocketFrameReader.h"
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrameReader; };

namespace Assembly_CSharp::BestHTTP::WebSocket
{
	struct WebSocket : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::WebSocket::WebSocketStates _State_k__BackingField;
		bool _StartPingThread_k__BackingField;
		int32_t _PingFrequency_k__BackingField;
		mscorlib::System::TimeSpan _CloseAfterNoMesssage_k__BackingField;
		Assembly_CSharp::BestHTTP::HTTPRequest* _InternalRequest_k__BackingField;
		IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Extensions::IExtension*>* _Extensions_k__BackingField;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketOpenDelegate* OnOpen;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketMessageDelegate* OnMessage;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketBinaryDelegate* OnBinary;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketClosedDelegate* OnClosed;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketErrorDelegate* OnError;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketErrorDescriptionDelegate* OnErrorDesc;
		Assembly_CSharp::BestHTTP::WebSocket::OnWebSocketIncompleteFrameDelegate* OnIncompleteFrame;
		bool requestSent;
		Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* webSocket;
		Assembly_CSharp::BestHTTP::WebSocket::WebSocketStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::WebSocket::WebSocketStates value);
		bool get_IsOpen();
		int32_t get_BufferedAmount();
		bool get_StartPingThread();
		void set_StartPingThread(bool value);
		int32_t get_PingFrequency();
		void set_PingFrequency(int32_t value);
		mscorlib::System::TimeSpan get_CloseAfterNoMesssage();
		void set_CloseAfterNoMesssage(mscorlib::System::TimeSpan value);
		Assembly_CSharp::BestHTTP::HTTPRequest* get_InternalRequest();
		void set_InternalRequest(Assembly_CSharp::BestHTTP::HTTPRequest* value);
		IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Extensions::IExtension*>* get_Extensions();
		void set_Extensions(IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Extensions::IExtension*>* value);
		int32_t get_Latency();
		mscorlib::System::DateTime get_LastMessageReceived();
		void _ctor(System::System::Uri* uri);
		void _ctor(System::System::Uri* uri, mscorlib::System::String* origin, mscorlib::System::String* protocol, IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Extensions::IExtension*>* extensions);
		void OnInternalRequestCallback(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnInternalRequestUpgraded(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void Open();
		void Send(mscorlib::System::String* message);
		void Send(IL2CPP::Array<uint8_t>* buffer);
		void Send(IL2CPP::Array<uint8_t>* buffer, uint64_t offset, uint64_t count);
		void Send(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* frame);
		void Close();
		void Close(uint16_t code, mscorlib::System::String* message);
		static IL2CPP::Array<uint8_t>* EncodeCloseData(uint16_t code, mscorlib::System::String* message);
		mscorlib::System::String* GetSecKey(IL2CPP::Array<mscorlib::System::Object*>* from);
		void _OnInternalRequestUpgraded_b__44_0(Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* ws, mscorlib::System::String* msg);
		void _OnInternalRequestUpgraded_b__44_1(Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* ws, IL2CPP::Array<uint8_t>* bin);
		void _OnInternalRequestUpgraded_b__44_2(Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* ws, uint16_t code, mscorlib::System::String* msg);
		void _OnInternalRequestUpgraded_b__44_3(Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* ws, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader frame);
	};
}

