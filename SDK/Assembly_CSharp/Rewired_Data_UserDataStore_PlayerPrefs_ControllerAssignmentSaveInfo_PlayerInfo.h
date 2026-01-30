#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo.h"
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_JoystickInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Data
{
	struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_PlayerInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		bool hasKeyboard;
		bool hasMouse;
		IL2CPP::Array<Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_JoystickInfo*>* joysticks;
		int32_t get_joystickCount();
		int32_t IndexOfJoystick(int32_t joystickId);
		bool ContainsJoystick(int32_t joystickId);
		void _ctor();
	};
}

