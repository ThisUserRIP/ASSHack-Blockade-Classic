#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FacebookBase.h"
namespace mscorlib::System { struct String; };
namespace Facebook_Unity::Facebook::Unity::Canvas { struct ICanvasJSWrapper; };
namespace Facebook_Unity::Facebook::Unity { struct HideUnityDelegate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct CallbackManager; };
namespace Facebook_Unity::Facebook::Unity { struct InitDelegate; };
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
namespace Facebook_Unity::Facebook::Unity { struct IPayResult; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct Utilities_Callback_1; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct CanvasFacebook : Facebook_Unity::Facebook::Unity::FacebookBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* appId;
		mscorlib::System::String* appLinkUrl;
		Facebook_Unity::Facebook::Unity::Canvas::ICanvasJSWrapper* canvasJSWrapper;
		Facebook_Unity::Facebook::Unity::HideUnityDelegate* onHideUnityDelegate;
		bool _LimitEventUsage_k__BackingField;
		void _ctor();
		void _ctor(Facebook_Unity::Facebook::Unity::Canvas::ICanvasJSWrapper* canvasJSWrapper, Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager);
		static Facebook_Unity::Facebook::Unity::Canvas::ICanvasJSWrapper* GetCanvasJSWrapper();
		bool get_LimitEventUsage();
		void set_LimitEventUsage(bool value);
		mscorlib::System::String* get_SDKName();
		mscorlib::System::String* get_SDKVersion();
		mscorlib::System::String* get_SDKUserAgent();
		void Init(mscorlib::System::String* appId, bool cookie, bool logging, bool status, bool xfbml, mscorlib::System::String* channelUrl, mscorlib::System::String* authResponse, bool frictionlessRequests, mscorlib::System::String* javascriptSDKLocale, bool loadDebugJSSDK, Facebook_Unity::Facebook::Unity::HideUnityDelegate* hideUnityDelegate, Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete);
		void LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogOut();
		void AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		void ActivateApp(mscorlib::System::String* appId);
		void ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void Pay(mscorlib::System::String* product, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback);
		void GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void AppEventsLogPurchase(float purchaseAmount, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void OnLoginComplete(Facebook_Unity::Facebook::Unity::ResultContainer* result);
		void OnGetAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* message);
		void OnFacebookAuthResponseChange(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnPayComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnAppRequestsComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShareLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnUrlResponse(mscorlib::System::String* url);
		void OnHideUnity(bool isGameShown);
		static void FormatAuthResponse(Facebook_Unity::Facebook::Unity::ResultContainer* result, Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback);
		void PayImpl(mscorlib::System::String* product, mscorlib::System::String* productId, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, mscorlib::System::String* developerPayload, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback);
		void _OnLoginComplete_b__37_0(Facebook_Unity::Facebook::Unity::ResultContainer* formattedResponse);
	};
}

