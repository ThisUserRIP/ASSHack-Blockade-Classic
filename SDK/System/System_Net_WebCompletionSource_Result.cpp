#include "System_Net_WebCompletionSource_Result.h"

IL2CPP::Il2CppClass* System::System::Net::WebCompletionSource_Result::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::WebCompletionSource::GetIl2CppClass(), "Result");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::WebCompletionSource_Result::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::WebCompletionSource_State System::System::Net::WebCompletionSource_Result::get_State()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_State");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Net::WebCompletionSource_State ret;
		std::memset(&ret, 0, sizeof(System::Net::WebCompletionSource_State));
		return ret;
	}
	return static_cast<System::Net::WebCompletionSource_State>(*(System::Net::WebCompletionSource_State*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::System::Net::WebCompletionSource_Result::get_Error()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Error");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)returnValue;
}
void System::System::Net::WebCompletionSource_Result::_ctor(System::Net::WebCompletionSource_State state, mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Net.WebCompletionSource/State", "System.Runtime.ExceptionServices.ExceptionDispatchInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
