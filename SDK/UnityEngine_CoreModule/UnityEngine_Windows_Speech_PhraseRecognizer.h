#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct PhraseRecognizer_PhraseRecognizedDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Windows_Speech_ConfidenceLevel.h"
#include "UnityEngine_Windows_Speech_SemanticMeaning.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct SemanticMeaning; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	struct PhraseRecognizer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Recognizer;
		UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* OnPhraseRecognized;
		void InvokePhraseRecognizedEvent(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel confidence, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings, int64_t phraseStartFileTime, int64_t phraseDurationTicks);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* MarshalSemanticMeaning(intptr_t keys, intptr_t values, intptr_t valueSizes, int32_t valueCount);
	};
}

