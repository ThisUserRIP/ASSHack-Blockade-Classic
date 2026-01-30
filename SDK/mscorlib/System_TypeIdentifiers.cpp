#include "System_TypeIdentifiers.h"

IL2CPP::Il2CppClass* mscorlib::System::TypeIdentifiers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "TypeIdentifiers");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TypeIdentifiers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::TypeIdentifier* mscorlib::System::TypeIdentifiers::FromDisplay(mscorlib::System::String* displayName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromDisplay", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)displayName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TypeIdentifier*)returnValue;
}
