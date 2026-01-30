#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::Mono { struct RuntimeStructs_RemoteClass; };
namespace mscorlib::Mono { struct RuntimeStructs_RemoteClass; };
#include "Mono_RuntimeClassHandle.h"
namespace mscorlib::Mono { struct RuntimeClassHandle; };

namespace mscorlib::Mono
{
	struct RuntimeRemoteClassHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::RuntimeStructs_RemoteClass* value;
		mscorlib::Mono::RuntimeClassHandle get_ProxyClass();
	};
}

