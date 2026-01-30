#include "Facebook_Unity_Editor_IEditorWrapper.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity.Editor", "IEditorWrapper");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::ShowLoginMockDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* callbackId, mscorlib::System::String* permissions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowLoginMockDialog", std::vector<std::string> { "Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)callbackId;
	params[2] = (intptr_t)permissions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::ShowAppRequestMockDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowAppRequestMockDialog", std::vector<std::string> { "Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::ShowPayMockDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowPayMockDialog", std::vector<std::string> { "Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::ShowMockShareDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* subTitle, mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowMockShareDialog", std::vector<std::string> { "Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)subTitle;
	params[2] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper::ShowMockFriendFinderDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* subTitle, mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowMockFriendFinderDialog", std::vector<std::string> { "Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)callback;
	params[1] = (intptr_t)subTitle;
	params[2] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
