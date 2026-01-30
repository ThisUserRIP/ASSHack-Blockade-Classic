#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_TranslationJob.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationJob_WEB; };
namespace Assembly_CSharp::I2::Loc { struct TranslationJob_POST; };
namespace Assembly_CSharp::I2::Loc { struct TranslationJob_GET; };
namespace mscorlib::System { struct String; };
#include "I2_Loc_TranslationQuery.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationQuery; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::I2::Loc { struct GoogleTranslation_fnOnTranslationReady; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "I2_Loc_TranslationJob_eJobState.h"

namespace Assembly_CSharp::I2::Loc
{
	struct TranslationJob_Main : Assembly_CSharp::I2::Loc::TranslationJob
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::TranslationJob_WEB* mWeb;
		Assembly_CSharp::I2::Loc::TranslationJob_POST* mPost;
		Assembly_CSharp::I2::Loc::TranslationJob_GET* mGet;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* _requests;
		Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* _OnTranslationReady;
		mscorlib::System::String* mErrorMessage;
		void _ctor(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* OnTranslationReady);
		Assembly_CSharp::I2::Loc::TranslationJob_eJobState GetState();
		void Dispose();
	};
}

