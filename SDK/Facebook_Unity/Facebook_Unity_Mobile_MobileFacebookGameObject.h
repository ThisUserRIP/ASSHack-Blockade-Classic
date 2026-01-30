#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FacebookGameObject.h"
namespace Facebook_Unity::Facebook::Unity::Mobile { struct IMobileFacebookImplementation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity::Mobile
{
	struct MobileFacebookGameObject : Facebook_Unity::Facebook::Unity::FacebookGameObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::Mobile::IMobileFacebookImplementation* get_MobileFacebook();
		void OnFetchDeferredAppLinkComplete(mscorlib::System::String* message);
		void OnRefreshCurrentAccessTokenComplete(mscorlib::System::String* message);
		void OnFriendFinderComplete(mscorlib::System::String* message);
		void OnUploadImageToMediaLibraryComplete(mscorlib::System::String* message);
		void OnUploadVideoToMediaLibraryComplete(mscorlib::System::String* message);
		void OnOnIAPReadyComplete(mscorlib::System::String* message);
		void OnGetCatalogComplete(mscorlib::System::String* message);
		void OnGetPurchasesComplete(mscorlib::System::String* message);
		void OnPurchaseComplete(mscorlib::System::String* message);
		void OnConsumePurchaseComplete(mscorlib::System::String* message);
		void OnInitCloudGameComplete(mscorlib::System::String* message);
		void OnScheduleAppToUserNotificationComplete(mscorlib::System::String* message);
		void OnLoadInterstitialAdComplete(mscorlib::System::String* message);
		void OnShowInterstitialAdComplete(mscorlib::System::String* message);
		void OnLoadRewardedVideoComplete(mscorlib::System::String* message);
		void OnShowRewardedVideoComplete(mscorlib::System::String* message);
		void OnGetPayloadComplete(mscorlib::System::String* message);
		void _ctor();
	};
}

