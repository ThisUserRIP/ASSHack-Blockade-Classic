#include "UnityEngine_AndroidReflection.h"

IL2CPP::Il2CppClass* UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AndroidJNIModule.dll", "UnityEngine", "AndroidReflection");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::IsPrimitive(mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrimitive", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
bool UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::IsAssignableFrom(mscorlib::System::Type* t, mscorlib::System::Type* from)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAssignableFrom", std::vector<std::string> { "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)from;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetStaticMethodID(mscorlib::System::String* clazz, mscorlib::System::String* methodName, mscorlib::System::String* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStaticMethodID", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)clazz;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)signature;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetMethodID(mscorlib::System::String* clazz, mscorlib::System::String* methodName, mscorlib::System::String* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodID", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)clazz;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)signature;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetConstructorMember(intptr_t jclass, mscorlib::System::String* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConstructorMember", std::vector<std::string> { "System.IntPtr", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&jclass;
	params[1] = (intptr_t)signature;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetMethodMember(intptr_t jclass, mscorlib::System::String* methodName, mscorlib::System::String* signature, bool isStatic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodMember", std::vector<std::string> { "System.IntPtr", "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&jclass;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)signature;
	params[3] = (intptr_t)&isStatic;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetFieldMember(intptr_t jclass, mscorlib::System::String* fieldName, mscorlib::System::String* signature, bool isStatic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFieldMember", std::vector<std::string> { "System.IntPtr", "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&jclass;
	params[1] = (intptr_t)fieldName;
	params[2] = (intptr_t)signature;
	params[3] = (intptr_t)&isStatic;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetFieldClass(intptr_t field)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFieldClass", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&field;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::GetFieldSignature(intptr_t field)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFieldSignature", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&field;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::NewProxyInstance(intptr_t delegateHandle, intptr_t interfaze)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NewProxyInstance", std::vector<std::string> { "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&delegateHandle;
	params[1] = (intptr_t)&interfaze;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::SetNativeExceptionOnProxy(intptr_t proxy, mscorlib::System::Exception* e, bool methodNotFound)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNativeExceptionOnProxy", std::vector<std::string> { "System.IntPtr", "System.Exception", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&proxy;
	params[1] = (intptr_t)e;
	params[2] = (intptr_t)&methodNotFound;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidReflection::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
