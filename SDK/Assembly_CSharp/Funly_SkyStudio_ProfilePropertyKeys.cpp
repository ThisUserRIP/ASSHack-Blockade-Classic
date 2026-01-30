#include "Funly_SkyStudio_ProfilePropertyKeys.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::ProfilePropertyKeys::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "ProfilePropertyKeys");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::ProfilePropertyKeys::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::String>* Assembly_CSharp::Funly::SkyStudio::ProfilePropertyKeys::GetPropertyKeysSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPropertyKeysSet");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::String>*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::ProfilePropertyKeys::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
