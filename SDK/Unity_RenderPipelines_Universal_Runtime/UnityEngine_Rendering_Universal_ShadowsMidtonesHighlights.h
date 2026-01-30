#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct Vector4Parameter; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct MinFloatParameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShadowsMidtonesHighlights : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Vector4Parameter* shadows;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Vector4Parameter* midtones;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Vector4Parameter* highlights;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* shadowsStart;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* shadowsEnd;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* highlightsStart;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MinFloatParameter* highlightsEnd;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

