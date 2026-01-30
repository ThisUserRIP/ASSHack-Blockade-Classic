#include "System_Xml_Schema_AxisStack.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::AxisStack::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "AxisStack");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::AxisStack::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Xml::System::Xml::Schema::ForwardAxis* System_Xml::System::Xml::Schema::AxisStack::get_Subtree()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Subtree");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::ForwardAxis*)returnValue;
}
int32_t System_Xml::System::Xml::Schema::AxisStack::get_Length()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Length");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::Schema::AxisStack::_ctor(System_Xml::System::Xml::Schema::ForwardAxis* faxis, System_Xml::System::Xml::Schema::ActiveAxis* parent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.ForwardAxis", "System.Xml.Schema.ActiveAxis" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)faxis;
	params[1] = (intptr_t)parent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::AxisStack::Push(int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Push", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::AxisStack::Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::AxisStack::Equal(mscorlib::System::String* thisname, mscorlib::System::String* thisURN, mscorlib::System::String* name, mscorlib::System::String* URN)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equal", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)thisname;
	params[1] = (intptr_t)thisURN;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)URN;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void System_Xml::System::Xml::Schema::AxisStack::MoveToParent(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveToParent", std::vector<std::string> { "System.String", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)URN;
	params[2] = (intptr_t)&depth;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::AxisStack::MoveToChild(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveToChild", std::vector<std::string> { "System.String", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)URN;
	params[2] = (intptr_t)&depth;
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
bool System_Xml::System::Xml::Schema::AxisStack::MoveToAttribute(mscorlib::System::String* name, mscorlib::System::String* URN, int32_t depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveToAttribute", std::vector<std::string> { "System.String", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)URN;
	params[2] = (intptr_t)&depth;
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
