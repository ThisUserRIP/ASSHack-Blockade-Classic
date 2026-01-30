#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Demos_ControlRemappingDemo1_QueueEntry.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_JoystickAssignmentChange : Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _playerId_k__BackingField;
		int32_t _joystickId_k__BackingField;
		bool _assign_k__BackingField;
		int32_t get_playerId();
		void set_playerId(int32_t value);
		int32_t get_joystickId();
		void set_joystickId(int32_t value);
		bool get_assign();
		void set_assign(bool value);
		void _ctor(int32_t newPlayerId, int32_t joystickId, bool assign);
	};
}

