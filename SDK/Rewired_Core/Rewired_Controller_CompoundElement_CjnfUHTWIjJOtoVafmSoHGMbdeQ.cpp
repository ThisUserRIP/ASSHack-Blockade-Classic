#include "Rewired_Controller_CompoundElement_CjnfUHTWIjJOtoVafmSoHGMbdeQ.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Controller_CompoundElement_CjnfUHTWIjJOtoVafmSoHGMbdeQ::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Controller_CompoundElement::GetIl2CppClass(), "CjnfUHTWIjJOtoVafmSoHGMbdeQ");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Controller_CompoundElement_CjnfUHTWIjJOtoVafmSoHGMbdeQ::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Controller_CompoundElement_CjnfUHTWIjJOtoVafmSoHGMbdeQ::_ctor(Rewired_Core::Rewired::Controller_Element* element, int32_t elementIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Controller/Element", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)&elementIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
