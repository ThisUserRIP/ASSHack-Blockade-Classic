#include "Rewired_ComponentControls_Data_CustomControllerElementTarget.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.ComponentControls.Data", "CustomControllerElementTarget");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_element()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_element");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector*)returnValue;
}
Rewired_Core::Rewired::Pole Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_valueContribution()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_valueContribution");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Pole ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Pole));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Pole>(*(Rewired_Core::Rewired::Pole*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::set_valueContribution(Rewired_Core::Rewired::Pole value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_valueContribution", std::vector<std::string> { "Rewired.Pole" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_valueRange()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_valueRange");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange>(*(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::set_valueRange(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget_ValueRange value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_valueRange", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementTarget/ValueRange" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::get_invert()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_invert");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::set_invert(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_invert", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::_ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* selector)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementSelector" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)selector;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget::ClearElementCaches()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearElementCaches");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
