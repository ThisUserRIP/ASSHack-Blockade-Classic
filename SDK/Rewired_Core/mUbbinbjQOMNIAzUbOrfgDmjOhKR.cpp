#include "mUbbinbjQOMNIAzUbOrfgDmjOhKR.h"

IL2CPP::Il2CppClass* Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "mUbbinbjQOMNIAzUbOrfgDmjOhKR");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR::_ctor(IL2CPP::Array<Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM*>* startingJoystickMapInfo, IL2CPP::Array<Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM*>* startingKeyboardMapInfo, IL2CPP::Array<Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM*>* startingMouseMapInfo, IL2CPP::Array<Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM*>* startingCustomControllerMapInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "ubZlOyeOreOlVqBmvjKDEenhiPaM[]", "ubZlOyeOreOlVqBmvjKDEenhiPaM[]", "ubZlOyeOreOlVqBmvjKDEenhiPaM[]", "ubZlOyeOreOlVqBmvjKDEenhiPaM[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)startingJoystickMapInfo;
	params[1] = (intptr_t)startingKeyboardMapInfo;
	params[2] = (intptr_t)startingMouseMapInfo;
	params[3] = (intptr_t)startingCustomControllerMapInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
