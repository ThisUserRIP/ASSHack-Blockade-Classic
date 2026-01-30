#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "BestHTTP_SocketIO_TransportEventTypes.h"
#include "BestHTTP_SocketIO_SocketIOEventTypes.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders { struct IJsonEncoder; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "BestHTTP_SocketIO_Packet_PayloadTypes.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };

namespace Assembly_CSharp::BestHTTP::SocketIO
{
	struct Packet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::TransportEventTypes _TransportEvent_k__BackingField;
		Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes _SocketIOEvent_k__BackingField;
		int32_t _AttachmentCount_k__BackingField;
		int32_t _Id_k__BackingField;
		mscorlib::System::String* _Namespace_k__BackingField;
		mscorlib::System::String* _Payload_k__BackingField;
		mscorlib::System::String* _EventName_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* attachments;
		bool _IsDecoded_k__BackingField;
		IL2CPP::Array<mscorlib::System::Object*>* _DecodedArgs_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::String* Placeholder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Assembly_CSharp::BestHTTP::SocketIO::TransportEventTypes get_TransportEvent();
		void set_TransportEvent(Assembly_CSharp::BestHTTP::SocketIO::TransportEventTypes value);
		Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes get_SocketIOEvent();
		void set_SocketIOEvent(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes value);
		int32_t get_AttachmentCount();
		void set_AttachmentCount(int32_t value);
		int32_t get_Id();
		void set_Id(int32_t value);
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		mscorlib::System::String* get_Payload();
		void set_Payload(mscorlib::System::String* value);
		mscorlib::System::String* get_EventName();
		void set_EventName(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* get_Attachments();
		void set_Attachments(mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* value);
		bool get_HasAllAttachment();
		bool get_IsDecoded();
		void set_IsDecoded(bool value);
		IL2CPP::Array<mscorlib::System::Object*>* get_DecodedArgs();
		void set_DecodedArgs(IL2CPP::Array<mscorlib::System::Object*>* value);
		void _ctor();
		void _ctor(mscorlib::System::String* from);
		void _ctor(Assembly_CSharp::BestHTTP::SocketIO::TransportEventTypes transportEvent, Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes packetType, mscorlib::System::String* nsp, mscorlib::System::String* payload, int32_t attachment, int32_t id);
		IL2CPP::Array<mscorlib::System::Object*>* Decode(Assembly_CSharp::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* encoder);
		mscorlib::System::String* DecodeEventName();
		mscorlib::System::String* RemoveEventName(bool removeArrayMarks);
		bool ReconstructAttachmentAsIndex();
		bool ReconstructAttachmentAsBase64();
		void Parse(mscorlib::System::String* from);
		int32_t ToInt(wchar_t ch);
		mscorlib::System::String* Encode();
		IL2CPP::Array<uint8_t>* EncodeBinary();
		void AddAttachmentFromServer(IL2CPP::Array<uint8_t>* data, bool copyFull);
		IL2CPP::Array<uint8_t>* EncodeData(IL2CPP::Array<uint8_t>* data, Assembly_CSharp::BestHTTP::SocketIO::Packet_PayloadTypes type, IL2CPP::Array<uint8_t>* afterHeaderData);
		bool PlaceholderReplacer(mscorlib::System::Action_2<mscorlib::System::String, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>>* onFound);
		mscorlib::System::String* ToString();
		Assembly_CSharp::BestHTTP::SocketIO::Packet* Clone();
		void _ReconstructAttachmentAsIndex_b__50_0(mscorlib::System::String* json, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* obj);
		void _ReconstructAttachmentAsBase64_b__51_0(mscorlib::System::String* json, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* obj);
	};
}

