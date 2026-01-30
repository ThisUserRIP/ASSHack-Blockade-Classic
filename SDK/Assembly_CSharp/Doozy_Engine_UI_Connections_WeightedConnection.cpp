#include "Doozy_Engine_UI_Connections_WeightedConnection.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Connections", "WeightedConnection");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection* Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection::GetValue(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { "Doozy.Engine.Nody.Models.Socket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)socket;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection::SetValue(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket, Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetValue", std::vector<std::string> { "Doozy.Engine.Nody.Models.Socket", "Doozy.Engine.UI.Connections.WeightedConnection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)socket;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Connections::WeightedConnection::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
