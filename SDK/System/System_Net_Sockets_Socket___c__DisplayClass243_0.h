#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_Sockets_Socket.h"
namespace System::System::Net::Sockets { struct Socket; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct IOAsyncResult; };

namespace System::System::Net::Sockets
{
	struct Socket___c__DisplayClass243_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t sent_so_far;
		void _ctor();
		void _BeginSendCallback_b__0(System::IOAsyncResult* s);
	};
}

