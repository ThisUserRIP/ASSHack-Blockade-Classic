#include "UnityEngine_Video_VideoPlayer.h"

IL2CPP::Il2CppClass* UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.VideoModule.dll", "UnityEngine.Video", "VideoPlayer");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokePrepareCompletedCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeFrameReadyCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&frameIdx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeLoopPointReachedCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeStartedCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeFrameDroppedCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source, mscorlib::System::String* errorStr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeErrorReceivedCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)errorStr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeSeekCompletedCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source, double seconds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeClockResyncOccurredCallback_Internal", std::vector<std::string> { "UnityEngine.Video.VideoPlayer", "System.Double" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&seconds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
