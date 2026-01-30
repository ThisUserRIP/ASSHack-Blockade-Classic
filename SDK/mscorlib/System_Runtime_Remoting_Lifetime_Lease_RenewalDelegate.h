#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MulticastDelegate.h"
#include "System_Runtime_Remoting_Lifetime_Lease.h"
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct Lease; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct ILease; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	struct Lease_RenewalDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		mscorlib::System::TimeSpan Invoke(mscorlib::System::Runtime::Remoting::Lifetime::ILease* lease);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::Runtime::Remoting::Lifetime::ILease* lease, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		mscorlib::System::TimeSpan EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

