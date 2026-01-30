#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facebook_Unity::Facebook::Unity { struct InitDelegate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity { struct CallbackManager; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Facebook_Unity::Facebook::Unity { struct ILoginResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
#include "Facebook_Unity_OGActionType.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facebook_Unity::Facebook::Unity { struct IAppRequestResult; };
namespace System::System { struct Uri; };
namespace Facebook_Unity::Facebook::Unity { struct IShareResult; };
#include "Facebook_Unity_HttpMethod.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine { struct WWWForm; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace Facebook_Unity::Facebook::Unity { struct LoginResult; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FacebookBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::InitDelegate* onInitCompleteDelegate;
		bool _Initialized_k__BackingField;
		Facebook_Unity::Facebook::Unity::CallbackManager* _CallbackManager_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager);
		bool get_LimitEventUsage();
		void set_LimitEventUsage(bool value);
		mscorlib::System::String* get_SDKName();
		mscorlib::System::String* get_SDKVersion();
		mscorlib::System::String* get_SDKUserAgent();
		bool get_LoggedIn();
		bool get_Initialized();
		void set_Initialized(bool value);
		Facebook_Unity::Facebook::Unity::CallbackManager* get_CallbackManager();
		void set_CallbackManager(Facebook_Unity::Facebook::Unity::CallbackManager* value);
		void Init(Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete);
		void LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* scope, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* scope, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogOut();
		void AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		void ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		void API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		void ActivateApp(mscorlib::System::String* appId);
		void GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void AppEventsLogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void OnInitComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLoginComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLogoutComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnAppRequestsComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShareLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void ValidateAppRequestArgs(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		void OnAuthResponse(Facebook_Unity::Facebook::Unity::LoginResult* result);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* CopyByValue(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* data);
		System::System::Uri* GetGraphUrl(mscorlib::System::String* query);
		void _OnInitComplete_b__35_0(Facebook_Unity::Facebook::Unity::ILoginResult* result);
	};
}

