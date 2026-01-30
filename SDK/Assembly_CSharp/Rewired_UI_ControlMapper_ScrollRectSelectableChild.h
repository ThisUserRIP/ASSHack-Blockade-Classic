#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_UI::UnityEngine::UI { struct ScrollRect; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ScrollRectSelectableChild : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useCustomEdgePadding;
		float customEdgePadding;
		UnityEngine_UI::UnityEngine::UI::ScrollRect* parentScrollRect;
		UnityEngine_UI::UnityEngine::UI::Selectable* _selectable;
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_parentScrollRectContentTransform();
		UnityEngine_UI::UnityEngine::UI::Selectable* get_selectable();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void Start();
		void OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void _ctor();
	};
}

