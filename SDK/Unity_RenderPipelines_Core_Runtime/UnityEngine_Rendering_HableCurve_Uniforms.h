#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_HableCurve.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct HableCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct HableCurve_Uniforms : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve* parent;
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve* parent);
		UnityEngine_CoreModule::UnityEngine::Vector4 get_curve();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_toeSegmentA();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_toeSegmentB();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_midSegmentA();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_midSegmentB();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_shoSegmentA();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_shoSegmentB();
	};
}

