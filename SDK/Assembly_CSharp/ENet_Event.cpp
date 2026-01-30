#include "ENet_Event.h"

IL2CPP::Il2CppClass* Assembly_CSharp::ENet::Event::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "ENet", "Event");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::ENet::Event::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::ENet::ENetEvent Assembly_CSharp::ENet::Event::get_NativeData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NativeData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::ENetEvent ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::ENetEvent));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::ENetEvent>(*(Assembly_CSharp::ENet::ENetEvent*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::ENet::Event::set_NativeData(Assembly_CSharp::ENet::ENetEvent value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NativeData", std::vector<std::string> { "ENet.ENetEvent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Event::_ctor(Assembly_CSharp::ENet::ENetEvent event)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "ENet.ENetEvent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&event;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::ENet::EventType Assembly_CSharp::ENet::Event::get_Type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Type");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::EventType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::EventType));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::EventType>(*(Assembly_CSharp::ENet::EventType*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::ENet::Peer Assembly_CSharp::ENet::Event::get_Peer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Peer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::Peer ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::Peer));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::Peer>(*(Assembly_CSharp::ENet::Peer*)il2cpp_object_unbox(returnValue));
}
uint8_t Assembly_CSharp::ENet::Event::get_ChannelID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ChannelID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Assembly_CSharp::ENet::Event::get_Data()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Data");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::ENet::Packet Assembly_CSharp::ENet::Event::get_Packet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Packet");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::Packet ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::Packet));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::Packet>(*(Assembly_CSharp::ENet::Packet*)il2cpp_object_unbox(returnValue));
}
