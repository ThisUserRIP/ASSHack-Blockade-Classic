#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Microsoft::Win32::UnsafeNativeMethods::GetIl2CppClass(), "ManifestEtw");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EventRegister(mscorlib::System::Guid& providerId, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* enableCallback, void* callbackContext, int64_t& registrationHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventRegister", std::vector<std::string> { "System.Guid&", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback", "System.Void*", "System.Int64&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&providerId;
	params[1] = (intptr_t)enableCallback;
	params[2] = (intptr_t)callbackContext;
	params[3] = (intptr_t)&registrationHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EventUnregister(int64_t registrationHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventUnregister", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&registrationHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EventWriteTransferWrapper(int64_t registrationHandle, mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityId, mscorlib::System::Guid* relatedActivityId, int32_t userDataCount, mscorlib::System::Diagnostics::Tracing::EventProvider_EventData* userData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventWriteTransferWrapper", std::vector<std::string> { "System.Int64", "System.Diagnostics.Tracing.EventDescriptor&", "System.Guid*", "System.Guid*", "System.Int32", "System.Diagnostics.Tracing.EventProvider/EventData*" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&registrationHandle;
	params[1] = (intptr_t)&eventDescriptor;
	params[2] = (intptr_t)activityId;
	params[3] = (intptr_t)relatedActivityId;
	params[4] = (intptr_t)&userDataCount;
	params[5] = (intptr_t)userData;
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
int32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EventWriteTransfer(int64_t registrationHandle, mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityId, mscorlib::System::Guid* relatedActivityId, int32_t userDataCount, mscorlib::System::Diagnostics::Tracing::EventProvider_EventData* userData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventWriteTransfer", std::vector<std::string> { "System.Int64", "System.Diagnostics.Tracing.EventDescriptor&", "System.Guid*", "System.Guid*", "System.Int32", "System.Diagnostics.Tracing.EventProvider/EventData*" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&registrationHandle;
	params[1] = (intptr_t)&eventDescriptor;
	params[2] = (intptr_t)activityId;
	params[3] = (intptr_t)relatedActivityId;
	params[4] = (intptr_t)&userDataCount;
	params[5] = (intptr_t)userData;
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
int32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EventActivityIdControl(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_ActivityControl ControlCode, mscorlib::System::Guid& ActivityId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventActivityIdControl", std::vector<std::string> { "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/ActivityControl", "System.Guid&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ControlCode;
	params[1] = (intptr_t)&ActivityId;
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
int32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EventSetInformation(int64_t registrationHandle, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS informationClass, void* eventInformation, int32_t informationLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EventSetInformation", std::vector<std::string> { "System.Int64", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS", "System.Void*", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&registrationHandle;
	params[1] = (intptr_t)&informationClass;
	params[2] = (intptr_t)eventInformation;
	params[3] = (intptr_t)&informationLength;
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
int32_t mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EnumerateTraceGuidsEx(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS TraceQueryInfoClass, void* InBuffer, int32_t InBufferSize, void* OutBuffer, int32_t OutBufferSize, int32_t& ReturnLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnumerateTraceGuidsEx", std::vector<std::string> { "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS", "System.Void*", "System.Int32", "System.Void*", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&TraceQueryInfoClass;
	params[1] = (intptr_t)InBuffer;
	params[2] = (intptr_t)&InBufferSize;
	params[3] = (intptr_t)OutBuffer;
	params[4] = (intptr_t)&OutBufferSize;
	params[5] = (intptr_t)&ReturnLength;
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
