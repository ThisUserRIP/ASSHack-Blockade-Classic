#include "UnityEngine_Windows_Speech_PhraseRecognizer.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Windows.Speech", "PhraseRecognizer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizer::InvokePhraseRecognizedEvent(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel confidence, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings, int64_t phraseStartFileTime, int64_t phraseDurationTicks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokePhraseRecognizedEvent", std::vector<std::string> { "System.String", "UnityEngine.Windows.Speech.ConfidenceLevel", "UnityEngine.Windows.Speech.SemanticMeaning[]", "System.Int64", "System.Int64" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&confidence;
	params[2] = (intptr_t)semanticMeanings;
	params[3] = (intptr_t)&phraseStartFileTime;
	params[4] = (intptr_t)&phraseDurationTicks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizer::MarshalSemanticMeaning(intptr_t keys, intptr_t values, intptr_t valueSizes, int32_t valueCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarshalSemanticMeaning", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&keys;
	params[1] = (intptr_t)&values;
	params[2] = (intptr_t)&valueSizes;
	params[3] = (intptr_t)&valueCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>*)returnValue;
}
