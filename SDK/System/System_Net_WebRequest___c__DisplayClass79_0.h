#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_WebRequest.h"
namespace System::System::Net { struct WebRequest; };
namespace mscorlib::System::Security::Principal { struct WindowsIdentity; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct WebResponse; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System::System::Net
{
	struct WebRequest___c__DisplayClass79_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Principal::WindowsIdentity* currentUser;
		System::Net::WebRequest* __4__this;
		void _ctor();
		mscorlib::System::Threading::Tasks::Task_1<System::Net::WebResponse>* _GetResponseAsync_b__1();
	};
}

