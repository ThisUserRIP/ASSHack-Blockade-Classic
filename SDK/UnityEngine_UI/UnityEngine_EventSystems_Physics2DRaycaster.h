#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_PhysicsRaycaster.h"
#include "..\UnityEngine_Physics2DModule\UnityEngine_RaycastHit2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct RaycastHit2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct Physics2DRaycaster : UnityEngine_UI::UnityEngine::EventSystems::PhysicsRaycaster
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* m_Hits;
		void _ctor();
		void Raycast(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
	};
}

