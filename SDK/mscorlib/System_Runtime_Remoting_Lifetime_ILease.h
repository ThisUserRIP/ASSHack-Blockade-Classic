#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Runtime_Remoting_Lifetime_LeaseState.h"

namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	struct ILease
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan get_CurrentLeaseTime();
		mscorlib::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();
		mscorlib::System::TimeSpan get_RenewOnCallTime();
		mscorlib::System::TimeSpan Renew(mscorlib::System::TimeSpan renewalTime);
	};
}

