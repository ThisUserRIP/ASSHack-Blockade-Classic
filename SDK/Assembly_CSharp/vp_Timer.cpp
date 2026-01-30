#include "vp_Timer.h"

IL2CPP::Il2CppClass* Assembly_CSharp::vp_Timer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "vp_Timer");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::vp_Timer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Assembly_CSharp::vp_Timer::get_WasAddedCorrectly()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_WasAddedCorrectly");
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
void Assembly_CSharp::vp_Timer::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::In(float delay, Assembly_CSharp::vp_Timer_Callback* callback, Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "In", std::vector<std::string> { "System.Single", "vp_Timer/Callback", "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::In(float delay, Assembly_CSharp::vp_Timer_Callback* callback, int32_t iterations, Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "In", std::vector<std::string> { "System.Single", "vp_Timer/Callback", "System.Int32", "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&iterations;
	params[3] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::In(float delay, Assembly_CSharp::vp_Timer_Callback* callback, int32_t iterations, float interval, Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "In", std::vector<std::string> { "System.Single", "vp_Timer/Callback", "System.Int32", "System.Single", "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&iterations;
	params[3] = (intptr_t)&interval;
	params[4] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::In(float delay, Assembly_CSharp::vp_Timer_ArgCallback* callback, mscorlib::System::Object* arguments, Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "In", std::vector<std::string> { "System.Single", "vp_Timer/ArgCallback", "System.Object", "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)arguments;
	params[3] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::In(float delay, Assembly_CSharp::vp_Timer_ArgCallback* callback, mscorlib::System::Object* arguments, int32_t iterations, Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "In", std::vector<std::string> { "System.Single", "vp_Timer/ArgCallback", "System.Object", "System.Int32", "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)arguments;
	params[3] = (intptr_t)&iterations;
	params[4] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::In(float delay, Assembly_CSharp::vp_Timer_ArgCallback* callback, mscorlib::System::Object* arguments, int32_t iterations, float interval, Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "In", std::vector<std::string> { "System.Single", "vp_Timer/ArgCallback", "System.Object", "System.Int32", "System.Single", "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&delay;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)arguments;
	params[3] = (intptr_t)&iterations;
	params[4] = (intptr_t)&interval;
	params[5] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::Start(Assembly_CSharp::vp_Timer_Handle* timerHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start", std::vector<std::string> { "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)timerHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::Schedule(float time, Assembly_CSharp::vp_Timer_Callback* func, Assembly_CSharp::vp_Timer_ArgCallback* argFunc, mscorlib::System::Object* args, Assembly_CSharp::vp_Timer_Handle* timerHandle, int32_t iterations, float interval)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Schedule", std::vector<std::string> { "System.Single", "vp_Timer/Callback", "vp_Timer/ArgCallback", "System.Object", "vp_Timer/Handle", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)func;
	params[2] = (intptr_t)argFunc;
	params[3] = (intptr_t)args;
	params[4] = (intptr_t)timerHandle;
	params[5] = (intptr_t)&iterations;
	params[6] = (intptr_t)&interval;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::Cancel(Assembly_CSharp::vp_Timer_Handle* handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cancel", std::vector<std::string> { "vp_Timer/Handle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::CancelAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::CancelAll(mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelAll", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)methodName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::DestroyAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DestroyAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::OnLevelLoad(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLevelLoad", std::vector<std::string> { "UnityEngine.SceneManagement.Scene", "UnityEngine.SceneManagement.LoadSceneMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&scene;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::vp_Timer_Stats Assembly_CSharp::vp_Timer::EditorGetStats()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EditorGetStats");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::vp_Timer_Stats ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::vp_Timer_Stats));
		return ret;
	}
	return static_cast<Assembly_CSharp::vp_Timer_Stats>(*(Assembly_CSharp::vp_Timer_Stats*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Assembly_CSharp::vp_Timer::EditorGetMethodInfo(int32_t eventIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EditorGetMethodInfo", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&eventIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t Assembly_CSharp::vp_Timer::EditorGetMethodId(int32_t eventIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EditorGetMethodId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&eventIndex;
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
void Assembly_CSharp::vp_Timer::OnApplicationQuit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnApplicationQuit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::vp_Timer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
