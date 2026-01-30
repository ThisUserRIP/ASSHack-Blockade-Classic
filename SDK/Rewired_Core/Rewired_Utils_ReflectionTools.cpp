#include "Rewired_Utils_ReflectionTools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::ReflectionTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "ReflectionTools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::ReflectionTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsValueType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValueType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsEnum(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnum", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
mscorlib::System::Type* Rewired_Core::Rewired::Utils::ReflectionTools::GetUnderlyingEnumType(mscorlib::System::Type* enumType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnderlyingEnumType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)enumType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsClass(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsClass", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsPrimitive(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrimitive", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsArray(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsArray", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
bool Rewired_Core::Rewired::Utils::ReflectionTools::DoesTypeImplement(mscorlib::System::Type* type, mscorlib::System::Type* baseOrInterfaceType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoesTypeImplement", std::vector<std::string> { "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)baseOrInterfaceType;
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
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsGenericType(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsGenericType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
IL2CPP::Array<mscorlib::System::Type*>* Rewired_Core::Rewired::Utils::ReflectionTools::GetGenericArguments(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGenericArguments", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::FieldInfo>* Rewired_Core::Rewired::Utils::ReflectionTools::GetFields(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFields", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::FieldInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::FieldInfo>* Rewired_Core::Rewired::Utils::ReflectionTools::GetFields(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::ReflectionTools_BindingFlags bindingFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFields", std::vector<std::string> { "System.Type", "Rewired.Utils.ReflectionTools/BindingFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&bindingFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::FieldInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>* Rewired_Core::Rewired::Utils::ReflectionTools::GetProperties(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperties", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>* Rewired_Core::Rewired::Utils::ReflectionTools::GetProperties(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::ReflectionTools_BindingFlags bindingFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperties", std::vector<std::string> { "System.Type", "Rewired.Utils.ReflectionTools/BindingFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&bindingFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::MethodInfo>* Rewired_Core::Rewired::Utils::ReflectionTools::GetMethods(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethods", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::MethodInfo>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::MethodInfo>* Rewired_Core::Rewired::Utils::ReflectionTools::GetMethods(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::ReflectionTools_BindingFlags bindingFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethods", std::vector<std::string> { "System.Type", "Rewired.Utils.ReflectionTools/BindingFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)&bindingFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::MethodInfo>*)returnValue;
}
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsDefined(mscorlib::System::Type* type, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefined", std::vector<std::string> { "System.Type", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inherit;
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
bool Rewired_Core::Rewired::Utils::ReflectionTools::IsAssemblyLoaded(mscorlib::System::String* assemblyName, bool useShortName, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAssemblyLoaded", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)assemblyName;
	params[1] = (intptr_t)&useShortName;
	params[2] = (intptr_t)&ignoreCase;
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
mscorlib::System::Type* Rewired_Core::Rewired::Utils::ReflectionTools::GetTypeInUnityEditorAssembly(mscorlib::System::String* classPath, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeInUnityEditorAssembly", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)classPath;
	params[1] = (intptr_t)&ignoreCase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::ReflectionTools::GetTypeInUnityBuildAssembly(mscorlib::System::String* classPath, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeInUnityBuildAssembly", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)classPath;
	params[1] = (intptr_t)&ignoreCase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::ReflectionTools::lpimtbDKbbDioVJWDCHQxXjcHIX(mscorlib::System::String* A_0, bool A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lpimtbDKbbDioVJWDCHQxXjcHIX", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::ReflectionTools::GetTypeInAssembly(mscorlib::System::String* classPath, mscorlib::System::String* assemblyName, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeInAssembly", std::vector<std::string> { "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)classPath;
	params[1] = (intptr_t)assemblyName;
	params[2] = (intptr_t)&ignoreCase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* Rewired_Core::Rewired::Utils::ReflectionTools::GetMethodInfo(mscorlib::System::Delegate* delegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodInfo", std::vector<std::string> { "System.Delegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)delegate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
