#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Rendering_VolumeParameter_1.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct NoInterpColorParameter : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter_1<UnityEngine_CoreModule::UnityEngine::Color>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool hdr;
		bool showAlpha;
		bool showEyeDropper;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color value, bool overrideState);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color value, bool hdr, bool showAlpha, bool showEyeDropper, bool overrideState);
	};
}

