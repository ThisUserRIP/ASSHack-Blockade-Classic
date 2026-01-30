#include "Mono_Net_CFUrl.h"

IL2CPP::Il2CppClass* System::Mono::Net::CFUrl::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "Mono.Net", "CFUrl");
	return il2cppclass;
}
mscorlib::System::Type* System::Mono::Net::CFUrl::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::Mono::Net::CFUrl::_ctor(intptr_t handle, bool own)
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
intptr_t System::Mono::Net::CFUrl::CFURLCreateWithString(intptr_t allocator, intptr_t str, intptr_t baseURL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CFURLCreateWithString", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.IntPtr" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&allocator;
	params[1] = (intptr_t)&str;
	params[2] = (intptr_t)&baseURL;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
System::Mono::Net::CFUrl* System::Mono::Net::CFUrl::Create(mscorlib::System::String* absolute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)absolute;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Mono::Net::CFUrl*)returnValue;
}
