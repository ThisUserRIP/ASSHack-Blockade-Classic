#include "UnityEngine__AndroidJNIHelper.h"

IL2CPP::Il2CppClass* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AndroidJNIModule.dll", "UnityEngine", "_AndroidJNIHelper");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::CreateJavaProxy(intptr_t delegateHandle, UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaProxy* proxy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJavaProxy", std::vector<std::string> { "System.IntPtr", "UnityEngine.AndroidJavaProxy" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&delegateHandle;
	params[1] = (intptr_t)proxy;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::CreateJavaRunnable(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaRunnable* jrunnable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJavaRunnable", std::vector<std::string> { "UnityEngine.AndroidJavaRunnable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)jrunnable;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::InvokeJavaProxyMethod(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaProxy* proxy, intptr_t jmethodName, intptr_t jargs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeJavaProxyMethod", std::vector<std::string> { "UnityEngine.AndroidJavaProxy", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)proxy;
	params[1] = (intptr_t)&jmethodName;
	params[2] = (intptr_t)&jargs;
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
IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::CreateJNIArgArray(IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateJNIArgArray", std::vector<std::string> { "System.Object[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>*)returnValue;
}
mscorlib::System::Object* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::UnboxArray(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnboxArray", std::vector<std::string> { "UnityEngine.AndroidJavaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::Unbox(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Unbox", std::vector<std::string> { "UnityEngine.AndroidJavaObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::Box(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Box", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject*)returnValue;
}
void UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::DeleteJNIArgArray(IL2CPP::Array<mscorlib::System::Object*>* args, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* jniArgs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteJNIArgArray", std::vector<std::string> { "System.Object[]", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)args;
	params[1] = (intptr_t)jniArgs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::ConvertToJNIArray(mscorlib::System::Array* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertToJNIArray", std::vector<std::string> { "System.Array" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetConstructorID(intptr_t jclass, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConstructorID", std::vector<std::string> { "System.IntPtr", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&jclass;
	params[1] = (intptr_t)args;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetMethodID(intptr_t jclass, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args, bool isStatic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodID", std::vector<std::string> { "System.IntPtr", "System.String", "System.Object[]", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&jclass;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)args;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetConstructorID(intptr_t jclass, mscorlib::System::String* signature)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetConstructorID", std::vector<std::string> { "System.IntPtr", "System.String" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetMethodID(intptr_t jclass, mscorlib::System::String* methodName, mscorlib::System::String* signature, bool isStatic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodID", std::vector<std::string> { "System.IntPtr", "System.String", "System.String", "System.Boolean" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetMethodIDFallback(intptr_t jclass, mscorlib::System::String* methodName, mscorlib::System::String* signature, bool isStatic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodIDFallback", std::vector<std::string> { "System.IntPtr", "System.String", "System.String", "System.Boolean" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetFieldID(intptr_t jclass, mscorlib::System::String* fieldName, mscorlib::System::String* signature, bool isStatic)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFieldID", std::vector<std::string> { "System.IntPtr", "System.String", "System.String", "System.Boolean" });
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
mscorlib::System::String* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetSignature(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSignature", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_AndroidJNIModule::UnityEngine::_AndroidJNIHelper::GetSignature(IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSignature", std::vector<std::string> { "System.Object[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
