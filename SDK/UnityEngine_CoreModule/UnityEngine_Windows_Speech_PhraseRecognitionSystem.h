#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct PhraseRecognitionSystem_ErrorDelegate; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct PhraseRecognitionSystem_StatusDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Windows_Speech_SpeechError.h"
#include "UnityEngine_Windows_Speech_SpeechSystemStatus.h"

namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	struct PhraseRecognitionSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate* OnError;
			UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate* OnStatusChanged;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void PhraseRecognitionSystem_InvokeErrorEvent(UnityEngine_CoreModule::UnityEngine::Windows::Speech::SpeechError errorCode);
		static void PhraseRecognitionSystem_InvokeStatusChangedEvent(UnityEngine_CoreModule::UnityEngine::Windows::Speech::SpeechSystemStatus status);
	};
}

