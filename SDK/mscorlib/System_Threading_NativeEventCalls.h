#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::Microsoft::Win32::SafeHandles { struct SafeWaitHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct NativeEventCalls : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static intptr_t CreateEvent_internal(bool manual, bool initial, mscorlib::System::String* name, int32_t& errorCode);
		static bool SetEvent(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
		static bool SetEvent_internal(intptr_t handle);
		static bool ResetEvent(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
		static bool ResetEvent_internal(intptr_t handle);
		static void CloseEvent_internal(intptr_t handle);
	};
}

