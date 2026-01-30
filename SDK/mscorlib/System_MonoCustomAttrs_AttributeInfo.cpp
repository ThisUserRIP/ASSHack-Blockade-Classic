#include "System_MonoCustomAttrs_AttributeInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::MonoCustomAttrs_AttributeInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::MonoCustomAttrs::GetIl2CppClass(), "AttributeInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::MonoCustomAttrs_AttributeInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::MonoCustomAttrs_AttributeInfo::_ctor(mscorlib::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.AttributeUsageAttribute", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)usage;
	params[1] = (intptr_t)&inheritanceLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::AttributeUsageAttribute* mscorlib::System::MonoCustomAttrs_AttributeInfo::get_Usage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Usage");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::AttributeUsageAttribute*)returnValue;
}
int32_t mscorlib::System::MonoCustomAttrs_AttributeInfo::get_InheritanceLevel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InheritanceLevel");
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
