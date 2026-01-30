#include "System_Diagnostics_Tracing_ActivityFilter.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::ActivityFilter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "ActivityFilter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::ActivityFilter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::DisableFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter& filterList, mscorlib::System::Diagnostics::Tracing::EventSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisableFilter", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter&", "System.Diagnostics.Tracing.EventSource" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&filterList;
	params[1] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::UpdateFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter& filterList, mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t perEventSourceSessionId, mscorlib::System::String* startEvents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateFilter", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter&", "System.Diagnostics.Tracing.EventSource", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&filterList;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&perEventSourceSessionId;
	params[3] = (intptr_t)startEvents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::ActivityFilter::PassesActivityFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList, mscorlib::System::Guid* childActivityID, bool triggeringEvent, mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t eventId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PassesActivityFilter", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter", "System.Guid*", "System.Boolean", "System.Diagnostics.Tracing.EventSource", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)filterList;
	params[1] = (intptr_t)childActivityID;
	params[2] = (intptr_t)&triggeringEvent;
	params[3] = (intptr_t)source;
	params[4] = (intptr_t)&eventId;
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
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::FlowActivityIfNeeded(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList, mscorlib::System::Guid* currentActivityId, mscorlib::System::Guid* childActivityID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlowActivityIfNeeded", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter", "System.Guid*", "System.Guid*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)filterList;
	params[1] = (intptr_t)currentActivityId;
	params[2] = (intptr_t)childActivityID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::UpdateKwdTriggers(mscorlib::System::Diagnostics::Tracing::ActivityFilter* activityFilter, mscorlib::System::Guid sourceGuid, mscorlib::System::Diagnostics::Tracing::EventSource* source, mscorlib::System::Diagnostics::Tracing::EventKeywords sessKeywords)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateKwdTriggers", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter", "System.Guid", "System.Diagnostics.Tracing.EventSource", "System.Diagnostics.Tracing.EventKeywords" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)activityFilter;
	params[1] = (intptr_t)&sourceGuid;
	params[2] = (intptr_t)source;
	params[3] = (intptr_t)&sessKeywords;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Tuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>* mscorlib::System::Diagnostics::Tracing::ActivityFilter::GetFilterAsTuple(mscorlib::System::Guid sourceGuid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFilterAsTuple", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sourceGuid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Tuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::_ctor(mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t perEventSourceSessionId, int32_t eventId, int32_t samplingFreq, mscorlib::System::Diagnostics::Tracing::ActivityFilter* existingFilter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventSource", "System.Int32", "System.Int32", "System.Int32", "System.Diagnostics.Tracing.ActivityFilter" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&perEventSourceSessionId;
	params[2] = (intptr_t)&eventId;
	params[3] = (intptr_t)&samplingFreq;
	params[4] = (intptr_t)existingFilter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::EnsureActivityCleanupDelegate(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureActivityCleanupDelegate", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)filterList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Action_1<mscorlib::System::Guid>* mscorlib::System::Diagnostics::Tracing::ActivityFilter::GetActivityDyingDelegate(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActivityDyingDelegate", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)filterList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_1<mscorlib::System::Guid>*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::ActivityFilter::EnableFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter& filterList, mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t perEventSourceSessionId, int32_t eventId, int32_t samplingFreq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableFilter", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter&", "System.Diagnostics.Tracing.EventSource", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&filterList;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&perEventSourceSessionId;
	params[3] = (intptr_t)&eventId;
	params[4] = (intptr_t)&samplingFreq;
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
void mscorlib::System::Diagnostics::Tracing::ActivityFilter::TrimActiveActivityStore(mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Int32>* activities)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrimActiveActivityStore", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)activities;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Int32>* mscorlib::System::Diagnostics::Tracing::ActivityFilter::GetActiveActivities(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveActivities", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityFilter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)filterList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Int32>*)returnValue;
}
