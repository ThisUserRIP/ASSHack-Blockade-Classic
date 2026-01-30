#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::I2::Loc { struct ILanguageSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc { struct TermData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "I2_Loc_LanguageSourceData_MissingTranslationAction.h"
namespace Assembly_CSharp::I2::Loc { struct LanguageData; };
#include "I2_Loc_LanguageSourceData_eAllowUnloadLanguages.h"
#include "I2_Loc_LanguageSourceData_eGoogleUpdateFrequency.h"
#include "I2_Loc_LanguageSourceData_eGoogleUpdateSynchronization.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::I2::Loc { struct LanguageSource_fnOnSourceUpdated; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
#include "I2_Loc_eSpreadsheetUpdateMode.h"
#include "I2_Loc_eTermType.h"
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
#include "I2_Loc_PersistentStorage_eFileType.h"

namespace Assembly_CSharp::I2::Loc
{
	struct LanguageSourceData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::ILanguageSource* owner;
		bool UserAgreesToHaveItOnTheScene;
		bool UserAgreesToHaveItInsideThePluginsFolder;
		bool GoogleLiveSyncIsUptoDate;
		bool mIsGlobalSource;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TermData>* mTerms;
		bool CaseInsensitiveTerms;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TermData>* mDictionary;
		Assembly_CSharp::I2::Loc::LanguageSourceData_MissingTranslationAction OnMissingTranslation;
		mscorlib::System::String* mTerm_AppName;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::LanguageData>* mLanguages;
		bool IgnoreDeviceLanguage;
		Assembly_CSharp::I2::Loc::LanguageSourceData_eAllowUnloadLanguages _AllowUnloadingLanguages;
		mscorlib::System::String* Google_WebServiceURL;
		mscorlib::System::String* Google_SpreadsheetKey;
		mscorlib::System::String* Google_SpreadsheetName;
		mscorlib::System::String* Google_LastUpdatedVersion;
		Assembly_CSharp::I2::Loc::LanguageSourceData_eGoogleUpdateFrequency GoogleUpdateFrequency;
		Assembly_CSharp::I2::Loc::LanguageSourceData_eGoogleUpdateFrequency GoogleInEditorCheckFrequency;
		Assembly_CSharp::I2::Loc::LanguageSourceData_eGoogleUpdateSynchronization GoogleUpdateSynchronization;
		float GoogleUpdateDelay;
		Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* Event_OnSourceUpdateFromGoogle;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Object>* Assets;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* mAssetDictionary;
		mscorlib::System::String* mDelayedGoogleData;
		struct StaticFields
		{
			mscorlib::System::String* EmptyCategory;
			IL2CPP::Array<wchar_t>* CategorySeparators;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Object* get_ownerObject();
		void add_Event_OnSourceUpdateFromGoogle(Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* value);
		void remove_Event_OnSourceUpdateFromGoogle(Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* value);
		void Awake();
		void OnDestroy();
		bool IsEqualTo(Assembly_CSharp::I2::Loc::LanguageSourceData* Source);
		bool ManagerHasASimilarSource();
		void ClearAllData();
		bool IsGlobalSource();
		void Editor_SetDirty();
		void UpdateAssetDictionary();
		UnityEngine_CoreModule::UnityEngine::Object* FindAsset(mscorlib::System::String* Name);
		bool HasAsset(UnityEngine_CoreModule::UnityEngine::Object* Obj);
		void AddAsset(UnityEngine_CoreModule::UnityEngine::Object* Obj);
		mscorlib::System::String* Export_I2CSV(mscorlib::System::String* Category, wchar_t Separator, bool specializationsAsRows);
		static void AppendI2Term(mscorlib::System::Text::StringBuilder* Builder, int32_t nLanguages, mscorlib::System::String* Term, Assembly_CSharp::I2::Loc::TermData* termData, wchar_t Separator, mscorlib::System::String* forceSpecialization);
		static void AppendI2Text(mscorlib::System::Text::StringBuilder* Builder, mscorlib::System::String* text);
		mscorlib::System::String* Export_Language_to_Cache(int32_t langIndex, bool fillTermWithFallback);
		mscorlib::System::String* Export_CSV(mscorlib::System::String* Category, wchar_t Separator, bool specializationsAsRows);
		static void AppendTerm(mscorlib::System::Text::StringBuilder* Builder, int32_t nLanguages, mscorlib::System::String* Term, Assembly_CSharp::I2::Loc::TermData* termData, mscorlib::System::String* specialization, wchar_t Separator);
		static void AppendString(mscorlib::System::Text::StringBuilder* Builder, mscorlib::System::String* Text, wchar_t Separator);
		static void AppendTranslation(mscorlib::System::Text::StringBuilder* Builder, mscorlib::System::String* Text, wchar_t Separator, mscorlib::System::String* tags);
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Export_Google_CreateWWWcall(Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode);
		mscorlib::System::String* Export_Google_CreateData();
		mscorlib::System::String* Import_CSV(mscorlib::System::String* Category, mscorlib::System::String* CSVstring, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode, wchar_t Separator);
		mscorlib::System::String* Import_I2CSV(mscorlib::System::String* Category, mscorlib::System::String* I2CSVstring, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode);
		mscorlib::System::String* Import_CSV(mscorlib::System::String* Category, mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* CSV, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode);
		bool ArrayContains(mscorlib::System::String* MainText, IL2CPP::Array<mscorlib::System::String*>* texts);
		static Assembly_CSharp::I2::Loc::eTermType GetTermType(mscorlib::System::String* type);
		void Import_Language_from_Cache(int32_t langIndex, mscorlib::System::String* langData, bool useFallback, bool onlyCurrentSpecialization);
		static void FreeUnusedLanguages();
		void Import_Google_FromCache();
		bool IsNewerVersion(mscorlib::System::String* currentVersion, mscorlib::System::String* newVersion);
		void Import_Google(bool ForceUpdate, bool justCheck);
		mscorlib::System::String* GetSourcePlayerPrefName();
		mscorlib::System::Collections::IEnumerator* Import_Google_Coroutine(bool JustCheck);
		void ApplyDownloadedDataOnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void ApplyDownloadedDataFromGoogle();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* Import_Google_CreateWWWcall(bool ForceUpdate, bool justCheck);
		bool HasGoogleSpreadsheet();
		mscorlib::System::String* Import_Google_Result(mscorlib::System::String* JsonString, Assembly_CSharp::I2::Loc::eSpreadsheetUpdateMode UpdateMode, bool saveInPlayerPrefs);
		int32_t GetLanguageIndex(mscorlib::System::String* language, bool AllowDiscartingRegion, bool SkipDisabled);
		Assembly_CSharp::I2::Loc::LanguageData* GetLanguageData(mscorlib::System::String* language, bool AllowDiscartingRegion);
		bool IsCurrentLanguage(int32_t languageIndex);
		int32_t GetLanguageIndexFromCode(mscorlib::System::String* Code, bool exactMatch, bool ignoreDisabled);
		static int32_t GetCommonWordInLanguageNames(mscorlib::System::String* Language1, mscorlib::System::String* Language2);
		static bool AreTheSameLanguage(mscorlib::System::String* Language1, mscorlib::System::String* Language2);
		static mscorlib::System::String* GetLanguageWithoutRegion(mscorlib::System::String* Language);
		void AddLanguage(mscorlib::System::String* LanguageName);
		void AddLanguage(mscorlib::System::String* LanguageName, mscorlib::System::String* LanguageCode);
		void RemoveLanguage(mscorlib::System::String* LanguageName);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetLanguages(bool skipDisabled);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetLanguagesCode(bool allowRegions, bool skipDisabled);
		bool IsLanguageEnabled(mscorlib::System::String* Language);
		void EnableLanguage(mscorlib::System::String* Language, bool bEnabled);
		bool AllowUnloadingLanguages();
		mscorlib::System::String* GetSavedLanguageFileName(int32_t languageIndex);
		void LoadLanguage(int32_t languageIndex, bool UnloadOtherLanguages, bool useFallback, bool onlyCurrentSpecialization, bool forceLoad);
		void LoadAllLanguages(bool forceLoad);
		void UnloadLanguage(int32_t languageIndex);
		void SaveLanguages(bool unloadAll, Assembly_CSharp::I2::Loc::PersistentStorage_eFileType fileLocation);
		bool HasUnloadedLanguages();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetCategories(bool OnlyMainCategory, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Categories);
		static mscorlib::System::String* GetKeyFromFullTerm(mscorlib::System::String* FullTerm, bool OnlyMainCategory);
		static mscorlib::System::String* GetCategoryFromFullTerm(mscorlib::System::String* FullTerm, bool OnlyMainCategory);
		static void DeserializeFullTerm(mscorlib::System::String* FullTerm, mscorlib::System::String& Key, mscorlib::System::String& Category, bool OnlyMainCategory);
		void UpdateDictionary(bool force);
		mscorlib::System::String* GetTranslation(mscorlib::System::String* term, mscorlib::System::String* overrideLanguage, mscorlib::System::String* overrideSpecialization, bool skipDisabled, bool allowCategoryMistmatch);
		bool TryGetTranslation(mscorlib::System::String* term, mscorlib::System::String& Translation, mscorlib::System::String* overrideLanguage, mscorlib::System::String* overrideSpecialization, bool skipDisabled, bool allowCategoryMistmatch);
		bool TryGetFallbackTranslation(Assembly_CSharp::I2::Loc::TermData* termData, mscorlib::System::String& Translation, int32_t langIndex, mscorlib::System::String* overrideSpecialization, bool skipDisabled);
		Assembly_CSharp::I2::Loc::TermData* AddTerm(mscorlib::System::String* term);
		Assembly_CSharp::I2::Loc::TermData* GetTermData(mscorlib::System::String* term, bool allowCategoryMistmatch);
		bool ContainsTerm(mscorlib::System::String* term);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetTermsList(mscorlib::System::String* Category);
		Assembly_CSharp::I2::Loc::TermData* AddTerm(mscorlib::System::String* NewTerm, Assembly_CSharp::I2::Loc::eTermType termType, bool SaveSource);
		void RemoveTerm(mscorlib::System::String* term);
		static void ValidateFullTerm(mscorlib::System::String& Term);
		void _ctor();
		static void _cctor();
	};
}

