#include "I2_Loc_GoogleTranslation___c__DisplayClass2_0.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::GoogleTranslation___c__DisplayClass2_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::I2::Loc::GoogleTranslation::GetIl2CppClass(), "<>c__DisplayClass2_0");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::GoogleTranslation___c__DisplayClass2_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::GoogleTranslation___c__DisplayClass2_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::GoogleTranslation___c__DisplayClass2_0::_Translate_b__0(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::TranslationQuery>* results, mscorlib::System::String* error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Translate>b__0", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,I2.Loc.TranslationQuery>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)results;
	params[1] = (intptr_t)error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
