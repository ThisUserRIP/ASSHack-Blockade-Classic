#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct TextureCurve; };
#include "UnityEngine_Rendering_VolumeParameter_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct TextureCurveParameter : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurve>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::TextureCurve* value, bool overrideState);
		void Release();
	};
}

