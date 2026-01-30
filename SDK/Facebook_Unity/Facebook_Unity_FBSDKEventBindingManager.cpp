#include "Facebook_Unity_FBSDKEventBindingManager.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "FBSDKEventBindingManager");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKEventBinding>* Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager::get_eventBindings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_eventBindings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKEventBinding>*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager::set_eventBindings(mscorlib::System::Collections::Generic::List_1<Facebook_Unity::Facebook::Unity::FBSDKEventBinding>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_eventBindings", std::vector<std::string> { "System.Collections.Generic.List`1<Facebook.Unity.FBSDKEventBinding>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBSDKEventBindingManager::_ctor(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* listDict)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.List`1<System.Object>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listDict;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
