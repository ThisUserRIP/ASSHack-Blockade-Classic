#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_UserDataStore_PlayerPrefs.h"
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo; };

namespace Assembly_CSharp::Rewired::Data
{
	struct UserDataStore_PlayerPrefs___c__DisplayClass78_2 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Joystick* match;
		void _ctor();
		bool _LoadJoystickAssignmentsNow_b__2(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_JoystickAssignmentHistoryInfo* x);
	};
}

