#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct Window; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputFieldInfo; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper___c__DisplayClass342_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper* __4__this;
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* window;
		Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* fieldInfo;
		Rewired_Core::Rewired::ControllerMap* map;
		Rewired_Core::Rewired::ActionElementMap* aem;
		mscorlib::System::String* actionName;
		void _ctor();
		void _ShowBeginElementAssignmentReplacementWindow_b__0();
		void _ShowBeginElementAssignmentReplacementWindow_b__1();
		void _ShowBeginElementAssignmentReplacementWindow_b__2();
	};
}

