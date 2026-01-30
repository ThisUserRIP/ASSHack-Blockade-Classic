#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::I2::Loc { struct LanguageSourceData; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "I2_Loc_LanguageSourceData_eGoogleUpdateFrequency.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::I2::Loc { struct LanguageSource_fnOnSourceUpdated; };
namespace Assembly_CSharp::I2::Loc { struct LanguageData; };
#include "I2_Loc_LanguageSourceData_eAllowUnloadLanguages.h"
namespace Assembly_CSharp::I2::Loc { struct TermData; };
#include "I2_Loc_LanguageSourceData_MissingTranslationAction.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LanguageSource : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::LanguageSourceData* mSource;
		int32_t version;
		bool NeverDestroy;
		bool UserAgreesToHaveItOnTheScene;
		bool UserAgreesToHaveItInsideThePluginsFolder;
		bool GoogleLiveSyncIsUptoDate;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Object>* Assets;
		mscorlib::System::String* Google_WebServiceURL;
		mscorlib::System::String* Google_SpreadsheetKey;
		mscorlib::System::String* Google_SpreadsheetName;
		mscorlib::System::String* Google_LastUpdatedVersion;
		Assembly_CSharp::I2::Loc::LanguageSourceData_eGoogleUpdateFrequency GoogleUpdateFrequency;
		float GoogleUpdateDelay;
		Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* Event_OnSourceUpdateFromGoogle;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::LanguageData>* mLanguages;
		bool IgnoreDeviceLanguage;
		Assembly_CSharp::I2::Loc::LanguageSourceData_eAllowUnloadLanguages _AllowUnloadingLanguages;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TermData>* mTerms;
		bool CaseInsensitiveTerms;
		Assembly_CSharp::I2::Loc::LanguageSourceData_MissingTranslationAction OnMissingTranslation;
		mscorlib::System::String* mTerm_AppName;
		Assembly_CSharp::I2::Loc::LanguageSourceData* get_SourceData();
		void set_SourceData(Assembly_CSharp::I2::Loc::LanguageSourceData* value);
		void add_Event_OnSourceUpdateFromGoogle(Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* value);
		void remove_Event_OnSourceUpdateFromGoogle(Assembly_CSharp::I2::Loc::LanguageSource_fnOnSourceUpdated* value);
		void Awake();
		void OnDestroy();
		mscorlib::System::String* GetSourceName();
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void _ctor();
	};
}

