#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_WebSocket_Frames_WebSocketFrameTypes.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "BestHTTP_WebSocket_Frames_RawFrameData.h"
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct RawFrameData; };
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames { struct WebSocketFrame; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Assembly_CSharp::BestHTTP::WebSocket::Frames
{
	struct WebSocketFrame : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes _Type_k__BackingField;
		bool _IsFinal_k__BackingField;
		uint8_t _Header_k__BackingField;
		IL2CPP::Array<uint8_t>* _Data_k__BackingField;
		int32_t _DataLength_k__BackingField;
		bool _UseExtensions_k__BackingField;
		Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes get_Type();
		void set_Type(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes value);
		bool get_IsFinal();
		void set_IsFinal(bool value);
		uint8_t get_Header();
		void set_Header(uint8_t value);
		IL2CPP::Array<uint8_t>* get_Data();
		void set_Data(IL2CPP::Array<uint8_t>* value);
		int32_t get_DataLength();
		void set_DataLength(int32_t value);
		bool get_UseExtensions();
		void set_UseExtensions(bool value);
		void _ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data);
		void _ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data, bool useExtensions);
		void _ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data, bool isFinal, bool useExtensions);
		void _ctor(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket, Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes type, IL2CPP::Array<uint8_t>* data, uint64_t pos, uint64_t length, bool isFinal, bool useExtensions);
		Assembly_CSharp::BestHTTP::WebSocket::Frames::RawFrameData Get();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrame*>* Fragment(uint16_t maxFragmentSize);
	};
}

