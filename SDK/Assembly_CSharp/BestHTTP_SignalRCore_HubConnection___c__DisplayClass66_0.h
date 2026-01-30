#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalRCore_HubConnection.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct Future_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct HubConnection___c__DisplayClass66_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Futures::Future_1<mscorlib::System::Boolean>* future;
		void _ctor();
		void _Send_b__0(Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message);
	};
}

