#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_WebSocket_Frames_WebSocketFrameTypes.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::BestHTTP::WebSocket { struct WebSocket; };

namespace Assembly_CSharp::BestHTTP::WebSocket::Frames
{
	struct WebSocketFrameReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t _Header_k__BackingField;
		bool _IsFinal_k__BackingField;
		Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes _Type_k__BackingField;
		bool _HasMask_k__BackingField;
		uint64_t _Length_k__BackingField;
		IL2CPP::Array<uint8_t>* _Data_k__BackingField;
		mscorlib::System::String* _DataAsText_k__BackingField;
		uint8_t get_Header();
		void set_Header(uint8_t value);
		bool get_IsFinal();
		void set_IsFinal(bool value);
		Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes get_Type();
		void set_Type(Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameTypes value);
		bool get_HasMask();
		void set_HasMask(bool value);
		uint64_t get_Length();
		void set_Length(uint64_t value);
		IL2CPP::Array<uint8_t>* get_Data();
		void set_Data(IL2CPP::Array<uint8_t>* value);
		mscorlib::System::String* get_DataAsText();
		void set_DataAsText(mscorlib::System::String* value);
		void Read(mscorlib::System::IO::Stream* stream);
		uint8_t ReadByte(mscorlib::System::IO::Stream* stream);
		void Assemble(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::WebSocket::Frames::WebSocketFrameReader>* fragments);
		void DecodeWithExtensions(Assembly_CSharp::BestHTTP::WebSocket::WebSocket* webSocket);
	};
}

