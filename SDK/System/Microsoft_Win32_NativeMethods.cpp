#include "Microsoft_Win32_NativeMethods.h"

IL2CPP::Il2CppClass* System::Microsoft::Win32::NativeMethods::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Microsoft.Win32", "NativeMethods");
	return il2cppclass;
}
mscorlib::System::Type* System::Microsoft::Win32::NativeMethods::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool System::Microsoft::Win32::NativeMethods::DuplicateHandle(mscorlib::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, mscorlib::System::Runtime::InteropServices::SafeHandle* hSourceHandle, mscorlib::System::Runtime::InteropServices::HandleRef hTargetProcess, mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle& targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DuplicateHandle", std::vector<std::string> { "System.Runtime.InteropServices.HandleRef", "System.Runtime.InteropServices.SafeHandle", "System.Runtime.InteropServices.HandleRef", "Microsoft.Win32.SafeHandles.SafeWaitHandle&", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hSourceProcessHandle;
	params[1] = (intptr_t)hSourceHandle;
	params[2] = (intptr_t)&hTargetProcess;
	params[3] = (intptr_t)&targetHandle;
	params[4] = (intptr_t)&dwDesiredAccess;
	params[5] = (intptr_t)&bInheritHandle;
	params[6] = (intptr_t)&dwOptions;
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
bool System::Microsoft::Win32::NativeMethods::DuplicateHandle(mscorlib::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, mscorlib::System::Runtime::InteropServices::HandleRef hSourceHandle, mscorlib::System::Runtime::InteropServices::HandleRef hTargetProcess, System::Microsoft::Win32::SafeHandles::SafeProcessHandle& targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DuplicateHandle", std::vector<std::string> { "System.Runtime.InteropServices.HandleRef", "System.Runtime.InteropServices.HandleRef", "System.Runtime.InteropServices.HandleRef", "Microsoft.Win32.SafeHandles.SafeProcessHandle&", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&hSourceProcessHandle;
	params[1] = (intptr_t)&hSourceHandle;
	params[2] = (intptr_t)&hTargetProcess;
	params[3] = (intptr_t)&targetHandle;
	params[4] = (intptr_t)&dwDesiredAccess;
	params[5] = (intptr_t)&bInheritHandle;
	params[6] = (intptr_t)&dwOptions;
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
intptr_t System::Microsoft::Win32::NativeMethods::GetCurrentProcess()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentProcess");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool System::Microsoft::Win32::NativeMethods::GetExitCodeProcess(intptr_t processHandle, int32_t& exitCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExitCodeProcess", std::vector<std::string> { "System.IntPtr", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&processHandle;
	params[1] = (intptr_t)&exitCode;
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
bool System::Microsoft::Win32::NativeMethods::GetExitCodeProcess(System::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int32_t& exitCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExitCodeProcess", std::vector<std::string> { "Microsoft.Win32.SafeHandles.SafeProcessHandle", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)processHandle;
	params[1] = (intptr_t)&exitCode;
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
int32_t System::Microsoft::Win32::NativeMethods::GetCurrentProcessId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentProcessId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool System::Microsoft::Win32::NativeMethods::CloseProcess(intptr_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseProcess", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
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
