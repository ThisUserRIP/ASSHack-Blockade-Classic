#include "UnityEngine_Animation.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::Animation::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine", "Animation");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::Animation::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_AnimationModule::UnityEngine::AnimationClip* UnityEngine_AnimationModule::UnityEngine::Animation::get_clip()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_clip");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationClip*)returnValue;
}
void UnityEngine_AnimationModule::UnityEngine::Animation::Stop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Stop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animation::Stop(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Stop", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animation::StopNamed(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopNamed", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::get_Item(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
bool UnityEngine_AnimationModule::UnityEngine::Animation::Play(mscorlib::System::String* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animation;
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
bool UnityEngine_AnimationModule::UnityEngine::Animation::Play(mscorlib::System::String* animation, UnityEngine_AnimationModule::UnityEngine::PlayMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.String", "UnityEngine.PlayMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&mode;
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
void UnityEngine_AnimationModule::UnityEngine::Animation::CrossFade(mscorlib::System::String* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFade", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animation::CrossFade(mscorlib::System::String* animation, float fadeLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFade", std::vector<std::string> { "System.String", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&fadeLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animation::CrossFade(mscorlib::System::String* animation, float fadeLength, UnityEngine_AnimationModule::UnityEngine::PlayMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFade", std::vector<std::string> { "System.String", "System.Single", "UnityEngine.PlayMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&fadeLength;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::CrossFadeQueued(mscorlib::System::String* animation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFadeQueued", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::CrossFadeQueued(mscorlib::System::String* animation, float fadeLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFadeQueued", std::vector<std::string> { "System.String", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&fadeLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::CrossFadeQueued(mscorlib::System::String* animation, float fadeLength, UnityEngine_AnimationModule::UnityEngine::QueueMode queue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFadeQueued", std::vector<std::string> { "System.String", "System.Single", "UnityEngine.QueueMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&fadeLength;
	params[2] = (intptr_t)&queue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::CrossFadeQueued(mscorlib::System::String* animation, float fadeLength, UnityEngine_AnimationModule::UnityEngine::QueueMode queue, UnityEngine_AnimationModule::UnityEngine::PlayMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CrossFadeQueued", std::vector<std::string> { "System.String", "System.Single", "UnityEngine.QueueMode", "UnityEngine.PlayMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animation;
	params[1] = (intptr_t)&fadeLength;
	params[2] = (intptr_t)&queue;
	params[3] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
mscorlib::System::Collections::IEnumerator* UnityEngine_AnimationModule::UnityEngine::Animation::GetEnumerator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumerator");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::GetState(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetState", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
UnityEngine_AnimationModule::UnityEngine::AnimationState* UnityEngine_AnimationModule::UnityEngine::Animation::GetStateAtIndex(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStateAtIndex", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::AnimationState*)returnValue;
}
int32_t UnityEngine_AnimationModule::UnityEngine::Animation::GetStateCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetStateCount");
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
bool UnityEngine_AnimationModule::UnityEngine::Animation::get_animatePhysics()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_animatePhysics");
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
