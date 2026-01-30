#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Demos_ControlRemappingDemo1_QueueEntry.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "Rewired_Demos_ControlRemappingDemo1_ElementAssignmentChangeType.h"
namespace Rewired_Core::Rewired { struct InputMapper_Context; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_ElementAssignmentChange : Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType _changeType_k__BackingField;
		Rewired_Core::Rewired::InputMapper_Context* _context_k__BackingField;
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType get_changeType();
		void set_changeType(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType value);
		Rewired_Core::Rewired::InputMapper_Context* get_context();
		void set_context(Rewired_Core::Rewired::InputMapper_Context* value);
		void _ctor(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChangeType changeType, Rewired_Core::Rewired::InputMapper_Context* context);
		void _ctor(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_ElementAssignmentChange* other);
	};
}

