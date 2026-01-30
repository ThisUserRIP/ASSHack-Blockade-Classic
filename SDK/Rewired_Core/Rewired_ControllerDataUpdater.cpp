#include "Rewired_ControllerDataUpdater.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerDataUpdater::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerDataUpdater");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerDataUpdater::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerDataUpdater::_ctor(Rewired_Core::Rewired::InputSource source, int32_t axisCount, int32_t buttonCount, IL2CPP::Array<Rewired_Core::Rewired::UnknownControllerHat*>* unknownControllerHats)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.InputSource", "System.Int32", "System.Int32", "Rewired.UnknownControllerHat[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&axisCount;
	params[2] = (intptr_t)&buttonCount;
	params[3] = (intptr_t)unknownControllerHats;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ControllerDataUpdater::IsUnknownHatCardinal(int32_t buttonIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUnknownHatCardinal", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buttonIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UnknownControllerHat_HatButtons* Rewired_Core::Rewired::ControllerDataUpdater::GetUnknownHatButtons(int32_t buttonIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnknownHatButtons", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buttonIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::UnknownControllerHat_HatButtons*)returnValue;
}
void Rewired_Core::Rewired::ControllerDataUpdater::ClearData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
