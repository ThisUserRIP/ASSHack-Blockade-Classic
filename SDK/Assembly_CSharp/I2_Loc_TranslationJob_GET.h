#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_TranslationJob_WWW.h"
namespace mscorlib::System { struct String; };
#include "I2_Loc_TranslationQuery.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationQuery; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::I2::Loc { struct GoogleTranslation_fnOnTranslationReady; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "I2_Loc_TranslationJob_eJobState.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::I2::Loc
{
	struct TranslationJob_GET : Assembly_CSharp::I2::Loc::TranslationJob_WWW
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* _requests;
		Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* _OnTranslationReady;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* mQueries;
		mscorlib::System::String* mErrorMessage;
		void _ctor(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* requests, Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslationReady* OnTranslationReady);
		void ExecuteNextQuery();
		Assembly_CSharp::I2::Loc::TranslationJob_eJobState GetState();
		void ProcessResult(IL2CPP::Array<uint8_t>* bytes, mscorlib::System::String* errorMsg);
	};
}

