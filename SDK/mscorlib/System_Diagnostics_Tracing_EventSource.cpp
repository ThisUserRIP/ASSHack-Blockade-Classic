#include "System_Diagnostics_Tracing_EventSource.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventSource::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EventSource");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventSource::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteMultiMerge(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMultiMerge", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventSourceOptions&", "System.Diagnostics.Tracing.TraceLoggingEventTypes", "System.Guid*", "System.Guid*", "System.Object[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)eventTypes;
	params[3] = (intptr_t)activityID;
	params[4] = (intptr_t)childActivityID;
	params[5] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteMultiMergeInner(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMultiMergeInner", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventSourceOptions&", "System.Diagnostics.Tracing.TraceLoggingEventTypes", "System.Guid*", "System.Guid*", "System.Object[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)eventTypes;
	params[3] = (intptr_t)activityID;
	params[4] = (intptr_t)childActivityID;
	params[5] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteMultiMerge(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMultiMerge", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventSourceOptions&", "System.Diagnostics.Tracing.TraceLoggingEventTypes", "System.Guid*", "System.Guid*", "System.Diagnostics.Tracing.EventSource/EventData*" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)eventTypes;
	params[3] = (intptr_t)activityID;
	params[4] = (intptr_t)childActivityID;
	params[5] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteCleanup(mscorlib::System::Runtime::InteropServices::GCHandle* pPins, int32_t cPins)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCleanup", std::vector<std::string> { "System.Runtime.InteropServices.GCHandle*", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pPins;
	params[1] = (intptr_t)&cPins;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::InitializeProviderMetadata()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeProviderMetadata");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::EventSource::AddValueToMetaData(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Byte>* metaData, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddValueToMetaData", std::vector<std::string> { "System.Collections.Generic.List`1<System.Byte>", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)metaData;
	params[1] = (intptr_t)value;
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
int32_t mscorlib::System::Diagnostics::Tracing::EventSource::HexDigit(wchar_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HexDigit", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
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
mscorlib::System::Diagnostics::Tracing::NameInfo* mscorlib::System::Diagnostics::Tracing::EventSource::UpdateDescriptor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventInfo, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::EventDescriptor& descriptor)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateDescriptor", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.TraceLoggingEventTypes", "System.Diagnostics.Tracing.EventSourceOptions&", "System.Diagnostics.Tracing.EventDescriptor&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)eventInfo;
	params[2] = (intptr_t)&options;
	params[3] = (intptr_t)&descriptor;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Diagnostics::Tracing::NameInfo*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::EventSource::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::EventSource::get_Guid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Guid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::IsEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabled");
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
bool mscorlib::System::Diagnostics::Tracing::EventSource::IsEnabled(mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabled", std::vector<std::string> { "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&level;
	params[1] = (intptr_t)&keywords;
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
bool mscorlib::System::Diagnostics::Tracing::EventSource::IsEnabled(mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords, mscorlib::System::Diagnostics::Tracing::EventChannel channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabled", std::vector<std::string> { "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords", "System.Diagnostics.Tracing.EventChannel" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&level;
	params[1] = (intptr_t)&keywords;
	params[2] = (intptr_t)&channel;
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
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::EventSource::GetGuid(mscorlib::System::Type* eventSourceType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGuid", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventSourceType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::EventSource::GetName(mscorlib::System::Type* eventSourceType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetName", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventSourceType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventSource::SetCurrentThreadActivityId(mscorlib::System::Guid activityId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCurrentThreadActivityId", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&activityId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::EventSource::get_CurrentThreadActivityId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentThreadActivityId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::EventSource::get_InternalCurrentThreadActivityId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalCurrentThreadActivityId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::EventSource::get_FallbackActivityId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FallbackActivityId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::EventSource::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventSource::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::_ctor(mscorlib::System::Diagnostics::Tracing::EventSourceSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventSourceSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::_ctor(mscorlib::System::Diagnostics::Tracing::EventSourceSettings settings, IL2CPP::Array<mscorlib::System::String*>* traits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventSourceSettings", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&settings;
	params[1] = (intptr_t)traits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::OnEventCommand(mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs* command)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEventCommand", std::vector<std::string> { "System.Diagnostics.Tracing.EventCommandEventArgs" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)command;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t eventId, int32_t arg1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEvent", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)&arg1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t eventId, mscorlib::System::String* arg1, mscorlib::System::String* arg2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEvent", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)arg1;
	params[2] = (intptr_t)arg2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t eventId, mscorlib::System::String* arg1, mscorlib::System::String* arg2, mscorlib::System::String* arg3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEvent", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)arg1;
	params[2] = (intptr_t)arg2;
	params[3] = (intptr_t)arg3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEventCore(int32_t eventId, int32_t eventDataCount, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEventCore", std::vector<std::string> { "System.Int32", "System.Int32", "System.Diagnostics.Tracing.EventSource/EventData*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)&eventDataCount;
	params[2] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEventWithRelatedActivityIdCore(int32_t eventId, mscorlib::System::Guid* relatedActivityId, int32_t eventDataCount, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEventWithRelatedActivityIdCore", std::vector<std::string> { "System.Int32", "System.Guid*", "System.Int32", "System.Diagnostics.Tracing.EventSource/EventData*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)relatedActivityId;
	params[2] = (intptr_t)&eventDataCount;
	params[3] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEvent(int32_t eventId, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEvent", std::vector<std::string> { "System.Int32", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteStringToListener(mscorlib::System::Diagnostics::Tracing::EventListener* listener, mscorlib::System::String* msg, mscorlib::System::Diagnostics::Tracing::SessionMask m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStringToListener", std::vector<std::string> { "System.Diagnostics.Tracing.EventListener", "System.String", "System.Diagnostics.Tracing.SessionMask" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)listener;
	params[1] = (intptr_t)msg;
	params[2] = (intptr_t)&m;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEventRaw(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* relatedActivityID, int32_t dataCount, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEventRaw", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventDescriptor&", "System.Guid*", "System.Guid*", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)&eventDescriptor;
	params[2] = (intptr_t)activityID;
	params[3] = (intptr_t)relatedActivityID;
	params[4] = (intptr_t)&dataCount;
	params[5] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::Initialize(mscorlib::System::Guid eventSourceGuid, mscorlib::System::String* eventSourceName, IL2CPP::Array<mscorlib::System::String*>* traits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Guid", "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventSourceGuid;
	params[1] = (intptr_t)eventSourceName;
	params[2] = (intptr_t)traits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::EventSource::GetName(mscorlib::System::Type* eventSourceType, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetName", std::vector<std::string> { "System.Type", "System.Diagnostics.Tracing.EventManifestOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventSourceType;
	params[1] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::EventSource::GenerateGuidFromName(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateGuidFromName", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Diagnostics::Tracing::EventSource::DecodeObject(int32_t eventId, int32_t parameterId, mscorlib::System::Diagnostics::Tracing::EventSource_EventData& data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeObject", std::vector<std::string> { "System.Int32", "System.Int32", "System.Diagnostics.Tracing.EventSource/EventData*&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)&parameterId;
	params[2] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::Diagnostics::Tracing::EventDispatcher* mscorlib::System::Diagnostics::Tracing::EventSource::GetDispatcher(mscorlib::System::Diagnostics::Tracing::EventListener* listener)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDispatcher", std::vector<std::string> { "System.Diagnostics.Tracing.EventListener" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listener;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Diagnostics::Tracing::EventDispatcher*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEventVarargs(int32_t eventId, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEventVarargs", std::vector<std::string> { "System.Int32", "System.Guid*", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)childActivityID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::Diagnostics::Tracing::EventSource::SerializeEventArgs(int32_t eventId, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeEventArgs", std::vector<std::string> { "System.Int32", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventSource::LogEventArgsMismatches(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* infos, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogEventArgsMismatches", std::vector<std::string> { "System.Reflection.ParameterInfo[]", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)infos;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::EventSource::GetParamLengthIncludingByteArray(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParamLengthIncludingByteArray", std::vector<std::string> { "System.Reflection.ParameterInfo[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteToAllListeners(int32_t eventId, mscorlib::System::Guid* childActivityID, int32_t eventDataCount, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteToAllListeners", std::vector<std::string> { "System.Int32", "System.Guid*", "System.Int32", "System.Diagnostics.Tracing.EventSource/EventData*" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)childActivityID;
	params[2] = (intptr_t)&eventDataCount;
	params[3] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteToAllListeners(int32_t eventId, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteToAllListeners", std::vector<std::string> { "System.Int32", "System.Guid*", "System.Object[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)childActivityID;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::DispatchToAllListeners(int32_t eventId, mscorlib::System::Guid* childActivityID, mscorlib::System::Diagnostics::Tracing::EventWrittenEventArgs* eventCallbackArgs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DispatchToAllListeners", std::vector<std::string> { "System.Int32", "System.Guid*", "System.Diagnostics.Tracing.EventWrittenEventArgs" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)childActivityID;
	params[2] = (intptr_t)eventCallbackArgs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteEventString(mscorlib::System::Diagnostics::Tracing::EventLevel level, int64_t keywords, mscorlib::System::String* msgString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEventString", std::vector<std::string> { "System.Diagnostics.Tracing.EventLevel", "System.Int64", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&level;
	params[1] = (intptr_t)&keywords;
	params[2] = (intptr_t)msgString;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::WriteStringToAllListeners(mscorlib::System::String* eventName, mscorlib::System::String* msg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStringToAllListeners", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)msg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::SessionMask mscorlib::System::Diagnostics::Tracing::EventSource::GetEtwSessionMask(int32_t eventId, mscorlib::System::Guid* childActivityID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEtwSessionMask", std::vector<std::string> { "System.Int32", "System.Guid*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventId;
	params[1] = (intptr_t)childActivityID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::SessionMask ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::SessionMask));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::SessionMask>(*(mscorlib::System::Diagnostics::Tracing::SessionMask*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::IsEnabledByDefault(int32_t eventNum, bool enable, mscorlib::System::Diagnostics::Tracing::EventLevel currentLevel, mscorlib::System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabledByDefault", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventNum;
	params[1] = (intptr_t)&enable;
	params[2] = (intptr_t)&currentLevel;
	params[3] = (intptr_t)&currentMatchAnyKeyword;
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
bool mscorlib::System::Diagnostics::Tracing::EventSource::IsEnabledCommon(bool enabled, mscorlib::System::Diagnostics::Tracing::EventLevel currentLevel, mscorlib::System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword, mscorlib::System::Diagnostics::Tracing::EventLevel eventLevel, mscorlib::System::Diagnostics::Tracing::EventKeywords eventKeywords, mscorlib::System::Diagnostics::Tracing::EventChannel eventChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabledCommon", std::vector<std::string> { "System.Boolean", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords", "System.Diagnostics.Tracing.EventChannel" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&currentLevel;
	params[2] = (intptr_t)&currentMatchAnyKeyword;
	params[3] = (intptr_t)&eventLevel;
	params[4] = (intptr_t)&eventKeywords;
	params[5] = (intptr_t)&eventChannel;
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
void mscorlib::System::Diagnostics::Tracing::EventSource::ThrowEventSourceException(mscorlib::System::String* eventName, mscorlib::System::Exception* innerEx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowEventSourceException", std::vector<std::string> { "System.String", "System.Exception" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)innerEx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::ValidateEventOpcodeForTransfer(mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata& eventData, mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateEventOpcodeForTransfer", std::vector<std::string> { "System.Diagnostics.Tracing.EventSource/EventMetadata&", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&eventData;
	params[1] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::EventOpcode mscorlib::System::Diagnostics::Tracing::EventSource::GetOpcodeWithDefault(mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOpcodeWithDefault", std::vector<std::string> { "System.Diagnostics.Tracing.EventOpcode", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&opcode;
	params[1] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventOpcode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventOpcode));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventOpcode>(*(mscorlib::System::Diagnostics::Tracing::EventOpcode*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventSource::SendCommand(mscorlib::System::Diagnostics::Tracing::EventListener* listener, int32_t perEventSourceSessionId, int32_t etwSessionId, mscorlib::System::Diagnostics::Tracing::EventCommand command, bool enable, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* commandArguments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendCommand", std::vector<std::string> { "System.Diagnostics.Tracing.EventListener", "System.Int32", "System.Int32", "System.Diagnostics.Tracing.EventCommand", "System.Boolean", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords", "System.Collections.Generic.IDictionary`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)listener;
	params[1] = (intptr_t)&perEventSourceSessionId;
	params[2] = (intptr_t)&etwSessionId;
	params[3] = (intptr_t)&command;
	params[4] = (intptr_t)&enable;
	params[5] = (intptr_t)&level;
	params[6] = (intptr_t)&matchAnyKeyword;
	params[7] = (intptr_t)commandArguments;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::DoCommand(mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs* commandArgs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoCommand", std::vector<std::string> { "System.Diagnostics.Tracing.EventCommandEventArgs" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)commandArgs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::UpdateEtwSession(int32_t sessionIdBit, int32_t etwSessionId, bool bEnable, mscorlib::System::String* activityFilters, bool participateInSampling)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateEtwSession", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&sessionIdBit;
	params[1] = (intptr_t)&etwSessionId;
	params[2] = (intptr_t)&bEnable;
	params[3] = (intptr_t)activityFilters;
	params[4] = (intptr_t)&participateInSampling;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::ParseCommandArgs(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* commandArguments, bool& participateInSampling, mscorlib::System::String& activityFilters, int32_t& sessionIdBit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseCommandArgs", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<System.String,System.String>", "System.Boolean&", "System.String&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)commandArguments;
	params[1] = (intptr_t)&participateInSampling;
	params[2] = (intptr_t)&activityFilters;
	params[3] = (intptr_t)&sessionIdBit;
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
void mscorlib::System::Diagnostics::Tracing::EventSource::UpdateKwdTriggers(bool enable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateKwdTriggers", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&enable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::EnableEventForDispatcher(mscorlib::System::Diagnostics::Tracing::EventDispatcher* dispatcher, int32_t eventId, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnableEventForDispatcher", std::vector<std::string> { "System.Diagnostics.Tracing.EventDispatcher", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dispatcher;
	params[1] = (intptr_t)&eventId;
	params[2] = (intptr_t)&value;
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
bool mscorlib::System::Diagnostics::Tracing::EventSource::AnyEventEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AnyEventEnabled");
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
bool mscorlib::System::Diagnostics::Tracing::EventSource::get_IsDisposed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsDisposed");
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
void mscorlib::System::Diagnostics::Tracing::EventSource::EnsureDescriptorsInitialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureDescriptorsInitialized");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::SendManifest(IL2CPP::Array<uint8_t>* rawManifest)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendManifest", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rawManifest;
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
mscorlib::System::Attribute* mscorlib::System::Diagnostics::Tracing::EventSource::GetCustomAttributeHelper(mscorlib::System::Reflection::MemberInfo* member, mscorlib::System::Type* attributeType, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributeHelper", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type", "System.Diagnostics.Tracing.EventManifestOptions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)member;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::AttributeTypeNamesMatch(mscorlib::System::Type* attributeType, mscorlib::System::Type* reflectedAttributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AttributeTypeNamesMatch", std::vector<std::string> { "System.Type", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attributeType;
	params[1] = (intptr_t)reflectedAttributeType;
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
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventSource::GetEventSourceBaseType(mscorlib::System::Type* eventSourceType, bool allowEventSourceOverride, bool reflectionOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventSourceBaseType", std::vector<std::string> { "System.Type", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)eventSourceType;
	params[1] = (intptr_t)&allowEventSourceOverride;
	params[2] = (intptr_t)&reflectionOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::System::Diagnostics::Tracing::EventSource::CreateManifestAndDescriptors(mscorlib::System::Type* eventSourceType, mscorlib::System::String* eventSourceDllName, mscorlib::System::Diagnostics::Tracing::EventSource* source, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateManifestAndDescriptors", std::vector<std::string> { "System.Type", "System.String", "System.Diagnostics.Tracing.EventSource", "System.Diagnostics.Tracing.EventManifestOptions" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)eventSourceType;
	params[1] = (intptr_t)eventSourceDllName;
	params[2] = (intptr_t)source;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::RemoveFirstArgIfRelatedActivityId(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>& args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveFirstArgIfRelatedActivityId", std::vector<std::string> { "System.Reflection.ParameterInfo[]&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&args;
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
void mscorlib::System::Diagnostics::Tracing::EventSource::AddProviderEnumKind(mscorlib::System::Diagnostics::Tracing::ManifestBuilder* manifest, mscorlib::System::Reflection::FieldInfo* staticField, mscorlib::System::String* providerEnumKind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddProviderEnumKind", std::vector<std::string> { "System.Diagnostics.Tracing.ManifestBuilder", "System.Reflection.FieldInfo", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)manifest;
	params[1] = (intptr_t)staticField;
	params[2] = (intptr_t)providerEnumKind;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::AddEventDescriptor(IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>& eventData, mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventAttribute* eventAttribute, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* eventParameters, bool hasRelatedActivityID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEventDescriptor", std::vector<std::string> { "System.Diagnostics.Tracing.EventSource/EventMetadata[]&", "System.String", "System.Diagnostics.Tracing.EventAttribute", "System.Reflection.ParameterInfo[]", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&eventData;
	params[1] = (intptr_t)eventName;
	params[2] = (intptr_t)eventAttribute;
	params[3] = (intptr_t)eventParameters;
	params[4] = (intptr_t)&hasRelatedActivityID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::TrimEventDescriptors(IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>& eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrimEventDescriptors", std::vector<std::string> { "System.Diagnostics.Tracing.EventSource/EventMetadata[]&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::AddListener(mscorlib::System::Diagnostics::Tracing::EventListener* listener)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddListener", std::vector<std::string> { "System.Diagnostics.Tracing.EventListener" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)listener;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::DebugCheckEvent(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>& eventsByName, IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>* eventData, mscorlib::System::Reflection::MethodInfo* method, mscorlib::System::Diagnostics::Tracing::EventAttribute* eventAttribute, mscorlib::System::Diagnostics::Tracing::ManifestBuilder* manifest, mscorlib::System::Diagnostics::Tracing::EventManifestOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DebugCheckEvent", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.String>&", "System.Diagnostics.Tracing.EventSource/EventMetadata[]", "System.Reflection.MethodInfo", "System.Diagnostics.Tracing.EventAttribute", "System.Diagnostics.Tracing.ManifestBuilder", "System.Diagnostics.Tracing.EventManifestOptions" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&eventsByName;
	params[1] = (intptr_t)eventData;
	params[2] = (intptr_t)method;
	params[3] = (intptr_t)eventAttribute;
	params[4] = (intptr_t)manifest;
	params[5] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::EventSource::GetHelperCallFirstArg(mscorlib::System::Reflection::MethodInfo* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHelperCallFirstArg", std::vector<std::string> { "System.Reflection.MethodInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)method;
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
void mscorlib::System::Diagnostics::Tracing::EventSource::ReportOutOfBandMessage(mscorlib::System::String* msg, bool flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReportOutOfBandMessage", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)msg;
	params[1] = (intptr_t)&flush;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::EventSourceSettings mscorlib::System::Diagnostics::Tracing::EventSource::ValidateSettings(mscorlib::System::Diagnostics::Tracing::EventSourceSettings settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateSettings", std::vector<std::string> { "System.Diagnostics.Tracing.EventSourceSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&settings;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventSourceSettings ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventSourceSettings));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventSourceSettings>(*(mscorlib::System::Diagnostics::Tracing::EventSourceSettings*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Diagnostics::Tracing::EventSource::get_ThrowOnEventWriteErrors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ThrowOnEventWriteErrors");
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
bool mscorlib::System::Diagnostics::Tracing::EventSource::get_SelfDescribingEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SelfDescribingEvents");
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
void mscorlib::System::Diagnostics::Tracing::EventSource::ReportActivitySamplingInfo(mscorlib::System::Diagnostics::Tracing::EventListener* listener, mscorlib::System::Diagnostics::Tracing::SessionMask sessions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReportActivitySamplingInfo", std::vector<std::string> { "System.Diagnostics.Tracing.EventListener", "System.Diagnostics.Tracing.SessionMask" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)listener;
	params[1] = (intptr_t)&sessions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
