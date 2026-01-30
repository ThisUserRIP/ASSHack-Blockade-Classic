#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin { struct WebViewError; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin
{
	struct WebViewRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _NavigateToUrl_k__BackingField;
		mscorlib::System::String* _CloseWhenNavigatedToUrl_k__BackingField;
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest>* _CallbackAction_k__BackingField;
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewError* _Error_k__BackingField;
		mscorlib::System::String* _LastUrlWithParams_k__BackingField;
		mscorlib::System::String* get_NavigateToUrl();
		void set_NavigateToUrl(mscorlib::System::String* value);
		mscorlib::System::String* get_CloseWhenNavigatedToUrl();
		void set_CloseWhenNavigatedToUrl(mscorlib::System::String* value);
		mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest>* get_CallbackAction();
		void set_CallbackAction(mscorlib::System::Action_1<Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewRequest>* value);
		Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewError* get_Error();
		void set_Error(Assembly_CSharp::com::playGenesis::VkUnityPlugin::WebViewError* value);
		mscorlib::System::String* get_LastUrlWithParams();
		void set_LastUrlWithParams(mscorlib::System::String* value);
		void _ctor();
	};
}

