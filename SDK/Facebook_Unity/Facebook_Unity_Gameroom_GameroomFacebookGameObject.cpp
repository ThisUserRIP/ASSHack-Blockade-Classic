#include "Facebook_Unity_Gameroom_GameroomFacebookGameObject.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity.Gameroom", "GameroomFacebookGameObject");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facebook_Unity::Facebook::Unity::Gameroom::IGameroomFacebookImplementation* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::get_GameroomFacebookImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GameroomFacebookImpl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::Gameroom::IGameroomFacebookImplementation*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::WaitForResponse(Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* onCompleteDelegate, mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForResponse", std::vector<std::string> { "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)onCompleteDelegate;
	params[1] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::OnAwake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAwake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::WaitForPipeResponse(Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* onCompleteDelegate, mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WaitForPipeResponse", std::vector<std::string> { "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)onCompleteDelegate;
	params[1] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
