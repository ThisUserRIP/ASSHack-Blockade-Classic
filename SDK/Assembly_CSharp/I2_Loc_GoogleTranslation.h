#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::I2::Loc { struct TranslationJob; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::I2::Loc { struct GoogleTranslation_fnOnTranslated; };
#include "I2_Loc_TranslationQuery.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationQuery; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::I2::Loc { struct GoogleTranslation_fnOnTranslationReady; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct MatchCollection; };

namespace Assembly_CSharp::I2::Loc
{
	struct GoogleTranslation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest>* mCurrentTranslations;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TranslationJob>* mTranslationJobs;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool CanTranslate();
		static void Translate(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslated* OnTranslationReady);
		static mscorlib::System::String* ForceTranslate(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo);
		static void Translate(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* OnTranslationReady, bool usePOST);
		static bool ForceTranslate(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, bool usePOST);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* ConvertTranslationRequest(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, bool encodeGET);
		static void AddTranslationJob(Assembly_CSharp::I2::Loc::TranslationJob* job);
		static mscorlib::System::Collections::IEnumerator* WaitForTranslations();
		static mscorlib::System::String* ParseTranslationResult(mscorlib::System::String* html, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests);
		static bool IsTranslating();
		static void CancelCurrentGoogleTranslations();
		static void CreateQueries(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict);
		static void CreateQueries_Plurals(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict);
		static void AddQuery(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeFrom, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict);
		static mscorlib::System::String* GetTranslation(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict);
		static Assembly_CSharp::I2::Loc::TranslationQuery FindQueryFromOrigText(mscorlib::System::String* origText, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict);
		static bool HasParameters(mscorlib::System::String* text);
		static mscorlib::System::String* GetPluralParameter(mscorlib::System::String* text, bool forceTag);
		static mscorlib::System::String* GetPluralText(mscorlib::System::String* text, mscorlib::System::String* pluralType);
		static int32_t FindClosingTag(mscorlib::System::String* tag, System::System::Text::RegularExpressions::MatchCollection* matches, int32_t startIndex);
		static mscorlib::System::String* GetGoogleNoTranslateTag(int32_t tagNumber);
		static void ParseNonTranslatableElements(Assembly_CSharp::I2::Loc::TranslationQuery& query);
		static mscorlib::System::String* GetQueryResult(mscorlib::System::String* text, mscorlib::System::String* LanguageCodeTo, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict);
		static mscorlib::System::String* RebuildTranslation(mscorlib::System::String* text, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict, mscorlib::System::String* LanguageCodeTo);
		static mscorlib::System::String* RebuildTranslation_Plural(mscorlib::System::String* text, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict, mscorlib::System::String* LanguageCodeTo);
		static mscorlib::System::String* UppercaseFirst(mscorlib::System::String* s);
		static mscorlib::System::String* TitleCase(mscorlib::System::String* s);
		static void _cctor();
	};
}

