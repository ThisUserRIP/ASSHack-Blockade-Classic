#include "UnityEngine_Playables_PlayableOutputHandle.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Playables", "PlayableOutputHandle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::get_Null()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Null");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle>(*(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::op_Equality(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle", "UnityEngine.Playables.PlayableOutputHandle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
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
bool UnityEngine_CoreModule::UnityEngine::Playables::operator==(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& rhs)
{
	return UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::op_Equality(lhs, rhs);
}
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::Equals(mscorlib::System::Object* p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)p;
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
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::Equals(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
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
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::CompareVersion(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle lhs, UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareVersion", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle", "UnityEngine.Playables.PlayableOutputHandle" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
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
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid");
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
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlayableOutputType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable(UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle target, int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSourcePlayable", std::vector<std::string> { "UnityEngine.Playables.PlayableHandle", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&target;
	params[1] = (intptr_t)&port;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSourceOutputPort");
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
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::IsValid_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
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
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetPlayableOutputType_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPlayableOutputType_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::SetSourcePlayable_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self, UnityEngine_CoreModule::UnityEngine::Playables::PlayableHandle& target, int32_t port)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSourcePlayable_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle&", "UnityEngine.Playables.PlayableHandle&", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&target;
	params[2] = (intptr_t)&port;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle::GetSourceOutputPort_Injected(UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutputHandle& _unity_self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSourceOutputPort_Injected", std::vector<std::string> { "UnityEngine.Playables.PlayableOutputHandle&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&_unity_self;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
