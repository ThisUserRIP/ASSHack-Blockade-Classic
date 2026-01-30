#include "I2_Loc_ILanguageSource.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::ILanguageSource::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "ILanguageSource");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::ILanguageSource::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::I2::Loc::LanguageSourceData* Assembly_CSharp::I2::Loc::ILanguageSource::get_SourceData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SourceData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::I2::Loc::LanguageSourceData*)returnValue;
}
void Assembly_CSharp::I2::Loc::ILanguageSource::set_SourceData(Assembly_CSharp::I2::Loc::LanguageSourceData* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_SourceData", std::vector<std::string> { "I2.Loc.LanguageSourceData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
