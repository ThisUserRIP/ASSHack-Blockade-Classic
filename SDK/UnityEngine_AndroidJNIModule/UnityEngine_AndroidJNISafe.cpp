#include "UnityEngine_AndroidJNISafe.h"

IL2CPP::Il2CppClass* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AndroidJNIModule.dll", "UnityEngine", "AndroidJNISafe");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CheckException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::DeleteGlobalRef(intptr_t globalref)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteGlobalRef", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&globalref;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::DeleteWeakGlobalRef(intptr_t globalref)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteWeakGlobalRef", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&globalref;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::DeleteLocalRef(intptr_t localref)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteLocalRef", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&localref;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::NewString(mscorlib::System::String* chars)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NewString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)chars;
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
mscorlib::System::String* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetStringChars(intptr_t str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStringChars", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetObjectClass(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectClass", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetStaticMethodID(intptr_t clazz, mscorlib::System::String* name, mscorlib::System::String* sig)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStaticMethodID", std::vector<std::string> { "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)sig;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetMethodID(intptr_t obj, mscorlib::System::String* name, mscorlib::System::String* sig)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodID", std::vector<std::string> { "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)sig;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetFieldID(intptr_t clazz, mscorlib::System::String* name, mscorlib::System::String* sig)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFieldID", std::vector<std::string> { "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)sig;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetStaticFieldID(intptr_t clazz, mscorlib::System::String* name, mscorlib::System::String* sig)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStaticFieldID", std::vector<std::string> { "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)sig;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromReflectedMethod(intptr_t refMethod)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromReflectedMethod", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&refMethod;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FindClass(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindClass", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::NewObject(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NewObject", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticVoidMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticVoidMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticObjectMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticObjectMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
mscorlib::System::String* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticStringMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticStringMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
wchar_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticCharMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticCharMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
double UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticDoubleMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticDoubleMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticFloatMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticFloatMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int64_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticLongMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticLongMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
int16_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticShortMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticShortMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
int8_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticSByteMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticSByteMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int8_t ret;
		std::memset(&ret, 0, sizeof(int8_t));
		return ret;
	}
	return static_cast<int8_t>(*(int8_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticBooleanMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticBooleanMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
int32_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStaticIntMethod(intptr_t clazz, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStaticIntMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&clazz;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetObjectField(intptr_t obj, intptr_t fieldID, intptr_t val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetObjectField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetStringField(intptr_t obj, intptr_t fieldID, mscorlib::System::String* val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetStringField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetCharField(intptr_t obj, intptr_t fieldID, wchar_t val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCharField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Char" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetDoubleField(intptr_t obj, intptr_t fieldID, double val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDoubleField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Double" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetFloatField(intptr_t obj, intptr_t fieldID, float val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFloatField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetLongField(intptr_t obj, intptr_t fieldID, int64_t val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLongField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int64" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetShortField(intptr_t obj, intptr_t fieldID, int16_t val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetShortField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int16" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetSByteField(intptr_t obj, intptr_t fieldID, int8_t val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSByteField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.SByte" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetBooleanField(intptr_t obj, intptr_t fieldID, bool val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBooleanField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::SetIntField(intptr_t obj, intptr_t fieldID, int32_t val)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIntField", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&fieldID;
	params[2] = (intptr_t)&val;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallVoidMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallVoidMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallObjectMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallObjectMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
mscorlib::System::String* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallStringMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStringMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
wchar_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallCharMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallCharMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
double UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallDoubleMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallDoubleMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallFloatMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallFloatMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
int64_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallLongMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallLongMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
int16_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallShortMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallShortMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int16_t ret;
		std::memset(&ret, 0, sizeof(int16_t));
		return ret;
	}
	return static_cast<int16_t>(*(int16_t*)il2cpp_object_unbox(returnValue));
}
int8_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallSByteMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallSByteMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int8_t ret;
		std::memset(&ret, 0, sizeof(int8_t));
		return ret;
	}
	return static_cast<int8_t>(*(int8_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallBooleanMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallBooleanMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
int32_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::CallIntMethod(intptr_t obj, intptr_t methodID, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallIntMethod", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "UnityEngine.jvalue[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&methodID;
	params[2] = (intptr_t)args;
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
IL2CPP::Array<wchar_t>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromCharArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromCharArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<wchar_t>*)returnValue;
}
IL2CPP::Array<double>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromDoubleArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromDoubleArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<double>*)returnValue;
}
IL2CPP::Array<float>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromFloatArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromFloatArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<float>*)returnValue;
}
IL2CPP::Array<int64_t>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromLongArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromLongArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int64_t>*)returnValue;
}
IL2CPP::Array<int16_t>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromShortArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromShortArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int16_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromByteArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromByteArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<int8_t>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromSByteArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromSByteArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int8_t>*)returnValue;
}
IL2CPP::Array<bool>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromBooleanArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromBooleanArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<bool>*)returnValue;
}
IL2CPP::Array<int32_t>* UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::FromIntArray(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromIntArray", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToObjectArray(IL2CPP::Array<intptr_t>* array, intptr_t type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToObjectArray", std::vector<std::string> { "System.IntPtr[]", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)array;
	params[1] = (intptr_t)&type;
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToCharArray(IL2CPP::Array<wchar_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToCharArray", std::vector<std::string> { "System.Char[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToDoubleArray(IL2CPP::Array<double>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDoubleArray", std::vector<std::string> { "System.Double[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToFloatArray(IL2CPP::Array<float>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToFloatArray", std::vector<std::string> { "System.Single[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToLongArray(IL2CPP::Array<int64_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToLongArray", std::vector<std::string> { "System.Int64[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToShortArray(IL2CPP::Array<int16_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToShortArray", std::vector<std::string> { "System.Int16[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToByteArray(IL2CPP::Array<uint8_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToByteArray", std::vector<std::string> { "System.Byte[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToSByteArray(IL2CPP::Array<int8_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToSByteArray", std::vector<std::string> { "System.SByte[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToBooleanArray(IL2CPP::Array<bool>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToBooleanArray", std::vector<std::string> { "System.Boolean[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::ToIntArray(IL2CPP::Array<int32_t>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToIntArray", std::vector<std::string> { "System.Int32[]" });
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
intptr_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetObjectArrayElement(intptr_t array, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectArrayElement", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&array;
	params[1] = (intptr_t)&index;
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
int32_t UnityEngine_AndroidJNIModule::UnityEngine::AndroidJNISafe::GetArrayLength(intptr_t array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetArrayLength", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&array;
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
