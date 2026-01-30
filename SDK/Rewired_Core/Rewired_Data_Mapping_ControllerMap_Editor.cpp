#include "Rewired_Data_Mapping_ControllerMap_Editor.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Data.Mapping", "ControllerMap_Editor");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::get_ActionElementMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ActionElementMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Guid Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::get_hardwareGuid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hardwareGuid");
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
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::GetActionElementMap(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionElementMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::uudaXKvuCGLhWLdMJGobqyltrwS(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::HardwareControllerMapIdentifier A_2, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uudaXKvuCGLhWLdMJGobqyltrwS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::KeyboardMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::zaVXYMlfhYWPGAlusCLEMcchvbh(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zaVXYMlfhYWPGAlusCLEMcchvbh");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::KeyboardMap*)returnValue;
}
Rewired_Core::Rewired::MouseMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::oyBziKePdKnfTyWjwfZDZWogdNl(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oyBziKePdKnfTyWjwfZDZWogdNl");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::MouseMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::CQzgAPjPAbUWRRGtyorIykffye(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::Data::CustomController_Editor* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CQzgAPjPAbUWRRGtyorIykffye");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::ftdUCNKatERmjtfAkgKJGGeuzDYU()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ftdUCNKatERmjtfAkgKJGGeuzDYU");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::oNnbjvEDUvNtRnKKQGEyKpolbGb(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::ControllerMap* A_2, Rewired_Core::Rewired::HardwareControllerMapIdentifier A_3, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oNnbjvEDUvNtRnKKQGEyKpolbGb");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::lXWGwKDpSDyEWiAaZyjsHUyZapGr(mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* A_1, Rewired_Core::Rewired::InputSource A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::Data::CustomController_Editor* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lXWGwKDpSDyEWiAaZyjsHUyZapGr");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::CreateElementsFromHardwareMap(Rewired_Core::Rewired::Data::Mapping::IHardwareControllerMap* hardwareJoystickMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementsFromHardwareMap", std::vector<std::string> { "Rewired.Data.Mapping.IHardwareControllerMap" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)hardwareJoystickMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::CreateElementsFromHardwareMap(Rewired_Core::Rewired::Data::CustomController_Editor* customController)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateElementsFromHardwareMap", std::vector<std::string> { "Rewired.Data.CustomController_Editor" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)customController;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::AddActionElementMap()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActionElementMap");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::InsertActionElementMap(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertActionElementMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::DeleteActionElementMap(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteActionElementMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::ReorderActionElementMap(int32_t index, bool offsetDown, bool offsetNow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReorderActionElementMap", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&offsetDown;
	params[2] = (intptr_t)&offsetNow;
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
void Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::DuplicateActionElementMap(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DuplicateActionElementMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Data::Mapping::ControllerMap_Editor::BXOBFBGgRFSArfhmMCuhFOuhzYUD()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BXOBFBGgRFSArfhmMCuhFOuhzYUD");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
