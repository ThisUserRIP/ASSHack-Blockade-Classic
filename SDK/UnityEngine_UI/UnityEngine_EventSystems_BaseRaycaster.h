#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct BaseRaycaster : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* m_RootRaycaster;
		void Raycast(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
		UnityEngine_CoreModule::UnityEngine::Camera* get_eventCamera();
		int32_t get_priority();
		int32_t get_sortOrderPriority();
		int32_t get_renderOrderPriority();
		UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* get_rootRaycaster();
		mscorlib::System::String* ToString();
		void OnEnable();
		void OnDisable();
		void OnCanvasHierarchyChanged();
		void OnTransformParentChanged();
		void _ctor();
	};
}

