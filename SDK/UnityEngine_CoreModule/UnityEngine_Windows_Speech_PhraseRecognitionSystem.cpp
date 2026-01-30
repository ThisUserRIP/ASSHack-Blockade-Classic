#include "UnityEngine_Windows_Speech_PhraseRecognitionSystem.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognitionSystem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Windows.Speech", "PhraseRecognitionSystem");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognitionSystem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeErrorEvent(UnityEngine_CoreModule::UnityEngine::Windows::Speech::SpeechError errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PhraseRecognitionSystem_InvokeErrorEvent", std::vector<std::string> { "UnityEngine.Windows.Speech.SpeechError" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&errorCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognitionSystem::PhraseRecognitionSystem_InvokeStatusChangedEvent(UnityEngine_CoreModule::UnityEngine::Windows::Speech::SpeechSystemStatus status)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PhraseRecognitionSystem_InvokeStatusChangedEvent", std::vector<std::string> { "UnityEngine.Windows.Speech.SpeechSystemStatus" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&status;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
