#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct RectangularVertexClipper; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct MaskableGraphic; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace UnityEngine_UI::UnityEngine::UI { struct IClippable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct RectMask2D : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::RectangularVertexClipper* m_VertexClipper;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_RectTransform;
		System_Core::System::Collections::Generic::HashSet_1<UnityEngine_UI::UnityEngine::UI::MaskableGraphic>* m_MaskableTargets;
		System_Core::System::Collections::Generic::HashSet_1<UnityEngine_UI::UnityEngine::UI::IClippable>* m_ClipTargets;
		bool m_ShouldRecalculateClipRects;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::RectMask2D>* m_Clippers;
		UnityEngine_CoreModule::UnityEngine::Rect m_LastClipRectCanvasSpace;
		bool m_ForceClip;
		UnityEngine_CoreModule::UnityEngine::Vector4 m_Padding;
		UnityEngine_CoreModule::UnityEngine::Vector2Int m_Softness;
		UnityEngine_UIModule::UnityEngine::Canvas* m_Canvas;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_Corners;
		UnityEngine_CoreModule::UnityEngine::Vector4 get_padding();
		void set_padding(UnityEngine_CoreModule::UnityEngine::Vector4 value);
		UnityEngine_CoreModule::UnityEngine::Vector2Int get_softness();
		void set_softness(UnityEngine_CoreModule::UnityEngine::Vector2Int value);
		UnityEngine_UIModule::UnityEngine::Canvas* get_Canvas();
		UnityEngine_CoreModule::UnityEngine::Rect get_canvasRect();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void _ctor();
		void OnEnable();
		void OnDisable();
		bool IsRaycastLocationValid(UnityEngine_CoreModule::UnityEngine::Vector2 sp, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera);
		UnityEngine_CoreModule::UnityEngine::Rect get_rootCanvasRect();
		void PerformClipping();
		void UpdateClipSoftness();
		void AddClippable(UnityEngine_UI::UnityEngine::UI::IClippable* clippable);
		void RemoveClippable(UnityEngine_UI::UnityEngine::UI::IClippable* clippable);
		void OnTransformParentChanged();
		void OnCanvasHierarchyChanged();
	};
}

