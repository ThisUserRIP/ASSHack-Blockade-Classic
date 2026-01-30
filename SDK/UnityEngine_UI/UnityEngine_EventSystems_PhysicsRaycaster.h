#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_BaseRaycaster.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Single; };
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct PhysicsRaycaster : UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Camera* m_EventCamera;
		UnityEngine_CoreModule::UnityEngine::LayerMask m_EventMask;
		int32_t m_MaxRayIntersections;
		int32_t m_LastMaxRayIntersections;
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* m_Hits;
		struct StaticFields
		{
			int32_t kNoEventMaskSet;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Camera* get_eventCamera();
		int32_t get_depth();
		int32_t get_finalEventMask();
		UnityEngine_CoreModule::UnityEngine::LayerMask get_eventMask();
		void set_eventMask(UnityEngine_CoreModule::UnityEngine::LayerMask value);
		int32_t get_maxRayIntersections();
		void set_maxRayIntersections(int32_t value);
		bool ComputeRayAndDistance(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine_CoreModule::UnityEngine::Ray& ray, int32_t& eventDisplayIndex, float& distanceToClipPlane);
		void Raycast(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
	};
}

