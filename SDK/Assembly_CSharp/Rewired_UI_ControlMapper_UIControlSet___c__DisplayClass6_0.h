#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_UIControlSet.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIControlSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UISliderControl; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UIControlSet___c__DisplayClass6_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* valueChangedCallback;
		Assembly_CSharp::Rewired::UI::ControlMapper::UISliderControl* control;
		mscorlib::System::Action_1<mscorlib::System::Int32>* cancelCallback;
		void _ctor();
		void _CreateSlider_b__0(float value);
		void _CreateSlider_b__1();
	};
}

