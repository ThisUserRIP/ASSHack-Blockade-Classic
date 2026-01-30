#include "UnityEngine_ImageConversion.h"

IL2CPP::Il2CppClass* UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.ImageConversionModule.dll", "UnityEngine", "ImageConversion");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<uint8_t>* UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::EncodeToPNG(UnityEngine_CoreModule::UnityEngine::Texture2D* tex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeToPNG", std::vector<std::string> { "UnityEngine.Texture2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::EncodeToJPG(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, int32_t quality)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeToJPG", std::vector<std::string> { "UnityEngine.Texture2D", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tex;
	params[1] = (intptr_t)&quality;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::EncodeToJPG(UnityEngine_CoreModule::UnityEngine::Texture2D* tex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeToJPG", std::vector<std::string> { "UnityEngine.Texture2D" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::LoadImage(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, IL2CPP::Array<uint8_t>* data, bool markNonReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadImage", std::vector<std::string> { "UnityEngine.Texture2D", "System.Byte[]", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)tex;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&markNonReadable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_ImageConversionModule::UnityEngine::ImageConversion::LoadImage(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadImage", std::vector<std::string> { "UnityEngine.Texture2D", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tex;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
