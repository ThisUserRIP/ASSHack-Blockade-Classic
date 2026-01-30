#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::IO { struct MemoryStream; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodCallMessage; };
namespace mscorlib::System { struct Object; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct CADSerializer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(mscorlib::System::IO::MemoryStream* mem, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
		static mscorlib::System::IO::MemoryStream* SerializeMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		static mscorlib::System::Object* DeserializeObjectSafe(IL2CPP::Array<uint8_t>* mem);
		static mscorlib::System::IO::MemoryStream* SerializeObject(mscorlib::System::Object* obj);
		static mscorlib::System::Object* DeserializeObject(mscorlib::System::IO::MemoryStream* mem);
	};
}

