#include "System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetIl2CppClass(), "TopLevelAssemblyTypeResolver");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::_ctor(mscorlib::System::Reflection::Assembly* topLevelAssembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)topLevelAssembly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectReader_TopLevelAssemblyTypeResolver::ResolveType(mscorlib::System::Reflection::Assembly* assembly, mscorlib::System::String* simpleTypeName, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveType", std::vector<std::string> { "System.Reflection.Assembly", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)assembly;
	params[1] = (intptr_t)simpleTypeName;
	params[2] = (intptr_t)&ignoreCase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
