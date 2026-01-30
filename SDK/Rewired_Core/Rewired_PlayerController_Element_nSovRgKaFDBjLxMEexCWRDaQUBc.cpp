#include "Rewired_PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::PlayerController_Element::GetIl2CppClass(), "nSovRgKaFDBjLxMEexCWRDaQUBc");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc::_ctor(Rewired_Core::Rewired::ControllerElementType elementType, int32_t index, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerElementType", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementType;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
