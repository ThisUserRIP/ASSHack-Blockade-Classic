#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_UI_DebugUIHandlerWidget.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct UIFoldout; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerIndirectFloatField; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Vector3Field; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerContainer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Widget; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerWidget; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerVector3 : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* nameLabel;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::UIFoldout* valueToggle;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldZ;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Vector3Field* m_Field;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container;
		void SetWidget(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* widget);
		void SetValue(float v, bool x, bool y, bool z);
		void SetupSettings(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field);
		bool OnSelection(bool fromNext, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);
		void OnDeselection();
		void OnIncrement(bool fast);
		void OnDecrement(bool fast);
		void OnAction();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next();
		void _ctor();
		float _SetWidget_b__7_0();
		void _SetWidget_b__7_1(float v);
		float _SetWidget_b__7_2();
		void _SetWidget_b__7_3(float v);
		float _SetWidget_b__7_4();
		void _SetWidget_b__7_5(float v);
		float _SetupSettings_b__9_0();
		float _SetupSettings_b__9_1();
		float _SetupSettings_b__9_2();
	};
}

