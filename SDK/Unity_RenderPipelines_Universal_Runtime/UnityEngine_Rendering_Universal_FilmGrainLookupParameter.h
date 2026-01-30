#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_FilmGrainLookup.h"
#include "..\Unity_RenderPipelines_Core_Runtime\UnityEngine_Rendering_VolumeParameter_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct FilmGrainLookupParameter : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::FilmGrainLookup>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::FilmGrainLookup value, bool overrideState);
	};
}

