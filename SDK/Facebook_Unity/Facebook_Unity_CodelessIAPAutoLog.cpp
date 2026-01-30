#include "Facebook_Unity_CodelessIAPAutoLog.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "CodelessIAPAutoLog");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::handlePurchaseCompleted(mscorlib::System::Object* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "handlePurchaseCompleted", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::addListenerToIAPButtons(mscorlib::System::Object* listenerObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "addListenerToIAPButtons", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listenerObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::addListenerToGameObject(UnityEngine_CoreModule::UnityEngine::Object* gameObject, mscorlib::System::Object* listenerObject)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "addListenerToGameObject", std::vector<std::string> { "UnityEngine.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameObject;
	params[1] = (intptr_t)listenerObject;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::FindTypeInAssemblies(mscorlib::System::String* typeName, mscorlib::System::String* nameSpace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindTypeInAssemblies", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeName;
	params[1] = (intptr_t)nameSpace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::FindObjectsOfTypeByName(mscorlib::System::String* typeName, mscorlib::System::String* nameSpace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindObjectsOfTypeByName", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)typeName;
	params[1] = (intptr_t)nameSpace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>*)returnValue;
}
mscorlib::System::Object* Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::GetField(mscorlib::System::Object* inObj, mscorlib::System::String* fieldName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetField", std::vector<std::string> { "System.Object", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inObj;
	params[1] = (intptr_t)fieldName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Object* Facebook_Unity::Facebook::Unity::CodelessIAPAutoLog::GetProperty(mscorlib::System::Object* inObj, mscorlib::System::String* propertyName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetProperty", std::vector<std::string> { "System.Object", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inObj;
	params[1] = (intptr_t)propertyName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
