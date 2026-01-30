#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_EtwEnableCallback.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::GetIl2CppClass(), "EtwEnableCallback");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback::Invoke(mscorlib::System::Guid& sourceId, int32_t isEnabled, uint8_t level, int64_t matchAnyKeywords, int64_t matchAllKeywords, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, void* callbackContext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Guid&", "System.Int32", "System.Byte", "System.Int64", "System.Int64", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*", "System.Void*" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&sourceId;
	params[1] = (intptr_t)&isEnabled;
	params[2] = (intptr_t)&level;
	params[3] = (intptr_t)&matchAnyKeywords;
	params[4] = (intptr_t)&matchAllKeywords;
	params[5] = (intptr_t)filterData;
	params[6] = (intptr_t)callbackContext;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback::BeginInvoke(mscorlib::System::Guid& sourceId, int32_t isEnabled, uint8_t level, int64_t matchAnyKeywords, int64_t matchAllKeywords, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, void* callbackContext, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.Guid&", "System.Int32", "System.Byte", "System.Int64", "System.Int64", "Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR*", "System.Void*", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&sourceId;
	params[1] = (intptr_t)&isEnabled;
	params[2] = (intptr_t)&level;
	params[3] = (intptr_t)&matchAnyKeywords;
	params[4] = (intptr_t)&matchAllKeywords;
	params[5] = (intptr_t)filterData;
	params[6] = (intptr_t)callbackContext;
	params[7] = (intptr_t)callback;
	params[8] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback::EndInvoke(mscorlib::System::Guid& sourceId, mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.Guid&", "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&sourceId;
	params[1] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
