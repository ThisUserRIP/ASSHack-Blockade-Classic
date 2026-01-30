#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_GoogleLanguages.h"
namespace Assembly_CSharp::I2::Loc { struct GoogleLanguages; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::I2::Loc
{
	struct GoogleLanguages_LanguageCodeDef
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Code;
		mscorlib::System::String* GoogleCode;
		bool HasJoinedWords;
		int32_t PluralRule;
	};
}

