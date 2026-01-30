#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct DictationRecognizer_DictationHypothesisDelegate; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct DictationRecognizer_DictationResultDelegate; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct DictationRecognizer_DictationCompletedDelegate; };
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct DictationRecognizer_DictationErrorHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Windows_Speech_ConfidenceLevel.h"
#include "UnityEngine_Windows_Speech_DictationCompletionCause.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	struct DictationRecognizer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Recognizer;
		UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* DictationHypothesis;
		UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* DictationResult;
		UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* DictationComplete;
		UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* DictationError;
		void DictationRecognizer_InvokeHypothesisGeneratedEvent(mscorlib::System::String* keyword);
		void DictationRecognizer_InvokeResultGeneratedEvent(mscorlib::System::String* keyword, UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel minimumConfidence);
		void DictationRecognizer_InvokeCompletedEvent(UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationCompletionCause cause);
		void DictationRecognizer_InvokeErrorEvent(mscorlib::System::String* error, int32_t hresult);
	};
}

