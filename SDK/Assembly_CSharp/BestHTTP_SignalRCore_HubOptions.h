#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_SignalRCore_TransportTypes.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct HubOptions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _SkipNegotiation_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes _PreferedTransport_k__BackingField;
		mscorlib::System::TimeSpan _PingInterval_k__BackingField;
		int32_t _MaxRedirects_k__BackingField;
		bool get_SkipNegotiation();
		void set_SkipNegotiation(bool value);
		Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes get_PreferedTransport();
		void set_PreferedTransport(Assembly_CSharp::BestHTTP::SignalRCore::TransportTypes value);
		mscorlib::System::TimeSpan get_PingInterval();
		void set_PingInterval(mscorlib::System::TimeSpan value);
		int32_t get_MaxRedirects();
		void set_MaxRedirects(int32_t value);
		void _ctor();
	};
}

