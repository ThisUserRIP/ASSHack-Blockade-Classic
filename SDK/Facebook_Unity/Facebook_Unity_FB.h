#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Facebook_Unity::Facebook::Unity { struct IFacebook; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity { struct FB_OnDLLLoaded; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct InitDelegate; };
namespace Facebook_Unity::Facebook::Unity { struct HideUnityDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Facebook_Unity::Facebook::Unity { struct ILoginResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
#include "Facebook_Unity_OGActionType.h"
namespace Facebook_Unity::Facebook::Unity { struct IAppRequestResult; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace System::System { struct Uri; };
namespace Facebook_Unity::Facebook::Unity { struct IShareResult; };
#include "Facebook_Unity_HttpMethod.h"
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine { struct WWWForm; };
namespace Facebook_Unity::Facebook::Unity { struct IAppLinkResult; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FB : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* DefaultJSSDKLocale;
			Facebook_Unity::Facebook::Unity::IFacebook* facebook;
			bool isInitCalled;
			mscorlib::System::String* facebookDomain;
			mscorlib::System::String* gamingDomain;
			mscorlib::System::String* graphApiVersion;
			mscorlib::System::String* _AppId_k__BackingField;
			mscorlib::System::String* _ClientToken_k__BackingField;
			Facebook_Unity::Facebook::Unity::FB_OnDLLLoaded* _OnDLLLoadedDelegate_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_AppId();
		static void set_AppId(mscorlib::System::String* value);
		static mscorlib::System::String* get_ClientToken();
		static void set_ClientToken(mscorlib::System::String* value);
		static mscorlib::System::String* get_GraphApiVersion();
		static void set_GraphApiVersion(mscorlib::System::String* value);
		static bool get_IsLoggedIn();
		static bool get_IsInitialized();
		static bool get_LimitAppEventUsage();
		static void set_LimitAppEventUsage(bool value);
		static Facebook_Unity::Facebook::Unity::IFacebook* get_FacebookImpl();
		static void set_FacebookImpl(Facebook_Unity::Facebook::Unity::IFacebook* value);
		static mscorlib::System::String* get_FacebookDomain();
		static void set_FacebookDomain(mscorlib::System::String* value);
		static Facebook_Unity::Facebook::Unity::FB_OnDLLLoaded* get_OnDLLLoadedDelegate();
		static void set_OnDLLLoadedDelegate(Facebook_Unity::Facebook::Unity::FB_OnDLLLoaded* value);
		static void Init(Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete, Facebook_Unity::Facebook::Unity::HideUnityDelegate* onHideUnity, mscorlib::System::String* authResponse);
		static void Init(mscorlib::System::String* appId, mscorlib::System::String* clientToken, bool cookie, bool logging, bool status, bool xfbml, bool frictionlessRequests, mscorlib::System::String* authResponse, mscorlib::System::String* javascriptSDKLocale, Facebook_Unity::Facebook::Unity::HideUnityDelegate* onHideUnity, Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete);
		static void LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		static void LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback);
		static void LogOut();
		static void AppRequest(mscorlib::System::String* message, Facebook_Unity::Facebook::Unity::OGActionType actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		static void AppRequest(mscorlib::System::String* message, Facebook_Unity::Facebook::Unity::OGActionType actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		static void AppRequest(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback);
		static void ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		static void FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback);
		static void API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData);
		static void API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData);
		static void ActivateApp();
		static void GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback);
		static void ClearAppLink();
		static void LogAppEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		static void LogPurchase(mscorlib::System::Decimal logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		static void LogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters);
		static void LogVersion();
		void _ctor();
		static void _cctor();
	};
}

