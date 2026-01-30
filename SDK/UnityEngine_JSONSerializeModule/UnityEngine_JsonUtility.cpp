#include "UnityEngine_JsonUtility.h"

IL2CPP::Il2CppClass* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.JSONSerializeModule.dll", "UnityEngine", "JsonUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::ToJsonInternal(mscorlib::System::Object* obj, bool prettyPrint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJsonInternal", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&prettyPrint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Object* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::FromJsonInternal(mscorlib::System::String* json, mscorlib::System::Object* objectToOverwrite, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromJsonInternal", std::vector<std::string> { "System.String", "System.Object", "System.Type" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)json;
	params[1] = (intptr_t)objectToOverwrite;
	params[2] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::String* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::ToJson(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJson", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::ToJson(mscorlib::System::Object* obj, bool prettyPrint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJson", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&prettyPrint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Object* UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::FromJson(mscorlib::System::String* json, mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromJson", std::vector<std::string> { "System.String", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)json;
	params[1] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void UnityEngine_JSONSerializeModule::UnityEngine::JsonUtility::FromJsonOverwrite(mscorlib::System::String* json, mscorlib::System::Object* objectToOverwrite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromJsonOverwrite", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)json;
	params[1] = (intptr_t)objectToOverwrite;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
