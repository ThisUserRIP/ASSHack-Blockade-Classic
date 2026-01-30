#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct CultureData; };
#include "System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Object; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Globalization_UnicodeCategory.h"

namespace mscorlib::System::Globalization
{
	struct TextInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_listSeparator;
		bool m_isReadOnly;
		mscorlib::System::String* m_cultureName;
		mscorlib::System::Globalization::CultureData* m_cultureData;
		mscorlib::System::String* m_textInfoName;
		mscorlib::System::Nullable_1<mscorlib::System::Boolean> m_IsAsciiCasingSameAsInvariant;
		mscorlib::System::String* customCultureName;
		int32_t m_nDataItem;
		bool m_useUserOverride;
		int32_t m_win32LangID;
		struct StaticFields
		{
			mscorlib::System::Globalization::TextInfo* s_Invariant;
			int32_t wordSeparatorMask;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Globalization::TextInfo* get_Invariant();
		void _ctor(mscorlib::System::Globalization::CultureData* cultureData);
		void OnDeserializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnDeserialized();
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		static int32_t GetHashCodeOrdinalIgnoreCase(mscorlib::System::String* s);
		static int32_t GetHashCodeOrdinalIgnoreCase(mscorlib::System::String* s, bool forceRandomizedHashing, int64_t additionalEntropy);
		static int32_t CompareOrdinalIgnoreCase(mscorlib::System::String* str1, mscorlib::System::String* str2);
		static int32_t CompareOrdinalIgnoreCaseEx(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t lengthA, int32_t lengthB);
		static int32_t IndexOfStringOrdinalIgnoreCase(mscorlib::System::String* source, mscorlib::System::String* value, int32_t startIndex, int32_t count);
		static int32_t LastIndexOfStringOrdinalIgnoreCase(mscorlib::System::String* source, mscorlib::System::String* value, int32_t startIndex, int32_t count);
		mscorlib::System::String* get_CultureName();
		bool get_IsReadOnly();
		mscorlib::System::Object* Clone();
		static mscorlib::System::Globalization::TextInfo* ReadOnly(mscorlib::System::Globalization::TextInfo* textInfo);
		void SetReadOnlyState(bool readOnly);
		wchar_t ToLower(wchar_t c);
		mscorlib::System::String* ToLower(mscorlib::System::String* str);
		static wchar_t ToLowerAsciiInvariant(wchar_t c);
		wchar_t ToUpper(wchar_t c);
		mscorlib::System::String* ToUpper(mscorlib::System::String* str);
		static wchar_t ToUpperAsciiInvariant(wchar_t c);
		static bool IsAscii(wchar_t c);
		bool get_IsAsciiCasingSameAsInvariant();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToTitleCase(mscorlib::System::String* str);
		static int32_t AddNonLetter(mscorlib::System::Text::StringBuilder& result, mscorlib::System::String& input, int32_t inputIndex, int32_t charLen);
		int32_t AddTitlecaseLetter(mscorlib::System::Text::StringBuilder& result, mscorlib::System::String& input, int32_t inputIndex, int32_t charLen);
		static bool IsWordSeparator(mscorlib::System::Globalization::UnicodeCategory category);
		static bool IsLetterCategory(mscorlib::System::Globalization::UnicodeCategory uc);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		int32_t GetCaseInsensitiveHashCode(mscorlib::System::String* str);
		int32_t GetCaseInsensitiveHashCode(mscorlib::System::String* str, bool forceRandomizedHashing, int64_t additionalEntropy);
		int32_t GetInvariantCaseInsensitiveHashCode(mscorlib::System::String* str);
		mscorlib::System::String* ToUpperInternal(mscorlib::System::String* str);
		mscorlib::System::String* ToLowerInternal(mscorlib::System::String* str);
		wchar_t ToUpperInternal(wchar_t c);
		wchar_t ToLowerInternal(wchar_t c);
		static int32_t InternalCompareStringOrdinalIgnoreCase(mscorlib::System::String* strA, int32_t indexA, mscorlib::System::String* strB, int32_t indexB, int32_t lenA, int32_t lenB);
		void _ctor();
	};
}

