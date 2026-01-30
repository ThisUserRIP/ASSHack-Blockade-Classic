#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_TimeSpanParse.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse; };
#include "System_Globalization_TimeSpanParse_TTT.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Globalization_TimeSpanParse_TimeSpanToken.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanToken; };
#include "System_Globalization_TimeSpanFormat_FormatLiterals.h"
namespace mscorlib::System::Globalization { struct TimeSpanFormat_FormatLiterals; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanResult; };
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanResult; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanParse_TimeSpanRawInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::TimeSpanParse_TTT lastSeenTTT;
		int32_t tokenCount;
		int32_t SepCount;
		int32_t NumCount;
		IL2CPP::Array<mscorlib::System::String*>* literals;
		IL2CPP::Array<mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken>* numbers;
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals m_posLoc;
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals m_negLoc;
		bool m_posLocInit;
		bool m_negLocInit;
		mscorlib::System::String* m_fullPosPattern;
		mscorlib::System::String* m_fullNegPattern;
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals get_PositiveInvariant();
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals get_NegativeInvariant();
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals get_PositiveLocalized();
		mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals get_NegativeLocalized();
		bool FullAppCompatMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool PartialAppCompatMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullDMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullHMMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullDHMMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullHMSMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullDHMSMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		bool FullHMSFMatch(mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals pattern);
		void Init(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		bool ProcessToken(mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken& tok, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		bool AddSep(mscorlib::System::String* sep, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
		bool AddNum(mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken num, mscorlib::System::Globalization::TimeSpanParse_TimeSpanResult& result);
	};
}

