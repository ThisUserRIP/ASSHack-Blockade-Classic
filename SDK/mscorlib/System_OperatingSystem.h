#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_PlatformID.h"
namespace mscorlib::System { struct Version; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct OperatingSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::PlatformID _platform;
		mscorlib::System::Version* _version;
		mscorlib::System::String* _servicePack;
		void _ctor(mscorlib::System::PlatformID platform, mscorlib::System::Version* version);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* information, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::PlatformID get_Platform();
		mscorlib::System::Version* get_Version();
		mscorlib::System::String* get_ServicePack();
		mscorlib::System::Object* Clone();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* ToString();
	};
}

