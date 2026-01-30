#include "System_Threading_ThreadPoolWorkQueue_WorkStealingQueue.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Threading::ThreadPoolWorkQueue::GetIl2CppClass(), "WorkStealingQueue");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPush(mscorlib::System::Threading::IThreadPoolWorkItem* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LocalPush", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalFindAndPop(mscorlib::System::Threading::IThreadPoolWorkItem* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LocalFindAndPop", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
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
bool mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::LocalPop(mscorlib::System::Threading::IThreadPoolWorkItem& obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LocalPop", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&obj;
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
bool mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal(mscorlib::System::Threading::IThreadPoolWorkItem& obj, bool& missedSteal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySteal", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem&", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&missedSteal;
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
bool mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::TrySteal(mscorlib::System::Threading::IThreadPoolWorkItem& obj, bool& missedSteal, int32_t millisecondsTimeout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySteal", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem&", "System.Boolean&", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&obj;
	params[1] = (intptr_t)&missedSteal;
	params[2] = (intptr_t)&millisecondsTimeout;
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
void mscorlib::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
