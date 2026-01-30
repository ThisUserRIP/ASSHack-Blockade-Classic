#include "System_Runtime_InteropServices_DllImportAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::InteropServices::DllImportAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.InteropServices", "DllImportAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::InteropServices::DllImportAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Attribute* mscorlib::System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute(mscorlib::System::Reflection::RuntimeMethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.RuntimeMethodInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
bool mscorlib::System::Runtime::InteropServices::DllImportAttribute::IsDefined(mscorlib::System::Reflection::RuntimeMethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefined", std::vector<std::string> { "System.Reflection.RuntimeMethodInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Runtime::InteropServices::DllImportAttribute::_ctor(mscorlib::System::String* dllName, mscorlib::System::String* entryPoint, mscorlib::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, mscorlib::System::Runtime::InteropServices::CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.Runtime.InteropServices.CharSet", "System.Boolean", "System.Boolean", "System.Boolean", "System.Runtime.InteropServices.CallingConvention", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)dllName;
	params[1] = (intptr_t)entryPoint;
	params[2] = (intptr_t)&charSet;
	params[3] = (intptr_t)&exactSpelling;
	params[4] = (intptr_t)&setLastError;
	params[5] = (intptr_t)&preserveSig;
	params[6] = (intptr_t)&callingConvention;
	params[7] = (intptr_t)&bestFitMapping;
	params[8] = (intptr_t)&throwOnUnmappableChar;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::InteropServices::DllImportAttribute::_ctor(mscorlib::System::String* dllName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dllName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Runtime::InteropServices::DllImportAttribute::get_Value()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Value");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
