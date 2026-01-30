#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_CFObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::Mono::Net { struct CFString; };

namespace System::Mono::Net
{
	struct CFRunLoop : System::Mono::Net::CFObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void CFRunLoopAddSource(intptr_t rl, intptr_t source, intptr_t mode);
		static void CFRunLoopRemoveSource(intptr_t rl, intptr_t source, intptr_t mode);
		static int32_t CFRunLoopRunInMode(intptr_t mode, double seconds, bool returnAfterSourceHandled);
		static intptr_t CFRunLoopGetCurrent();
		static void CFRunLoopStop(intptr_t rl);
		void _ctor(intptr_t handle, bool own);
		static System::Mono::Net::CFRunLoop* get_CurrentRunLoop();
		void AddSource(intptr_t source, System::Mono::Net::CFString* mode);
		void RemoveSource(intptr_t source, System::Mono::Net::CFString* mode);
		int32_t RunInMode(System::Mono::Net::CFString* mode, double seconds, bool returnAfterSourceHandled);
		void Stop();
	};
}

