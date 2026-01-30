#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "UnityEngine_UI_ContentSizeFitter_FitMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_DrivenRectTransformTracker.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DrivenRectTransformTracker; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ContentSizeFitter : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::ContentSizeFitter_FitMode m_HorizontalFit;
		UnityEngine_UI::UnityEngine::UI::ContentSizeFitter_FitMode m_VerticalFit;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Rect;
		UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker m_Tracker;
		UnityEngine_UI::UnityEngine::UI::ContentSizeFitter_FitMode get_horizontalFit();
		void set_horizontalFit(UnityEngine_UI::UnityEngine::UI::ContentSizeFitter_FitMode value);
		UnityEngine_UI::UnityEngine::UI::ContentSizeFitter_FitMode get_verticalFit();
		void set_verticalFit(UnityEngine_UI::UnityEngine::UI::ContentSizeFitter_FitMode value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void _ctor();
		void OnEnable();
		void OnDisable();
		void OnRectTransformDimensionsChange();
		void HandleSelfFittingAlongAxis(int32_t axis);
		void SetLayoutHorizontal();
		void SetLayoutVertical();
		void SetDirty();
	};
}

