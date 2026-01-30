#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_StencilMaterial.h"
namespace UnityEngine_UI::UnityEngine::UI { struct StencilMaterial; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilOp.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CompareFunction.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ColorWriteMask.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct StencilMaterial_MatEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* baseMat;
		UnityEngine_CoreModule::UnityEngine::Material* customMat;
		int32_t count;
		int32_t stencilId;
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp operation;
		UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction;
		int32_t readMask;
		int32_t writeMask;
		bool useAlphaClip;
		UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask colorMask;
		void _ctor();
	};
}

