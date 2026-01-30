#include "System_Security_Permissions_SecurityPermissionAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Security::Permissions::SecurityPermissionAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Security.Permissions", "SecurityPermissionAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Security::Permissions::SecurityPermissionAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Security::Permissions::SecurityPermissionAttribute::set_SkipVerification(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SkipVerification", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
