#include "UnityEngine_Windows_Speech_PhraseRecognizedEventArgs.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Windows.Speech", "PhraseRecognizedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::_ctor(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Windows::Speech::ConfidenceLevel confidence, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings, mscorlib::System::DateTime phraseStartTime, mscorlib::System::TimeSpan phraseDuration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.Windows.Speech.ConfidenceLevel", "UnityEngine.Windows.Speech.SemanticMeaning[]", "System.DateTime", "System.TimeSpan" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&confidence;
	params[2] = (intptr_t)semanticMeanings;
	params[3] = (intptr_t)&phraseStartTime;
	params[4] = (intptr_t)&phraseDuration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
