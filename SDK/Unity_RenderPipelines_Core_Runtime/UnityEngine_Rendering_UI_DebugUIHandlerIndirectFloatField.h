#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_UI_DebugUIHandlerWidget.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerWidget; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerIndirectFloatField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* nameLabel;
		UnityEngine_UI::UnityEngine::UI::Text* valueLabel;
		mscorlib::System::Func_1<mscorlib::System::Single>* getter;
		mscorlib::System::Action_1<mscorlib::System::Single>* setter;
		mscorlib::System::Func_1<mscorlib::System::Single>* incStepGetter;
		mscorlib::System::Func_1<mscorlib::System::Single>* incStepMultGetter;
		mscorlib::System::Func_1<mscorlib::System::Single>* decimalsGetter;
		void Init();
		bool OnSelection(bool fromNext, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);
		void OnDeselection();
		void OnIncrement(bool fast);
		void OnDecrement(bool fast);
		void ChangeValue(bool fast, float multiplier);
		void UpdateValueLabel();
		void _ctor();
	};
}

