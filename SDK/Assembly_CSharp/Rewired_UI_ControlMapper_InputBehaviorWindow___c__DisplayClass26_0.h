#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_InputBehaviorWindow.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputBehaviorWindow; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct InputBehaviorWindow___c__DisplayClass26_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_3<mscorlib::System::Int32, mscorlib::System::Int32, mscorlib::System::Single>* valueChangedCallback;
		int32_t inputBehaviorId;
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* cancelCallback;
		void _ctor();
		void _CreateSlider_b__0(int32_t cId, float value);
		void _CreateSlider_b__1(int32_t cId);
	};
}

