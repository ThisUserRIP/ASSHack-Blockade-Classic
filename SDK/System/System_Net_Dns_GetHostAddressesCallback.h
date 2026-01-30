#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "System_Net_Dns.h"
namespace System::System::Net { struct Dns; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System::System::Net { struct IPAddress; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::System::Net
{
	struct Dns_GetHostAddressesCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		IL2CPP::Array<System::Net::IPAddress*>* Invoke(mscorlib::System::String* hostName);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::String* hostName, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		IL2CPP::Array<System::Net::IPAddress*>* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

