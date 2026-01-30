#include "System_Diagnostics_Tracing_ActivityTracker.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::ActivityTracker::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "ActivityTracker");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::ActivityTracker::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker::OnStart(mscorlib::System::String* providerName, mscorlib::System::String* activityName, int32_t task, mscorlib::System::Guid& activityId, mscorlib::System::Guid& relatedActivityId, mscorlib::System::Diagnostics::Tracing::EventActivityOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStart", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Guid&", "System.Guid&", "System.Diagnostics.Tracing.EventActivityOptions" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)providerName;
	params[1] = (intptr_t)activityName;
	params[2] = (intptr_t)&task;
	params[3] = (intptr_t)&activityId;
	params[4] = (intptr_t)&relatedActivityId;
	params[5] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker::OnStop(mscorlib::System::String* providerName, mscorlib::System::String* activityName, int32_t task, mscorlib::System::Guid& activityId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStop", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Guid&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)providerName;
	params[1] = (intptr_t)activityName;
	params[2] = (intptr_t)&task;
	params[3] = (intptr_t)&activityId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker::Enable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Enable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::ActivityTracker* mscorlib::System::Diagnostics::Tracing::ActivityTracker::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Diagnostics::Tracing::ActivityTracker*)returnValue;
}
mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* mscorlib::System::Diagnostics::Tracing::ActivityTracker::FindActiveActivity(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* startLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindActiveActivity", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.ActivityTracker/ActivityInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)startLocation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ActivityTracker::NormalizeActivityName(mscorlib::System::String* providerName, mscorlib::System::String* activityName, int32_t task)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NormalizeActivityName", std::vector<std::string> { "System.String", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)providerName;
	params[1] = (intptr_t)activityName;
	params[2] = (intptr_t)&task;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker::ActivityChanging(mscorlib::System::Threading::AsyncLocalValueChangedArgs_1<mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo> args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivityChanging", std::vector<std::string> { "System.Threading.AsyncLocalValueChangedArgs`1<System.Diagnostics.Tracing.ActivityTracker/ActivityInfo>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
