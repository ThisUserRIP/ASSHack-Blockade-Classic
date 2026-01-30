#include "Rewired_InputMapper_CanceledEventData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputMapper_CanceledEventData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputMapper::GetIl2CppClass(), "CanceledEventData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputMapper_CanceledEventData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::InputMapper_CanceledEventData::_ctor(Rewired_Core::Rewired::InputMapper* mapper, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.InputMapper", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mapper;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
