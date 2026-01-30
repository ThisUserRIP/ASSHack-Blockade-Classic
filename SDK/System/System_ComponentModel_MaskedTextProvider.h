#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Collections_Specialized_BitVector32.h"
namespace System::System::Collections::Specialized { struct BitVector32; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct MaskedTextProvider_CharDescriptor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "System_ComponentModel_MaskedTextResultHint.h"
#include "System_ComponentModel_MaskedTextProvider_CharType.h"

namespace System::System::ComponentModel
{
	struct MaskedTextProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Collections::Specialized::BitVector32 flagState;
		mscorlib::System::Globalization::CultureInfo* culture;
		mscorlib::System::Text::StringBuilder* testString;
		int32_t assignedCharCount;
		int32_t requiredCharCount;
		int32_t requiredEditChars;
		int32_t optionalEditChars;
		mscorlib::System::String* mask;
		wchar_t passwordChar;
		wchar_t promptChar;
		mscorlib::System::Collections::Generic::List_1<System::ComponentModel::MaskedTextProvider_CharDescriptor>* stringDescriptor;
		struct StaticFields
		{
			wchar_t spaceChar;
			wchar_t defaultPromptChar;
			wchar_t nullPasswordChar;
			bool defaultAllowPrompt;
			int32_t invalidIndex;
			uint8_t editAny;
			uint8_t editUnassigned;
			uint8_t editAssigned;
			bool forward;
			bool backward;
			int32_t ASCII_ONLY;
			int32_t ALLOW_PROMPT_AS_INPUT;
			int32_t INCLUDE_PROMPT;
			int32_t INCLUDE_LITERALS;
			int32_t RESET_ON_PROMPT;
			int32_t RESET_ON_LITERALS;
			int32_t SKIP_SPACE;
			mscorlib::System::Type* maskTextProviderType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* mask);
		void _ctor(mscorlib::System::String* mask, bool restrictToAscii);
		void _ctor(mscorlib::System::String* mask, mscorlib::System::Globalization::CultureInfo* culture);
		void _ctor(mscorlib::System::String* mask, mscorlib::System::Globalization::CultureInfo* culture, bool restrictToAscii);
		void _ctor(mscorlib::System::String* mask, wchar_t passwordChar, bool allowPromptAsInput);
		void _ctor(mscorlib::System::String* mask, mscorlib::System::Globalization::CultureInfo* culture, wchar_t passwordChar, bool allowPromptAsInput);
		void _ctor(mscorlib::System::String* mask, mscorlib::System::Globalization::CultureInfo* culture, bool allowPromptAsInput, wchar_t promptChar, wchar_t passwordChar, bool restrictToAscii);
		void Initialize();
		bool get_AllowPromptAsInput();
		int32_t get_AssignedEditPositionCount();
		int32_t get_AvailableEditPositionCount();
		mscorlib::System::Object* Clone();
		mscorlib::System::Globalization::CultureInfo* get_Culture();
		static wchar_t get_DefaultPasswordChar();
		int32_t get_EditPositionCount();
		mscorlib::System::Collections::IEnumerator* get_EditPositions();
		bool get_IncludeLiterals();
		void set_IncludeLiterals(bool value);
		bool get_IncludePrompt();
		void set_IncludePrompt(bool value);
		bool get_AsciiOnly();
		bool get_IsPassword();
		void set_IsPassword(bool value);
		static int32_t get_InvalidIndex();
		int32_t get_LastAssignedPosition();
		int32_t get_Length();
		mscorlib::System::String* get_Mask();
		bool get_MaskCompleted();
		bool get_MaskFull();
		wchar_t get_PasswordChar();
		void set_PasswordChar(wchar_t value);
		wchar_t get_PromptChar();
		void set_PromptChar(wchar_t value);
		bool get_ResetOnPrompt();
		void set_ResetOnPrompt(bool value);
		bool get_ResetOnSpace();
		void set_ResetOnSpace(bool value);
		bool get_SkipLiterals();
		void set_SkipLiterals(bool value);
		wchar_t get_Item(int32_t index);
		bool Add(wchar_t input);
		bool Add(wchar_t input, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool Add(mscorlib::System::String* input);
		bool Add(mscorlib::System::String* input, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		void Clear();
		void Clear(System::ComponentModel::MaskedTextResultHint& resultHint);
		int32_t FindAssignedEditPositionFrom(int32_t position, bool direction);
		int32_t FindAssignedEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);
		int32_t FindEditPositionFrom(int32_t position, bool direction);
		int32_t FindEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);
		int32_t FindEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction, uint8_t assignedStatus);
		int32_t FindNonEditPositionFrom(int32_t position, bool direction);
		int32_t FindNonEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);
		int32_t FindPositionInRange(int32_t startPosition, int32_t endPosition, bool direction, System::ComponentModel::MaskedTextProvider_CharType charTypeFlags);
		int32_t FindUnassignedEditPositionFrom(int32_t position, bool direction);
		int32_t FindUnassignedEditPositionInRange(int32_t startPosition, int32_t endPosition, bool direction);
		static bool GetOperationResultFromHint(System::ComponentModel::MaskedTextResultHint hint);
		bool InsertAt(wchar_t input, int32_t position);
		bool InsertAt(wchar_t input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool InsertAt(mscorlib::System::String* input, int32_t position);
		bool InsertAt(mscorlib::System::String* input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool InsertAtInt(mscorlib::System::String* input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint, bool testOnly);
		static bool IsAscii(wchar_t c);
		static bool IsAciiAlphanumeric(wchar_t c);
		static bool IsAlphanumeric(wchar_t c);
		static bool IsAsciiLetter(wchar_t c);
		bool IsAvailablePosition(int32_t position);
		bool IsEditPosition(int32_t position);
		static bool IsEditPosition(System::ComponentModel::MaskedTextProvider_CharDescriptor* charDescriptor);
		static bool IsLiteralPosition(System::ComponentModel::MaskedTextProvider_CharDescriptor* charDescriptor);
		static bool IsPrintableChar(wchar_t c);
		static bool IsValidInputChar(wchar_t c);
		static bool IsValidMaskChar(wchar_t c);
		static bool IsValidPasswordChar(wchar_t c);
		bool Remove();
		bool Remove(int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool RemoveAt(int32_t position);
		bool RemoveAt(int32_t startPosition, int32_t endPosition);
		bool RemoveAt(int32_t startPosition, int32_t endPosition, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool RemoveAtInt(int32_t startPosition, int32_t endPosition, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint, bool testOnly);
		bool Replace(wchar_t input, int32_t position);
		bool Replace(wchar_t input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool Replace(wchar_t input, int32_t startPosition, int32_t endPosition, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool Replace(mscorlib::System::String* input, int32_t position);
		bool Replace(mscorlib::System::String* input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool Replace(mscorlib::System::String* input, int32_t startPosition, int32_t endPosition, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		void ResetChar(int32_t testPosition);
		void ResetString(int32_t startPosition, int32_t endPosition);
		bool Set(mscorlib::System::String* input);
		bool Set(mscorlib::System::String* input, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		void SetChar(wchar_t input, int32_t position);
		void SetChar(wchar_t input, int32_t position, System::ComponentModel::MaskedTextProvider_CharDescriptor* charDescriptor);
		void SetString(mscorlib::System::String* input, int32_t testPosition);
		bool TestChar(wchar_t input, int32_t position, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool TestEscapeChar(wchar_t input, int32_t position);
		bool TestEscapeChar(wchar_t input, int32_t position, System::ComponentModel::MaskedTextProvider_CharDescriptor* charDex);
		bool TestSetChar(wchar_t input, int32_t position, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool TestSetString(mscorlib::System::String* input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		bool TestString(mscorlib::System::String* input, int32_t position, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		mscorlib::System::String* ToDisplayString();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(bool ignorePasswordChar);
		mscorlib::System::String* ToString(int32_t startPosition, int32_t length);
		mscorlib::System::String* ToString(bool ignorePasswordChar, int32_t startPosition, int32_t length);
		mscorlib::System::String* ToString(bool includePrompt, bool includeLiterals);
		mscorlib::System::String* ToString(bool includePrompt, bool includeLiterals, int32_t startPosition, int32_t length);
		mscorlib::System::String* ToString(bool ignorePasswordChar, bool includePrompt, bool includeLiterals, int32_t startPosition, int32_t length);
		bool VerifyChar(wchar_t input, int32_t position, System::ComponentModel::MaskedTextResultHint& hint);
		bool VerifyEscapeChar(wchar_t input, int32_t position);
		bool VerifyString(mscorlib::System::String* input);
		bool VerifyString(mscorlib::System::String* input, int32_t& testPosition, System::ComponentModel::MaskedTextResultHint& resultHint);
		static void _cctor();
	};
}

