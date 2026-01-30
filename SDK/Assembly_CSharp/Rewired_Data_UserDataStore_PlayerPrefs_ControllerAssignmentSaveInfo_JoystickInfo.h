#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo.h"
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Data
{
	struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_JoystickInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid instanceGuid;
		mscorlib::System::String* hardwareIdentifier;
		int32_t id;
		void _ctor();
	};
}

