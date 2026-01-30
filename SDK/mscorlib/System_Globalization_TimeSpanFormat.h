#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Globalization_TimeSpanFormat_FormatLiterals.h"
namespace mscorlib::System::Globalization { struct TimeSpanFormat_FormatLiterals; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Globalization_TimeSpanFormat_Pattern.h"
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanFormat : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals PositiveInvariantFormatLiterals;
			mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals NegativeInvariantFormatLiterals;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* IntToString(int32_t n, int32_t digits);
		static mscorlib::System::String* Format(mscorlib::System::TimeSpan value, mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static mscorlib::System::String* FormatStandard(mscorlib::System::TimeSpan value, bool isInvariant, mscorlib::System::String* format, mscorlib::System::Globalization::TimeSpanFormat_Pattern pattern);
		static mscorlib::System::String* FormatCustomized(mscorlib::System::TimeSpan value, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static void _cctor();
	};
}

