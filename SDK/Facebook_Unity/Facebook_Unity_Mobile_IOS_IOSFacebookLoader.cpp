#include "Facebook_Unity_Mobile_IOS_IOSFacebookLoader.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Mobile::IOS::IOSFacebookLoader::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity.Mobile.IOS", "IOSFacebookLoader");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Mobile::IOS::IOSFacebookLoader::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facebook_Unity::Facebook::Unity::FacebookGameObject* Facebook_Unity::Facebook::Unity::Mobile::IOS::IOSFacebookLoader::get_FBGameObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FBGameObject");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::FacebookGameObject*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IOSFacebookLoader::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
