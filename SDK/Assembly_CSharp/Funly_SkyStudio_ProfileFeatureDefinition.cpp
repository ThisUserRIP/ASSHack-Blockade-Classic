#include "Funly_SkyStudio_ProfileFeatureDefinition.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "ProfileFeatureDefinition");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition::CreateShaderFeature(mscorlib::System::String* featureKey, mscorlib::System::String* shaderKeyword, bool value, mscorlib::System::String* name, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateShaderFeature", std::vector<std::string> { "System.String", "System.String", "System.Boolean", "System.String", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)featureKey;
	params[1] = (intptr_t)shaderKeyword;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)name;
	params[4] = (intptr_t)dependsOnFeature;
	params[5] = (intptr_t)&dependsOnValue;
	params[6] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition::CreateShaderFeatureDropdown(IL2CPP::Array<mscorlib::System::String*>* featureKeys, IL2CPP::Array<mscorlib::System::String*>* shaderKeywords, IL2CPP::Array<mscorlib::System::String*>* labels, int32_t selectedIndex, mscorlib::System::String* name, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateShaderFeatureDropdown", std::vector<std::string> { "System.String[]", "System.String[]", "System.String[]", "System.Int32", "System.String", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)featureKeys;
	params[1] = (intptr_t)shaderKeywords;
	params[2] = (intptr_t)labels;
	params[3] = (intptr_t)&selectedIndex;
	params[4] = (intptr_t)name;
	params[5] = (intptr_t)dependsOnFeature;
	params[6] = (intptr_t)&dependsOnValue;
	params[7] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition::CreateBooleanFeature(mscorlib::System::String* featureKey, bool value, mscorlib::System::String* name, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateBooleanFeature", std::vector<std::string> { "System.String", "System.Boolean", "System.String", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)featureKey;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)dependsOnFeature;
	params[4] = (intptr_t)&dependsOnValue;
	params[5] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
