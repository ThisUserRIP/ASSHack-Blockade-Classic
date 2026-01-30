#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_GUIInputField.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIInputField; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputFieldInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUIInputField___c__DisplayClass19_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo>* callback;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField* __4__this;
		void _ctor();
		void _SetOnClickCallback_b__0();
	};
}

