#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_Component.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::Microsoft::Win32::SafeHandles { struct SafeProcessHandle; };
namespace mscorlib::System { struct String; };
namespace System::System::Diagnostics { struct ProcessThreadCollection; };
namespace System::System::Diagnostics { struct ProcessModuleCollection; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Diagnostics_ProcessPriorityClass.h"
namespace System::System::Diagnostics { struct ProcessStartInfo; };
namespace mscorlib::System { struct EventHandler; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Threading { struct RegisteredWaitHandle; };
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace System::System::ComponentModel { struct ISynchronizeInvoke; };
namespace mscorlib::System::IO { struct StreamReader; };
namespace mscorlib::System::IO { struct StreamWriter; };
namespace mscorlib::System { struct OperatingSystem; };
#include "System_Diagnostics_Process_StreamReadMode.h"
namespace System::System::Diagnostics { struct DataReceivedEventHandler; };
namespace System::System::Diagnostics { struct AsyncStreamReader; };
namespace System::System::Diagnostics { struct ProcessModule; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Diagnostics { struct ProcessInfo; };
#include "System_Diagnostics_Process_State.h"

namespace System::System::Diagnostics
{
	struct Process : System::ComponentModel::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool haveProcessId;
		int32_t processId;
		bool haveProcessHandle;
		System::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle;
		bool isRemoteMachine;
		mscorlib::System::String* machineName;
		int32_t m_processAccess;
		System::Diagnostics::ProcessThreadCollection* threads;
		System::Diagnostics::ProcessModuleCollection* modules;
		bool haveWorkingSetLimits;
		intptr_t minWorkingSet;
		intptr_t maxWorkingSet;
		bool havePriorityClass;
		System::Diagnostics::ProcessPriorityClass priorityClass;
		System::Diagnostics::ProcessStartInfo* startInfo;
		bool watchForExit;
		bool watchingForExit;
		mscorlib::System::EventHandler* onExited;
		bool exited;
		int32_t exitCode;
		bool signaled;
		mscorlib::System::DateTime exitTime;
		bool haveExitTime;
		bool raisedOnExited;
		mscorlib::System::Threading::RegisteredWaitHandle* registeredWaitHandle;
		mscorlib::System::Threading::WaitHandle* waitHandle;
		System::ComponentModel::ISynchronizeInvoke* synchronizingObject;
		mscorlib::System::IO::StreamReader* standardOutput;
		mscorlib::System::IO::StreamWriter* standardInput;
		mscorlib::System::IO::StreamReader* standardError;
		mscorlib::System::OperatingSystem* operatingSystem;
		bool disposed;
		System::Diagnostics::Process_StreamReadMode outputStreamReadMode;
		System::Diagnostics::Process_StreamReadMode errorStreamReadMode;
		System::Diagnostics::Process_StreamReadMode inputStreamReadMode;
		System::Diagnostics::DataReceivedEventHandler* OutputDataReceived;
		System::Diagnostics::DataReceivedEventHandler* ErrorDataReceived;
		System::Diagnostics::AsyncStreamReader* output;
		System::Diagnostics::AsyncStreamReader* error;
		bool pendingOutputRead;
		bool pendingErrorRead;
		mscorlib::System::String* process_name;
		struct StaticFields
		{
			System::Diagnostics::ProcessModule* current_main_module;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* machineName, bool isRemoteMachine, int32_t processId, System::Diagnostics::ProcessInfo* processInfo);
		bool get_Associated();
		bool get_HasExited();
		System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject();
		void ReleaseProcessHandle(System::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
		void Dispose(bool disposing);
		void Close();
		void EnsureState(System::Diagnostics::Process_State state);
		static System::Diagnostics::Process* GetCurrentProcess();
		void OnExited();
		System::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access, bool throwIfExited);
		System::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access);
		void Refresh();
		void StopWatchingForExit();
		mscorlib::System::String* ToString();
		System::Diagnostics::ProcessModule* get_MainModule();
		IL2CPP::Array<System::Diagnostics::ProcessModule*>* GetModules_internal(intptr_t handle);
		IL2CPP::Array<System::Diagnostics::ProcessModule*>* GetModules_internal(System::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
		System::Diagnostics::ProcessModuleCollection* get_Modules();
		static mscorlib::System::String* ProcessName_internal(intptr_t handle);
		static mscorlib::System::String* ProcessName_internal(System::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
		mscorlib::System::String* get_ProcessName();
		void RaiseOnExited();
	};
}

