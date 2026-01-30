#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct Window; };
#include "..\Rewired_Core\Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper___c__DisplayClass349_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper* __4__this;
		Assembly_CSharp::Rewired::UI::ControlMapper::Window* window;
		Rewired_Core::Rewired::ElementAssignment assignment;
		bool skipOtherPlayers;
		void _ctor();
		void _ShowElementAssignmentConflictWindow_b__0();
		void _ShowElementAssignmentConflictWindow_b__1();
		void _ShowElementAssignmentConflictWindow_b__2();
		void _ShowElementAssignmentConflictWindow_b__3();
	};
}

