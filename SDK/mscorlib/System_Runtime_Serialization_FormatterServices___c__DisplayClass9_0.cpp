#include "System_Runtime_Serialization_FormatterServices___c__DisplayClass9_0.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Runtime::Serialization::FormatterServices::GetIl2CppClass(), "<>c__DisplayClass9_0");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* mscorlib::System::Runtime::Serialization::FormatterServices___c__DisplayClass9_0::_GetSerializableMembers_b__0(mscorlib::System::Runtime::Serialization::MemberHolder* _)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<GetSerializableMembers>b__0", std::vector<std::string> { "System.Runtime.Serialization.MemberHolder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)_;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>*)returnValue;
}
