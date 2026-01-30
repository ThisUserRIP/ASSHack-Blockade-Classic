#include "Rewired_ComponentControls_Data_CustomControllerElementTargetSetForFloat.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.ComponentControls.Data", "CustomControllerElementTargetSetForFloat");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::get_splitValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_splitValue");
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
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::set_splitValue(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_splitValue", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::get_target()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_target");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget*)returnValue;
}
Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::get_positiveTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_positiveTarget");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget*)returnValue;
}
Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::get_negativeTarget()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_negativeTarget");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget*)returnValue;
}
int32_t Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::get_targetCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_targetCount");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::get_Item(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget*)returnValue;
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::_ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementTarget" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::_ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* positiveTarget, Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* negativeTarget)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ComponentControls.Data.CustomControllerElementTarget", "Rewired.ComponentControls.Data.CustomControllerElementTarget" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)positiveTarget;
	params[1] = (intptr_t)negativeTarget;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat::ClearElementCaches()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearElementCaches");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
