#include "ENet_Callbacks.h"

IL2CPP::Il2CppClass* Assembly_CSharp::ENet::Callbacks::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "ENet", "Callbacks");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::ENet::Callbacks::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::ENet::ENetCallbacks Assembly_CSharp::ENet::Callbacks::get_NativeData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_NativeData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::ENet::ENetCallbacks ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::ENet::ENetCallbacks));
		return ret;
	}
	return static_cast<Assembly_CSharp::ENet::ENetCallbacks>(*(Assembly_CSharp::ENet::ENetCallbacks*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::ENet::Callbacks::set_NativeData(Assembly_CSharp::ENet::ENetCallbacks value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NativeData", std::vector<std::string> { "ENet.ENetCallbacks" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ENet::Callbacks::_ctor(Assembly_CSharp::ENet::AllocCallback* allocCallback, Assembly_CSharp::ENet::FreeCallback* freeCallback, Assembly_CSharp::ENet::NoMemoryCallback* noMemoryCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "ENet.AllocCallback", "ENet.FreeCallback", "ENet.NoMemoryCallback" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)allocCallback;
	params[1] = (intptr_t)freeCallback;
	params[2] = (intptr_t)noMemoryCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
