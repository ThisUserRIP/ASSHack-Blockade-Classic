#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct LeaseManager; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting { struct ServerIdentity; };

namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	struct LifetimeServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::TimeSpan _leaseManagerPollTime;
			mscorlib::System::TimeSpan _leaseTime;
			mscorlib::System::TimeSpan _renewOnCallTime;
			mscorlib::System::TimeSpan _sponsorshipTimeout;
			mscorlib::System::Runtime::Remoting::Lifetime::LeaseManager* _leaseManager;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static mscorlib::System::TimeSpan get_LeaseManagerPollTime();
		static void set_LeaseManagerPollTime(mscorlib::System::TimeSpan value);
		static mscorlib::System::TimeSpan get_LeaseTime();
		static void set_LeaseTime(mscorlib::System::TimeSpan value);
		static mscorlib::System::TimeSpan get_RenewOnCallTime();
		static void set_RenewOnCallTime(mscorlib::System::TimeSpan value);
		static mscorlib::System::TimeSpan get_SponsorshipTimeout();
		static void set_SponsorshipTimeout(mscorlib::System::TimeSpan value);
		static void TrackLifetime(mscorlib::System::Runtime::Remoting::ServerIdentity* identity);
	};
}

