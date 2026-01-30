#include "Rewired_InputMapper_InputMappedEventData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputMapper_InputMappedEventData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputMapper::GetIl2CppClass(), "InputMappedEventData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputMapper_InputMappedEventData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::InputMapper_InputMappedEventData::_ctor(Rewired_Core::Rewired::InputMapper* mapper, Rewired_Core::Rewired::ActionElementMap* actionElementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.InputMapper", "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mapper;
	params[1] = (intptr_t)actionElementMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
