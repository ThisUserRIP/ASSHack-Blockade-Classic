#include "Rewired_KeyboardMapSaveData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::KeyboardMapSaveData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "KeyboardMapSaveData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::KeyboardMapSaveData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::KeyboardMap* Rewired_Core::Rewired::KeyboardMapSaveData::get_keyboardMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keyboardMap");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::KeyboardMap*)returnValue;
}
void Rewired_Core::Rewired::KeyboardMapSaveData::_ctor(Rewired_Core::Rewired::Keyboard* keyboard, Rewired_Core::Rewired::KeyboardMap* map)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Keyboard", "Rewired.KeyboardMap" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)keyboard;
	params[1] = (intptr_t)map;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
