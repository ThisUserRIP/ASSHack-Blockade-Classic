#include "System_Threading_Timer.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Timer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "Timer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Timer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::Timer::_ctor(mscorlib::System::Threading::TimerCallback* callback, mscorlib::System::Object* state, int32_t dueTime, int32_t period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.TimerCallback", "System.Object", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)&dueTime;
	params[3] = (intptr_t)&period;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Timer::_ctor(mscorlib::System::Threading::TimerCallback* callback, mscorlib::System::Object* state, mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.TimerCallback", "System.Object", "System.TimeSpan", "System.TimeSpan" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)&dueTime;
	params[3] = (intptr_t)&period;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Timer::Init(mscorlib::System::Threading::TimerCallback* callback, mscorlib::System::Object* state, int64_t dueTime, int64_t period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Threading.TimerCallback", "System.Object", "System.Int64", "System.Int64" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)&dueTime;
	params[3] = (intptr_t)&period;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::Timer::Change(int32_t dueTime, int32_t period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Change", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dueTime;
	params[1] = (intptr_t)&period;
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
bool mscorlib::System::Threading::Timer::Change(mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Change", std::vector<std::string> { "System.TimeSpan", "System.TimeSpan" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dueTime;
	params[1] = (intptr_t)&period;
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
void mscorlib::System::Threading::Timer::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::Timer::Change(int64_t dueTime, int64_t period, bool first)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Change", std::vector<std::string> { "System.Int64", "System.Int64", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dueTime;
	params[1] = (intptr_t)&period;
	params[2] = (intptr_t)&first;
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
void mscorlib::System::Threading::Timer::KeepRootedWhileScheduled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KeepRootedWhileScheduled");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int64_t mscorlib::System::Threading::Timer::GetTimeMonotonic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTimeMonotonic");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Threading::Timer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
