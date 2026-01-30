#include "System_Runtime_Remoting_Contexts_DynamicPropertyCollection.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasProperties");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty(mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty* prop)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterDynamicProperty", std::vector<std::string> { "System.Runtime.Remoting.Contexts.IDynamicProperty" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prop;
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
bool mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnregisterDynamicProperty", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
void mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyMessage", std::vector<std::string> { "System.Boolean", "System.Runtime.Remoting.Messaging.IMessage", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)&client_site;
	params[3] = (intptr_t)&async;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindProperty", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
void mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
