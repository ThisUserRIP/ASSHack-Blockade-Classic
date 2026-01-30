#include "kUERNMCGozlcdSsXoHldUZlkleo.h"

IL2CPP::Il2CppClass* Rewired_Windows::kUERNMCGozlcdSsXoHldUZlkleo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "kUERNMCGozlcdSsXoHldUZlkleo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::kUERNMCGozlcdSsXoHldUZlkleo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::kUERNMCGozlcdSsXoHldUZlkleo::_ctor(Rewired_Windows::zrDUcVrIszMDLsOxCBuheRNPACjC& rawInput, Rewired_Windows::tcwFNXgxqhNUwFNapFqCnekGLqAZ* memQueue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "zrDUcVrIszMDLsOxCBuheRNPACjC&", "tcwFNXgxqhNUwFNapFqCnekGLqAZ" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rawInput;
	params[1] = (intptr_t)memQueue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Windows::kUERNMCGozlcdSsXoHldUZlkleo::get_IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsValid");
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
intptr_t Rewired_Windows::kUERNMCGozlcdSsXoHldUZlkleo::get_RawDataPtr()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RawDataPtr");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Windows::kUERNMCGozlcdSsXoHldUZlkleo::get_RawDataBytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RawDataBytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
