#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Facebook_Unity::Facebook::Unity::Mobile::IOS
{
	struct IIOSWrapper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Init(mscorlib::System::String* appId, bool frictionlessRequests, mscorlib::System::String* urlSuffix, mscorlib::System::String* unityUserAgentSuffix);
		void LogInWithReadPermissions(int32_t requestId, mscorlib::System::String* scope);
		void LogInWithPublishPermissions(int32_t requestId, mscorlib::System::String* scope);
		void LogOut();
		void SetShareDialogMode(int32_t mode);
		void ShareLink(int32_t requestId, mscorlib::System::String* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, mscorlib::System::String* photoURL);
		void FeedShare(int32_t requestId, mscorlib::System::String* toId, mscorlib::System::String* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, mscorlib::System::String* picture, mscorlib::System::String* mediaSource);
		void AppRequest(int32_t requestId, mscorlib::System::String* message, mscorlib::System::String* actionType, mscorlib::System::String* objectId, IL2CPP::Array<mscorlib::System::String*>* to, int32_t toLength, mscorlib::System::String* filters, IL2CPP::Array<mscorlib::System::String*>* excludeIds, int32_t excludeIdsLength, bool hasMaxRecipients, int32_t maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title);
		void FBAppEventsActivateApp();
		void LogAppEvent(mscorlib::System::String* logEvent, double valueToSum, int32_t numParams, IL2CPP::Array<mscorlib::System::String*>* paramKeys, IL2CPP::Array<mscorlib::System::String*>* paramVals);
		void LogPurchaseAppEvent(double logPurchase, mscorlib::System::String* currency, int32_t numParams, IL2CPP::Array<mscorlib::System::String*>* paramKeys, IL2CPP::Array<mscorlib::System::String*>* paramVals);
		void FBAppEventsSetLimitEventUsage(bool limitEventUsage);
		void GetAppLink(int32_t requestId);
		void RefreshCurrentAccessToken(int32_t requestId);
		mscorlib::System::String* FBSdkVersion();
		mscorlib::System::String* FBGetUserID();
		void OpenFriendFinderDialog(int32_t requestId);
		void UploadImageToMediaLibrary(int32_t requestId, mscorlib::System::String* caption, mscorlib::System::String* mediaUri, bool shouldLaunchMediaDialog);
		void UploadVideoToMediaLibrary(int32_t requestId, mscorlib::System::String* caption, mscorlib::System::String* videoUri);
		void FetchDeferredAppLink(int32_t requestId);
	};
}

