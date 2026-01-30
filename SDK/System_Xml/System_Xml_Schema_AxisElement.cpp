#include "System_Xml_Schema_AxisElement.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::AxisElement::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "AxisElement");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::AxisElement::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::DoubleLinkAxis* System_Xml::System::Xml::Schema::AxisElement::get_CurNode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurNode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::DoubleLinkAxis*)returnValue;
}
void System_Xml::System::Xml::Schema::AxisElement::_ctor(System_Xml::System::Xml::Schema::DoubleLinkAxis* node, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.DoubleLinkAxis", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)node;
	params[1] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::AxisElement::SetDepth(int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDepth", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::AxisElement::MoveToParent(int32_t depth, System_Xml::System::Xml::Schema::ForwardAxis* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveToParent", std::vector<std::string> { "System.Int32", "System.Xml.Schema.ForwardAxis" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&depth;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::AxisElement::MoveToChild(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth, System_Xml::System::Xml::Schema::ForwardAxis* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveToChild", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Xml.Schema.ForwardAxis" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)URN;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)parent;
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
