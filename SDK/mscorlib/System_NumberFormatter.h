#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
#include "System_Char.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
#include "System_UInt64.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Threading { struct Thread; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace mscorlib::System
{
	struct NumberFormatter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::NumberFormatInfo* _nfi;
		IL2CPP::Array<wchar_t>* _cbuf;
		bool _NaN;
		bool _infinity;
		bool _isCustomFormat;
		bool _specifierIsUpper;
		bool _positive;
		wchar_t _specifier;
		int32_t _precision;
		int32_t _defPrecision;
		int32_t _digitsLen;
		int32_t _offset;
		int32_t _decPointPos;
		uint32_t _val1;
		uint32_t _val2;
		uint32_t _val3;
		uint32_t _val4;
		int32_t _ind;
		struct StaticFields
		{
			uint64_t* MantissaBitsTable;
			int32_t* TensExponentTable;
			wchar_t* DigitLowerTable;
			wchar_t* DigitUpperTable;
			int64_t* TenPowersList;
			int32_t* DecHexDigits;
			mscorlib::System::NumberFormatter* threadNumberFormatter;
			mscorlib::System::NumberFormatter* userFormatProvider;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void GetFormatterTables(uint64_t& MantissaBitsTable, int32_t& TensExponentTable, wchar_t& DigitLowerTable, wchar_t& DigitUpperTable, int64_t& TenPowersList, int32_t& DecHexDigits);
		static void _cctor();
		static int64_t GetTenPowerOf(int32_t i);
		void InitDecHexDigits(uint32_t value);
		void InitDecHexDigits(uint64_t value);
		void InitDecHexDigits(uint32_t hi, uint64_t lo);
		static uint32_t FastToDecHex(int32_t val);
		static uint32_t ToDecHex(int32_t val);
		static int32_t FastDecHexLen(int32_t val);
		static int32_t DecHexLen(uint32_t val);
		int32_t DecHexLen();
		static int32_t ScaleOrder(int64_t hi);
		int32_t InitialFloatingPrecision();
		static int32_t ParsePrecision(mscorlib::System::String* format);
		void _ctor(mscorlib::System::Threading::Thread* current);
		void Init(mscorlib::System::String* format);
		void InitHex(uint64_t value);
		void Init(mscorlib::System::String* format, int32_t value, int32_t defPrecision);
		void Init(mscorlib::System::String* format, uint32_t value, int32_t defPrecision);
		void Init(mscorlib::System::String* format, int64_t value);
		void Init(mscorlib::System::String* format, uint64_t value);
		void Init(mscorlib::System::String* format, double value, int32_t defPrecision);
		void Init(mscorlib::System::String* format, mscorlib::System::Decimal value);
		void ResetCharBuf(int32_t size);
		void Resize(int32_t len);
		void Append(wchar_t c);
		void Append(wchar_t c, int32_t cnt);
		void Append(mscorlib::System::String* s);
		mscorlib::System::Globalization::NumberFormatInfo* GetNumberFormatInstance(mscorlib::System::IFormatProvider* fp);
		void set_CurrentCulture(mscorlib::System::Globalization::CultureInfo* value);
		int32_t get_IntegerDigits();
		int32_t get_DecimalDigits();
		bool get_IsFloatingSource();
		bool get_IsZero();
		bool get_IsZeroInteger();
		void RoundPos(int32_t pos);
		bool RoundDecimal(int32_t decimals);
		bool RoundBits(int32_t shift);
		void RemoveTrailingZeros();
		void AddOneToDecHex();
		static uint32_t AddOneToDecHex(uint32_t val);
		int32_t CountTrailingZeros();
		static int32_t CountTrailingZeros(uint32_t val);
		static mscorlib::System::NumberFormatter* GetInstance(mscorlib::System::IFormatProvider* fp);
		void Release();
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, uint32_t value, mscorlib::System::IFormatProvider* fp);
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, int32_t value, mscorlib::System::IFormatProvider* fp);
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, uint64_t value, mscorlib::System::IFormatProvider* fp);
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, int64_t value, mscorlib::System::IFormatProvider* fp);
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, float value, mscorlib::System::IFormatProvider* fp);
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, double value, mscorlib::System::IFormatProvider* fp);
		static mscorlib::System::String* NumberToString(mscorlib::System::String* format, mscorlib::System::Decimal value, mscorlib::System::IFormatProvider* fp);
		mscorlib::System::String* IntegerToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* fp);
		mscorlib::System::String* NumberToString(mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatCurrency(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatDecimal(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatHexadecimal(int32_t precision);
		mscorlib::System::String* FormatFixedPoint(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatRoundtrip(double origval, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatRoundtrip(float origval, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatGeneral(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatNumber(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatPercent(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatExponential(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* FormatExponential(int32_t precision, mscorlib::System::Globalization::NumberFormatInfo* nfi, int32_t expDigits);
		mscorlib::System::String* FormatCustom(mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		static void ZeroTrimEnd(mscorlib::System::Text::StringBuilder* sb, bool canEmpty);
		static bool IsZeroOnly(mscorlib::System::Text::StringBuilder* sb);
		static void AppendNonNegativeNumber(mscorlib::System::Text::StringBuilder* sb, int32_t v);
		void AppendIntegerString(int32_t minLength, mscorlib::System::Text::StringBuilder* sb);
		void AppendIntegerString(int32_t minLength);
		void AppendDecimalString(int32_t precision, mscorlib::System::Text::StringBuilder* sb);
		void AppendDecimalString(int32_t precision);
		void AppendIntegerStringWithGroupSeparator(IL2CPP::Array<int32_t>* groups, mscorlib::System::String* groupSeparator);
		void AppendExponent(mscorlib::System::Globalization::NumberFormatInfo* nfi, int32_t exponent, int32_t minDigits);
		void AppendOneDigit(int32_t start);
		void AppendDigits(int32_t start, int32_t end);
		void AppendDigits(int32_t start, int32_t end, mscorlib::System::Text::StringBuilder* sb);
		void Multiply10(int32_t count);
		void Divide10(int32_t count);
		mscorlib::System::NumberFormatter* GetClone();
	};
}

