#include "System_Globalization_TokenHashValue.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::TokenHashValue::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Globalization", "TokenHashValue");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::TokenHashValue::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Globalization::TokenHashValue::_ctor(mscorlib::System::String* tokenString, mscorlib::System::TokenType tokenType, int32_t tokenValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.TokenType", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)tokenString;
	params[1] = (intptr_t)&tokenType;
	params[2] = (intptr_t)&tokenValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
