#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_GUIToggle.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIToggle; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ToggleInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUIToggle___c__DisplayClass10_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_2<Assembly_CSharp::Rewired::UI::ControlMapper::ToggleInfo, mscorlib::System::Boolean>* callback;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIToggle* __4__this;
		void _ctor();
		void _SetOnSubmitCallback_b__0(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* data);
	};
}

