#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Globalization_DateTimeFormatInfoScanner_FoundDatePattern.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
#include "System_Globalization_FORMATFLAGS.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Globalization
{
	struct DateTimeFormatInfoScanner : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* m_dateWords;
		mscorlib::System::Globalization::DateTimeFormatInfoScanner_FoundDatePattern m_ymdFlags;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* s_knownWords;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* get_KnownWords();
		static int32_t SkipWhiteSpacesAndNonLetter(mscorlib::System::String* pattern, int32_t currentIndex);
		void AddDateWordOrPostfix(mscorlib::System::String* formatPostfix, mscorlib::System::String* str);
		int32_t AddDateWords(mscorlib::System::String* pattern, int32_t index, mscorlib::System::String* formatPostfix);
		static int32_t ScanRepeatChar(mscorlib::System::String* pattern, wchar_t ch, int32_t index, int32_t& count);
		void AddIgnorableSymbols(mscorlib::System::String* text);
		void ScanDateWord(mscorlib::System::String* pattern);
		IL2CPP::Array<mscorlib::System::String*>* GetDateWordsOfDTFI(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static mscorlib::System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(IL2CPP::Array<mscorlib::System::String*>* monthNames, IL2CPP::Array<mscorlib::System::String*>* genitveMonthNames, IL2CPP::Array<mscorlib::System::String*>* abbrevMonthNames, IL2CPP::Array<mscorlib::System::String*>* genetiveAbbrevMonthNames);
		static mscorlib::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(IL2CPP::Array<mscorlib::System::String*>* monthNames, IL2CPP::Array<mscorlib::System::String*>* genitveMonthNames, IL2CPP::Array<mscorlib::System::String*>* abbrevMonthNames, IL2CPP::Array<mscorlib::System::String*>* genetiveAbbrevMonthNames);
		static mscorlib::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(IL2CPP::Array<mscorlib::System::String*>* dayNames, IL2CPP::Array<mscorlib::System::String*>* abbrevDayNames);
		static mscorlib::System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int32_t calID);
		static bool EqualStringArrays(IL2CPP::Array<mscorlib::System::String*>* array1, IL2CPP::Array<mscorlib::System::String*>* array2);
		static bool ArrayElementsHaveSpace(IL2CPP::Array<mscorlib::System::String*>* array);
		static bool ArrayElementsBeginWithDigit(IL2CPP::Array<mscorlib::System::String*>* array);
		void _ctor();
	};
}

