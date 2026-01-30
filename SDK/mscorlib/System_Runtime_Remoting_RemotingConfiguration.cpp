#include "System_Runtime_Remoting_RemotingConfiguration.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::RemotingConfiguration::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting", "RemotingConfiguration");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::RemotingConfiguration::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ApplicationName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ApplicationName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Runtime::Remoting::RemotingConfiguration::get_ProcessId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProcessId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDefaultDelayedChannels");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry* mscorlib::System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType(mscorlib::System::Type* svrType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsRemotelyActivatedClientType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)svrType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry*)returnValue;
}
mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry* mscorlib::System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType(mscorlib::System::Type* svrType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWellKnownClientType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)svrType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry*)returnValue;
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType(mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry* entry)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterActivatedClientType", std::vector<std::string> { "System.Runtime.Remoting.ActivatedClientTypeEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)entry;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType(mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterActivatedServiceType", std::vector<std::string> { "System.Runtime.Remoting.ActivatedServiceTypeEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)entry;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType(mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry* entry)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterWellKnownClientType", std::vector<std::string> { "System.Runtime.Remoting.WellKnownClientTypeEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)entry;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType(mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterWellKnownServiceType", std::vector<std::string> { "System.Runtime.Remoting.WellKnownServiceTypeEntry" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)entry;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate(mscorlib::System::Runtime::Remoting::ChannelData* channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterChannelTemplate", std::vector<std::string> { "System.Runtime.Remoting.ChannelData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)channel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate(mscorlib::System::Runtime::Remoting::ProviderData* prov)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterClientProviderTemplate", std::vector<std::string> { "System.Runtime.Remoting.ProviderData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prov;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate(mscorlib::System::Runtime::Remoting::ProviderData* prov)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterServerProviderTemplate", std::vector<std::string> { "System.Runtime.Remoting.ProviderData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prov;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterChannels(mscorlib::System::Collections::ArrayList* channels, bool onlyDelayed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterChannels", std::vector<std::string> { "System.Collections.ArrayList", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)channels;
	params[1] = (intptr_t)&onlyDelayed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::RegisterTypes(mscorlib::System::Collections::ArrayList* types)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterTypes", std::vector<std::string> { "System.Collections.ArrayList" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)types;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled(bool isLocalRequest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CustomErrorsEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isLocalRequest;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode(mscorlib::System::String* mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCustomErrorsMode", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::RemotingConfiguration::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
