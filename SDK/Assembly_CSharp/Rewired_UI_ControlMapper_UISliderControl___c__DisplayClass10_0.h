#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_UISliderControl.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UISliderControl; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UISliderControl___c__DisplayClass10_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action* cancelCallback;
		void _ctor();
		void _SetCancelCallback_b__0();
		void _SetCancelCallback_b__1(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* data);
	};
}

