#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TimeZoneInfo.h"
namespace mscorlib::System { struct TimeZoneInfo; };
#include "System_TimeZoneInfo_TIME_ZONE_INFORMATION.h"
namespace mscorlib::System { struct TimeZoneInfo_TIME_ZONE_INFORMATION; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System
{
	struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeZoneInfo_TIME_ZONE_INFORMATION TZI;
		mscorlib::System::String* TimeZoneKeyName;
		uint8_t DynamicDaylightTimeDisabled;
	};
}

