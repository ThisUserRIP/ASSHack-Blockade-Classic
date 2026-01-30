#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Object.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Hash128.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AssetBundleModule::UnityEngine
{
	struct AssetBundleManifest : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* GetAllAssetBundles();
		UnityEngine_CoreModule::UnityEngine::Hash128 GetAssetBundleHash(mscorlib::System::String* assetBundleName);
		void GetAssetBundleHash_Injected(mscorlib::System::String* assetBundleName, UnityEngine_CoreModule::UnityEngine::Hash128& ret);
	};
}

