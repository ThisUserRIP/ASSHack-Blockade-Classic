#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleReflectionProbe; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleReflectionProbe; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct CullingAllocationInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight* visibleLightsPtr;
		UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight* visibleOffscreenVertexLightsPtr;
		UnityEngine_CoreModule::UnityEngine::Rendering::VisibleReflectionProbe* visibleReflectionProbesPtr;
		int32_t visibleLightCount;
		int32_t visibleOffscreenVertexLightCount;
		int32_t visibleReflectionProbeCount;
	};
}

