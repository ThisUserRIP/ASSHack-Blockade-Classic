#include "UnityEngine_Networking_UploadHandlerRaw.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandlerRaw::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestModule.dll", "UnityEngine.Networking", "UploadHandlerRaw");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandlerRaw::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandlerRaw::Create(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandlerRaw* self, IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "UnityEngine.Networking.UploadHandlerRaw", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)self;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandlerRaw::_ctor(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
