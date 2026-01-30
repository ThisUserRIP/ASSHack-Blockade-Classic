#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerPersistentCanvas; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Value; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerValue; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerPersistentCanvas___c__DisplayClass3_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Value* widget;
		void _ctor();
		bool _Toggle_b__0(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerValue* x);
	};
}

