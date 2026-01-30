#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_HableCurve.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct HableCurve; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct HableCurve_DirectParams
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x0;
		float y0;
		float x1;
		float y1;
		float W;
		float overshootX;
		float overshootY;
		float gamma;
	};
}

