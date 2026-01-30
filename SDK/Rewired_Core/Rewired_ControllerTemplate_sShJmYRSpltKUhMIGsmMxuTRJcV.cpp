#include "Rewired_ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "sShJmYRSpltKUhMIGsmMxuTRJcV");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV::_ctor(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal* templateMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Controller", "Rewired.Data.Mapping.IHardwareControllerTemplateMap_Internal" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)templateMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
