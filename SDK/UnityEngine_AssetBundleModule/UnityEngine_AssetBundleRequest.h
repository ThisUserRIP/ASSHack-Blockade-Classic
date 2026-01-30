#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ResourceRequest.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AssetBundleModule::UnityEngine
{
	struct AssetBundleRequest : UnityEngine_CoreModule::UnityEngine::ResourceRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Object* GetResult();
		UnityEngine_CoreModule::UnityEngine::Object* get_asset();
		void _ctor();
	};
}

