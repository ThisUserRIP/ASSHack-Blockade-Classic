#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FacebookBase.h"
namespace Facebook_Unity::Facebook::Unity::Editor { struct IEditorWrapper; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Facebook_Unity_ShareDialogMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct CallbackManager; };
namespace mscorlib::System { struct String; };
namespace Facebook_Unity::Facebook::Unity { struct IFacebookCallbackHandler; };
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
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facebook_Unity::Facebook::Unity { struct IPayResult; };
namespace Facebook_Unity::Facebook::Unity { struct IAccessTokenRefreshResult; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
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

namespace Facebook_Unity::Facebook::Unity::Editor
{
	struct EditorFacebook : Facebook_Unity::Facebook::Unity::FacebookBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper* editorWrapper;
		bool _LimitEventUsage_k__BackingField;
		Facebook_Unity::Facebook::Unity::ShareDialogMode _ShareDialogMode_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::Editor::IEditorWrapper* wrapper, Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager);
		void _ctor();
		bool get_LimitEventUsage();
		void set_LimitEventUsage(bool value);
		void set_ShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode value);
		mscorlib::System::String* get_SDKName();
		mscorlib::System::String* get_SDKVersion();
		static Facebook_Unity::Facebook::Unity::IFacebookCallbackHandler* get_EditorGameObject();
		void Init(Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete);
		void LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		void ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void ActivateApp(mscorlib::System::String* appId);
		void GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void AppEventsLogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		bool IsImplicitPurchaseLoggingEnabled();
		void FetchDeferredAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void Pay(mscorlib::System::String* product, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback);
		void RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback);
		void OnAppRequestsComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLoginComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShareLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnFetchDeferredAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnPayComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnRefreshCurrentAccessTokenComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnFriendFinderComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnUploadImageToMediaLibraryComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnUploadVideoToMediaLibraryComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnOnIAPReadyComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetCatalogComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetPurchasesComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnPurchaseComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnConsumePurchaseComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnInitCloudGameComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnScheduleAppToUserNotificationComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLoadInterstitialAdComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShowInterstitialAdComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLoadRewardedVideoComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShowRewardedVideoComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetPayloadComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OpenFriendFinderDialog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGamingServicesFriendFinderResult>* callback);
		void UploadImageToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* imageUri, bool shouldLaunchMediaDialog, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void UploadVideoToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* imageUri, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void OnIAPReady(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IIAPReadyResult>* callback);
		void GetCatalog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ICatalogResult>* callback);
		void GetPurchases(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchasesResult>* callback);
		void Purchase(mscorlib::System::String* productID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchaseResult>* callback, mscorlib::System::String* developerPayload);
		void ConsumePurchase(mscorlib::System::String* productID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IConsumePurchaseResult>* callback);
		void InitCloudGame(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInitCloudGameResult>* callback);
		void ScheduleAppToUserNotification(mscorlib::System::String* title, mscorlib::System::String* body, System::System::Uri* media, int32_t timeInterval, mscorlib::System::String* payload, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IScheduleAppToUserNotificationResult>* callback);
		void LoadInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback);
		void ShowInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback);
		void LoadRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback);
		void ShowRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback);
		void GetPayload(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayloadResult>* callback);
		void OnFacebookAuthResponseChange(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnUrlResponse(mscorlib::System::String* message);
		void OnHideUnity(bool hidden);
	};
}

