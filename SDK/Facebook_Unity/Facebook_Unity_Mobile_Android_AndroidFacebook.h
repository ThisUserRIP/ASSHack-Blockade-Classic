#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Mobile_MobileFacebook.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity::Mobile::Android { struct IAndroidWrapper; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct CallbackManager; };
namespace Facebook_Unity::Facebook::Unity { struct HideUnityDelegate; };
namespace Facebook_Unity::Facebook::Unity { struct InitDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Facebook_Unity::Facebook::Unity { struct ILoginResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
#include "Facebook_Unity_OGActionType.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facebook_Unity::Facebook::Unity { struct IAppRequestResult; };
namespace System::System { struct Uri; };
namespace Facebook_Unity::Facebook::Unity { struct IShareResult; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facebook_Unity::Facebook::Unity { struct IAccessTokenRefreshResult; };
namespace Facebook_Unity::Facebook::Unity { struct IGamingServicesFriendFinderResult; };
namespace Facebook_Unity::Facebook::Unity { struct IMediaUploadResult; };
namespace Facebook_Unity::Facebook::Unity { struct IIAPReadyResult; };
namespace Facebook_Unity::Facebook::Unity { struct ICatalogResult; };
namespace Facebook_Unity::Facebook::Unity { struct IPurchasesResult; };
namespace Facebook_Unity::Facebook::Unity { struct IPurchaseResult; };
namespace Facebook_Unity::Facebook::Unity { struct IConsumePurchaseResult; };
namespace Facebook_Unity::Facebook::Unity { struct IInitCloudGameResult; };
namespace Facebook_Unity::Facebook::Unity { struct IScheduleAppToUserNotificationResult; };
namespace Facebook_Unity::Facebook::Unity { struct IInterstitialAdResult; };
namespace Facebook_Unity::Facebook::Unity { struct IRewardedVideoResult; };
namespace Facebook_Unity::Facebook::Unity { struct IPayloadResult; };
#include "Facebook_Unity_ShareDialogMode.h"

namespace Facebook_Unity::Facebook::Unity::Mobile::Android
{
	struct AndroidFacebook : Facebook_Unity::Facebook::Unity::Mobile::MobileFacebook
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool limitEventUsage;
		Facebook_Unity::Facebook::Unity::Mobile::Android::IAndroidWrapper* androidWrapper;
		mscorlib::System::String* userID;
		mscorlib::System::String* _KeyHash_k__BackingField;
		void _ctor();
		void _ctor(Facebook_Unity::Facebook::Unity::Mobile::Android::IAndroidWrapper* androidWrapper, Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager);
		void set_KeyHash(mscorlib::System::String* value);
		bool get_LimitEventUsage();
		void set_LimitEventUsage(bool value);
		mscorlib::System::String* get_SDKName();
		mscorlib::System::String* get_SDKVersion();
		void Init(mscorlib::System::String* appId, Facebook_Unity::Facebook::Unity::HideUnityDelegate* hideUnityDelegate, Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete);
		void LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogOut();
		void OnLoginStatusRetrieved(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		void ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void AppEventsLogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		bool IsImplicitPurchaseLoggingEnabled();
		void ActivateApp(mscorlib::System::String* appId);
		void FetchDeferredAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback);
		void OpenFriendFinderDialog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGamingServicesFriendFinderResult>* callback);
		void UploadImageToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* imageUri, bool shouldLaunchMediaDialog, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void UploadVideoToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* videoUri, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void OnIAPReady(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IIAPReadyResult>* callback);
		void GetCatalog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ICatalogResult>* callback);
		void GetPurchases(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchasesResult>* callback);
		void Purchase(mscorlib::System::String* productID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchaseResult>* callback, mscorlib::System::String* developerPayload);
		void ConsumePurchase(mscorlib::System::String* purchaseToken, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IConsumePurchaseResult>* callback);
		void InitCloudGame(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInitCloudGameResult>* callback);
		void ScheduleAppToUserNotification(mscorlib::System::String* title, mscorlib::System::String* body, System::System::Uri* media, int32_t timeInterval, mscorlib::System::String* payload, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IScheduleAppToUserNotificationResult>* callback);
		void LoadInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback);
		void ShowInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback);
		void LoadRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback);
		void ShowRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback);
		void GetPayload(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayloadResult>* callback);
		void SetShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode mode);
		static Facebook_Unity::Facebook::Unity::Mobile::Android::IAndroidWrapper* GetAndroidWrapper();
		void CallFB(mscorlib::System::String* method, mscorlib::System::String* args);
	};
}

