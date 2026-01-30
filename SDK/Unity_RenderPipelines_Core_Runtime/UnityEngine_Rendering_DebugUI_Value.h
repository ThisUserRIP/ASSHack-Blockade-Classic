#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_DebugUI_Widget.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_Value : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Func_1<mscorlib::System::Object>* _getter_k__BackingField;
		float refreshRate;
		mscorlib::System::Func_1<mscorlib::System::Object>* get_getter();
		void set_getter(mscorlib::System::Func_1<mscorlib::System::Object>* value);
		void _ctor();
		mscorlib::System::Object* GetValue();
	};
}

