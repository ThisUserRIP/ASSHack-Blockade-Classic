#include "System_Reflection_Emit_TypeBuilderInstantiation.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Emit::TypeBuilderInstantiation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection.Emit", "TypeBuilderInstantiation");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::TypeBuilderInstantiation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::TypeBuilderInstantiation::MakeGenericType(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Type*>* typeArguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeGenericType", std::vector<std::string> { "System.Type", "System.Type[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)typeArguments;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
