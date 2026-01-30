#include "UnityEngine_Experimental_Audio_AudioSampleProvider.h"

IL2CPP::Il2CppClass* UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AudioModule.dll", "UnityEngine.Experimental.Audio", "AudioSampleProvider");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable(int32_t sampleFrameCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeSampleFramesAvailable", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sampleFrameCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AudioModule::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow(int32_t droppedSampleFrameCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeSampleFramesOverflow", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&droppedSampleFrameCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
