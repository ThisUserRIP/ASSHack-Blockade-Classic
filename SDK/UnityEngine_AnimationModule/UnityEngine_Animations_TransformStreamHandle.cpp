#include "UnityEngine_Animations_TransformStreamHandle.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine.Animations", "TransformStreamHandle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::IsValid(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::IsValidInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::get_createdByNative()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_createdByNative");
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::IsSameVersionAsStream(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSameVersionAsStream", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::get_hasHandleIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hasHandleIndex");
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::get_hasSkeletonIndex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hasSkeletonIndex");
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
uint32_t UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::get_animatorBindingsVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_animatorBindingsVersion");
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::IsResolvedInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsResolvedInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::CheckIsValidAndResolve(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIsValidAndResolve", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetPosition(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPosition", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRotation", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::SetRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRotation", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&stream;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetLocalRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalRotation", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::SetLocalRotation(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLocalRotation", std::vector<std::string> { "UnityEngine.Animations.AnimationStream", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&stream;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::ResolveInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetPositionInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPositionInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRotationInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::SetRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRotationInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&stream;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetLocalRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalRotationInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::SetLocalRotationInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLocalRotationInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&stream;
	params[1] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::ResolveInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResolveInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.TransformStreamHandle&", "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetPositionInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPositionInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.TransformStreamHandle&", "UnityEngine.Animations.AnimationStream&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRotationInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.TransformStreamHandle&", "UnityEngine.Animations.AnimationStream&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::SetRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRotationInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.TransformStreamHandle&", "UnityEngine.Animations.AnimationStream&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	params[2] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalRotationInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.TransformStreamHandle&", "UnityEngine.Animations.AnimationStream&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream, UnityEngine_CoreModule::UnityEngine::Quaternion& rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLocalRotationInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.TransformStreamHandle&", "UnityEngine.Animations.AnimationStream&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	params[2] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
