#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_LightmapBakeType.h"
#include "UnityEngine_MixedLightingMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct LightBakingOutput
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t probeOcclusionLightIndex;
		int32_t occlusionMaskChannel;
		UnityEngine_CoreModule::UnityEngine::LightmapBakeType lightmapBakeType;
		UnityEngine_CoreModule::UnityEngine::MixedLightingMode mixedLightingMode;
		bool isBaked;
	};
}

