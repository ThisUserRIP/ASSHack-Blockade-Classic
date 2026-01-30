#include "Rewired_ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerMap::GetIl2CppClass(), "qftBFDKEdATQQIXgndMJMyEDeUST");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST* Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST::get_Default()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Default");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST*)returnValue;
}
int32_t Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST::Compare(Rewired_Core::Rewired::ActionElementMap* x, Rewired_Core::Rewired::ActionElementMap* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "Rewired.ActionElementMap", "Rewired.ActionElementMap" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
