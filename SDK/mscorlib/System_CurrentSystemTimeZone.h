#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TimeZone.h"
namespace mscorlib::System { struct TimeZoneInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct CurrentSystemTimeZone : mscorlib::System::TimeZone
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeZoneInfo* LocalTimeZone;
		void _ctor();
		mscorlib::System::TimeSpan GetUtcOffset(mscorlib::System::DateTime dateTime);
		static bool GetTimeZoneData(int32_t year, IL2CPP::Array<int64_t>& data, IL2CPP::Array<mscorlib::System::String*>& names, bool& daylight_inverted);
	};
}

