#include "Rewired_ControllerTemplateActionAxisMap.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerTemplateActionAxisMap::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired", "ControllerTemplateActionAxisMap");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerTemplateActionAxisMap::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerTemplateActionAxisMap::_ctor(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Utils.Classes.Data.SerializedObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)serializedObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateActionAxisMap::_ctor(int32_t templateElementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::ActionElementMap* actionElementMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.AxisRange", "Rewired.ActionElementMap" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&templateElementIdentifierId;
	params[1] = (intptr_t)&axisRange;
	params[2] = (intptr_t)actionElementMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateActionAxisMap::_ctor(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange, Rewired_Core::Rewired::Pole axisContribution, bool invert, bool enabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "Rewired.AxisRange", "Rewired.Pole", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&elementIdentifierId;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&axisRange;
	params[3] = (intptr_t)&axisContribution;
	params[4] = (intptr_t)&invert;
	params[5] = (intptr_t)&enabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::AxisRange Rewired_Core::Rewired::ControllerTemplateActionAxisMap::get_axisRange()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisRange");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::AxisRange ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::AxisRange));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::AxisRange>(*(Rewired_Core::Rewired::AxisRange*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Pole Rewired_Core::Rewired::ControllerTemplateActionAxisMap::get_axisContribution()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_axisContribution");
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
bool Rewired_Core::Rewired::ControllerTemplateActionAxisMap::get_invert()
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
void Rewired_Core::Rewired::ControllerTemplateActionAxisMap::Export(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Export");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateActionAxisMap::Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Import");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ControllerTemplateActionAxisMap::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::ControllerTemplateActionAxisMap::CreateAEMsFromSource(Rewired_Core::Rewired::IControllerTemplateElementSource* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAEMsFromSource");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerTemplateActionAxisMap::DcihCbRqdBjOHFWlXwTBmMFugREN(Rewired_Core::Rewired::IControllerElementTarget* A_1, Rewired_Core::Rewired::AxisRange A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DcihCbRqdBjOHFWlXwTBmMFugREN");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ControllerTemplateActionAxisMap::myIIfefalKEBYvmmdiYgLghRhbP(Rewired_Core::Rewired::IControllerElementTarget* A_1, Rewired_Core::Rewired::Pole A_2, Rewired_Core::Rewired::Pole A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "myIIfefalKEBYvmmdiYgLghRhbP");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
