#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct ILease; };

namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	struct ISponsor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan Renewal(mscorlib::System::Runtime::Remoting::Lifetime::ILease* lease);
	};
}

