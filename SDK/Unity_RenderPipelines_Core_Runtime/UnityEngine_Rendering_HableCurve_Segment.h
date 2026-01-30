#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_HableCurve.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct HableCurve; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct HableCurve_Segment : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float offsetX;
		float offsetY;
		float scaleX;
		float scaleY;
		float lnA;
		float B;
		float Eval(float x);
		void _ctor();
	};
}

