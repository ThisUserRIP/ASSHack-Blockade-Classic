#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FacebookBase.h"
#include "Facebook_Unity_ShareDialogMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct CallbackManager; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
namespace Facebook_Unity::Facebook::Unity { struct IAccessTokenRefreshResult; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace Facebook_Unity::Facebook::Unity { struct IGamingServicesFriendFinderResult; };
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
namespace Facebook_Unity::Facebook::Unity { struct IMediaUploadResult; };
namespace Facebook_Unity::Facebook::Unity { struct IIAPReadyResult; };
namespace Facebook_Unity::Facebook::Unity { struct ICatalogResult; };
namespace Facebook_Unity::Facebook::Unity { struct IPurchasesResult; };
namespace Facebook_Unity::Facebook::Unity { struct IPurchaseResult; };
namespace Facebook_Unity::Facebook::Unity { struct IConsumePurchaseResult; };
namespace Facebook_Unity::Facebook::Unity { struct IInitCloudGameResult; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facebook_Unity::Facebook::Unity { struct IScheduleAppToUserNotificationResult; };
namespace Facebook_Unity::Facebook::Unity { struct IInterstitialAdResult; };
namespace Facebook_Unity::Facebook::Unity { struct IRewardedVideoResult; };
namespace Facebook_Unity::Facebook::Unity { struct IPayloadResult; };

namespace Facebook_Unity::Facebook::Unity::Mobile
{
	struct MobileFacebook : Facebook_Unity::Facebook::Unity::FacebookBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::ShareDialogMode shareDialogMode;
		void _ctor(Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager);
		void set_ShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode value);
		void FetchDeferredAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback);
		bool IsImplicitPurchaseLoggingEnabled();
		void OnLoginComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnAppRequestsComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnFetchDeferredAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShareLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnRefreshCurrentAccessTokenComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OpenFriendFinderDialog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGamingServicesFriendFinderResult>* callback);
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
	};
}

