#include "I2_Loc_TranslationJob_WEB___c.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::I2::Loc::TranslationJob_WEB::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::_FindAllQueries_b__8_0(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::String> a, mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::String> b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<FindAllQueries>b__8_0", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<System.String,System.String>", "System.Collections.Generic.KeyValuePair`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::_ParseTranslationResult_b__12_0(System::System::Text::RegularExpressions::Match* match)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ParseTranslationResult>b__12_0", std::vector<std::string> { "System.Text.RegularExpressions.Match" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)match;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::TranslationJob_WEB___c::_ParseTranslationResult_b__12_1(System::System::Text::RegularExpressions::Match* match)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ParseTranslationResult>b__12_1", std::vector<std::string> { "System.Text.RegularExpressions.Match" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)match;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
