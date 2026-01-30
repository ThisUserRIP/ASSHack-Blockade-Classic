#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "UnityEngine_UI_CanvasScaler_ScaleMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_UI_CanvasScaler_ScreenMatchMode.h"
#include "UnityEngine_UI_CanvasScaler_Unit.h"
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct CanvasScaler : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::CanvasScaler_ScaleMode m_UiScaleMode;
		float m_ReferencePixelsPerUnit;
		float m_ScaleFactor;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_ReferenceResolution;
		UnityEngine_UI::UnityEngine::UI::CanvasScaler_ScreenMatchMode m_ScreenMatchMode;
		float m_MatchWidthOrHeight;
		UnityEngine_UI::UnityEngine::UI::CanvasScaler_Unit m_PhysicalUnit;
		float m_FallbackScreenDPI;
		float m_DefaultSpriteDPI;
		float m_DynamicPixelsPerUnit;
		UnityEngine_UIModule::UnityEngine::Canvas* m_Canvas;
		float m_PrevScaleFactor;
		float m_PrevReferencePixelsPerUnit;
		bool m_PresetInfoIsWorld;
		struct StaticFields
		{
			float kLogBase;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_UI::UnityEngine::UI::CanvasScaler_ScaleMode get_uiScaleMode();
		void set_uiScaleMode(UnityEngine_UI::UnityEngine::UI::CanvasScaler_ScaleMode value);
		float get_referencePixelsPerUnit();
		void set_referencePixelsPerUnit(float value);
		float get_scaleFactor();
		void set_scaleFactor(float value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_referenceResolution();
		void set_referenceResolution(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_UI::UnityEngine::UI::CanvasScaler_ScreenMatchMode get_screenMatchMode();
		void set_screenMatchMode(UnityEngine_UI::UnityEngine::UI::CanvasScaler_ScreenMatchMode value);
		float get_matchWidthOrHeight();
		void set_matchWidthOrHeight(float value);
		UnityEngine_UI::UnityEngine::UI::CanvasScaler_Unit get_physicalUnit();
		void set_physicalUnit(UnityEngine_UI::UnityEngine::UI::CanvasScaler_Unit value);
		float get_fallbackScreenDPI();
		void set_fallbackScreenDPI(float value);
		float get_defaultSpriteDPI();
		void set_defaultSpriteDPI(float value);
		float get_dynamicPixelsPerUnit();
		void set_dynamicPixelsPerUnit(float value);
		void _ctor();
		void OnEnable();
		void Canvas_preWillRenderCanvases();
		void OnDisable();
		void Handle();
		void HandleWorldCanvas();
		void HandleConstantPixelSize();
		void HandleScaleWithScreenSize();
		void HandleConstantPhysicalSize();
		void SetScaleFactor(float scaleFactor);
		void SetReferencePixelsPerUnit(float referencePixelsPerUnit);
	};
}

