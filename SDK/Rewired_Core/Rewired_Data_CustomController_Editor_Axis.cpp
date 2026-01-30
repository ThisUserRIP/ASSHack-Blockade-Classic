#include "Rewired_Data_CustomController_Editor_Axis.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::CustomController_Editor_Axis::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::CustomController_Editor::GetIl2CppClass(), "Axis");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::CustomController_Editor_Axis::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::CustomController_Editor_Axis::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor_Axis::_ctor(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor_Axis::_ctor(mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange range, bool invert, float deadZone, float zero, float min, float max, bool doNotCalibrateRange, Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Int32", "Rewired.AxisRange", "System.Boolean", "System.Single", "System.Single", "System.Single", "System.Single", "System.Boolean", "Rewired.Data.Mapping.HardwareAxisInfo" });
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)positiveName;
	params[2] = (intptr_t)negativeName;
	params[3] = (intptr_t)&elementIdentifierId;
	params[4] = (intptr_t)&range;
	params[5] = (intptr_t)&invert;
	params[6] = (intptr_t)&deadZone;
	params[7] = (intptr_t)&zero;
	params[8] = (intptr_t)&min;
	params[9] = (intptr_t)&max;
	params[10] = (intptr_t)&doNotCalibrateRange;
	params[11] = (intptr_t)axisInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::CustomController_Editor_Axis::_ctor(Rewired_Core::Rewired::Data::CustomController_Editor_Axis* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Data.CustomController_Editor/Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Data::CustomController_Editor_Element* Rewired_Core::Rewired::Data::CustomController_Editor_Axis::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Data::CustomController_Editor_Element*)returnValue;
}
