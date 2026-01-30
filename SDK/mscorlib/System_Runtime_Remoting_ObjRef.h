#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting { struct IChannelInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting { struct IRemotingTypeInfo; };
namespace mscorlib::System::Runtime::Remoting { struct IEnvoyInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ObjRef : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::IChannelInfo* channel_info;
		mscorlib::System::String* uri;
		mscorlib::System::Runtime::Remoting::IRemotingTypeInfo* typeInfo;
		mscorlib::System::Runtime::Remoting::IEnvoyInfo* envoyInfo;
		int32_t flags;
		mscorlib::System::Type* _serverType;
		struct StaticFields
		{
			int32_t MarshalledObjectRef;
			int32_t WellKnowObjectRef;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* uri, mscorlib::System::Runtime::Remoting::IChannelInfo* cinfo);
		mscorlib::System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(int32_t domainId, IL2CPP::Array<uint8_t>* tInfo);
		IL2CPP::Array<uint8_t>* SerializeType();
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* url, mscorlib::System::Object* remoteChannelData);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool get_IsReferenceToWellKnow();
		mscorlib::System::Runtime::Remoting::IChannelInfo* get_ChannelInfo();
		mscorlib::System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo();
		void set_EnvoyInfo(mscorlib::System::Runtime::Remoting::IEnvoyInfo* value);
		mscorlib::System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo();
		void set_TypeInfo(mscorlib::System::Runtime::Remoting::IRemotingTypeInfo* value);
		mscorlib::System::String* get_URI();
		void set_URI(mscorlib::System::String* value);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Object* GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);
		void UpdateChannelInfo();
		mscorlib::System::Type* get_ServerType();
		static void _cctor();
	};
}

