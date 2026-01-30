#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_HTTPResponse.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct Message; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Concurrent { template <typename T> struct ConcurrentQueue_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace Assembly_CSharp::BestHTTP::ServerSentEvents
{
	struct EventSourceResponse : Assembly_CSharp::BestHTTP::HTTPResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _IsClosed_k__BackingField;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse, Assembly_CSharp::BestHTTP::ServerSentEvents::Message>* OnMessage;
		mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::ServerSentEvents::EventSourceResponse>* OnClosed;
		IL2CPP::Array<uint8_t>* LineBuffer;
		int32_t LineBufferPos;
		Assembly_CSharp::BestHTTP::ServerSentEvents::Message* CurrentMessage;
		mscorlib::System::Collections::Concurrent::ConcurrentQueue_1<Assembly_CSharp::BestHTTP::ServerSentEvents::Message>* CompletedMessages;
		bool get_IsClosed();
		void set_IsClosed(bool value);
		void _ctor(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::IO::Stream* stream, bool isStreamed, bool isFromCache);
		bool Receive(int32_t forceReadRawContentLength, bool readPayloadData);
		void StartReceive();
		void ReceiveThreadFunc(mscorlib::System::Object* param);
		void ReadChunked(mscorlib::System::IO::Stream* stream);
		void ReadRaw(mscorlib::System::IO::Stream* stream, int64_t contentLength);
		void FeedData(IL2CPP::Array<uint8_t>* buffer, int32_t count);
		void ParseLine(IL2CPP::Array<uint8_t>* buffer, int32_t count);
		void BestHTTP_IProtocol_HandleEvents();
	};
}

