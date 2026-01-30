#include "System_Diagnostics_ProcessWaitHandle.h"

IL2CPP::Il2CppClass* System::System::Diagnostics::ProcessWaitHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Diagnostics", "ProcessWaitHandle");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Diagnostics::ProcessWaitHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Diagnostics::ProcessWaitHandle::_ctor(System::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Microsoft.Win32.SafeHandles.SafeProcessHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)processHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
