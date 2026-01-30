#include "Facebook_Unity_FBUnityUtility.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FBUnityUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "FBUnityUtility");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FBUnityUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper* Facebook_Unity::Facebook::Unity::FBUnityUtility::get_AsyncRequestStringWrapper()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AsyncRequestStringWrapper");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::IAsyncRequestStringWrapper*)returnValue;
}
