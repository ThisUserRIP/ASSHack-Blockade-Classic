#include "Mono_RuntimeRemoteClassHandle.h"

IL2CPP::Il2CppClass* mscorlib::Mono::RuntimeRemoteClassHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono", "RuntimeRemoteClassHandle");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::RuntimeRemoteClassHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::Mono::RuntimeClassHandle mscorlib::Mono::RuntimeRemoteClassHandle::get_ProxyClass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ProxyClass");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::Mono::RuntimeClassHandle ret;
		std::memset(&ret, 0, sizeof(mscorlib::Mono::RuntimeClassHandle));
		return ret;
	}
	return static_cast<mscorlib::Mono::RuntimeClassHandle>(*(mscorlib::Mono::RuntimeClassHandle*)il2cpp_object_unbox(returnValue));
}
