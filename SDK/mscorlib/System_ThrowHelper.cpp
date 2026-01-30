#include "System_ThrowHelper.h"

IL2CPP::Il2CppClass* mscorlib::System::ThrowHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "ThrowHelper");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::ThrowHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::ThrowHelper::ThrowArgumentNullException(mscorlib::System::ExceptionArgument argument)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowArgumentNullException", std::vector<std::string> { "System.ExceptionArgument" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&argument;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Exception* mscorlib::System::ThrowHelper::CreateArgumentNullException(mscorlib::System::ExceptionArgument argument)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateArgumentNullException", std::vector<std::string> { "System.ExceptionArgument" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&argument;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Exception*)returnValue;
}
void mscorlib::System::ThrowHelper::ThrowArgumentOutOfRangeException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowArgumentOutOfRangeException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::ThrowHelper::ThrowWrongValueTypeArgumentException(mscorlib::System::Object* value, mscorlib::System::Type* targetType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowWrongValueTypeArgumentException", std::vector<std::string> { "System.Object", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)targetType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::ThrowHelper::ThrowArgumentException(mscorlib::System::ExceptionResource resource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowArgumentException", std::vector<std::string> { "System.ExceptionResource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::ThrowHelper::ThrowArgumentOutOfRangeException(mscorlib::System::ExceptionArgument argument, mscorlib::System::ExceptionResource resource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowArgumentOutOfRangeException", std::vector<std::string> { "System.ExceptionArgument", "System.ExceptionResource" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&argument;
	params[1] = (intptr_t)&resource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::ThrowHelper::ThrowInvalidOperationException(mscorlib::System::ExceptionResource resource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowInvalidOperationException", std::vector<std::string> { "System.ExceptionResource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::ThrowHelper::ThrowNotSupportedException(mscorlib::System::ExceptionResource resource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowNotSupportedException", std::vector<std::string> { "System.ExceptionResource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::ThrowHelper::GetArgumentName(mscorlib::System::ExceptionArgument argument)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetArgumentName", std::vector<std::string> { "System.ExceptionArgument" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&argument;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::ThrowHelper::GetResourceName(mscorlib::System::ExceptionResource resource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResourceName", std::vector<std::string> { "System.ExceptionResource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resource;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
