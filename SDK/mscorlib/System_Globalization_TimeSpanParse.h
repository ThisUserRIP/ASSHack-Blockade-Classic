#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Globalization_TimeSpanParse_TimeSpanToken.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanToken; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Globalization_TimeSpanParse_TimeSpanStandardStyles.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanResult; };
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanResult; };
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanRawInfo; };
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanRawInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanParse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken zero;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool TryTimeToTicks(bool positive, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken days, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken hours, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken minutes, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken seconds, mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken fraction, int64_t& result);
		static mscorlib::System::TimeSpan Parse(mscorlib::System::String* input, mscorlib::System::IFormatProvider* formatProvider);
		static bool TryParseTimeSpan(mscorlib::System::String* input, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::IFormatProvider* formatProvider, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static bool ProcessTerminalState(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static bool ProcessTerminal_DHMSF(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static bool ProcessTerminal_HMS_F_D(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static bool ProcessTerminal_HM_S_D(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static bool ProcessTerminal_HM(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static bool ProcessTerminal_D(mscorlib::System::Globalization::TimeSpanParse_TimeSpanRawInfo& raw, mscorlib::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		static void _cctor();
	};
}

