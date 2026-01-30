#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_TimeSpanParse.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Globalization_TimeSpanParse_TimeSpanThrowStyle.h"
#include "System_Globalization_TimeSpanParse_ParseFailureKind.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanParse_TimeSpanResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan parsedTimeSpan;
		mscorlib::System::Globalization::TimeSpanParse_TimeSpanThrowStyle throwStyle;
		mscorlib::System::Globalization::TimeSpanParse_ParseFailureKind m_failure;
		mscorlib::System::String* m_failureMessageID;
		mscorlib::System::Object* m_failureMessageFormatArgument;
		mscorlib::System::String* m_failureArgumentName;
		void Init(mscorlib::System::Globalization::TimeSpanParse_TimeSpanThrowStyle canThrow);
		void SetFailure(mscorlib::System::Globalization::TimeSpanParse_ParseFailureKind failure, mscorlib::System::String* failureMessageID);
		void SetFailure(mscorlib::System::Globalization::TimeSpanParse_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument);
		void SetFailure(mscorlib::System::Globalization::TimeSpanParse_ParseFailureKind failure, mscorlib::System::String* failureMessageID, mscorlib::System::Object* failureMessageFormatArgument, mscorlib::System::String* failureArgumentName);
		mscorlib::System::Exception* GetTimeSpanParseException();
	};
}

