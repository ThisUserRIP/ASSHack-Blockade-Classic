#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_FB.h"
namespace Facebook_Unity::Facebook::Unity { struct FB; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Facebook_Unity_ShareDialogMode.h"
namespace Facebook_Unity::Facebook::Unity::Mobile { struct IMobileFacebook; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
namespace Facebook_Unity::Facebook::Unity { struct IAccessTokenRefreshResult; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FB_Mobile : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void set_ShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode value);
		static Facebook_Unity::Facebook::Unity::Mobile::IMobileFacebook* get_MobileFacebookImpl();
		static void FetchDeferredAppLinkData(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		static void RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback);
		static bool IsImplicitPurchaseLoggingEnabled();
	};
}

