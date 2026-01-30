#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_GoogleTranslation.h"
namespace Assembly_CSharp::I2::Loc { struct GoogleTranslation; };
namespace Assembly_CSharp::I2::Loc { struct GoogleTranslation_fnOnTranslated; };
namespace mscorlib::System { struct String; };
#include "I2_Loc_TranslationQuery.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationQuery; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct GoogleTranslation___c__DisplayClass2_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::GoogleTranslation_fnOnTranslated* OnTranslationReady;
		mscorlib::System::String* text;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* queries;
		mscorlib::System::String* LanguageCodeTo;
		void _ctor();
		void _Translate_b__0(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* results, mscorlib::System::String* error);
	};
}

