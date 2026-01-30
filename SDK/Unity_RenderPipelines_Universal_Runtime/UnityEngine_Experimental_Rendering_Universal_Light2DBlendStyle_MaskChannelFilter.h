#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_Universal_Light2DBlendStyle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2DBlendStyle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Light2DBlendStyle_MaskChannelFilter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector4 _mask_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector4 _inverted_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector4 get_mask();
		void set_mask(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		UnityEngine_CoreModule::UnityEngine::Vector4 get_inverted();
		void set_inverted(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector4 m, UnityEngine_CoreModule::UnityEngine::Vector4 i);
	};
}

