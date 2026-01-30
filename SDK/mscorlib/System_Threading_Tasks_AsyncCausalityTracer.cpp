#include "System_Threading_Tasks_AsyncCausalityTracer.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Tasks::AsyncCausalityTracer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "AsyncCausalityTracer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Tasks::AsyncCausalityTracer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LoggingOn");
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
void mscorlib::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::String* operationName, uint64_t relatedContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TraceOperationCreation", std::vector<std::string> { "System.Threading.Tasks.CausalityTraceLevel", "System.Int32", "System.String", "System.UInt64" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&traceLevel;
	params[1] = (intptr_t)&taskId;
	params[2] = (intptr_t)operationName;
	params[3] = (intptr_t)&relatedContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::Threading::Tasks::AsyncCausalityStatus status)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TraceOperationCompletion", std::vector<std::string> { "System.Threading.Tasks.CausalityTraceLevel", "System.Int32", "System.Threading.Tasks.AsyncCausalityStatus" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&traceLevel;
	params[1] = (intptr_t)&taskId;
	params[2] = (intptr_t)&status;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::AsyncCausalityTracer::TraceOperationRelation(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::Threading::Tasks::CausalityRelation relation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TraceOperationRelation", std::vector<std::string> { "System.Threading.Tasks.CausalityTraceLevel", "System.Int32", "System.Threading.Tasks.CausalityRelation" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&traceLevel;
	params[1] = (intptr_t)&taskId;
	params[2] = (intptr_t)&relation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, mscorlib::System::Threading::Tasks::CausalitySynchronousWork work)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TraceSynchronousWorkStart", std::vector<std::string> { "System.Threading.Tasks.CausalityTraceLevel", "System.Int32", "System.Threading.Tasks.CausalitySynchronousWork" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&traceLevel;
	params[1] = (intptr_t)&taskId;
	params[2] = (intptr_t)&work;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion(mscorlib::System::Threading::Tasks::CausalityTraceLevel traceLevel, mscorlib::System::Threading::Tasks::CausalitySynchronousWork work)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TraceSynchronousWorkCompletion", std::vector<std::string> { "System.Threading.Tasks.CausalityTraceLevel", "System.Threading.Tasks.CausalitySynchronousWork" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&traceLevel;
	params[1] = (intptr_t)&work;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
