#include "Tayx_Graphy_GraphyDebugger.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Tayx::Graphy::GraphyDebugger::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Tayx.Graphy", "GraphyDebugger");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Tayx::Graphy::GraphyDebugger::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::Start()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* newDebugPacket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNewDebugPacket", std::vector<std::string> { "Tayx.Graphy.GraphyDebugger/DebugPacket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)newDebugPacket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Action* newCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNewDebugPacket", std::vector<std::string> { "System.Int32", "Tayx.Graphy.GraphyDebugger/DebugCondition", "Tayx.Graphy.GraphyDebugger/MessageType", "System.String", "System.Boolean", "System.Action" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&newId;
	params[1] = (intptr_t)&newDebugCondition;
	params[2] = (intptr_t)&newMessageType;
	params[3] = (intptr_t)newMessage;
	params[4] = (intptr_t)&newDebugBreak;
	params[5] = (intptr_t)newCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Action* newCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNewDebugPacket", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<Tayx.Graphy.GraphyDebugger/DebugCondition>", "Tayx.Graphy.GraphyDebugger/MessageType", "System.String", "System.Boolean", "System.Action" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&newId;
	params[1] = (intptr_t)newDebugConditions;
	params[2] = (intptr_t)&newMessageType;
	params[3] = (intptr_t)newMessage;
	params[4] = (intptr_t)&newDebugBreak;
	params[5] = (intptr_t)newCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition newDebugCondition, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action>* newCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNewDebugPacket", std::vector<std::string> { "System.Int32", "Tayx.Graphy.GraphyDebugger/DebugCondition", "Tayx.Graphy.GraphyDebugger/MessageType", "System.String", "System.Boolean", "System.Collections.Generic.List`1<System.Action>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&newId;
	params[1] = (intptr_t)&newDebugCondition;
	params[2] = (intptr_t)&newMessageType;
	params[3] = (intptr_t)newMessage;
	params[4] = (intptr_t)&newDebugBreak;
	params[5] = (intptr_t)newCallbacks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t newId, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition>* newDebugConditions, Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType newMessageType, mscorlib::System::String* newMessage, bool newDebugBreak, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action>* newCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNewDebugPacket", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<Tayx.Graphy.GraphyDebugger/DebugCondition>", "Tayx.Graphy.GraphyDebugger/MessageType", "System.String", "System.Boolean", "System.Collections.Generic.List`1<System.Action>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&newId;
	params[1] = (intptr_t)newDebugConditions;
	params[2] = (intptr_t)&newMessageType;
	params[3] = (intptr_t)newMessage;
	params[4] = (intptr_t)&newDebugBreak;
	params[5] = (intptr_t)newCallbacks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* Assembly_CSharp::Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId(int32_t packetId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstDebugPacketWithId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packetId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket>* Assembly_CSharp::Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId(int32_t packetId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllDebugPacketsWithId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packetId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket>*)returnValue;
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId(int32_t packetId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveFirstDebugPacketWithId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packetId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId(int32_t packetId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveAllDebugPacketsWithId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&packetId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId(mscorlib::System::Action* callback, int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCallbackToFirstDebugPacketWithId", std::vector<std::string> { "System.Action", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId(mscorlib::System::Action* callback, int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCallbackToAllDebugPacketWithId", std::vector<std::string> { "System.Action", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::CheckDebugPackets()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckDebugPackets");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition debugCondition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIfConditionIsMet", std::vector<std::string> { "Tayx.Graphy.GraphyDebugger/DebugCondition" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&debugCondition;
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
float Assembly_CSharp::Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugVariable debugVariable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRequestedValueFromDebugVariable", std::vector<std::string> { "Tayx.Graphy.GraphyDebugger/DebugVariable" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&debugVariable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket(Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugPacket* debugPacket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteOperationsInDebugPacket", std::vector<std::string> { "Tayx.Graphy.GraphyDebugger/DebugPacket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)debugPacket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
