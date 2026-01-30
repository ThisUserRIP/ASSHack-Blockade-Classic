#include "UnityEngine_Animations_PropertySceneHandle.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine.Animations", "PropertySceneHandle");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::get_createdByNative()
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::get_hasHandleIndex()
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
void UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::CheckIsValid(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIsValid", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetFloat(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFloat", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
int32_t UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetInt(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInt", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetBool(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBool", std::vector<std::string> { "UnityEngine.Animations.AnimationStream" });
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::HasValidTransform(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasValidTransform", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
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
float UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetFloatInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFloatInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
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
int32_t UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetIntInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIntInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetBoolInternal(UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBoolInternal", std::vector<std::string> { "UnityEngine.Animations.AnimationStream&" });
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::HasValidTransform_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasValidTransform_Injected", std::vector<std::string> { "UnityEngine.Animations.PropertySceneHandle&", "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
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
float UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetFloatInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFloatInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.PropertySceneHandle&", "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetIntInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIntInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.PropertySceneHandle&", "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
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
bool UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle::GetBoolInternal_Injected(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& _unity_self, UnityEngine_AnimationModule::UnityEngine::Animations::AnimationStream& stream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBoolInternal_Injected", std::vector<std::string> { "UnityEngine.Animations.PropertySceneHandle&", "UnityEngine.Animations.AnimationStream&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&_unity_self;
	params[1] = (intptr_t)&stream;
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
