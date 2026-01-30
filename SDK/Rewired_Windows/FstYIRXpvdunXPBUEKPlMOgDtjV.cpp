#include "FstYIRXpvdunXPBUEKPlMOgDtjV.h"

IL2CPP::Il2CppClass* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "FstYIRXpvdunXPBUEKPlMOgDtjV");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::set_useXInput(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_useXInput", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::_ctor(Rewired_Core::Rewired::Data::ConfigVars* configVars, bool useXInput, mscorlib::System::Func_2<Rewired_Core::Rewired::BridgedControllerHWInfo, Rewired_Core::Rewired::HardwareJoystickMap_InputManager>* getHardwareJoystickMap_InputManager, mscorlib::System::Func_1<mscorlib::System::Int32>* getNewJoystickId, bool handleJoysticks, bool handleUnifiedMouse, bool handleUnifiedKeyboard, bool useCustomDrivers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Data.ConfigVars", "System.Boolean", "System.Func`2<Rewired.BridgedControllerHWInfo,Rewired.HardwareJoystickMap_InputManager>", "System.Func`1<System.Int32>", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)configVars;
	params[1] = (intptr_t)&useXInput;
	params[2] = (intptr_t)getHardwareJoystickMap_InputManager;
	params[3] = (intptr_t)getNewJoystickId;
	params[4] = (intptr_t)&handleJoysticks;
	params[5] = (intptr_t)&handleUnifiedMouse;
	params[6] = (intptr_t)&handleUnifiedKeyboard;
	params[7] = (intptr_t)&useCustomDrivers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::get_deviceCount()
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
Rewired_Core::Rewired::PlatformInputManager* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::get_primaryInputManager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_primaryInputManager");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::PlatformInputManager*)returnValue;
}
Rewired_Core::Rewired::Interfaces::IInputSource* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::get_inputSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_inputSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IInputSource*)returnValue;
}
Rewired_Core::Rewired::InputSource Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::get_inputSourceType()
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::Update(Rewired_Core::Rewired::UpdateLoopType updateLoop)
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::OnDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDestroy");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::GetInputDataUpdateDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputDataUpdateDelegate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_2<mscorlib::System::Int32, Rewired_Core::Rewired::ControllerDataUpdater>*)returnValue;
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::UpdateControllerData(int32_t inputManagerId, Rewired_Core::Rewired::ControllerDataUpdater* data)
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::SystemDeviceConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SystemDeviceConnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::SystemDeviceDisconnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SystemDeviceDisconnected");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUnityJoystickId", std::vector<std::string> { "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&joystickId;
	params[1] = (intptr_t)&unityJoystickId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::GetUnifiedMouseSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnifiedMouseSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IUnifiedMouseSource*)returnValue;
}
Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::GetUnifiedKeyboardSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnifiedKeyboardSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource*)returnValue;
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::TZGkulJaTxEPrglqXAvUofrIAtjf(Rewired_Windows::KEGqGFoeiqcHwkLoRFEsHTfnMNSV A_1, Rewired_Windows::ZCxURUdiyfHHQozjxSDrZnwRpUK A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TZGkulJaTxEPrglqXAvUofrIAtjf");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::MLSMwZMDnXqUXUGfkVhVRoHXacOJ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MLSMwZMDnXqUXUGfkVhVRoHXacOJ");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::IEvQfhArlkpfBynzVAVuUthaJry()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IEvQfhArlkpfBynzVAVuUthaJry");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::IEvQfhArlkpfBynzVAVuUthaJry(mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IEvQfhArlkpfBynzVAVuUthaJry");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::vrYvhsDSuDUUjendKuyqSBPAlhd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vrYvhsDSuDUUjendKuyqSBPAlhd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV>* Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::JUprywXSQLGQKQBKLnZhZUXrhRK()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "JUprywXSQLGQKQBKLnZhZUXrhRK");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV>*)returnValue;
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::KAizHtAfyOBkOKNZfsEuimsaYmO(int32_t A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KAizHtAfyOBkOKNZfsEuimsaYmO");
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
bool Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::vGiBcobFQDfPeQCQoRHbWGLAyLYL(mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vGiBcobFQDfPeQCQoRHbWGLAyLYL");
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
int32_t Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::jTSOfpGQuhSLnCebdSExtziJqHS(mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jTSOfpGQuhSLnCebdSExtziJqHS");
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
bool Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::jenLUQKBOkvtxqYdxBVlINOKMxl(mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jenLUQKBOkvtxqYdxBVlINOKMxl");
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::WOekAylZZESEmhGEijcUEJVcJbgc(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_4, Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_zuxqBSJayDDzOwNwQHdybXOarOB_lwJsUYNBfKeGXBqziWaozGZiRJa A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WOekAylZZESEmhGEijcUEJVcJbgc");
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::UoiuRhVeBtOzQTwVxzQclTzumpa(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_2, Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_zuxqBSJayDDzOwNwQHdybXOarOB_lwJsUYNBfKeGXBqziWaozGZiRJa A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UoiuRhVeBtOzQTwVxzQclTzumpa");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::dXjgBUqwcgofXpCbBWpwBKKNnqQ()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dXjgBUqwcgofXpCbBWpwBKKNnqQ");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::nucjZnRZjTxWtcdYKTdGQtwTwDL()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nucjZnRZjTxWtcdYKTdGQtwTwDL");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::QrdynsQVhpIYDbchuHSKMVBXdzG()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QrdynsQVhpIYDbchuHSKMVBXdzG");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::jvgUbDwLunzPALSkmEEZapdEEktG(mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jvgUbDwLunzPALSkmEEZapdEEktG");
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
bool Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::edNCGOYtcLiMgFtEnkfNgierefA(mscorlib::System::Guid A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "edNCGOYtcLiMgFtEnkfNgierefA");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
bool Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::RaRzfdCcRtRdKzoGQDSnskIVEqbk(mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::UbRUfNpkhkOvHUrEzfXZhnCMphV>* A_1, mscorlib::System::Guid A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RaRzfdCcRtRdKzoGQDSnskIVEqbk");
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::DrtPSmzmysfsoDinXPWAubbsYTne(mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM>* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DrtPSmzmysfsoDinXPWAubbsYTne");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::xZVRIAfUskcfEBGvatVzTjiLsrL(Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xZVRIAfUskcfEBGvatVzTjiLsrL");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::DACXjkSlCpCCKPgoCeKDMEtSDuC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DACXjkSlCpCCKPgoCeKDMEtSDuC");
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
void Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV::srAYGZUUmzlNxHjfliTCdpktjTUp(Rewired_Windows::FstYIRXpvdunXPBUEKPlMOgDtjV_RSneyRoviRdnpShxrfCJeNDAZdVM* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "srAYGZUUmzlNxHjfliTCdpktjTUp");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
