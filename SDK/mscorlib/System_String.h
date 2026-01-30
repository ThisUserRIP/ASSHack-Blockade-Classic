#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_StringComparison.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_StringSplitOptions.h"
namespace mscorlib::System { struct SByte; };
namespace mscorlib::System { struct SByte; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "System_Text_NormalizationForm.h"
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Globalization_CompareOptions.h"
namespace mscorlib::System { struct IFormatProvider; };
#include "System_ParamsArray.h"
namespace mscorlib::System { struct ParamsArray; };
#include "System_TypeCode.h"
#include "System_SByte.h"
#include "System_Byte.h"
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System
{
	struct String : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_stringLength;
		wchar_t m_firstChar;
		struct StaticFields
		{
			int32_t TrimHead;
			int32_t TrimTail;
			int32_t TrimBoth;
			mscorlib::System::String* Empty;
			int32_t charPtrAlignConst;
			int32_t alignConst;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* Join(mscorlib::System::String* separator, IL2CPP::Array<mscorlib::System::String*>* value);
		static mscorlib::System::String* Join(mscorlib::System::String* separator, IL2CPP::Array<mscorlib::System::String*>* value, int32_t startIndex, int32_t count);
		static int32_t CompareOrdinalIgnoreCaseHelper(mscorlib::System::String* strA, mscorlib::System::String* strB);
		static bool EqualsHelper(mscorlib::System::String* strA, mscorlib::System::String* strB);
		static int32_t CompareOrdinalHelper(mscorlib::System::String* strA, mscorlib::System::String* strB);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::String* value);
		bool Equals(mscorlib::System::String* value, mscorlib::System::StringComparison comparisonType);
		static bool Equals(mscorlib::System::String* a, mscorlib::System::String* b);
		static bool Equals(mscorlib::System::String* a, mscorlib::System::String* b, mscorlib::System::StringComparison comparisonType);
		static bool op_Equality(mscorlib::System::String* a, mscorlib::System::String* b);
		static bool op_Inequality(mscorlib::System::String* a, mscorlib::System::String* b);
		wchar_t get_Chars(int32_t index);
		void CopyTo(int32_t sourceIndex, IL2CPP::Array<wchar_t>* destination, int32_t destinationIndex, int32_t count);
		IL2CPP::Array<wchar_t>* ToCharArray();
		static bool IsNullOrEmpty(mscorlib::System::String* value);
		static bool IsNullOrWhiteSpace(mscorlib::System::String* value);
		int32_t GetHashCode();
		int32_t GetLegacyNonRandomizedHashCode();
		IL2CPP::Array<mscorlib::System::String*>* Split(IL2CPP::Array<wchar_t>* separator);
		IL2CPP::Array<mscorlib::System::String*>* Split(IL2CPP::Array<wchar_t>* separator, mscorlib::System::StringSplitOptions options);
		IL2CPP::Array<mscorlib::System::String*>* SplitInternal(IL2CPP::Array<wchar_t>* separator, int32_t count, mscorlib::System::StringSplitOptions options);
		IL2CPP::Array<mscorlib::System::String*>* Split(IL2CPP::Array<mscorlib::System::String*>* separator, mscorlib::System::StringSplitOptions options);
		IL2CPP::Array<mscorlib::System::String*>* Split(IL2CPP::Array<mscorlib::System::String*>* separator, int32_t count, mscorlib::System::StringSplitOptions options);
		IL2CPP::Array<mscorlib::System::String*>* InternalSplitKeepEmptyEntries(IL2CPP::Array<int32_t>* sepList, IL2CPP::Array<int32_t>* lengthList, int32_t numReplaces, int32_t count);
		IL2CPP::Array<mscorlib::System::String*>* InternalSplitOmitEmptyEntries(IL2CPP::Array<int32_t>* sepList, IL2CPP::Array<int32_t>* lengthList, int32_t numReplaces, int32_t count);
		int32_t MakeSeparatorList(IL2CPP::Array<wchar_t>* separator, IL2CPP::Array<int32_t>& sepList);
		int32_t MakeSeparatorList(IL2CPP::Array<mscorlib::System::String*>* separators, IL2CPP::Array<int32_t>& sepList, IL2CPP::Array<int32_t>& lengthList);
		mscorlib::System::String* Substring(int32_t startIndex);
		mscorlib::System::String* Substring(int32_t startIndex, int32_t length);
		mscorlib::System::String* InternalSubString(int32_t startIndex, int32_t length);
		mscorlib::System::String* Trim(IL2CPP::Array<wchar_t>* trimChars);
		mscorlib::System::String* TrimStart(IL2CPP::Array<wchar_t>* trimChars);
		mscorlib::System::String* TrimEnd(IL2CPP::Array<wchar_t>* trimChars);
		void _ctor(wchar_t* value);
		void _ctor(wchar_t* value, int32_t startIndex, int32_t length);
		void _ctor(int8_t* value, int32_t startIndex, int32_t length, mscorlib::System::Text::Encoding* enc);
		static mscorlib::System::String* CreateStringFromEncoding(uint8_t* bytes, int32_t byteLength, mscorlib::System::Text::Encoding* encoding);
		mscorlib::System::String* Normalize(mscorlib::System::Text::NormalizationForm normalizationForm);
		static mscorlib::System::String* FastAllocateString(int32_t length);
		static void FillStringChecked(mscorlib::System::String* dest, int32_t destPos, mscorlib::System::String* src);
		void _ctor(IL2CPP::Array<wchar_t>* value, int32_t startIndex, int32_t length);
		void _ctor(IL2CPP::Array<wchar_t>* value);
		static void wstrcpy(wchar_t* dmem, wchar_t* smem, int32_t charCount);
		mscorlib::System::String* CtorCharArray(IL2CPP::Array<wchar_t>* value);
		mscorlib::System::String* CtorCharArrayStartLength(IL2CPP::Array<wchar_t>* value, int32_t startIndex, int32_t length);
		static int32_t wcslen(wchar_t* ptr);
		mscorlib::System::String* CtorCharPtr(wchar_t* ptr);
		mscorlib::System::String* CtorCharPtrStartLength(wchar_t* ptr, int32_t startIndex, int32_t length);
		void _ctor(wchar_t c, int32_t count);
		static int32_t Compare(mscorlib::System::String* strA, mscorlib::System::String* strB);
		static int32_t Compare(mscorlib::System::String* strA, mscorlib::System::String* strB, bool ignoreCase);
		static int32_t Compare(mscorlib::System::String* strA, mscorlib::System::String* strB, mscorlib::System::StringComparison comparisonType);
		static int32_t Compare(mscorlib::System::String* strA, mscorlib::System::String* strB, bool ignoreCase, mscorlib::System::Globalization::CultureInfo* culture);
		static int32_t Compare(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t length);
		static int32_t Compare(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t length, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Globalization::CompareOptions options);
		static int32_t Compare(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t length, mscorlib::System::StringComparison comparisonType);
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(mscorlib::System::String* strB);
		static int32_t CompareOrdinal(mscorlib::System::String* strA, mscorlib::System::String* strB);
		static int32_t CompareOrdinal(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t length);
		bool Contains(mscorlib::System::String* value);
		bool EndsWith(mscorlib::System::String* value);
		bool EndsWith(mscorlib::System::String* value, mscorlib::System::StringComparison comparisonType);
		bool EndsWith(wchar_t value);
		int32_t IndexOf(wchar_t value);
		int32_t IndexOf(wchar_t value, int32_t startIndex);
		int32_t IndexOfAny(IL2CPP::Array<wchar_t>* anyOf);
		int32_t IndexOfAny(IL2CPP::Array<wchar_t>* anyOf, int32_t startIndex);
		int32_t IndexOf(mscorlib::System::String* value);
		int32_t IndexOf(mscorlib::System::String* value, int32_t startIndex);
		int32_t IndexOf(mscorlib::System::String* value, mscorlib::System::StringComparison comparisonType);
		int32_t IndexOf(mscorlib::System::String* value, int32_t startIndex, mscorlib::System::StringComparison comparisonType);
		int32_t IndexOf(mscorlib::System::String* value, int32_t startIndex, int32_t count, mscorlib::System::StringComparison comparisonType);
		int32_t LastIndexOf(wchar_t value);
		int32_t LastIndexOf(wchar_t value, int32_t startIndex);
		int32_t LastIndexOfAny(IL2CPP::Array<wchar_t>* anyOf);
		int32_t LastIndexOfAny(IL2CPP::Array<wchar_t>* anyOf, int32_t startIndex);
		int32_t LastIndexOf(mscorlib::System::String* value);
		int32_t LastIndexOf(mscorlib::System::String* value, mscorlib::System::StringComparison comparisonType);
		int32_t LastIndexOf(mscorlib::System::String* value, int32_t startIndex, int32_t count, mscorlib::System::StringComparison comparisonType);
		mscorlib::System::String* PadLeft(int32_t totalWidth, wchar_t paddingChar);
		mscorlib::System::String* PadRight(int32_t totalWidth, wchar_t paddingChar);
		bool StartsWith(mscorlib::System::String* value);
		bool StartsWith(mscorlib::System::String* value, mscorlib::System::StringComparison comparisonType);
		mscorlib::System::String* ToLower();
		mscorlib::System::String* ToLower(mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::String* ToLowerInvariant();
		mscorlib::System::String* ToUpper();
		mscorlib::System::String* ToUpper(mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::String* ToUpperInvariant();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Object* Clone();
		static bool IsBOMWhitespace(wchar_t c);
		mscorlib::System::String* Trim();
		mscorlib::System::String* TrimHelper(int32_t trimType);
		mscorlib::System::String* TrimHelper(IL2CPP::Array<wchar_t>* trimChars, int32_t trimType);
		mscorlib::System::String* CreateTrimmedString(int32_t start, int32_t end);
		mscorlib::System::String* Insert(int32_t startIndex, mscorlib::System::String* value);
		mscorlib::System::String* Replace(wchar_t oldChar, wchar_t newChar);
		mscorlib::System::String* Replace(mscorlib::System::String* oldValue, mscorlib::System::String* newValue);
		mscorlib::System::String* Remove(int32_t startIndex, int32_t count);
		mscorlib::System::String* Remove(int32_t startIndex);
		static mscorlib::System::String* Format(mscorlib::System::String* format, mscorlib::System::Object* arg0);
		static mscorlib::System::String* Format(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		static mscorlib::System::String* Format(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1, mscorlib::System::Object* arg2);
		static mscorlib::System::String* Format(mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* Format(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0);
		static mscorlib::System::String* Format(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		static mscorlib::System::String* Format(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1, mscorlib::System::Object* arg2);
		static mscorlib::System::String* Format(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* FormatHelper(mscorlib::System::IFormatProvider* provider, mscorlib::System::String* format, mscorlib::System::ParamsArray args);
		static mscorlib::System::String* Copy(mscorlib::System::String* str);
		static mscorlib::System::String* Concat(mscorlib::System::Object* arg0);
		static mscorlib::System::String* Concat(mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		static mscorlib::System::String* Concat(mscorlib::System::Object* arg0, mscorlib::System::Object* arg1, mscorlib::System::Object* arg2);
		static mscorlib::System::String* Concat(IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* Concat(mscorlib::System::String* str0, mscorlib::System::String* str1);
		static mscorlib::System::String* Concat(mscorlib::System::String* str0, mscorlib::System::String* str1, mscorlib::System::String* str2);
		static mscorlib::System::String* Concat(mscorlib::System::String* str0, mscorlib::System::String* str1, mscorlib::System::String* str2, mscorlib::System::String* str3);
		static mscorlib::System::String* ConcatArray(IL2CPP::Array<mscorlib::System::String*>* values, int32_t totalLength);
		static mscorlib::System::String* Concat(IL2CPP::Array<mscorlib::System::String*>* values);
		mscorlib::System::TypeCode GetTypeCode();
		bool System_IConvertible_ToBoolean(mscorlib::System::IFormatProvider* provider);
		wchar_t System_IConvertible_ToChar(mscorlib::System::IFormatProvider* provider);
		int8_t System_IConvertible_ToSByte(mscorlib::System::IFormatProvider* provider);
		uint8_t System_IConvertible_ToByte(mscorlib::System::IFormatProvider* provider);
		int16_t System_IConvertible_ToInt16(mscorlib::System::IFormatProvider* provider);
		uint16_t System_IConvertible_ToUInt16(mscorlib::System::IFormatProvider* provider);
		int32_t System_IConvertible_ToInt32(mscorlib::System::IFormatProvider* provider);
		uint32_t System_IConvertible_ToUInt32(mscorlib::System::IFormatProvider* provider);
		int64_t System_IConvertible_ToInt64(mscorlib::System::IFormatProvider* provider);
		uint64_t System_IConvertible_ToUInt64(mscorlib::System::IFormatProvider* provider);
		float System_IConvertible_ToSingle(mscorlib::System::IFormatProvider* provider);
		double System_IConvertible_ToDouble(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Decimal System_IConvertible_ToDecimal(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::DateTime System_IConvertible_ToDateTime(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Object* System_IConvertible_ToType(mscorlib::System::Type* type, mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Char>* System_Collections_Generic_IEnumerable_System_Char__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		int32_t get_Length();
		static int32_t CompareOrdinalUnchecked(mscorlib::System::String* strA, int32_t indexA, int32_t lenA, mscorlib::System::String* strB, int32_t indexB, int32_t lenB);
		int32_t IndexOf(wchar_t value, int32_t startIndex, int32_t count);
		int32_t IndexOfUnchecked(wchar_t value, int32_t startIndex, int32_t count);
		int32_t IndexOfUnchecked(mscorlib::System::String* value, int32_t startIndex, int32_t count);
		int32_t IndexOfAny(IL2CPP::Array<wchar_t>* anyOf, int32_t startIndex, int32_t count);
		int32_t IndexOfAnyUnchecked(IL2CPP::Array<wchar_t>* anyOf, int32_t startIndex, int32_t count);
		int32_t LastIndexOf(wchar_t value, int32_t startIndex, int32_t count);
		int32_t LastIndexOfUnchecked(wchar_t value, int32_t startIndex, int32_t count);
		int32_t LastIndexOfAny(IL2CPP::Array<wchar_t>* anyOf, int32_t startIndex, int32_t count);
		int32_t LastIndexOfAnyUnchecked(IL2CPP::Array<wchar_t>* anyOf, int32_t startIndex, int32_t count);
		static int32_t nativeCompareOrdinalEx(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t count);
		mscorlib::System::String* ReplaceInternal(wchar_t oldChar, wchar_t newChar);
		mscorlib::System::String* ReplaceInternal(mscorlib::System::String* oldValue, mscorlib::System::String* newValue);
		mscorlib::System::String* ReplaceUnchecked(mscorlib::System::String* oldValue, mscorlib::System::String* newValue);
		mscorlib::System::String* ReplaceFallback(mscorlib::System::String* oldValue, mscorlib::System::String* newValue, int32_t testedCount);
		mscorlib::System::String* PadHelper(int32_t totalWidth, wchar_t paddingChar, bool isRightPadded);
		bool StartsWithOrdinalUnchecked(mscorlib::System::String* value);
		bool IsAscii();
		static void CharCopy(wchar_t* dest, wchar_t* src, int32_t count);
		static void memset(uint8_t* dest, int32_t val, int32_t len);
		static void memcpy(uint8_t* dest, uint8_t* src, int32_t size);
		static void bzero(uint8_t* dest, int32_t len);
		static void bzero_aligned_1(uint8_t* dest, int32_t len);
		static void bzero_aligned_2(uint8_t* dest, int32_t len);
		static void bzero_aligned_4(uint8_t* dest, int32_t len);
		static void bzero_aligned_8(uint8_t* dest, int32_t len);
		static void memcpy_aligned_1(uint8_t* dest, uint8_t* src, int32_t size);
		static void memcpy_aligned_2(uint8_t* dest, uint8_t* src, int32_t size);
		static void memcpy_aligned_4(uint8_t* dest, uint8_t* src, int32_t size);
		static void memcpy_aligned_8(uint8_t* dest, uint8_t* src, int32_t size);
		mscorlib::System::String* CreateString(int8_t* value);
		mscorlib::System::String* CreateString(int8_t* value, int32_t startIndex, int32_t length);
		mscorlib::System::String* CreateString(wchar_t* value);
		mscorlib::System::String* CreateString(wchar_t* value, int32_t startIndex, int32_t length);
		mscorlib::System::String* CreateString(IL2CPP::Array<wchar_t>* val, int32_t startIndex, int32_t length);
		mscorlib::System::String* CreateString(IL2CPP::Array<wchar_t>* val);
		mscorlib::System::String* CreateString(wchar_t c, int32_t count);
		mscorlib::System::String* CreateString(int8_t* value, int32_t startIndex, int32_t length, mscorlib::System::Text::Encoding* enc);
	};
	bool operator==(mscorlib::System::String& a, mscorlib::System::String& b);
	bool operator!=(mscorlib::System::String& a, mscorlib::System::String& b);
}

