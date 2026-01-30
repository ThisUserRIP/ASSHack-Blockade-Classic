#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct GuidUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* GuidToSerializedGuid(mscorlib::System::Guid guid);
		static mscorlib::System::Guid SerializedGuidToGuid(IL2CPP::Array<uint8_t>* serializedGuid);
	};
}

