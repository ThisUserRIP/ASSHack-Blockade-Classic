#include "Rewired_PlayerController_CompoundElement.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::PlayerController_CompoundElement::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::PlayerController::GetIl2CppClass(), "CompoundElement");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::PlayerController_CompoundElement::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::PlayerController_CompoundElement::_ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_CompoundElement_Definition* definition, IL2CPP::Array<Rewired_Core::Rewired::PlayerController_Element_Definition*>* elementDefinitions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.PlayerController", "Rewired.PlayerController/CompoundElement/Definition", "Rewired.PlayerController/Element/Definition[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)parent;
	params[1] = (intptr_t)definition;
	params[2] = (intptr_t)elementDefinitions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::PlayerController_CompoundElement::get_elementCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_elementCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::PlayerController_CompoundElement::mKgbCcfRQAcazSQTYCKAMDlyCzOb(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Element>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "mKgbCcfRQAcazSQTYCKAMDlyCzOb");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::PlayerController_CompoundElement::PpjIXoIAPvXitJiZFfGrcxhBUoyV(Rewired_Core::Rewired::PlayerController_Element* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PpjIXoIAPvXitJiZFfGrcxhBUoyV");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
