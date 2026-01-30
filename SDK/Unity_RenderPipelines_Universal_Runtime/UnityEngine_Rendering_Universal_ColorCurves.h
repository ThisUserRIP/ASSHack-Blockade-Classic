#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeComponent.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct TextureCurveParameter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ColorCurves : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* master;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* red;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* green;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* blue;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* hueVsHue;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* hueVsSat;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* satVsSat;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurveParameter* lumVsSat;
		bool IsActive();
		bool IsTileCompatible();
		void _ctor();
	};
}

