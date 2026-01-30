#include "Rewired_ControllerExtensions_SteamControllerExtension.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.ControllerExtensions", "SteamControllerExtension");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::Joystick* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::HPQsOFATSFYDIUneRXXMNMpaqXg()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HPQsOFATSFYDIUneRXXMNMpaqXg");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Joystick*)returnValue;
}
Rewired_Core::Rewired::Interfaces::ISteamControllerInternal* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::get_internalController()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_internalController");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::ISteamControllerInternal*)returnValue;
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::_ctor(Rewired_Core::Rewired::Interfaces::ISteamControllerInternal* internalController)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Interfaces.ISteamControllerInternal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)internalController;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::_ctor(Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.ControllerExtensions.SteamControllerExtension" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint64_t Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetActionSetHandle(mscorlib::System::String* actionSetName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionSetHandle", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionSetName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionHandle(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnalogActionHandle", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint64_t Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionHandle(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigitalActionHandle", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetActionSetName(uint64_t actionSetHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionSetName", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionSetHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionName(uint64_t actionHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnalogActionName", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionName(uint64_t actionHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigitalActionName", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionValue(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnalogActionValue", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionValue(uint64_t actionHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnalogActionValue", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionValue(mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigitalActionValue", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionName;
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
bool Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionValue(uint64_t actionHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigitalActionValue", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionHandle;
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
bool Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::SetActiveActionSet(uint64_t actionSetHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetActiveActionSet", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionSetHandle;
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
bool Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::SetActiveActionSet(mscorlib::System::String* actionSetName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetActiveActionSet", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)actionSetName;
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
uint64_t Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetActiveActionSetHandle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveActionSetHandle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetActiveActionSetName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveActionSetName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::ShowBindingPanel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowBindingPanel");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::SetHapticPulse(Rewired_Core::Rewired::ControllerExtensions::SteamControllerPadType targePad, float durationSeconds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetHapticPulse", std::vector<std::string> { "Rewired.ControllerExtensions.SteamControllerPadType", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&targePad;
	params[1] = (intptr_t)&durationSeconds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::SetHapticPulse(Rewired_Core::Rewired::ControllerExtensions::SteamControllerPadType targePad, uint16_t durationMicroSeconds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetHapticPulse", std::vector<std::string> { "Rewired.ControllerExtensions.SteamControllerPadType", "System.UInt16" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&targePad;
	params[1] = (intptr_t)&durationMicroSeconds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionOrigins(mscorlib::System::String* actionSetName, mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigitalActionOrigins", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionSetName;
	params[1] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetDigitalActionOrigins(uint64_t actionSetHandle, uint64_t actionHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDigitalActionOrigins", std::vector<std::string> { "System.UInt64", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionSetHandle;
	params[1] = (intptr_t)&actionHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionOrigins(mscorlib::System::String* actionSetName, mscorlib::System::String* actionName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnalogActionOrigins", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionSetName;
	params[1] = (intptr_t)actionName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::GetAnalogActionOrigins(uint64_t actionSetHandle, uint64_t actionHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAnalogActionOrigins", std::vector<std::string> { "System.UInt64", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionSetHandle;
	params[1] = (intptr_t)&actionHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>*)returnValue;
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateData", std::vector<std::string> { "Rewired.UpdateLoopType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SourceUpdated", std::vector<std::string> { "Rewired.Interfaces.IControllerExtensionSource" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Controller_Extension* Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Controller_Extension*)returnValue;
}
void Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension::pKLNoWCgVUqlRfCsOXaDmHUNbICB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pKLNoWCgVUqlRfCsOXaDmHUNbICB");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
