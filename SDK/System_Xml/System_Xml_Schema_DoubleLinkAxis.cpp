#include "System_Xml_Schema_DoubleLinkAxis.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::DoubleLinkAxis::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "DoubleLinkAxis");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::DoubleLinkAxis::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::MS::Internal::Xml::XPath::Axis* System_Xml::System::Xml::Schema::DoubleLinkAxis::get_Next()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Next");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::Axis*)returnValue;
}
void System_Xml::System::Xml::Schema::DoubleLinkAxis::set_Next(System_Xml::MS::Internal::Xml::XPath::Axis* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Next", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::DoubleLinkAxis::_ctor(System_Xml::MS::Internal::Xml::XPath::Axis* axis, System_Xml::System::Xml::Schema::DoubleLinkAxis* inputaxis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis", "System.Xml.Schema.DoubleLinkAxis" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)axis;
	params[1] = (intptr_t)inputaxis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::DoubleLinkAxis* System_Xml::System::Xml::Schema::DoubleLinkAxis::ConvertTree(System_Xml::MS::Internal::Xml::XPath::Axis* axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertTree", std::vector<std::string> { "MS.Internal.Xml.XPath.Axis" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)axis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::DoubleLinkAxis*)returnValue;
}
