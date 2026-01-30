#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_ParseFlags.h"
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Globalization { struct Calendar; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_ParseFailureKind.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct DateTimeResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Year;
		int32_t Month;
		int32_t Day;
		int32_t Hour;
		int32_t Minute;
		int32_t Second;
		double fraction;
		int32_t era;
		mscorlib::System::ParseFlags flags;
		mscorlib::System::TimeSpan timeZoneOffset;
		mscorlib::System::Globalization::Calendar* calendar;
		mscorlib::System::DateTime parsedDate;
		mscorlib::System::ParseFailureKind failure;
		mscorlib::System::String* failureMessageID;
		mscorlib::System::Object* failureMessageFormatArgument;
		mscorlib::System::String* failureArgumentName;
		void Init();
		void SetDate(int32_t year, int32_t month, int32_t day);
		void SetFailure(mscorlib::System::ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument);
		void SetFailure(mscorlib::System::ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument, mscorlib::System::String* failureArgumentName);
	};
}

