#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_UI_DebugUIHandlerWidget.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerWidget; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerIndirectToggle : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* nameLabel;
		UnityEngine_UI::UnityEngine::UI::Toggle* valueToggle;
		UnityEngine_UI::UnityEngine::UI::Image* checkmarkImage;
		mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* getter;
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Boolean>* setter;
		int32_t index;
		void Init();
		bool OnSelection(bool fromNext, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);
		void OnDeselection();
		void OnAction();
		void UpdateValueLabel();
		void _ctor();
	};
}

