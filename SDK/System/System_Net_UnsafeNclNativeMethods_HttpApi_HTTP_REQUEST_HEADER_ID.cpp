#include "System_Net_UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID.h"

IL2CPP::Il2CppClass* System::System::Net::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::UnsafeNclNativeMethods_HttpApi::GetIl2CppClass(), "HTTP_REQUEST_HEADER_ID");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::Net::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::ToString(int32_t position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System::System::Net::UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
