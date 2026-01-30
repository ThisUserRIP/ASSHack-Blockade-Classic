#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Globalization_HebrewNumber.h"
namespace mscorlib::System::Globalization { struct HebrewNumber; };
#include "System_Globalization_HebrewNumber_HebrewToken.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct HebrewNumber_HebrewValue : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::HebrewNumber_HebrewToken token;
		int32_t value;
		void _ctor(mscorlib::System::Globalization::HebrewNumber_HebrewToken token, int32_t value);
	};
}

