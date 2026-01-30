#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Globalization { struct CompareInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
#include "System_TokenType.h"
#include "System_DTSubString.h"
namespace mscorlib::System { struct DTSubString; };

namespace mscorlib::System
{
	struct __DTString
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Value;
		int32_t Index;
		int32_t len;
		wchar_t m_current;
		mscorlib::System::Globalization::CompareInfo* m_info;
		bool m_checkDigitToken;
		void _ctor(mscorlib::System::String* str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, bool checkDigitToken);
		void _ctor(mscorlib::System::String* str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		mscorlib::System::Globalization::CompareInfo* get_CompareInfo();
		bool GetNext();
		bool AtEnd();
		bool Advance(int32_t count);
		void GetRegularToken(mscorlib::System::TokenType& tokenType, int32_t& tokenValue, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		mscorlib::System::TokenType GetSeparatorToken(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& indexBeforeSeparator, wchar_t& charBeforeSeparator);
		bool MatchSpecifiedWord(mscorlib::System::String* target);
		bool MatchSpecifiedWord(mscorlib::System::String* target, int32_t endIndex);
		bool MatchSpecifiedWords(mscorlib::System::String* target, bool checkWordBoundary, int32_t& matchLength);
		bool Match(mscorlib::System::String* str);
		bool Match(wchar_t ch);
		int32_t MatchLongestWords(IL2CPP::Array<mscorlib::System::String*>* words, int32_t& maxMatchStrLen);
		int32_t GetRepeatCount();
		bool GetNextDigit();
		wchar_t GetChar();
		int32_t GetDigit();
		void SkipWhiteSpaces();
		bool SkipWhiteSpaceCurrent();
		void TrimTail();
		void RemoveTrailingInQuoteSpaces();
		void RemoveLeadingInQuoteSpaces();
		mscorlib::System::DTSubString GetSubString();
		void ConsumeSubString(mscorlib::System::DTSubString sub);
		static void _cctor();
	};
}

