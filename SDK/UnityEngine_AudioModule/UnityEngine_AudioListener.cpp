#include "UnityEngine_AudioListener.h"

IL2CPP::Il2CppClass* UnityEngine_AudioModule::UnityEngine::AudioListener::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AudioModule.dll", "UnityEngine", "AudioListener");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AudioModule::UnityEngine::AudioListener::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AudioModule::UnityEngine::AudioListener::GetOutputDataHelper(IL2CPP::Array<float>* samples, int32_t channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOutputDataHelper", std::vector<std::string> { "System.Single[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)samples;
	params[1] = (intptr_t)&channel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AudioModule::UnityEngine::AudioListener::GetSpectrumDataHelper(IL2CPP::Array<float>* samples, int32_t channel, UnityEngine_AudioModule::UnityEngine::FFTWindow window)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpectrumDataHelper", std::vector<std::string> { "System.Single[]", "System.Int32", "UnityEngine.FFTWindow" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)samples;
	params[1] = (intptr_t)&channel;
	params[2] = (intptr_t)&window;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_AudioModule::UnityEngine::AudioListener::get_volume()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_volume");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AudioModule::UnityEngine::AudioListener::set_volume(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_volume", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AudioModule::UnityEngine::AudioListener::GetOutputData(IL2CPP::Array<float>* samples, int32_t channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOutputData", std::vector<std::string> { "System.Single[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)samples;
	params[1] = (intptr_t)&channel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AudioModule::UnityEngine::AudioListener::GetSpectrumData(IL2CPP::Array<float>* samples, int32_t channel, UnityEngine_AudioModule::UnityEngine::FFTWindow window)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSpectrumData", std::vector<std::string> { "System.Single[]", "System.Int32", "UnityEngine.FFTWindow" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)samples;
	params[1] = (intptr_t)&channel;
	params[2] = (intptr_t)&window;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
