#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct IAuthenticationProvider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct HubWithPreAuthorizationSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		System::System::Uri* AuthURI;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		mscorlib::System::String* uiText;
		void Start();
		void AuthenticationProvider_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider);
		void AuthenticationProvider_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider, mscorlib::System::String* reason);
		void OnDestroy();
		void OnGUI();
		void Hub_OnConnected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		bool Hub_OnMessage(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message);
		void Hub_OnClosed(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		void Hub_OnError(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* error);
		void _ctor();
		void _OnGUI_b__9_0();
		void _Hub_OnConnected_b__10_0(mscorlib::System::String* ret);
	};
}

