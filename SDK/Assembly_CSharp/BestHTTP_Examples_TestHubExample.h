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
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };
namespace Assembly_CSharp::BestHTTP::Examples { struct TestHubExample_Person; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename T> struct StreamItemContainer_1; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct TestHubExample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		mscorlib::System::String* uiText;
		void Start();
		void OnDestroy();
		void OnGUI();
		void Hub_OnConnected(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		bool Hub_OnMessage(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message);
		void Hub_OnClosed(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		void Hub_OnError(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* error);
		void _ctor();
		void _Start_b__4_0(mscorlib::System::String* arg);
		void _Start_b__4_1(Assembly_CSharp::BestHTTP::Examples::TestHubExample_Person* person);
		void _Start_b__4_2(Assembly_CSharp::BestHTTP::Examples::TestHubExample_Person* person1, Assembly_CSharp::BestHTTP::Examples::TestHubExample_Person* person2);
		void _OnGUI_b__6_0();
		void _Hub_OnConnected_b__7_0(mscorlib::System::String* ret);
		void _Hub_OnConnected_b__7_1(int32_t result);
		void _Hub_OnConnected_b__7_2(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_3(mscorlib::System::Nullable_1<mscorlib::System::Int32> result);
		void _Hub_OnConnected_b__7_4(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_5(Assembly_CSharp::BestHTTP::Examples::TestHubExample_Person* result);
		void _Hub_OnConnected_b__7_6(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_7(int32_t result);
		void _Hub_OnConnected_b__7_8(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_9(IL2CPP::Array<int32_t>* result);
		void _Hub_OnConnected_b__7_10(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_11(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::Int32>* result);
		void _Hub_OnConnected_b__7_12(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::Int32>* result);
		void _Hub_OnConnected_b__7_13(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_14(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::Int32>* result);
		void _Hub_OnConnected_b__7_15(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<mscorlib::System::Int32>* result);
		void _Hub_OnConnected_b__7_16(mscorlib::System::Exception* error);
		void _Hub_OnConnected_b__7_17(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::TestHubExample_Person>* result);
		void _Hub_OnConnected_b__7_18(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::TestHubExample_Person>* result);
	};
}

