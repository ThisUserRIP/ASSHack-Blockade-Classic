#include "System_Threading_ThreadPoolWorkQueue_QueueSegment.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Threading::ThreadPoolWorkQueue::GetIl2CppClass(), "QueueSegment");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::GetIndexes(int32_t& upper, int32_t& lower)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndexes", std::vector<std::string> { "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&upper;
	params[1] = (intptr_t)&lower;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::CompareExchangeIndexes(int32_t& prevUpper, int32_t newUpper, int32_t& prevLower, int32_t newLower)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareExchangeIndexes", std::vector<std::string> { "System.Int32&", "System.Int32", "System.Int32&", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&prevUpper;
	params[1] = (intptr_t)&newUpper;
	params[2] = (intptr_t)&prevLower;
	params[3] = (intptr_t)&newLower;
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
void mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::IsUsedUp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUsedUp");
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
bool mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::TryEnqueue(mscorlib::System::Threading::IThreadPoolWorkItem* node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryEnqueue", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)node;
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
bool mscorlib::System::Threading::ThreadPoolWorkQueue_QueueSegment::TryDequeue(mscorlib::System::Threading::IThreadPoolWorkItem& node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryDequeue", std::vector<std::string> { "System.Threading.IThreadPoolWorkItem&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&node;
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
