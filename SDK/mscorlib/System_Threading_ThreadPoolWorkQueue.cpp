#include "System_Threading_ThreadPoolWorkQueue.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::ThreadPoolWorkQueue::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "ThreadPoolWorkQueue");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::ThreadPoolWorkQueue::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::ThreadPoolWorkQueue::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Threading::ThreadPoolWorkQueueThreadLocals* mscorlib::System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureCurrentThreadHasQueue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Threading::ThreadPoolWorkQueueThreadLocals*)returnValue;
}
void mscorlib::System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureThreadRequested");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarkThreadRequestSatisfied");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::ThreadPoolWorkQueue::Enqueue(mscorlib::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Enqueue", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)&forceGlobal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPoolWorkQueue::LocalFindAndPop(mscorlib::System::Threading::IThreadPoolWorkItem* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LocalFindAndPop", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
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
void mscorlib::System::Threading::ThreadPoolWorkQueue::Dequeue(mscorlib::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, mscorlib::System::Threading::IThreadPoolWorkItem& callback, bool& missedSteal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dequeue", std::vector<std::string> { "System.Threading.ThreadPoolWorkQueueThreadLocals", "System.Threading.IThreadPoolWorkItem&", "System.Boolean&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)tl;
	params[1] = (intptr_t)&callback;
	params[2] = (intptr_t)&missedSteal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPoolWorkQueue::Dispatch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispatch");
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
void mscorlib::System::Threading::ThreadPoolWorkQueue::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
