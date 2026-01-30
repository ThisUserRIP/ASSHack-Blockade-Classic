#include "System_Reflection_MonoPropertyInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::MonoPropertyInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection", "MonoPropertyInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::MonoPropertyInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::MonoPropertyInfo::get_property_info(mscorlib::System::Reflection::MonoProperty* prop, mscorlib::System::Reflection::MonoPropertyInfo& info, mscorlib::System::Reflection::PInfo req_info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_property_info", std::vector<std::string> { "System.Reflection.MonoProperty", "System.Reflection.MonoPropertyInfo&", "System.Reflection.PInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prop;
	params[1] = (intptr_t)&info;
	params[2] = (intptr_t)&req_info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::Type*>* mscorlib::System::Reflection::MonoPropertyInfo::GetTypeModifiers(mscorlib::System::Reflection::MonoProperty* prop, bool optional)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeModifiers", std::vector<std::string> { "System.Reflection.MonoProperty", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)prop;
	params[1] = (intptr_t)&optional;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Type*>*)returnValue;
}
mscorlib::System::Object* mscorlib::System::Reflection::MonoPropertyInfo::get_default_value(mscorlib::System::Reflection::MonoProperty* prop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_default_value", std::vector<std::string> { "System.Reflection.MonoProperty" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prop;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
