#include "Rewired_Utils_Classes_Utility_DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::GetIl2CppClass(), "kmNtvdvmsSecKwCvGiAZtQTwIbX");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::LowLevelInputEvent Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX::get_Event()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Event");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::LowLevelInputEvent ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::LowLevelInputEvent));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::LowLevelInputEvent>(*(Rewired_Core::Rewired::LowLevelInputEvent*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX::set_Event(Rewired_Core::Rewired::LowLevelInputEvent value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Event", std::vector<std::string> { "Rewired.LowLevelInputEvent" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX::_ctor(mscorlib::System::Object* lockObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lockObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
