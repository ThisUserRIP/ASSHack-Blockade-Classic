#include "Doozy_Engine_Nody_Nodes_SwitchBackNode_SourceInfo.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode_SourceInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode::GetIl2CppClass(), "SourceInfo");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode_SourceInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode_SourceInfo::get_IsConnected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsConnected");
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
void Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode_SourceInfo::_ctor(mscorlib::System::String* sourceName, mscorlib::System::String* inputSocketId, mscorlib::System::String* outputSocketId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sourceName;
	params[1] = (intptr_t)inputSocketId;
	params[2] = (intptr_t)outputSocketId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
