#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc { struct ILocalizationParamsManager; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::I2::Loc { struct LanguageSourceData; };
namespace Assembly_CSharp::I2::Loc { struct ILocalizeTargetDescriptor; };
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager_OnLocalizeCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager__GetParam; };
namespace System::System::Text::RegularExpressions { struct MatchCollection; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Assembly_CSharp::I2::Loc { struct Localize; };
namespace Assembly_CSharp::I2::Loc { struct TermData; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* mCurrentLanguage;
			mscorlib::System::String* mLanguageCode;
			mscorlib::System::Globalization::CultureInfo* mCurrentCulture;
			bool mChangeCultureInfo;
			bool IsRight2Left;
			bool HasJoinedWords;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::ILocalizationParamsManager>* ParamManagers;
			IL2CPP::Array<mscorlib::System::String*>* LanguagesRTL;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::LanguageSourceData>* Sources;
			IL2CPP::Array<mscorlib::System::String*>* GlobalSources;
			mscorlib::System::String* mCurrentDeviceLanguage;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::ILocalizeTargetDescriptor>* mLocalizeTargets;
			Assembly_CSharp::I2::Loc::LocalizationManager_OnLocalizeCallback* OnLocalizeEvent;
			bool mLocalizeIsScheduled;
			bool mLocalizeIsScheduledWithForcedValue;
			bool HighlightLocalizedTargets;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InitializeIfNeeded();
		static mscorlib::System::String* GetVersion();
		static int32_t GetRequiredWebServiceVersion();
		static mscorlib::System::String* GetWebServiceURL(Assembly_CSharp::I2::Loc::LanguageSourceData* source);
		static mscorlib::System::String* get_CurrentLanguage();
		static void set_CurrentLanguage(mscorlib::System::String* value);
		static mscorlib::System::String* get_CurrentLanguageCode();
		static void set_CurrentLanguageCode(mscorlib::System::String* value);
		static mscorlib::System::String* get_CurrentRegion();
		static void set_CurrentRegion(mscorlib::System::String* value);
		static mscorlib::System::String* get_CurrentRegionCode();
		static void set_CurrentRegionCode(mscorlib::System::String* value);
		static mscorlib::System::Globalization::CultureInfo* get_CurrentCulture();
		static void SetLanguageAndCode(mscorlib::System::String* LanguageName, mscorlib::System::String* LanguageCode, bool RememberLanguage, bool Force);
		static mscorlib::System::Globalization::CultureInfo* CreateCultureForCode(mscorlib::System::String* code);
		static void EnableChangingCultureInfo(bool bEnable);
		static void SetCurrentCultureInfo();
		static void SelectStartupLanguage();
		static bool HasLanguage(mscorlib::System::String* Language, bool AllowDiscartingRegion, bool Initialize, bool SkipDisabled);
		static mscorlib::System::String* GetSupportedLanguage(mscorlib::System::String* Language, bool ignoreDisabled);
		static mscorlib::System::String* GetLanguageCode(mscorlib::System::String* Language);
		static mscorlib::System::String* GetLanguageFromCode(mscorlib::System::String* Code, bool exactMatch);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetAllLanguages(bool SkipDisabled);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetAllLanguagesCode(bool allowRegions, bool SkipDisabled);
		static bool IsLanguageEnabled(mscorlib::System::String* Language);
		static void LoadCurrentLanguage();
		static void PreviewLanguage(mscorlib::System::String* NewLanguage);
		static void AutoLoadGlobalParamManagers();
		static void ApplyLocalizationParams(mscorlib::System::String& translation, bool allowLocalizedParameters);
		static void ApplyLocalizationParams(mscorlib::System::String& translation, UnityEngine_CoreModule::UnityEngine::GameObject* root, bool allowLocalizedParameters);
		static void ApplyLocalizationParams(mscorlib::System::String& translation, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters, bool allowLocalizedParameters);
		static void ApplyLocalizationParams(mscorlib::System::String& translation, Assembly_CSharp::I2::Loc::LocalizationManager__GetParam* getParam, bool allowLocalizedParameters);
		static mscorlib::System::String* GetLocalizationParam(mscorlib::System::String* ParamName, UnityEngine_CoreModule::UnityEngine::GameObject* root);
		static mscorlib::System::String* GetPluralType(System::System::Text::RegularExpressions::MatchCollection* matches, mscorlib::System::String* langCode, Assembly_CSharp::I2::Loc::LocalizationManager__GetParam* getParam);
		static mscorlib::System::String* ApplyRTLfix(mscorlib::System::String* line);
		static mscorlib::System::String* ApplyRTLfix(mscorlib::System::String* line, int32_t maxCharacters, bool ignoreNumbers);
		static mscorlib::System::String* FixRTL_IfNeeded(mscorlib::System::String* text, int32_t maxCharacters, bool ignoreNumber);
		static bool IsRTL(mscorlib::System::String* Code);
		static bool UpdateSources();
		static void UnregisterDeletededSources();
		static void RegisterSceneSources();
		static void RegisterSourceInResources();
		static void AddSource(Assembly_CSharp::I2::Loc::LanguageSourceData* Source);
		static mscorlib::System::Collections::IEnumerator* Delayed_Import_Google(Assembly_CSharp::I2::Loc::LanguageSourceData* source, float delay, bool justCheck);
		static void RemoveSource(Assembly_CSharp::I2::Loc::LanguageSourceData* Source);
		static bool IsGlobalSource(mscorlib::System::String* SourceName);
		static Assembly_CSharp::I2::Loc::LanguageSourceData* GetSourceContaining(mscorlib::System::String* term, bool fallbackToFirst);
		static UnityEngine_CoreModule::UnityEngine::Object* FindAsset(mscorlib::System::String* value);
		static void ApplyDownloadedDataFromGoogle();
		static mscorlib::System::String* GetCurrentDeviceLanguage(bool force);
		static void DetectDeviceLanguage();
		static void RegisterTarget(Assembly_CSharp::I2::Loc::ILocalizeTargetDescriptor* desc);
		static void add_OnLocalizeEvent(Assembly_CSharp::I2::Loc::LocalizationManager_OnLocalizeCallback* value);
		static void remove_OnLocalizeEvent(Assembly_CSharp::I2::Loc::LocalizationManager_OnLocalizeCallback* value);
		static mscorlib::System::String* GetTranslation(mscorlib::System::String* Term, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreRTLnumbers, bool applyParameters, UnityEngine_CoreModule::UnityEngine::GameObject* localParametersRoot, mscorlib::System::String* overrideLanguage);
		static mscorlib::System::String* GetTermTranslation(mscorlib::System::String* Term, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreRTLnumbers, bool applyParameters, UnityEngine_CoreModule::UnityEngine::GameObject* localParametersRoot, mscorlib::System::String* overrideLanguage);
		static bool TryGetTranslation(mscorlib::System::String* Term, mscorlib::System::String& Translation, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreRTLnumbers, bool applyParameters, UnityEngine_CoreModule::UnityEngine::GameObject* localParametersRoot, mscorlib::System::String* overrideLanguage);
		template <typename T> static T* GetTranslatedObject(mscorlib::System::String* AssetName, Assembly_CSharp::I2::Loc::Localize* optionalLocComp)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTranslatedObject", std::vector<std::string> { "System.String", "I2.Loc.Localize" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)AssetName;
			params[1] = (intptr_t)optionalLocComp;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* GetTranslatedObjectByTermName(mscorlib::System::String* Term, Assembly_CSharp::I2::Loc::Localize* optionalLocComp)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTranslatedObjectByTermName", std::vector<std::string> { "System.String", "I2.Loc.Localize" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)Term;
			params[1] = (intptr_t)optionalLocComp;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static mscorlib::System::String* GetAppName(mscorlib::System::String* languageCode);
		static void LocalizeAll(bool Force);
		static mscorlib::System::Collections::IEnumerator* Coroutine_LocalizeAll();
		static void DoLocalizeAll(bool Force);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetCategories();
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetTermsList(mscorlib::System::String* Category);
		static Assembly_CSharp::I2::Loc::TermData* GetTermData(mscorlib::System::String* term);
		static Assembly_CSharp::I2::Loc::TermData* GetTermData(mscorlib::System::String* term, Assembly_CSharp::I2::Loc::LanguageSourceData& source);
		static void _cctor();
	};
}

