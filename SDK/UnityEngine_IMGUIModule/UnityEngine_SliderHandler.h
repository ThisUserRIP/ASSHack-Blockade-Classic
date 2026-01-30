#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_EventType.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct Event; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct SliderState; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct SliderHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rect position;
		float currentValue;
		float size;
		float start;
		float end;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumbExtent;
		bool horiz;
		int32_t id;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rect position, float currentValue, float size, float start, float end, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, bool horiz, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumbExtent);
		float Handle();
		float OnMouseDown();
		float OnMouseDrag();
		float OnMouseUp();
		float OnRepaint();
		UnityEngine_IMGUIModule::UnityEngine::EventType CurrentEventType();
		int32_t CurrentScrollTroughSide();
		bool IsEmptySlider();
		bool SupportsPageMovements();
		float PageMovementValue();
		float PageUpMovementBound();
		UnityEngine_IMGUIModule::UnityEngine::Event* CurrentEvent();
		float ValueForCurrentMousePosition();
		float Clamp(float value);
		UnityEngine_CoreModule::UnityEngine::Rect ThumbSelectionRect();
		void StartDraggingWithValue(float dragStartValue);
		UnityEngine_IMGUIModule::UnityEngine::SliderState* SliderState();
		UnityEngine_CoreModule::UnityEngine::Rect ThumbExtRect();
		UnityEngine_CoreModule::UnityEngine::Rect ThumbRect();
		UnityEngine_CoreModule::UnityEngine::Rect VerticalThumbRect();
		UnityEngine_CoreModule::UnityEngine::Rect HorizontalThumbRect();
		float ClampedCurrentValue();
		float MousePosition();
		float ValuesPerPixel();
		float ThumbSize();
		float MaxValue();
		float MinValue();
	};
}

