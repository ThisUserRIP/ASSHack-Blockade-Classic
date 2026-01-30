#include "Rewired_ControllerTemplate_GqiOxxudSaHqMMqooNvSNCYFzIC.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_GqiOxxudSaHqMMqooNvSNCYFzIC::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "GqiOxxudSaHqMMqooNvSNCYFzIC");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_GqiOxxudSaHqMMqooNvSNCYFzIC::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_GqiOxxudSaHqMMqooNvSNCYFzIC::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplate/tdpQHsLAKefMyDqYatncZIzdcJG[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)elements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplate_GqiOxxudSaHqMMqooNvSNCYFzIC::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* xAxis, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* yAxis, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* button)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)xAxis;
	params[4] = (intptr_t)yAxis;
	params[5] = (intptr_t)button;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::IControllerTemplateButton* Rewired_Core::Rewired::ControllerTemplate_GqiOxxudSaHqMMqooNvSNCYFzIC::get_press()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_press");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::IControllerTemplateButton*)returnValue;
}
