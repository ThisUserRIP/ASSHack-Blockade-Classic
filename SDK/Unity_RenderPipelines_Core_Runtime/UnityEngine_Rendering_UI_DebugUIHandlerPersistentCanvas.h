#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerValue; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Value; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerPersistentCanvas : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* panel;
		UnityEngine_CoreModule::UnityEngine::RectTransform* valuePrefab;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerValue>* m_Items;
		void Toggle(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Value* widget);
		void Clear();
		void _ctor();
	};
}

