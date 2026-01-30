#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_DebugUI_Field_1.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_IntField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Field_1<mscorlib::System::Int32>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Func_1<mscorlib::System::Int32>* min;
		mscorlib::System::Func_1<mscorlib::System::Int32>* max;
		int32_t incStep;
		int32_t intStepMult;
		int32_t ValidateValue(int32_t value);
		void _ctor();
	};
}

