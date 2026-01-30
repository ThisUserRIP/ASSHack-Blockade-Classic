#include "System_ComponentModel_Design_Serialization_InstanceDescriptor.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::Design::Serialization::InstanceDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::Design::Serialization::InstanceDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor(mscorlib::System::Reflection::MemberInfo* member, mscorlib::System::Collections::ICollection* arguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Collections.ICollection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)arguments;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor(mscorlib::System::Reflection::MemberInfo* member, mscorlib::System::Collections::ICollection* arguments, bool isComplete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Collections.ICollection", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)arguments;
	params[2] = (intptr_t)&isComplete;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System::System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
