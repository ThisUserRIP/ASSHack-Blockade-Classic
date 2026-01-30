#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct VKCaptcha
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* id;
		mscorlib::System::String* url;
		mscorlib::System::String* key;
	};
}

