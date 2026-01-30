#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_AsyncOperation.h"
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AssetBundleModule::UnityEngine
{
	struct AssetBundleCreateRequest : UnityEngine_CoreModule::UnityEngine::AsyncOperation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* get_assetBundle();
		void _ctor();
	};
}

