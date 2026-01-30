#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Globalization_NumberStyles.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Globalization { struct CultureData; };
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Globalization
{
	struct NumberFormatInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* numberGroupSizes;
		IL2CPP::Array<int32_t>* currencyGroupSizes;
		IL2CPP::Array<int32_t>* percentGroupSizes;
		mscorlib::System::String* positiveSign;
		mscorlib::System::String* negativeSign;
		mscorlib::System::String* numberDecimalSeparator;
		mscorlib::System::String* numberGroupSeparator;
		mscorlib::System::String* currencyGroupSeparator;
		mscorlib::System::String* currencyDecimalSeparator;
		mscorlib::System::String* currencySymbol;
		mscorlib::System::String* ansiCurrencySymbol;
		mscorlib::System::String* nanSymbol;
		mscorlib::System::String* positiveInfinitySymbol;
		mscorlib::System::String* negativeInfinitySymbol;
		mscorlib::System::String* percentDecimalSeparator;
		mscorlib::System::String* percentGroupSeparator;
		mscorlib::System::String* percentSymbol;
		mscorlib::System::String* perMilleSymbol;
		IL2CPP::Array<mscorlib::System::String*>* nativeDigits;
		int32_t m_dataItem;
		int32_t numberDecimalDigits;
		int32_t currencyDecimalDigits;
		int32_t currencyPositivePattern;
		int32_t currencyNegativePattern;
		int32_t numberNegativePattern;
		int32_t percentPositivePattern;
		int32_t percentNegativePattern;
		int32_t percentDecimalDigits;
		int32_t digitSubstitution;
		bool isReadOnly;
		bool m_useUserOverride;
		bool m_isInvariant;
		bool validForParseAsNumber;
		bool validForParseAsCurrency;
		struct StaticFields
		{
			mscorlib::System::Globalization::NumberFormatInfo* invariantInfo;
			mscorlib::System::Globalization::NumberStyles InvalidNumberStyles;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnDeserializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void _ctor(mscorlib::System::Globalization::CultureData* cultureData);
		static mscorlib::System::Globalization::NumberFormatInfo* get_InvariantInfo();
		static mscorlib::System::Globalization::NumberFormatInfo* GetInstance(mscorlib::System::IFormatProvider* formatProvider);
		mscorlib::System::Object* Clone();
		int32_t get_CurrencyDecimalDigits();
		mscorlib::System::String* get_CurrencyDecimalSeparator();
		bool get_IsReadOnly();
		IL2CPP::Array<int32_t>* get_CurrencyGroupSizes();
		IL2CPP::Array<int32_t>* get_NumberGroupSizes();
		IL2CPP::Array<int32_t>* get_PercentGroupSizes();
		mscorlib::System::String* get_CurrencyGroupSeparator();
		mscorlib::System::String* get_CurrencySymbol();
		static mscorlib::System::Globalization::NumberFormatInfo* get_CurrentInfo();
		mscorlib::System::String* get_NaNSymbol();
		int32_t get_CurrencyNegativePattern();
		int32_t get_NumberNegativePattern();
		int32_t get_PercentPositivePattern();
		int32_t get_PercentNegativePattern();
		mscorlib::System::String* get_NegativeInfinitySymbol();
		mscorlib::System::String* get_NegativeSign();
		int32_t get_NumberDecimalDigits();
		mscorlib::System::String* get_NumberDecimalSeparator();
		mscorlib::System::String* get_NumberGroupSeparator();
		int32_t get_CurrencyPositivePattern();
		mscorlib::System::String* get_PositiveInfinitySymbol();
		mscorlib::System::String* get_PositiveSign();
		int32_t get_PercentDecimalDigits();
		mscorlib::System::String* get_PercentDecimalSeparator();
		mscorlib::System::String* get_PercentGroupSeparator();
		mscorlib::System::String* get_PercentSymbol();
		mscorlib::System::String* get_PerMilleSymbol();
		mscorlib::System::Object* GetFormat(mscorlib::System::Type* formatType);
		static mscorlib::System::Globalization::NumberFormatInfo* ReadOnly(mscorlib::System::Globalization::NumberFormatInfo* nfi);
		static void ValidateParseStyleInteger(mscorlib::System::Globalization::NumberStyles style);
		static void ValidateParseStyleFloatingPoint(mscorlib::System::Globalization::NumberStyles style);
	};
}

