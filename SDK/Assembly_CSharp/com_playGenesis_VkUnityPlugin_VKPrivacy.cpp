#include "com_playGenesis_VkUnityPlugin_VKPrivacy.h"

IL2CPP::Il2CppClass* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "com.playGenesis.VkUnityPlugin", "VKPrivacy");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::Deserialize(mscorlib::System::Object* Privacy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deserialize", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Privacy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::get_type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_type");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::set_type(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_type", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::get_users()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_users");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::set_users(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_users", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int64>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::get_lists()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lists");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::set_lists(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_lists", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int64>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::get_except_lists()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_except_lists");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::set_except_lists(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_except_lists", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int64>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::get_except_users()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_except_users");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>*)returnValue;
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::set_except_users(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_except_users", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int64>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::com::playGenesis::VkUnityPlugin::VKPrivacy::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
