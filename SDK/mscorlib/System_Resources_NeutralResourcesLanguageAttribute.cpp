#include "System_Resources_NeutralResourcesLanguageAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Resources::NeutralResourcesLanguageAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Resources", "NeutralResourcesLanguageAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Resources::NeutralResourcesLanguageAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Resources::NeutralResourcesLanguageAttribute::_ctor(mscorlib::System::String* cultureName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cultureName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Resources::NeutralResourcesLanguageAttribute::get_CultureName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CultureName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Resources::UltimateResourceFallbackLocation mscorlib::System::Resources::NeutralResourcesLanguageAttribute::get_Location()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Location");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Resources::UltimateResourceFallbackLocation ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Resources::UltimateResourceFallbackLocation));
		return ret;
	}
	return static_cast<mscorlib::System::Resources::UltimateResourceFallbackLocation>(*(mscorlib::System::Resources::UltimateResourceFallbackLocation*)il2cpp_object_unbox(returnValue));
}
