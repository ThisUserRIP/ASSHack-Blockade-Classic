#include "Rewired_HardwareControllerMapIdentifier.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::HardwareControllerMapIdentifier::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "HardwareControllerMapIdentifier");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::HardwareControllerMapIdentifier::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::HardwareControllerMapIdentifier::_ctor(mscorlib::System::Guid guid, Rewired_Core::Rewired::InputSource inputSource, Rewired_Core::Rewired::InputPlatform actualInputPlatform, int32_t variantIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Guid", "Rewired.InputSource", "Rewired.InputPlatform", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&guid;
	params[1] = (intptr_t)&inputSource;
	params[2] = (intptr_t)&actualInputPlatform;
	params[3] = (intptr_t)&variantIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
