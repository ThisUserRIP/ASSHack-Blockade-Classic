#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Runtime_InteropServices_HandleRef.h"
namespace mscorlib::System::Runtime::InteropServices { struct HandleRef; };
namespace mscorlib::System::Runtime::InteropServices { struct SafeHandle; };
namespace mscorlib::Microsoft::Win32::SafeHandles { struct SafeWaitHandle; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::Microsoft::Win32::SafeHandles { struct SafeProcessHandle; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace System::Microsoft::Win32
{
	struct NativeMethods : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool DuplicateHandle(mscorlib::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, mscorlib::System::Runtime::InteropServices::SafeHandle* hSourceHandle, mscorlib::System::Runtime::InteropServices::HandleRef hTargetProcess, mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle& targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions);
		static bool DuplicateHandle(mscorlib::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, mscorlib::System::Runtime::InteropServices::HandleRef hSourceHandle, mscorlib::System::Runtime::InteropServices::HandleRef hTargetProcess, System::Microsoft::Win32::SafeHandles::SafeProcessHandle& targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions);
		static intptr_t GetCurrentProcess();
		static bool GetExitCodeProcess(intptr_t processHandle, int32_t& exitCode);
		static bool GetExitCodeProcess(System::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int32_t& exitCode);
		static int32_t GetCurrentProcessId();
		static bool CloseProcess(intptr_t handle);
	};
}

