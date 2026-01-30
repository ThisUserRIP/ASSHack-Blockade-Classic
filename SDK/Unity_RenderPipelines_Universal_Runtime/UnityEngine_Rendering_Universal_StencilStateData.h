#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CompareFunction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilOp.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct StencilStateData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool overrideStencilState;
		int32_t stencilReference;
		UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction stencilCompareFunction;
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperation;
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperation;
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperation;
		void _ctor();
	};
}

