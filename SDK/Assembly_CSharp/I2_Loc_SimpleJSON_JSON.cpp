#include "I2_Loc_SimpleJSON_JSON.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::SimpleJSON::JSON::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSON");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::SimpleJSON::JSON::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Assembly_CSharp::I2::Loc::SimpleJSON::JSON::Parse(mscorlib::System::String* aJSON)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)aJSON;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode*)returnValue;
}
