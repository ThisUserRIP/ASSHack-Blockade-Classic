#include "Rewired_Data_ControllerDataFiles.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::ControllerDataFiles::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data", "ControllerDataFiles");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::ControllerDataFiles::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Guid Rewired_Core::Rewired::Data::ControllerDataFiles::get_defaultHardwareJoystickMapGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultHardwareJoystickMapGuid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>* Rewired_Core::Rewired::Data::ControllerDataFiles::get_JoystickTemplates()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_JoystickTemplates");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>*)returnValue;
}
void Rewired_Core::Rewired::Data::ControllerDataFiles::set_JoystickTemplates(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_JoystickTemplates", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickTemplateMap[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*>* Rewired_Core::Rewired::Data::ControllerDataFiles::get_HardwareJoystickMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HardwareJoystickMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*>*)returnValue;
}
void Rewired_Core::Rewired::Data::ControllerDataFiles::set_HardwareJoystickMaps(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_HardwareJoystickMaps", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* Rewired_Core::Rewired::Data::ControllerDataFiles::get_DefaultHardwareJoystickMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultHardwareJoystickMap");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*)returnValue;
}
void Rewired_Core::Rewired::Data::ControllerDataFiles::set_DefaultHardwareJoystickMap(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_DefaultHardwareJoystickMap", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::ControllerDataFiles::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::ControllerDataFiles::GetJoystickNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::ControllerDataFiles::GetEditorJoystickNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEditorJoystickNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Guid>* Rewired_Core::Rewired::Data::ControllerDataFiles::GetJoystickGuids()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickGuids");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Guid>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Rewired_Core::Rewired::Data::ControllerDataFiles::GetJoystickTemplateNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickTemplateNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Guid>* Rewired_Core::Rewired::Data::ControllerDataFiles::GetJoystickTemplateGuids()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickTemplateGuids");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Guid>*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* Rewired_Core::Rewired::Data::ControllerDataFiles::GetHardwareJoystickMap(mscorlib::System::Guid guid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHardwareJoystickMap", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&guid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap* Rewired_Core::Rewired::Data::ControllerDataFiles::GetJoystickTemplate(mscorlib::System::Guid guid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickTemplate", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&guid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::IHardwareControllerTemplateMap* Rewired_Core::Rewired::Data::ControllerDataFiles::GetControllerTemplate(mscorlib::System::Guid guid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerTemplate", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&guid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::IHardwareControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::Data::Mapping::IHardwareControllerMap* Rewired_Core::Rewired::Data::ControllerDataFiles::GetHardwareJoystickOrTemplateMap(mscorlib::System::Guid guid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHardwareJoystickOrTemplateMap", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&guid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::IHardwareControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateElementIdentifier* Rewired_Core::Rewired::Data::ControllerDataFiles::UoGAUvRQFvakkjSBnCcWcYgbmVC(mscorlib::System::Guid A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UoGAUvRQFvakkjSBnCcWcYgbmVC");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::HardwareJoystickMap_InputManager* Rewired_Core::Rewired::Data::ControllerDataFiles::cajCiYDpvCMJMdWKiKNtJiQeWiPX(mscorlib::System::Guid A_1, Rewired_Core::Rewired::InputSource A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cajCiYDpvCMJMdWKiKNtJiQeWiPX");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareJoystickMap_InputManager*)returnValue;
}
Rewired_Core::Rewired::HardwareJoystickMap_InputManager* Rewired_Core::Rewired::Data::ControllerDataFiles::URoyLjqeSYnQccNXGDiccZwWSzyT(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "URoyLjqeSYnQccNXGDiccZwWSzyT");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareJoystickMap_InputManager*)returnValue;
}
Rewired_Core::Rewired::HardwareJoystickMap_InputManager* Rewired_Core::Rewired::Data::ControllerDataFiles::mfwpFClxbTIGZBPakLtsJuVqnnV(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_1, Rewired_Core::Rewired::BridgedControllerHWInfo* A_2, bool A_3, Rewired_Core::Rewired::InputPlatform& A_4, int32_t& A_5, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "mfwpFClxbTIGZBPakLtsJuVqnnV", std::vector<std::string> { "Rewired.Data.Mapping.HardwareJoystickMap", "Rewired.BridgedControllerHWInfo", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&", "Rewired.Data.Mapping.HardwareJoystickMap/Platform&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	params[5] = (intptr_t)&A_6;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareJoystickMap_InputManager*)returnValue;
}
Rewired_Core::Rewired::HardwareJoystickMap_InputManager* Rewired_Core::Rewired::Data::ControllerDataFiles::RTQPIaGabJewyaYjBjNDWpmhrCk(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1, mscorlib::System::String* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RTQPIaGabJewyaYjBjNDWpmhrCk");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareJoystickMap_InputManager*)returnValue;
}
Rewired_Core::Rewired::HardwareJoystickMap_InputManager* Rewired_Core::Rewired::Data::ControllerDataFiles::tztwuCTPyWatmfuDKRIvCOPrBbRq(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tztwuCTPyWatmfuDKRIvCOPrBbRq");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::HardwareJoystickMap_InputManager*)returnValue;
}
void Rewired_Core::Rewired::Data::ControllerDataFiles::zVVESbHndqhjCEhsBsUsYFGGtQc()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zVVESbHndqhjCEhsBsUsYFGGtQc");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
