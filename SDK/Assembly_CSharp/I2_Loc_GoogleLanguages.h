#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "I2_Loc_GoogleLanguages_LanguageCodeDef.h"
namespace Assembly_CSharp::I2::Loc { struct GoogleLanguages_LanguageCodeDef; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "I2_Loc_ePluralType.h"

namespace Assembly_CSharp::I2::Loc
{
	struct GoogleLanguages : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::GoogleLanguages_LanguageCodeDef>* mLanguageDef;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetLanguageCode(mscorlib::System::String* Filter, bool ShowWarnings);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetLanguagesForDropdown(mscorlib::System::String* Filter, mscorlib::System::String* CodesToExclude);
		static bool LanguageMatchesFilter(mscorlib::System::String* Language, IL2CPP::Array<mscorlib::System::String*>* Filters);
		static mscorlib::System::String* GetFormatedLanguageName(mscorlib::System::String* Language);
		static mscorlib::System::String* GetCodedLanguage(mscorlib::System::String* Language, mscorlib::System::String* code);
		static void UnPackCodeFromLanguageName(mscorlib::System::String* CodedLanguage, mscorlib::System::String& Language, mscorlib::System::String& code);
		static mscorlib::System::String* GetGoogleLanguageCode(mscorlib::System::String* InternationalCode);
		static mscorlib::System::String* GetLanguageName(mscorlib::System::String* code, bool useParenthesesForRegion, bool allowDiscardRegion);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetAllInternationalCodes();
		static bool LanguageCode_HasJoinedWord(mscorlib::System::String* languageCode);
		static int32_t GetPluralRule(mscorlib::System::String* langCode);
		static bool LanguageHasPluralType(mscorlib::System::String* langCode, mscorlib::System::String* pluralType);
		static Assembly_CSharp::I2::Loc::ePluralType GetPluralType(mscorlib::System::String* langCode, int32_t n);
		static int32_t GetPluralTestNumber(mscorlib::System::String* langCode, Assembly_CSharp::I2::Loc::ePluralType pluralType);
		static bool inRange(int32_t amount, int32_t min, int32_t max);
		static void _cctor();
	};
}

