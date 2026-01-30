#include "UnityEngine_Windows_Speech_DictationRecognizer.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Windows.Speech", "DictationRecognizer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent(mscorlib::System::String* keyword)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DictationRecognizer_InvokeHypothesisGeneratedEvent", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keyword;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent(mscorlib::System::String* keyword, UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel minimumConfidence)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DictationRecognizer_InvokeResultGeneratedEvent", std::vector<std::string> { "System.String", "UnityEngine.Windows.Speech.ConfidenceLevel" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)keyword;
	params[1] = (intptr_t)&minimumConfidence;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeCompletedEvent(UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationCompletionCause cause)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DictationRecognizer_InvokeCompletedEvent", std::vector<std::string> { "UnityEngine.Windows.Speech.DictationCompletionCause" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cause;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeErrorEvent(mscorlib::System::String* error, int32_t hresult)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DictationRecognizer_InvokeErrorEvent", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)error;
	params[1] = (intptr_t)&hresult;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
