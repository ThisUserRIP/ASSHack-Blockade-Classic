#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity::Mobile
{
	struct IMobileFacebookResultHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnFetchDeferredAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
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
	};
}

