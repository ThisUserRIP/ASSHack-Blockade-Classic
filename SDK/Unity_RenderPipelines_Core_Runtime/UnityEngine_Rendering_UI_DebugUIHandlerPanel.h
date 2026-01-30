#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct ScrollRect; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Panel; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerWidget; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerPanel : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* nameLabel;
		UnityEngine_UI::UnityEngine::UI::ScrollRect* scrollRect;
		UnityEngine_CoreModule::UnityEngine::RectTransform* viewport;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_ScrollTransform;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_ContentTransform;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_MaskTransform;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* m_Panel;
		void OnEnable();
		void SetPanel(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* panel);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* GetPanel();
		void ScrollTo(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* target);
		float GetYPosInScroll(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetFirstItem();
		void _ctor();
	};
}

