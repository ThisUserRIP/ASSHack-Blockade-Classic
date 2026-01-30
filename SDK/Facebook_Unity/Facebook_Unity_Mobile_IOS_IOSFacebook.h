#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Mobile_MobileFacebook.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity::Mobile::IOS { struct IIOSWrapper; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct CallbackManager; };
namespace Facebook_Unity::Facebook::Unity { struct HideUnityDelegate; };
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
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
namespace Facebook_Unity::Facebook::Unity { struct IGamingServicesFriendFinderResult; };
namespace Facebook_Unity::Facebook::Unity { struct IAccessTokenRefreshResult; };
#include "Facebook_Unity_ShareDialogMode.h"
namespace Facebook_Unity::Facebook::Unity { struct IMediaUploadResult; };
namespace Facebook_Unity::Facebook::Unity::Mobile::IOS { struct IOSFacebook_NativeDict; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Facebook_Unity::Facebook::Unity::Mobile::IOS
{
	struct IOSFacebook : Facebook_Unity::Facebook::Unity::Mobile::MobileFacebook
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool limitEventUsage;
		Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper* iosWrapper;
		mscorlib::System::String* userID;
		void _ctor();
		void _ctor(Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper* iosWrapper, Facebook_Unity::Facebook::Unity::CallbackManager* callbackManager);
		bool get_LimitEventUsage();
		void set_LimitEventUsage(bool value);
		mscorlib::System::String* get_SDKName();
		mscorlib::System::String* get_SDKVersion();
		void Init(mscorlib::System::String* appId, bool frictionlessRequests, mscorlib::System::String* iosURLSuffix, Facebook_Unity::Facebook::Unity::HideUnityDelegate* hideUnityDelegate, Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete);
		void LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		void LogOut();
		void AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		void ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		void AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		void AppEventsLogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		bool IsImplicitPurchaseLoggingEnabled();
		void ActivateApp(mscorlib::System::String* appId);
		void FetchDeferredAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		void OpenFriendFinderDialog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGamingServicesFriendFinderResult>* callback);
		void RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback);
		void SetShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode mode);
		void UploadImageToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* imageUri, bool shouldLaunchMediaDialog, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		void UploadVideoToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* videoUri, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback);
		static Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper* GetIOSWrapper();
		static Facebook_Unity::Facebook::Unity::Mobile::IOS::IOSFacebook_NativeDict* MarshallDict(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* dict);
		template <typename T> int32_t AddCallback(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<T>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCallback", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
	};
}

