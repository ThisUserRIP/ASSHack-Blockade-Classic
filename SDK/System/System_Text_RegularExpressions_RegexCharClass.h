#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct RegexCharClass_SingleRange; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Text_RegularExpressions_RegexCharClass_LowerCaseMapping.h"
namespace System::System::Text::RegularExpressions { struct RegexCharClass_LowerCaseMapping; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Globalization_UnicodeCategory.h"

namespace System::System::Text::RegularExpressions
{
	struct RegexCharClass : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass_SingleRange>* _rangelist;
		mscorlib::System::Text::StringBuilder* _categories;
		bool _canonical;
		bool _negate;
		System::Text::RegularExpressions::RegexCharClass* _subtractor;
		struct StaticFields
		{
			mscorlib::System::String* InternalRegexIgnoreCase;
			mscorlib::System::String* Space;
			mscorlib::System::String* NotSpace;
			mscorlib::System::String* Word;
			mscorlib::System::String* NotWord;
			mscorlib::System::String* SpaceClass;
			mscorlib::System::String* NotSpaceClass;
			mscorlib::System::String* WordClass;
			mscorlib::System::String* NotWordClass;
			mscorlib::System::String* DigitClass;
			mscorlib::System::String* NotDigitClass;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* _definedCategories;
			IL2CPP::Array<mscorlib::System::String*>* _propTable;
			IL2CPP::Array<System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>* _lcTable;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _ctor(bool negate, mscorlib::System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass_SingleRange>* ranges, mscorlib::System::Text::StringBuilder* categories, System::Text::RegularExpressions::RegexCharClass* subtraction);
		bool get_CanMerge();
		void set_Negate(bool value);
		void AddChar(wchar_t c);
		void AddCharClass(System::Text::RegularExpressions::RegexCharClass* cc);
		void AddSet(mscorlib::System::String* set);
		void AddSubtraction(System::Text::RegularExpressions::RegexCharClass* sub);
		void AddRange(wchar_t first, wchar_t last);
		void AddCategoryFromName(mscorlib::System::String* categoryName, bool invert, bool caseInsensitive, mscorlib::System::String* pattern);
		void AddCategory(mscorlib::System::String* category);
		void AddLowercase(mscorlib::System::Globalization::CultureInfo* culture);
		void AddLowercaseRange(wchar_t chMin, wchar_t chMax, mscorlib::System::Globalization::CultureInfo* culture);
		void AddWord(bool ecma, bool negate);
		void AddSpace(bool ecma, bool negate);
		void AddDigit(bool ecma, bool negate, mscorlib::System::String* pattern);
		static wchar_t SingletonChar(mscorlib::System::String* set);
		static bool IsMergeable(mscorlib::System::String* charClass);
		static bool IsEmpty(mscorlib::System::String* charClass);
		static bool IsSingleton(mscorlib::System::String* set);
		static bool IsSingletonInverse(mscorlib::System::String* set);
		static bool IsSubtraction(mscorlib::System::String* charClass);
		static bool IsNegated(mscorlib::System::String* set);
		static bool IsECMAWordChar(wchar_t ch);
		static bool IsWordChar(wchar_t ch);
		static bool CharInClass(wchar_t ch, mscorlib::System::String* set);
		static bool CharInClassRecursive(wchar_t ch, mscorlib::System::String* set, int32_t start);
		static bool CharInClassInternal(wchar_t ch, mscorlib::System::String* set, int32_t start, int32_t mySetLength, int32_t myCategoryLength);
		static bool CharInCategory(wchar_t ch, mscorlib::System::String* set, int32_t start, int32_t mySetLength, int32_t myCategoryLength);
		static bool CharInCategoryGroup(wchar_t ch, mscorlib::System::Globalization::UnicodeCategory chcategory, mscorlib::System::String* category, int32_t& i);
		static mscorlib::System::String* NegateCategory(mscorlib::System::String* category);
		static System::Text::RegularExpressions::RegexCharClass* Parse(mscorlib::System::String* charClass);
		static System::Text::RegularExpressions::RegexCharClass* ParseRecursive(mscorlib::System::String* charClass, int32_t start);
		int32_t RangeCount();
		mscorlib::System::String* ToStringClass();
		System::Text::RegularExpressions::RegexCharClass_SingleRange* GetRangeAt(int32_t i);
		void Canonicalize();
		static mscorlib::System::String* SetFromProperty(mscorlib::System::String* capname, bool invert, mscorlib::System::String* pattern);
	};
}

