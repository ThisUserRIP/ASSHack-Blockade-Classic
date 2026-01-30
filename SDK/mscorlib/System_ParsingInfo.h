#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Globalization { struct Calendar; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_DateTimeParse_TM.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct DateTimeParse_MatchNumberDelegate; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct ParsingInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::Calendar* calendar;
		int32_t dayOfWeek;
		mscorlib::System::DateTimeParse_TM timeMark;
		bool fUseHour12;
		bool fUseTwoDigitYear;
		bool fAllowInnerWhite;
		bool fAllowTrailingWhite;
		bool fCustomNumberParser;
		mscorlib::System::DateTimeParse_MatchNumberDelegate* parseNumberDelegate;
		void Init();
	};
}

