#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Net_CFNetwork.h"
namespace System::Mono::Net { struct CFNetwork; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Net
{
	struct CFNetwork_GetProxyData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t script;
		intptr_t targetUri;
		intptr_t error;
		intptr_t result;
		mscorlib::System::Threading::ManualResetEvent* evt;
		void Dispose();
		void _ctor();
	};
}

