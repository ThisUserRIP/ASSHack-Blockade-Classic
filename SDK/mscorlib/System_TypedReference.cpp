#include "System_TypedReference.h"

IL2CPP::Il2CppClass* mscorlib::System::TypedReference::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "TypedReference");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TypedReference::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::TypedReference mscorlib::System::TypedReference::MakeTypedReference(mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* flds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeTypedReference", std::vector<std::string> { "System.Object", "System.Reflection.FieldInfo[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)flds;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TypedReference ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TypedReference));
		return ret;
	}
	return static_cast<mscorlib::System::TypedReference>(*(mscorlib::System::TypedReference*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::TypedReference mscorlib::System::TypedReference::MakeTypedReferenceInternal(mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Reflection::FieldInfo*>* fields)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeTypedReferenceInternal", std::vector<std::string> { "System.Object", "System.Reflection.FieldInfo[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)fields;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TypedReference ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TypedReference));
		return ret;
	}
	return static_cast<mscorlib::System::TypedReference>(*(mscorlib::System::TypedReference*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::TypedReference::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::TypedReference::Equals(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::TypedReference::get_IsNull()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsNull");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::TypedReference::SetTypedReference(mscorlib::System::TypedReference target, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTypedReference", std::vector<std::string> { "System.TypedReference", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&target;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
