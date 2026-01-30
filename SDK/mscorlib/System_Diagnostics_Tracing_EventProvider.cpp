#include "System_Diagnostics_Tracing_EventProvider.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EventProvider");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::Register(mscorlib::System::Guid providerGuid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Register", std::vector<std::string> { "System.Guid" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&providerGuid;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::EventProvider::SetInformation(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS eventInfoClass, void* data, int32_t dataSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetInformation", std::vector<std::string> { "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS", "System.Void*", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&eventInfoClass;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&dataSize;
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
void mscorlib::System::Diagnostics::Tracing::EventProvider::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::Dispose(bool disposing)
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
void mscorlib::System::Diagnostics::Tracing::EventProvider::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::Deregister()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deregister");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::EtwEnableCallBack(mscorlib::System::Guid& sourceId, int32_t controlCode, uint8_t setLevel, int64_t anyKeyword, int64_t allKeyword, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, void* callbackContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EtwEnableCallBack", std::vector<std::string> { "System.Guid&", "System.Int32", "System.Byte", "System.Int64", "System.Int64", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*", "System.Void*" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&sourceId;
	params[1] = (intptr_t)&controlCode;
	params[2] = (intptr_t)&setLevel;
	params[3] = (intptr_t)&anyKeyword;
	params[4] = (intptr_t)&allKeyword;
	params[5] = (intptr_t)filterData;
	params[6] = (intptr_t)callbackContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::EtwEnableCallBackImpl(int32_t controlCode, uint8_t setLevel, int64_t anyKeyword, int64_t allKeyword, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EtwEnableCallBackImpl", std::vector<std::string> { "System.Int32", "System.Byte", "System.Int64", "System.Int64", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controlCode;
	params[1] = (intptr_t)&setLevel;
	params[2] = (intptr_t)&anyKeyword;
	params[3] = (intptr_t)&allKeyword;
	params[4] = (intptr_t)filterData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::OnControllerCommand(mscorlib::System::Diagnostics::Tracing::ControllerCommand command, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* arguments, int32_t sessionId, int32_t etwSessionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnControllerCommand", std::vector<std::string> { "System.Diagnostics.Tracing.ControllerCommand", "System.Collections.Generic.IDictionary`2<System.String,System.String>", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&command;
	params[1] = (intptr_t)arguments;
	params[2] = (intptr_t)&sessionId;
	params[3] = (intptr_t)&etwSessionId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::EventLevel mscorlib::System::Diagnostics::Tracing::EventProvider::get_Level()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Level");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventLevel ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventLevel));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventLevel>(*(mscorlib::System::Diagnostics::Tracing::EventLevel*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventKeywords mscorlib::System::Diagnostics::Tracing::EventProvider::get_MatchAnyKeyword()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MatchAnyKeyword");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventKeywords ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventKeywords));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventKeywords>(*(mscorlib::System::Diagnostics::Tracing::EventKeywords*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Diagnostics::Tracing::EventProvider::FindNull(IL2CPP::Array<uint8_t>* buffer, int32_t idx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindNull", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&idx;
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
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Tuple_2<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo, mscorlib::System::Boolean>>* mscorlib::System::Diagnostics::Tracing::EventProvider::GetSessions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSessions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Tuple_2<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo, mscorlib::System::Boolean>>*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::GetSessionInfoCallback(int32_t etwSessionId, int64_t matchAllKeywords, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo>& sessionList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSessionInfoCallback", std::vector<std::string> { "System.Int32", "System.Int64", "System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo>&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&etwSessionId;
	params[1] = (intptr_t)&matchAllKeywords;
	params[2] = (intptr_t)&sessionList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::GetSessionInfo(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int64>* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSessionInfo", std::vector<std::string> { "System.Action`2<System.Int32,System.Int64>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::EventProvider::IndexOfSessionInList(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo>* sessions, int32_t etwSessionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfSessionInList", std::vector<std::string> { "System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo>", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)sessions;
	params[1] = (intptr_t)&etwSessionId;
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
bool mscorlib::System::Diagnostics::Tracing::EventProvider::GetDataFromController(int32_t etwSessionId, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, mscorlib::System::Diagnostics::Tracing::ControllerCommand& command, IL2CPP::Array<uint8_t>& data, int32_t& dataStart)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDataFromController", std::vector<std::string> { "System.Int32", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*", "System.Diagnostics.Tracing.ControllerCommand&", "System.Byte[]&", "System.Int32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&etwSessionId;
	params[1] = (intptr_t)filterData;
	params[2] = (intptr_t)&command;
	params[3] = (intptr_t)&data;
	params[4] = (intptr_t)&dataStart;
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
bool mscorlib::System::Diagnostics::Tracing::EventProvider::IsEnabled()
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
bool mscorlib::System::Diagnostics::Tracing::EventProvider::IsEnabled(uint8_t level, int64_t keywords)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEnabled", std::vector<std::string> { "System.Byte", "System.Int64" });
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
mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode mscorlib::System::Diagnostics::Tracing::EventProvider::GetLastWriteEventError()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLastWriteEventError");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode>(*(mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventProvider::SetLastError(int32_t error)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLastError", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&error;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Diagnostics::Tracing::EventProvider::EncodeObject(mscorlib::System::Object& data, mscorlib::System::Diagnostics::Tracing::EventProvider_EventData& dataDescriptor, uint8_t& dataBuffer, uint32_t& totalEventSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeObject", std::vector<std::string> { "System.Object&", "System.Diagnostics.Tracing.EventProvider/EventData*&", "System.Byte*&", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&data;
	params[1] = (intptr_t)&dataDescriptor;
	params[2] = (intptr_t)&dataBuffer;
	params[3] = (intptr_t)&totalEventSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::EventProvider::WriteEvent(mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* eventPayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEvent", std::vector<std::string> { "System.Diagnostics.Tracing.EventDescriptor&", "System.Guid*", "System.Guid*", "System.Object[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&eventDescriptor;
	params[1] = (intptr_t)activityID;
	params[2] = (intptr_t)childActivityID;
	params[3] = (intptr_t)eventPayload;
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
bool mscorlib::System::Diagnostics::Tracing::EventProvider::WriteEvent(mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, int32_t dataCount, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEvent", std::vector<std::string> { "System.Diagnostics.Tracing.EventDescriptor&", "System.Guid*", "System.Guid*", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&eventDescriptor;
	params[1] = (intptr_t)activityID;
	params[2] = (intptr_t)childActivityID;
	params[3] = (intptr_t)&dataCount;
	params[4] = (intptr_t)&data;
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
bool mscorlib::System::Diagnostics::Tracing::EventProvider::WriteEventRaw(mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* relatedActivityID, int32_t dataCount, intptr_t data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEventRaw", std::vector<std::string> { "System.Diagnostics.Tracing.EventDescriptor&", "System.Guid*", "System.Guid*", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&eventDescriptor;
	params[1] = (intptr_t)activityID;
	params[2] = (intptr_t)relatedActivityID;
	params[3] = (intptr_t)&dataCount;
	params[4] = (intptr_t)&data;
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
uint32_t mscorlib::System::Diagnostics::Tracing::EventProvider::EventUnregister()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventUnregister");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Diagnostics::Tracing::EventProvider::bitcount(uint32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bitcount", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&n;
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
int32_t mscorlib::System::Diagnostics::Tracing::EventProvider::bitindex(uint32_t n)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bitindex", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&n;
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
void mscorlib::System::Diagnostics::Tracing::EventProvider::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
