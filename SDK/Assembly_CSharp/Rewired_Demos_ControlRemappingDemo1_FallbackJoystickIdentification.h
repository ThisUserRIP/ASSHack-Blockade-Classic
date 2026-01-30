#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Demos_ControlRemappingDemo1_QueueEntry.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_FallbackJoystickIdentification : Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _joystickId_k__BackingField;
		mscorlib::System::String* _joystickName_k__BackingField;
		int32_t get_joystickId();
		void set_joystickId(int32_t value);
		mscorlib::System::String* get_joystickName();
		void set_joystickName(mscorlib::System::String* value);
		void _ctor(int32_t joystickId, mscorlib::System::String* joystickName);
	};
}

