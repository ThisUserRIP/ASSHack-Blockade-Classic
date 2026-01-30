#include "Rewired_Demos_ControlRemappingDemo1_QueueEntry.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1::GetIl2CppClass(), "QueueEntry");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::get_id()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_id");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::set_id(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_id", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::get_queueActionType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_queueActionType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType>(*(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::set_queueActionType(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_queueActionType", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/QueueActionType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::get_state()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_state");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State>(*(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::set_state(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_state", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/QueueEntry/State" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::get_response()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_response");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse>(*(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::set_response(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_response", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/UserResponse" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::get_nextId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_nextId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::_ctor(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType queueActionType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/QueueActionType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&queueActionType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::Confirm(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse response)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Confirm", std::vector<std::string> { "Rewired.Demos.ControlRemappingDemo1/UserResponse" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&response;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry::Cancel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cancel");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
