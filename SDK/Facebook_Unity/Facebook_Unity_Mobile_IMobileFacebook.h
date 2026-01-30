#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Facebook_Unity_ShareDialogMode.h"
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
namespace Facebook_Unity::Facebook::Unity { struct IAccessTokenRefreshResult; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
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
	struct IMobileFacebook
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void set_ShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode value);
		void FetchDeferredAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback);
		bool IsImplicitPurchaseLoggingEnabled();
		void OpenFriendFinderDialog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGamingServicesFriendFinderResult>* callback);
		void UploadImageToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* imageUri, bool shouldLaunchMediaDialog, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void UploadVideoToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* videoUri, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void OnIAPReady(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IIAPReadyResult>* callback);
		void GetCatalog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ICatalogResult>* callback);
		void GetPurchases(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchasesResult>* callback);
		void Purchase(mscorlib::System::String* productID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchaseResult>* callback, mscorlib::System::String* developPayload);
		void ConsumePurchase(mscorlib::System::String* productToken, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IConsumePurchaseResult>* callback);
		void InitCloudGame(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInitCloudGameResult>* callback);
		void ScheduleAppToUserNotification(mscorlib::System::String* title, mscorlib::System::String* body, System::System::Uri* media, int32_t timeInterval, mscorlib::System::String* payload, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IScheduleAppToUserNotificationResult>* callback);
		void LoadInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback);
		void ShowInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback);
		void LoadRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback);
		void ShowRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback);
		void GetPayload(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayloadResult>* callback);
	};
}

