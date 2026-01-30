#include "UnityEngine_Playables_PlayableGraph.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Playables", "PlayableGraph");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::Create(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph>(*(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::Destroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Destroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::Play()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::ConnectInternal(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle destination, int32_t destinationInputPort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectInternal", std::vector<std::string> { "UnityEngine.Playables.PlayableHandle", "System.Int32", "UnityEngine.Playables.PlayableHandle", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&sourceOutputPort;
	params[2] = (intptr_t)&destination;
	params[3] = (intptr_t)&destinationInputPort;
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
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::Create_Injected(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create_Injected", std::vector<std::string> { "System.String", "UnityEngine.Playables.PlayableGraph&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::Destroy_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Destroy_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::Play_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph::ConnectInternal_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& source, int32_t sourceOutputPort, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& destination, int32_t destinationInputPort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConnectInternal_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableGraph&", "UnityEngine.Playables.PlayableHandle&", "System.Int32", "UnityEngine.Playables.PlayableHandle&", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&source;
	params[2] = (intptr_t)&sourceOutputPort;
	params[3] = (intptr_t)&destination;
	params[4] = (intptr_t)&destinationInputPort;
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
