#include "Mono_Net_CFRunLoop.h"

IL2CPP::Il2CppClass* System::Mono::Net::CFRunLoop::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net", "CFRunLoop");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::CFRunLoop::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::CFRunLoop::CFRunLoopAddSource(intptr_t rl, intptr_t source, intptr_t mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFRunLoopAddSource", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rl;
	params[1] = (intptr_t)&source;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::CFRunLoop::CFRunLoopRemoveSource(intptr_t rl, intptr_t source, intptr_t mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFRunLoopRemoveSource", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&rl;
	params[1] = (intptr_t)&source;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::Mono::Net::CFRunLoop::CFRunLoopRunInMode(intptr_t mode, double seconds, bool returnAfterSourceHandled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFRunLoopRunInMode", std::vector<std::string> { "System.IntPtr", "System.Double", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&mode;
	params[1] = (intptr_t)&seconds;
	params[2] = (intptr_t)&returnAfterSourceHandled;
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
intptr_t System::Mono::Net::CFRunLoop::CFRunLoopGetCurrent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFRunLoopGetCurrent");
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
void System::Mono::Net::CFRunLoop::CFRunLoopStop(intptr_t rl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFRunLoopStop", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::CFRunLoop::_ctor(intptr_t handle, bool own)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&handle;
	params[1] = (intptr_t)&own;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::Mono::Net::CFRunLoop* System::Mono::Net::CFRunLoop::get_CurrentRunLoop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentRunLoop");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::CFRunLoop*)returnValue;
}
void System::Mono::Net::CFRunLoop::AddSource(intptr_t source, System::Mono::Net::CFString* mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSource", std::vector<std::string> { "System.IntPtr", "Mono.Net.CFString" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::Mono::Net::CFRunLoop::RemoveSource(intptr_t source, System::Mono::Net::CFString* mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveSource", std::vector<std::string> { "System.IntPtr", "Mono.Net.CFString" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::Mono::Net::CFRunLoop::RunInMode(System::Mono::Net::CFString* mode, double seconds, bool returnAfterSourceHandled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RunInMode", std::vector<std::string> { "Mono.Net.CFString", "System.Double", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)mode;
	params[1] = (intptr_t)&seconds;
	params[2] = (intptr_t)&returnAfterSourceHandled;
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
void System::Mono::Net::CFRunLoop::Stop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Stop");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
