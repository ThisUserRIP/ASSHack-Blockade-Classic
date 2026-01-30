#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "UnityEngine_UI_AspectRatioFitter_AspectMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_DrivenRectTransformTracker.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DrivenRectTransformTracker; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct AspectRatioFitter : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::AspectRatioFitter_AspectMode m_AspectMode;
		float m_AspectRatio;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Rect;
		bool m_DelayedSetDirty;
		bool m_DoesParentExist;
		UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker m_Tracker;
		UnityEngine_UI::UnityEngine::UI::AspectRatioFitter_AspectMode get_aspectMode();
		void set_aspectMode(UnityEngine_UI::UnityEngine::UI::AspectRatioFitter_AspectMode value);
		float get_aspectRatio();
		void set_aspectRatio(float value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void _ctor();
		void OnEnable();
		void Start();
		void OnDisable();
		void OnTransformParentChanged();
		void Update();
		void OnRectTransformDimensionsChange();
		void UpdateRect();
		float GetSizeDeltaToProduceSize(float size, int32_t axis);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetParentSize();
		void SetLayoutHorizontal();
		void SetLayoutVertical();
		void SetDirty();
		bool IsComponentValidOnObject();
		bool IsAspectModeValid();
		bool DoesParentExists();
	};
}

