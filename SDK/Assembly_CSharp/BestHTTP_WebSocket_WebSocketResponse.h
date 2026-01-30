#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_HTTPResponse.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "BestHTTP_WebSocket_Frames_WebSocketFrameReader.h"
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrameReader; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Concurrent { template <typename T> struct ConcurrentQueue_1; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrame; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::Extensions { template <typename T> struct CircularBuffer_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Assembly_CSharp::BestHTTP::WebSocket
{
	struct WebSocketResponse : Assembly_CSharp::BestHTTP::HTTPResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* _WebSocket_k__BackingField;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse, mscorlib::System::String>* OnText;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse, IL2CPP::Array<mscorlib::System::Byte>>* OnBinary;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader>* OnIncompleteFrame;
		mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse, mscorlib::System::UInt16, mscorlib::System::String>* OnClosed;
		mscorlib::System::TimeSpan _PingFrequnecy_k__BackingField;
		uint16_t _MaxFragmentSize_k__BackingField;
		int32_t _bufferedAmount;
		int32_t _Latency_k__BackingField;
		mscorlib::System::DateTime lastMessage;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader>* IncompleteFrames;
		mscorlib::System::Collections::Concurrent::ConcurrentQueue_1<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader>* CompletedFrames;
		Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader CloseFrame;
		mscorlib::System::Object* SendLock;
		mscorlib::System::Collections::Concurrent::ConcurrentQueue_1<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame>* unsentFrames;
		mscorlib::System::Threading::AutoResetEvent* newFrameSignal;
		bool sendThreadCreated;
		bool closeSent;
		bool closed;
		mscorlib::System::DateTime lastPing;
		Assembly_CSharp::BestHTTP::Extensions::CircularBuffer_1<mscorlib::System::Int32>* rtts;
		struct StaticFields
		{
			int32_t RTTBufferCapacity;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::BestHTTP::WebSocket::WebSocket* get_WebSocket();
		void set_WebSocket(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* value);
		bool get_IsClosed();
		mscorlib::System::TimeSpan get_PingFrequnecy();
		void set_PingFrequnecy(mscorlib::System::TimeSpan value);
		uint16_t get_MaxFragmentSize();
		void set_MaxFragmentSize(uint16_t value);
		int32_t get_BufferedAmount();
		int32_t get_Latency();
		void set_Latency(int32_t value);
		void _ctor(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::IO::Stream* stream, bool isStreamed, bool isFromCache);
		void StartReceive();
		void CloseStream();
		void Send(mscorlib::System::String* message);
		void Send(IL2CPP::Array<uint8_t>* data);
		void Send(IL2CPP::Array<uint8_t>* data, uint64_t offset, uint64_t count);
		void Send(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* frame);
		void Insert(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* frame);
		void SendNow(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* frame);
		void Close();
		void Close(uint16_t code, mscorlib::System::String* msg);
		void StartPinging(int32_t frequency);
		void SendThreadFunc();
		void ReceiveThreadFunc();
		void BestHTTP_IProtocol_HandleEvents();
		void BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif);
		void OnApplicationForegroundStateChanged(bool isPaused);
		void SendPing();
		void CloseWithError(mscorlib::System::String* message);
		int32_t CalculateLatency();
		static void _cctor();
	};
}

