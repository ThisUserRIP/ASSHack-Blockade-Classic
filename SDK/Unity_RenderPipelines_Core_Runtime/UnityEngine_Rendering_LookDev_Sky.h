#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Cubemap; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev
{
	struct Sky
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Cubemap* cubemap;
		float longitudeOffset;
		float exposure;
	};
}

