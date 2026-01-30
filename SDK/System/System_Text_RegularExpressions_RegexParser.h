#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct RegexNode; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Text_RegularExpressions_RegexOptions.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace System::System::Text::RegularExpressions { struct RegexTree; };
namespace System::System::Text::RegularExpressions { struct RegexReplacement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Text::RegularExpressions { struct RegexCharClass; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct ArgumentException; };

namespace System::System::Text::RegularExpressions
{
	struct RegexParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::RegexNode* _stack;
		System::Text::RegularExpressions::RegexNode* _group;
		System::Text::RegularExpressions::RegexNode* _alternation;
		System::Text::RegularExpressions::RegexNode* _concatenation;
		System::Text::RegularExpressions::RegexNode* _unit;
		mscorlib::System::String* _pattern;
		int32_t _currentPos;
		mscorlib::System::Globalization::CultureInfo* _culture;
		int32_t _autocap;
		int32_t _capcount;
		int32_t _captop;
		int32_t _capsize;
		mscorlib::System::Collections::Hashtable* _caps;
		mscorlib::System::Collections::Hashtable* _capnames;
		IL2CPP::Array<int32_t>* _capnumlist;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _capnamelist;
		System::Text::RegularExpressions::RegexOptions _options;
		mscorlib::System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexOptions>* _optionsStack;
		bool _ignoreNextParen;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* _category;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::Text::RegularExpressions::RegexTree* Parse(mscorlib::System::String* re, System::Text::RegularExpressions::RegexOptions op);
		static System::Text::RegularExpressions::RegexReplacement* ParseReplacement(mscorlib::System::String* rep, mscorlib::System::Collections::Hashtable* caps, int32_t capsize, mscorlib::System::Collections::Hashtable* capnames, System::Text::RegularExpressions::RegexOptions op);
		static mscorlib::System::String* Escape(mscorlib::System::String* input);
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture);
		void SetPattern(mscorlib::System::String* Re);
		void Reset(System::Text::RegularExpressions::RegexOptions topopts);
		System::Text::RegularExpressions::RegexNode* ScanRegex();
		System::Text::RegularExpressions::RegexNode* ScanReplacement();
		System::Text::RegularExpressions::RegexCharClass* ScanCharClass(bool caseInsensitive);
		System::Text::RegularExpressions::RegexCharClass* ScanCharClass(bool caseInsensitive, bool scanOnly);
		System::Text::RegularExpressions::RegexNode* ScanGroupOpen();
		void ScanBlank();
		System::Text::RegularExpressions::RegexNode* ScanBackslash();
		System::Text::RegularExpressions::RegexNode* ScanBasicBackslash();
		System::Text::RegularExpressions::RegexNode* ScanDollar();
		mscorlib::System::String* ScanCapname();
		wchar_t ScanOctal();
		int32_t ScanDecimal();
		wchar_t ScanHex(int32_t c);
		static int32_t HexDigit(wchar_t ch);
		wchar_t ScanControl();
		bool IsOnlyTopOption(System::Text::RegularExpressions::RegexOptions option);
		void ScanOptions();
		wchar_t ScanCharEscape();
		mscorlib::System::String* ParseProperty();
		int32_t TypeFromCode(wchar_t ch);
		static System::Text::RegularExpressions::RegexOptions OptionFromCode(wchar_t ch);
		void CountCaptures();
		void NoteCaptureSlot(int32_t i, int32_t pos);
		void NoteCaptureName(mscorlib::System::String* name, int32_t pos);
		void NoteCaptures(mscorlib::System::Collections::Hashtable* caps, int32_t capsize, mscorlib::System::Collections::Hashtable* capnames);
		void AssignNameSlots();
		int32_t CaptureSlotFromName(mscorlib::System::String* capname);
		bool IsCaptureSlot(int32_t i);
		bool IsCaptureName(mscorlib::System::String* capname);
		bool UseOptionN();
		bool UseOptionI();
		bool UseOptionM();
		bool UseOptionS();
		bool UseOptionX();
		bool UseOptionE();
		static bool IsSpecial(wchar_t ch);
		static bool IsStopperX(wchar_t ch);
		static bool IsQuantifier(wchar_t ch);
		bool IsTrueQuantifier();
		static bool IsSpace(wchar_t ch);
		static bool IsMetachar(wchar_t ch);
		void AddConcatenate(int32_t pos, int32_t cch, bool isReplacement);
		void PushGroup();
		void PopGroup();
		bool EmptyStack();
		void StartGroup(System::Text::RegularExpressions::RegexNode* openGroup);
		void AddAlternate();
		void AddConcatenate();
		void AddConcatenate(bool lazy, int32_t min, int32_t max);
		System::Text::RegularExpressions::RegexNode* Unit();
		void AddUnitOne(wchar_t ch);
		void AddUnitNotone(wchar_t ch);
		void AddUnitSet(mscorlib::System::String* cc);
		void AddUnitNode(System::Text::RegularExpressions::RegexNode* node);
		void AddUnitType(int32_t type);
		void AddGroup();
		void PushOptions();
		void PopOptions();
		bool EmptyOptionsStack();
		void PopKeepOptions();
		mscorlib::System::ArgumentException* MakeException(mscorlib::System::String* message);
		int32_t Textpos();
		void Textto(int32_t pos);
		wchar_t MoveRightGetChar();
		void MoveRight();
		void MoveRight(int32_t i);
		void MoveLeft();
		wchar_t CharAt(int32_t i);
		wchar_t RightChar();
		wchar_t RightChar(int32_t i);
		int32_t CharsRight();
		static void _cctor();
	};
}

