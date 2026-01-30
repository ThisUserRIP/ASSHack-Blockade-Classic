#include "Rewired_ControllerTemplate_ozPkigVHvtwpMkLmCfWeTBkPBKq.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_ozPkigVHvtwpMkLmCfWeTBkPBKq::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "ozPkigVHvtwpMkLmCfWeTBkPBKq");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_ozPkigVHvtwpMkLmCfWeTBkPBKq::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_ozPkigVHvtwpMkLmCfWeTBkPBKq::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements)
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
void Rewired_Core::Rewired::ControllerTemplate_ozPkigVHvtwpMkLmCfWeTBkPBKq::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* positionX, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* positionY, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* positionZ, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* rotationX, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* rotationY, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* rotationZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf", "Rewired.ControllerTemplate/xImNodUwBLNFcteRAfnptqFHaMnf" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)positionX;
	params[4] = (intptr_t)positionY;
	params[5] = (intptr_t)positionZ;
	params[6] = (intptr_t)rotationX;
	params[7] = (intptr_t)rotationY;
	params[8] = (intptr_t)rotationZ;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
