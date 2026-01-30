#include "Rewired_InputManagers_CustomInputManager.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputManagers::CustomInputManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.InputManagers", "CustomInputManager");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputManagers::CustomInputManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::_ctor(Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* customInputSource, Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager, mscorlib::System::Func_1<mscorlib::System::Int32>* getNewJoystickId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Platforms.Custom.CustomInputSource", "Rewired.Config.UpdateLoopSetting", "System.Func`2<Rewired.BridgedControllerHWInfo,Rewired.HardwareJoystickMap_InputManager>", "System.Func`1<System.Int32>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)customInputSource;
	params[1] = (intptr_t)&updateLoopSetting;
	params[2] = (intptr_t)getHardwareJoystickMap_InputManager;
	params[3] = (intptr_t)getNewJoystickId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager::get_deviceCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_deviceCount");
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
Rewired_Core::Rewired::PlatformInputManager* Rewired_Core::Rewired::InputManagers::CustomInputManager::get_primaryInputManager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_primaryInputManager");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlatformInputManager*)returnValue;
}
Rewired_Core::Rewired::Interfaces::IInputSource* Rewired_Core::Rewired::InputManagers::CustomInputManager::get_inputSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IInputSource*)returnValue;
}
Rewired_Core::Rewired::InputSource Rewired_Core::Rewired::InputManagers::CustomInputManager::get_inputSourceType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputSourceType");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::InputSource ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::InputSource));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::InputSource>(*(Rewired_Core::Rewired::InputSource*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::Update(Rewired_Core::Rewired::UpdateLoopType updateLoop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "Rewired.UpdateLoopType" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateLoop;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* Rewired_Core::Rewired::InputManagers::CustomInputManager::GetInputDataUpdateDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputDataUpdateDelegate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>*)returnValue;
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::UpdateControllerData(int32_t inputManagerId, Rewired_Core::Rewired::ControllerDataUpdater* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateControllerData", std::vector<std::string> { "System.Int32", "Rewired.ControllerDataUpdater" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&inputManagerId;
	params[1] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::SystemDeviceConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SystemDeviceConnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::SystemDeviceDisconnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SystemDeviceDisconnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUnityJoystickId", std::vector<std::string> { "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&joystickId;
	params[1] = (intptr_t)&unityJoystickIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* Rewired_Core::Rewired::InputManagers::CustomInputManager::GetUnifiedMouseSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnifiedMouseSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource*)returnValue;
}
Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* Rewired_Core::Rewired::InputManagers::CustomInputManager::GetUnifiedKeyboardSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnifiedKeyboardSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource*)returnValue;
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::lIfoNLCEPztFZglcSkdxIYkJUDB(IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lIfoNLCEPztFZglcSkdxIYkJUDB");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::MIUmzKBdECQnfqJwNLsrMFKpWoE()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MIUmzKBdECQnfqJwNLsrMFKpWoE");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::dysUiFYbCVGwEFWMiWtlmclRZNpn(int32_t A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dysUiFYbCVGwEFWMiWtlmclRZNpn");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::UqXwIexMqSDzUysPAtGJZmUmCsd(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UqXwIexMqSDzUysPAtGJZmUmCsd");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::InputManagers::CustomInputManager::AkwArCRmyKIRoEKDfPaeApOfikh(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AkwArCRmyKIRoEKDfPaeApOfikh");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
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
int32_t Rewired_Core::Rewired::InputManagers::CustomInputManager::IwUmqTOEEeNplEiyalkgbhvgcQn(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IwUmqTOEEeNplEiyalkgbhvgcQn");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Rewired_Core::Rewired::InputManagers::CustomInputManager::SvvAUwbOktUbpBssikiaEOJptnEP(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SvvAUwbOktUbpBssikiaEOJptnEP");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
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
void Rewired_Core::Rewired::InputManagers::CustomInputManager::tzuPAnvtsNCcddPdzZhPXSyBIUX(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_4, Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_FLfAmKtZlKTKoxgCKBfevWSvbdB A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tzuPAnvtsNCcddPdzZhPXSyBIUX");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::hxsItdTyGgwYpZyfUMGFjxGAjVI(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_2, Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_FLfAmKtZlKTKoxgCKBfevWSvbdB A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hxsItdTyGgwYpZyfUMGFjxGAjVI");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::xBChekdAiCHyRFKGrcxHRnLmGfQr()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xBChekdAiCHyRFKGrcxHRnLmGfQr");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::InputManagers::CustomInputManager::CekoPvcUIoRJMHfjlbwKeGyrGDO(IL2CPP::Array<Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Joystick*>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CekoPvcUIoRJMHfjlbwKeGyrGDO");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
void Rewired_Core::Rewired::InputManagers::CustomInputManager::igvDkGbkYfuiyudkGvwJlfiDeMC(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF>* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "igvDkGbkYfuiyudkGvwJlfiDeMC");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::IKTjAwbautGaviNDnDUYqTymwNQg(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IKTjAwbautGaviNDnDUYqTymwNQg");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager::reyjPHJcScCVuZfhiCypiERAmMlz(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "reyjPHJcScCVuZfhiCypiERAmMlz");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
