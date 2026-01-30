#include "Facebook_Unity_Gameroom_IGameroomWrapper.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity.Gameroom", "IGameroomWrapper");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::get_PipeResponse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PipeResponse");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::set_PipeResponse(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_PipeResponse", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<System.String,System.Object>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::Init(Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)completeDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::DoLoginRequest(mscorlib::System::String* appID, mscorlib::System::String* permissions, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoLoginRequest", std::vector<std::string> { "System.String", "System.String", "System.String", "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)appID;
	params[1] = (intptr_t)permissions;
	params[2] = (intptr_t)callbackID;
	params[3] = (intptr_t)completeDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::DoPayRequest(mscorlib::System::String* appId, mscorlib::System::String* method, mscorlib::System::String* action, mscorlib::System::String* product, mscorlib::System::String* productId, mscorlib::System::String* quantity, mscorlib::System::String* quantityMin, mscorlib::System::String* quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, mscorlib::System::String* developerPayload, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoPayRequest", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[14];
	params[0] = (intptr_t)appId;
	params[1] = (intptr_t)method;
	params[2] = (intptr_t)action;
	params[3] = (intptr_t)product;
	params[4] = (intptr_t)productId;
	params[5] = (intptr_t)quantity;
	params[6] = (intptr_t)quantityMin;
	params[7] = (intptr_t)quantityMax;
	params[8] = (intptr_t)requestId;
	params[9] = (intptr_t)pricepointId;
	params[10] = (intptr_t)testCurrency;
	params[11] = (intptr_t)developerPayload;
	params[12] = (intptr_t)callbackID;
	params[13] = (intptr_t)completeDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::DoFeedShareRequest(mscorlib::System::String* appId, mscorlib::System::String* toId, mscorlib::System::String* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, mscorlib::System::String* pictureLink, mscorlib::System::String* mediaSource, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoFeedShareRequest", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)appId;
	params[1] = (intptr_t)toId;
	params[2] = (intptr_t)link;
	params[3] = (intptr_t)linkName;
	params[4] = (intptr_t)linkCaption;
	params[5] = (intptr_t)linkDescription;
	params[6] = (intptr_t)pictureLink;
	params[7] = (intptr_t)mediaSource;
	params[8] = (intptr_t)callbackID;
	params[9] = (intptr_t)completeDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper::DoAppRequestRequest(mscorlib::System::String* appId, mscorlib::System::String* message, mscorlib::System::String* actionType, mscorlib::System::String* objectId, mscorlib::System::String* to, mscorlib::System::String* filters, mscorlib::System::String* excludeIDs, mscorlib::System::String* maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoAppRequestRequest", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "Facebook.Unity.Gameroom.GameroomFacebook/OnComplete" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[12];
	params[0] = (intptr_t)appId;
	params[1] = (intptr_t)message;
	params[2] = (intptr_t)actionType;
	params[3] = (intptr_t)objectId;
	params[4] = (intptr_t)to;
	params[5] = (intptr_t)filters;
	params[6] = (intptr_t)excludeIDs;
	params[7] = (intptr_t)maxRecipients;
	params[8] = (intptr_t)data;
	params[9] = (intptr_t)title;
	params[10] = (intptr_t)callbackID;
	params[11] = (intptr_t)completeDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
