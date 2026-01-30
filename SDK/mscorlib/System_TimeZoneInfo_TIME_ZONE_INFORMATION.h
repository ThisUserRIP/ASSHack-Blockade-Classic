#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TimeZoneInfo.h"
namespace mscorlib::System { struct TimeZoneInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_TimeZoneInfo_SYSTEMTIME.h"
namespace mscorlib::System { struct TimeZoneInfo_SYSTEMTIME; };

namespace mscorlib::System
{
	struct TimeZoneInfo_TIME_ZONE_INFORMATION
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Bias;
		mscorlib::System::String* StandardName;
		mscorlib::System::TimeZoneInfo_SYSTEMTIME StandardDate;
		int32_t StandardBias;
		mscorlib::System::String* DaylightName;
		mscorlib::System::TimeZoneInfo_SYSTEMTIME DaylightDate;
		int32_t DaylightBias;
	};
}

