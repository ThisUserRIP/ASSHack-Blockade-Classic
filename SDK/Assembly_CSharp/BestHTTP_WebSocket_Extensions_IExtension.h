#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocketResponse; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrame; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::WebSocket::Extensions
{
	struct IExtension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void AddNegotiation(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		bool ParseNegotiation(Assembly_CSharp::BestHTTP::WebSocket::WebSocketResponse* resp);
		uint8_t GetFrameHeader(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* writer, uint8_t inFlag);
		IL2CPP::Array<uint8_t>* Encode(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame* writer);
		IL2CPP::Array<uint8_t>* Decode(uint8_t header, IL2CPP::Array<uint8_t>* data, int32_t length);
	};
}

