#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalRCore_TransferModes.h"
#include "BestHTTP_SignalRCore_TransportTypes.h"
#include "BestHTTP_SignalRCore_TransportStates.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct ITransport
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalRCore::TransferModes get_TransferMode();
		Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes get_TransportType();
		Assembly_CSharp::BestHTTP::SignalRCore::TransportStates get_State();
		mscorlib::System::String* get_ErrorReason();
		void add_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value);
		void remove_OnStateChanged(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::TransportStates, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates>* value);
		void StartConnect();
		void StartClose();
		void Send(IL2CPP::Array<uint8_t>* msg);
	};
}

