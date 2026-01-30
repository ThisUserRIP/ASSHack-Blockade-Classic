#include "Rewired_Data_ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::ConfigVars::GetIl2CppClass(), "WSbzAnctJdELEIwnjzkExhmtPlH");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::ConfigVars_WSbzAnctJdELEIwnjzkExhmtPlH::_ctor(mscorlib::System::Func_1<Rewired_Core::Rewired::Data::ConfigVars_PlatformVars>* getDelegate, mscorlib::System::String* dataPath)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`1<Rewired.Data.ConfigVars/PlatformVars>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)getDelegate;
	params[1] = (intptr_t)dataPath;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
