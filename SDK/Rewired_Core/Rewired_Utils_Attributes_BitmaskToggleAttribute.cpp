#include "Rewired_Utils_Attributes_BitmaskToggleAttribute.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Attributes::BitmaskToggleAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Attributes", "BitmaskToggleAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Attributes::BitmaskToggleAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::Attributes::BitmaskToggleAttribute::_ctor(mscorlib::System::Type* aType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)aType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
