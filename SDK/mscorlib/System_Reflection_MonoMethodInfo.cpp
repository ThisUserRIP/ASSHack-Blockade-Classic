#include "System_Reflection_MonoMethodInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::MonoMethodInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "MonoMethodInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::MonoMethodInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::MonoMethodInfo::get_method_info(intptr_t handle, mscorlib::System::Reflection::MonoMethodInfo& info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_method_info", std::vector<std::string> { "System.IntPtr", "System.Reflection.MonoMethodInfo&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Reflection::MonoMethodInfo::get_method_attributes(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_method_attributes", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Reflection::MonoMethodInfo mscorlib::System::Reflection::MonoMethodInfo::GetMethodInfo(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodInfo", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::MonoMethodInfo ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::MonoMethodInfo));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::MonoMethodInfo>(*(mscorlib::System::Reflection::MonoMethodInfo*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Type* mscorlib::System::Reflection::MonoMethodInfo::GetDeclaringType(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDeclaringType", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* mscorlib::System::Reflection::MonoMethodInfo::GetReturnType(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReturnType", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Reflection::MethodAttributes mscorlib::System::Reflection::MonoMethodInfo::GetAttributes(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAttributes", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::MethodAttributes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::MethodAttributes));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::MethodAttributes>(*(mscorlib::System::Reflection::MethodAttributes*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Reflection::CallingConventions mscorlib::System::Reflection::MonoMethodInfo::GetCallingConvention(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCallingConvention", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::CallingConventions ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::CallingConventions));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::CallingConventions>(*(mscorlib::System::Reflection::CallingConventions*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Reflection::MethodImplAttributes mscorlib::System::Reflection::MonoMethodInfo::GetMethodImplementationFlags(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodImplementationFlags", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Reflection::MethodImplAttributes ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Reflection::MethodImplAttributes));
		return ret;
	}
	return static_cast<mscorlib::System::Reflection::MethodImplAttributes>(*(mscorlib::System::Reflection::MethodImplAttributes*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* mscorlib::System::Reflection::MonoMethodInfo::get_parameter_info(intptr_t handle, mscorlib::System::Reflection::MemberInfo* member)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_parameter_info", std::vector<std::string> { "System.IntPtr", "System.Reflection.MemberInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)member;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* mscorlib::System::Reflection::MonoMethodInfo::GetParametersInfo(intptr_t handle, mscorlib::System::Reflection::MemberInfo* member)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParametersInfo", std::vector<std::string> { "System.IntPtr", "System.Reflection.MemberInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)member;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>*)returnValue;
}
