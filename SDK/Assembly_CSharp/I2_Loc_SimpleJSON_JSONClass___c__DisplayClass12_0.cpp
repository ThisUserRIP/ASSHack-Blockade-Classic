#include "I2_Loc_SimpleJSON_JSONClass___c__DisplayClass12_0.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass___c__DisplayClass12_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass::GetIl2CppClass(), "<>c__DisplayClass12_0");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass___c__DisplayClass12_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass___c__DisplayClass12_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass___c__DisplayClass12_0::_Remove_b__0(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode> k)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Remove>b__0", std::vector<std::string> { "System.Collections.Generic.KeyValuePair`2<System.String,I2.Loc.SimpleJSON.JSONNode>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&k;
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
