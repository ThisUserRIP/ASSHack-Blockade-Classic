#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "I2_Loc_TranslationQuery.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationQuery; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace Assembly_CSharp::I2::Loc
{
	struct RealTimeTranslation : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* OriginalText;
		mscorlib::System::String* TranslatedText;
		bool IsTranslating;
		void OnGUI();
		void StartTranslating(mscorlib::System::String* fromCode, mscorlib::System::String* toCode);
		void OnTranslationReady(mscorlib::System::String* Translation, mscorlib::System::String* errorMsg);
		void ExampleMultiTranslations_Blocking();
		void ExampleMultiTranslations_Async();
		void OnMultitranslationReady(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* dict, mscorlib::System::String* errorMsg);
		bool IsWaitingForTranslation();
		mscorlib::System::String* GetTranslatedText();
		void SetOriginalText(mscorlib::System::String* text);
		void _ctor();
	};
}

