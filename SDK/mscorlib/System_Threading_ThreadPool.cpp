#include "System_Threading_ThreadPool.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::ThreadPool::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "ThreadPool");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::ThreadPool::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Threading::RegisteredWaitHandle* mscorlib::System::Threading::ThreadPool::RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle* waitObject, mscorlib::System::Threading::WaitOrTimerCallback* callBack, mscorlib::System::Object* state, uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce, mscorlib::System::Threading::StackCrawlMark& stackMark, bool compressStack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterWaitForSingleObject", std::vector<std::string> { "System.Threading.WaitHandle", "System.Threading.WaitOrTimerCallback", "System.Object", "System.UInt32", "System.Boolean", "System.Threading.StackCrawlMark&", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)waitObject;
	params[1] = (intptr_t)callBack;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)&millisecondsTimeOutInterval;
	params[4] = (intptr_t)&executeOnlyOnce;
	params[5] = (intptr_t)&stackMark;
	params[6] = (intptr_t)&compressStack;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::RegisteredWaitHandle*)returnValue;
}
mscorlib::System::Threading::RegisteredWaitHandle* mscorlib::System::Threading::ThreadPool::RegisterWaitForSingleObject(mscorlib::System::Threading::WaitHandle* waitObject, mscorlib::System::Threading::WaitOrTimerCallback* callBack, mscorlib::System::Object* state, mscorlib::System::TimeSpan timeout, bool executeOnlyOnce)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterWaitForSingleObject", std::vector<std::string> { "System.Threading.WaitHandle", "System.Threading.WaitOrTimerCallback", "System.Object", "System.TimeSpan", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)waitObject;
	params[1] = (intptr_t)callBack;
	params[2] = (intptr_t)state;
	params[3] = (intptr_t)&timeout;
	params[4] = (intptr_t)&executeOnlyOnce;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::RegisteredWaitHandle*)returnValue;
}
bool mscorlib::System::Threading::ThreadPool::QueueUserWorkItem(mscorlib::System::Threading::WaitCallback* callBack, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QueueUserWorkItem", std::vector<std::string> { "System.Threading.WaitCallback", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callBack;
	params[1] = (intptr_t)state;
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
bool mscorlib::System::Threading::ThreadPool::QueueUserWorkItem(mscorlib::System::Threading::WaitCallback* callBack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QueueUserWorkItem", std::vector<std::string> { "System.Threading.WaitCallback" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callBack;
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
bool mscorlib::System::Threading::ThreadPool::UnsafeQueueUserWorkItem(mscorlib::System::Threading::WaitCallback* callBack, mscorlib::System::Object* state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnsafeQueueUserWorkItem", std::vector<std::string> { "System.Threading.WaitCallback", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callBack;
	params[1] = (intptr_t)state;
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
bool mscorlib::System::Threading::ThreadPool::QueueUserWorkItemHelper(mscorlib::System::Threading::WaitCallback* callBack, mscorlib::System::Object* state, mscorlib::System::Threading::StackCrawlMark& stackMark, bool compressStack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QueueUserWorkItemHelper", std::vector<std::string> { "System.Threading.WaitCallback", "System.Object", "System.Threading.StackCrawlMark&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)callBack;
	params[1] = (intptr_t)state;
	params[2] = (intptr_t)&stackMark;
	params[3] = (intptr_t)&compressStack;
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
void mscorlib::System::Threading::ThreadPool::UnsafeQueueCustomWorkItem(mscorlib::System::Threading::IThreadPoolWorkItem* workItem, bool forceGlobal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnsafeQueueCustomWorkItem", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)workItem;
	params[1] = (intptr_t)&forceGlobal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPool::TryPopCustomWorkItem(mscorlib::System::Threading::IThreadPoolWorkItem* workItem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryPopCustomWorkItem", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)workItem;
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
bool mscorlib::System::Threading::ThreadPool::RequestWorkerThread()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RequestWorkerThread");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Threading::ThreadPool::EnsureVMInitialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureVMInitialized");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPool::NotifyWorkItemComplete()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyWorkItemComplete");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Threading::ThreadPool::ReportThreadStatus(bool isWorking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReportThreadStatus", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isWorking;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ThreadPool::NotifyWorkItemProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyWorkItemProgress");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ThreadPool::NotifyWorkItemProgressNative()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyWorkItemProgressNative");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPool::IsThreadPoolHosted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsThreadPoolHosted");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Threading::ThreadPool::InitializeVMTp(bool& enableWorkerTracking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeVMTp", std::vector<std::string> { "System.Boolean&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&enableWorkerTracking;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
