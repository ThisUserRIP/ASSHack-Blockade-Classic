#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Runtime_Remoting_Lifetime_LeaseState.h"
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct Queue; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct Lease_RenewalDelegate; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct ISponsor; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	struct Lease : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime _leaseExpireTime;
		mscorlib::System::Runtime::Remoting::Lifetime::LeaseState _currentState;
		mscorlib::System::TimeSpan _initialLeaseTime;
		mscorlib::System::TimeSpan _renewOnCallTime;
		mscorlib::System::TimeSpan _sponsorshipTimeout;
		mscorlib::System::Collections::ArrayList* _sponsors;
		mscorlib::System::Collections::Queue* _renewingSponsors;
		mscorlib::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate* _renewalDelegate;
		void _ctor();
		mscorlib::System::TimeSpan get_CurrentLeaseTime();
		mscorlib::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();
		void Activate();
		mscorlib::System::TimeSpan get_RenewOnCallTime();
		mscorlib::System::TimeSpan Renew(mscorlib::System::TimeSpan renewalTime);
		void Unregister(mscorlib::System::Runtime::Remoting::Lifetime::ISponsor* obj);
		void UpdateState();
		void CheckNextSponsor();
		void ProcessSponsorResponse(mscorlib::System::Object* state, bool timedOut);
	};
}

