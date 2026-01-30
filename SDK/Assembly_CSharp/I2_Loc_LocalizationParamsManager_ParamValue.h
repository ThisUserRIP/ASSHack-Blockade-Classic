#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_LocalizationParamsManager.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizationParamsManager; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationParamsManager_ParamValue
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Name;
		mscorlib::System::String* Value;
	};
}

