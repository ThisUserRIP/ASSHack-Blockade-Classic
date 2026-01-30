#include "System_Globalization_CharUnicodeInfo_Debug.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::CharUnicodeInfo_Debug::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Globalization::CharUnicodeInfo::GetIl2CppClass(), "Debug");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::CharUnicodeInfo_Debug::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Globalization::CharUnicodeInfo_Debug::Assert(bool condition, mscorlib::System::String* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Assert", std::vector<std::string> { "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&condition;
	params[1] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
