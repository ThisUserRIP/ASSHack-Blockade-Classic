#include "Rewired_ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerTemplate::GetIl2CppClass(), "lImtnhPnCZeoowQDtJYmrKHIbLP");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP::_ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplateElementType elementType, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV>* sourceElements)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.IControllerTemplate", "System.Int32", "System.String", "Rewired.ControllerTemplateElementType", "System.Collections.Generic.IList`1<Rewired.ControllerTemplate/SydusAsAzaGnyfyrOCOMvZjnHPV>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)&id;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)&elementType;
	params[4] = (intptr_t)sourceElements;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP::get_exists()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_exists");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
