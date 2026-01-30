#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_Sockets_Socket.h"
namespace System::System::Net::Sockets { struct Socket; };
namespace System::System { struct IOSelectorJob; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };

namespace System::System::Net::Sockets
{
	struct Socket___c__DisplayClass299_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Sockets::Socket* __4__this;
		System::IOSelectorJob* job;
		intptr_t handle;
		void _ctor();
		void _QueueIOSelectorJob_b__0(mscorlib::System::Threading::Tasks::Task* t);
	};
}

