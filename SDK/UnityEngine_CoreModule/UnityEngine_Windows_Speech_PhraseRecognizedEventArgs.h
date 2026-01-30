#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Windows_Speech_ConfidenceLevel.h"
#include "UnityEngine_Windows_Speech_SemanticMeaning.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct SemanticMeaning; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	struct PhraseRecognizedEventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel confidence;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings;
		mscorlib::System::String* text;
		mscorlib::System::DateTime phraseStartTime;
		mscorlib::System::TimeSpan phraseDuration;
		void _ctor(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel confidence, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings, mscorlib::System::DateTime phraseStartTime, mscorlib::System::TimeSpan phraseDuration);
	};
}

