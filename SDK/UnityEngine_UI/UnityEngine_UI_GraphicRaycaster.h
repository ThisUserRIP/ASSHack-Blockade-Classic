#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_BaseRaycaster.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_UI_GraphicRaycaster_BlockingObjects.h"
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct GraphicRaycaster : UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_IgnoreReversedGraphics;
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects m_BlockingObjects;
		UnityEngine_CoreModule::UnityEngine::LayerMask m_BlockingMask;
		UnityEngine_UIModule::UnityEngine::Canvas* m_Canvas;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Graphic>* m_RaycastResults;
		struct StaticFields
		{
			int32_t kNoEventMaskSet;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Graphic>* s_SortedGraphics;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_sortOrderPriority();
		int32_t get_renderOrderPriority();
		bool get_ignoreReversedGraphics();
		void set_ignoreReversedGraphics(bool value);
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects get_blockingObjects();
		void set_blockingObjects(UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects value);
		UnityEngine_CoreModule::UnityEngine::LayerMask get_blockingMask();
		void set_blockingMask(UnityEngine_CoreModule::UnityEngine::LayerMask value);
		void _ctor();
		UnityEngine_UIModule::UnityEngine::Canvas* get_canvas();
		void Raycast(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
		UnityEngine_CoreModule::UnityEngine::Camera* get_eventCamera();
		static void Raycast(UnityEngine_UIModule::UnityEngine::Canvas* canvas, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera, UnityEngine_CoreModule::UnityEngine::Vector2 pointerPosition, mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>* foundGraphics, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Graphic>* results);
		static void _cctor();
	};
}

