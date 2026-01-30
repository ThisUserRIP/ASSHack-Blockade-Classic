#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking
{
	struct UnityWebRequestTexture : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* GetTexture(mscorlib::System::String* uri);
		static UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* GetTexture(mscorlib::System::String* uri, bool nonReadable);
	};
}

