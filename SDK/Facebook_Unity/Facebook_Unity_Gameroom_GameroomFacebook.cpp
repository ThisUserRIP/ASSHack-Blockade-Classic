#include "Facebook_Unity_Gameroom_GameroomFacebook.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity.Gameroom", "GameroomFacebook");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::_ctor(Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper* gameroomWrapper, Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facebook.Unity.Gameroom.IGameroomWrapper", "Facebook.Unity.CallbackManager" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameroomWrapper;
	params[1] = (intptr_t)callbackManager;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::get_LimitEventUsage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LimitEventUsage");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::set_LimitEventUsage(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LimitEventUsage", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::get_SDKName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SDKName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::get_SDKVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SDKVersion");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::Init(mscorlib::System::String* appId, Facebook_Unity::Facebook::Unity::HideUnityDelegate* hideUnityDelegate, Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.String", "Facebook.Unity.HideUnityDelegate", "Facebook.Unity.InitDelegate" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)appId;
	params[1] = (intptr_t)hideUnityDelegate;
	params[2] = (intptr_t)onInitComplete;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::ActivateApp(mscorlib::System::String* appId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateApp", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)appId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppEventsLogEvent", std::vector<std::string> { "System.String", "System.Nullable`1<System.Single>", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)logEvent;
	params[1] = (intptr_t)&valueToSum;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::AppEventsLogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppEventsLogPurchase", std::vector<std::string> { "System.Single", "System.String", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&logPurchase;
	params[1] = (intptr_t)currency;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppRequest", std::vector<std::string> { "System.String", "System.Nullable`1<Facebook.Unity.OGActionType>", "System.String", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Collections.Generic.IEnumerable`1<System.Object>", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&actionType;
	params[2] = (intptr_t)objectId;
	params[3] = (intptr_t)to;
	params[4] = (intptr_t)filters;
	params[5] = (intptr_t)excludeIds;
	params[6] = (intptr_t)&maxRecipients;
	params[7] = (intptr_t)data;
	params[8] = (intptr_t)title;
	params[9] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FeedShare", std::vector<std::string> { "System.String", "System.Uri", "System.String", "System.String", "System.String", "System.Uri", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)toId;
	params[1] = (intptr_t)link;
	params[2] = (intptr_t)linkName;
	params[3] = (intptr_t)linkCaption;
	params[4] = (intptr_t)linkDescription;
	params[5] = (intptr_t)picture;
	params[6] = (intptr_t)mediaSource;
	params[7] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShareLink", std::vector<std::string> { "System.Uri", "System.String", "System.String", "System.Uri", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)contentURL;
	params[1] = (intptr_t)contentTitle;
	params[2] = (intptr_t)contentDescription;
	params[3] = (intptr_t)photoURL;
	params[4] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::Pay(mscorlib::System::String* product, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pay", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Nullable`1<System.Int32>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)product;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)&quantity;
	params[3] = (intptr_t)&quantityMin;
	params[4] = (intptr_t)&quantityMax;
	params[5] = (intptr_t)requestId;
	params[6] = (intptr_t)pricepointId;
	params[7] = (intptr_t)testCurrency;
	params[8] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAppLink", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* scope, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithPublishPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)scope;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* scope, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithReadPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)scope;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::OnAppRequestsComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnAppRequestsComplete", std::vector<std::string> { "Facebook.Unity.ResultContainer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resultContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::OnGetAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGetAppLinkComplete", std::vector<std::string> { "Facebook.Unity.ResultContainer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resultContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::OnLoginComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnLoginComplete", std::vector<std::string> { "Facebook.Unity.ResultContainer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resultContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::OnShareLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnShareLinkComplete", std::vector<std::string> { "Facebook.Unity.ResultContainer" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resultContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::OnPayComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPayComplete", std::vector<std::string> { "Facebook.Unity.ResultContainer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resultContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::HaveReceivedPipeResponse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HaveReceivedPipeResponse");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::GetPipeResponse(mscorlib::System::String* callbackId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPipeResponse", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callbackId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper* Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::GetGameroomWrapper()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGameroomWrapper");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::Gameroom::IGameroomWrapper*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::PayImpl(mscorlib::System::String* product, mscorlib::System::String* productId, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, mscorlib::System::String* developerPayload, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PayImpl", std::vector<std::string> { "System.String", "System.String", "System.String", "System.Int32", "System.Nullable`1<System.Int32>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)product;
	params[1] = (intptr_t)productId;
	params[2] = (intptr_t)action;
	params[3] = (intptr_t)&quantity;
	params[4] = (intptr_t)&quantityMin;
	params[5] = (intptr_t)&quantityMax;
	params[6] = (intptr_t)requestId;
	params[7] = (intptr_t)pricepointId;
	params[8] = (intptr_t)testCurrency;
	params[9] = (intptr_t)developerPayload;
	params[10] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook::LoginWithPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* scope, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoginWithPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)scope;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
