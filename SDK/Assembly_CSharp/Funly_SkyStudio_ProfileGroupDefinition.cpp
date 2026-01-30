#include "Funly_SkyStudio_ProfileGroupDefinition.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "ProfileGroupDefinition");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Single", "System.Single", "System.Single", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&minimumValue;
	params[3] = (intptr_t)&maximumValue;
	params[4] = (intptr_t)&value;
	params[5] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Single", "System.Single", "System.Single", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&minimumValue;
	params[3] = (intptr_t)&maximumValue;
	params[4] = (intptr_t)&value;
	params[5] = (intptr_t)dependsOnKeyword;
	params[6] = (intptr_t)&dependsOnValue;
	params[7] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Single", "System.Single", "System.Single", "Funly.SkyStudio.ProfileGroupDefinition/RebuildType", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&minimumValue;
	params[3] = (intptr_t)&maximumValue;
	params[4] = (intptr_t)&value;
	params[5] = (intptr_t)&rebuildType;
	params[6] = (intptr_t)dependsOnKeyword;
	params[7] = (intptr_t)&dependsOnValue;
	params[8] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_FormatStyle formatStyle, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Single", "System.Single", "System.Single", "Funly.SkyStudio.ProfileGroupDefinition/RebuildType", "Funly.SkyStudio.ProfileGroupDefinition/FormatStyle", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&minimumValue;
	params[3] = (intptr_t)&maximumValue;
	params[4] = (intptr_t)&value;
	params[5] = (intptr_t)&rebuildType;
	params[6] = (intptr_t)&formatStyle;
	params[7] = (intptr_t)dependsOnKeyword;
	params[8] = (intptr_t)&dependsOnValue;
	params[9] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::ColorGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Color color, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ColorGroupDefinition", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Color", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::ColorGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Color color, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ColorGroupDefinition", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Color", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)dependsOnFeature;
	params[4] = (intptr_t)&dependsOnValue;
	params[5] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::ColorGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Color color, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ColorGroupDefinition", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Color", "Funly.SkyStudio.ProfileGroupDefinition/RebuildType", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&color;
	params[3] = (intptr_t)&rebuildType;
	params[4] = (intptr_t)dependsOnKeyword;
	params[5] = (intptr_t)&dependsOnValue;
	params[6] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::SpherePointGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float horizontalRotation, float verticalRotation, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SpherePointGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Single", "System.Single", "System.String" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&horizontalRotation;
	params[3] = (intptr_t)&verticalRotation;
	params[4] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::SpherePointGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float horizontalRotation, float verticalRotation, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SpherePointGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Single", "System.Single", "Funly.SkyStudio.ProfileGroupDefinition/RebuildType", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&horizontalRotation;
	params[3] = (intptr_t)&verticalRotation;
	params[4] = (intptr_t)&rebuildType;
	params[5] = (intptr_t)dependsOnKeyword;
	params[6] = (intptr_t)&dependsOnValue;
	params[7] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::TextureGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextureGroupDefinition", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Texture2D", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)texture;
	params[3] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::TextureGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextureGroupDefinition", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Texture2D", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)texture;
	params[3] = (intptr_t)dependsOnKeyword;
	params[4] = (intptr_t)&dependsOnValue;
	params[5] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::TextureGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextureGroupDefinition", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Texture2D", "Funly.SkyStudio.ProfileGroupDefinition/RebuildType", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)texture;
	params[3] = (intptr_t)&rebuildType;
	params[4] = (intptr_t)dependsOnKeyword;
	params[5] = (intptr_t)&dependsOnValue;
	params[6] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::BoolGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, bool value, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BoolGroupDefinition", std::vector<std::string> { "System.String", "System.String", "System.Boolean", "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)groupName;
	params[1] = (intptr_t)propKey;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)dependsOnKeyword;
	params[4] = (intptr_t)&dependsOnValue;
	params[5] = (intptr_t)tooltip;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*)returnValue;
}
void Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
