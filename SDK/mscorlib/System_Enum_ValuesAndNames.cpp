#include "System_Enum_ValuesAndNames.h"

IL2CPP::Il2CppClass* mscorlib::System::Enum_ValuesAndNames::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Enum::GetIl2CppClass(), "ValuesAndNames");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Enum_ValuesAndNames::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Enum_ValuesAndNames::_ctor(IL2CPP::Array<uint64_t>* values, IL2CPP::Array<mscorlib::System::String*>* names)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt64[]", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)values;
	params[1] = (intptr_t)names;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
