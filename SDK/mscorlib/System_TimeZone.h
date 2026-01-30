#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace mscorlib::System
{
	struct TimeZone : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::TimeZone* currentTimeZone;
			mscorlib::System::Object* tz_lock;
			int64_t timezone_check;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static mscorlib::System::TimeZone* get_CurrentTimeZone();
		mscorlib::System::TimeSpan GetUtcOffset(mscorlib::System::DateTime time);
		static void _cctor();
	};
}

