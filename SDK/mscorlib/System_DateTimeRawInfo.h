#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Int32.h"
#include "System_DateTimeParse_TM.h"
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct DateTimeRawInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t* num;
		int32_t numCount;
		int32_t month;
		int32_t year;
		int32_t dayOfWeek;
		int32_t era;
		mscorlib::System::DateTimeParse_TM timeMark;
		double fraction;
		bool hasSameDateAndTimeSeparators;
		bool timeZone;
		void Init(int32_t* numberBuffer);
		void AddNumber(int32_t value);
		int32_t GetNumber(int32_t index);
	};
}

