#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_CachedAssetBundle.h"
namespace UnityEngine_CoreModule::UnityEngine { struct CachedAssetBundle; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking
{
	struct UnityWebRequestAssetBundle : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* GetAssetBundle(mscorlib::System::String* uri, UnityEngine_CoreModule::UnityEngine::CachedAssetBundle cachedAssetBundle, uint32_t crc);
	};
}

