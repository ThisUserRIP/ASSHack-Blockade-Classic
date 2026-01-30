#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Configuration_SpecialSetting.h"

namespace System::System::Configuration
{
	struct SpecialSettingAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System::Configuration::SpecialSetting specialSetting);
		System::Configuration::SpecialSetting get_SpecialSetting();
	};
}

