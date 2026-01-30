#include "System_Delegate.h"

IL2CPP::Il2CppClass* mscorlib::System::Delegate::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "Delegate");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Delegate::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Reflection::MethodInfo* mscorlib::System::Delegate::get_Method()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Method");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* mscorlib::System::Delegate::GetVirtualMethod_internal()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVirtualMethod_internal");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Delegate::get_Target()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Target");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate_internal(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* info, bool throwOnBindFailure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate_internal", std::vector<std::string> { "System.Type", "System.Object", "System.Reflection.MethodInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&throwOnBindFailure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
bool mscorlib::System::Delegate::arg_type_match(mscorlib::System::Type* delArgType, mscorlib::System::Type* argType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "arg_type_match", std::vector<std::string> { "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)delArgType;
	params[1] = (intptr_t)argType;
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
bool mscorlib::System::Delegate::arg_type_match_this(mscorlib::System::Type* delArgType, mscorlib::System::Type* argType, bool boxedThis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "arg_type_match_this", std::vector<std::string> { "System.Type", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)delArgType;
	params[1] = (intptr_t)argType;
	params[2] = (intptr_t)&boxedThis;
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
bool mscorlib::System::Delegate::return_type_match(mscorlib::System::Type* delReturnType, mscorlib::System::Type* returnType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "return_type_match", std::vector<std::string> { "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)delReturnType;
	params[1] = (intptr_t)returnType;
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
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method, bool throwOnBindFailure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Object", "System.Reflection.MethodInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)firstArgument;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)&throwOnBindFailure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Object", "System.Reflection.MethodInfo", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)firstArgument;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)&throwOnBindFailure;
	params[4] = (intptr_t)&allowClosed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Object", "System.Reflection.MethodInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)firstArgument;
	params[2] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Reflection::MethodInfo* method, bool throwOnBindFailure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Reflection.MethodInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)method;
	params[2] = (intptr_t)&throwOnBindFailure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Reflection::MethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Reflection.MethodInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::String* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Object", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Reflection::MethodInfo* mscorlib::System::Delegate::GetCandidateMethod(mscorlib::System::Type* type, mscorlib::System::Type* target, mscorlib::System::String* method, mscorlib::System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCandidateMethod", std::vector<std::string> { "System.Type", "System.Type", "System.String", "System.Reflection.BindingFlags", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)&bflags;
	params[4] = (intptr_t)&ignoreCase;
	params[5] = (intptr_t)&throwOnBindFailure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Type* target, mscorlib::System::String* method, bool ignoreCase, bool throwOnBindFailure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Type", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)&ignoreCase;
	params[4] = (intptr_t)&throwOnBindFailure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Type* target, mscorlib::System::String* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Type", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::String* method, bool ignoreCase, bool throwOnBindFailure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Object", "System.String", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)&ignoreCase;
	params[4] = (intptr_t)&throwOnBindFailure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::String* method, bool ignoreCase)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegate", std::vector<std::string> { "System.Type", "System.Object", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)&ignoreCase;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Delegate::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Delegate::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t mscorlib::System::Delegate::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Reflection::MethodInfo* mscorlib::System::Delegate::GetMethodImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodImpl");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::MethodInfo*)returnValue;
}
void mscorlib::System::Delegate::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::Delegate*>* mscorlib::System::Delegate::GetInvocationList()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInvocationList");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Delegate*>*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::Combine(mscorlib::System::Delegate* a, mscorlib::System::Delegate* b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Combine", std::vector<std::string> { "System.Delegate", "System.Delegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::Combine(IL2CPP::Array<mscorlib::System::Delegate*>* delegates)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Combine", std::vector<std::string> { "System.Delegate[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)delegates;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CombineImpl(mscorlib::System::Delegate* d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CombineImpl", std::vector<std::string> { "System.Delegate" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::Remove(mscorlib::System::Delegate* source, mscorlib::System::Delegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { "System.Delegate", "System.Delegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::RemoveImpl(mscorlib::System::Delegate* d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveImpl", std::vector<std::string> { "System.Delegate" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::Delegate* mscorlib::System::Delegate::RemoveAll(mscorlib::System::Delegate* source, mscorlib::System::Delegate* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAll", std::vector<std::string> { "System.Delegate", "System.Delegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
bool mscorlib::System::Delegate::op_Equality(mscorlib::System::Delegate* d1, mscorlib::System::Delegate* d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "System.Delegate", "System.Delegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)d1;
	params[1] = (intptr_t)d2;
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
bool mscorlib::System::operator==(mscorlib::System::Delegate& d1, mscorlib::System::Delegate& d2)
{
	return mscorlib::System::Delegate::op_Equality(&d1, &d2);
}
bool mscorlib::System::Delegate::op_Inequality(mscorlib::System::Delegate* d1, mscorlib::System::Delegate* d2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "System.Delegate", "System.Delegate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)d1;
	params[1] = (intptr_t)d2;
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
bool mscorlib::System::operator!=(mscorlib::System::Delegate& d1, mscorlib::System::Delegate& d2)
{
	return mscorlib::System::Delegate::op_Inequality(&d1, &d2);
}
mscorlib::System::Delegate* mscorlib::System::Delegate::CreateDelegateNoSecurityCheck(mscorlib::System::RuntimeType* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateDelegateNoSecurityCheck", std::vector<std::string> { "System.RuntimeType", "System.Object", "System.Reflection.MethodInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)firstArgument;
	params[2] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Delegate*)returnValue;
}
mscorlib::System::MulticastDelegate* mscorlib::System::Delegate::AllocDelegateLike_internal(mscorlib::System::Delegate* d)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllocDelegateLike_internal", std::vector<std::string> { "System.Delegate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)d;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::MulticastDelegate*)returnValue;
}
