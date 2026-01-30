#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct OperatingSystem; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_PlatformID.h"
namespace mscorlib::System { struct Version; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Environment_SpecialFolder.h"
#include "System_Environment_SpecialFolderOption.h"
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System
{
	struct Environment : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t mono_corlib_version;
			mscorlib::System::String* nl;
			mscorlib::System::OperatingSystem* os;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetResourceString(mscorlib::System::String* key);
		static mscorlib::System::String* GetResourceString(mscorlib::System::String* key, IL2CPP::Array<mscorlib::System::Object*>* values);
		static mscorlib::System::String* GetResourceStringEncodingName(int32_t codePage);
		static int32_t get_CurrentManagedThreadId();
		static bool get_HasShutdownStarted();
		static mscorlib::System::String* get_MachineName();
		static mscorlib::System::String* GetNewLine();
		static mscorlib::System::String* get_NewLine();
		static mscorlib::System::PlatformID get_Platform();
		static mscorlib::System::String* GetOSVersionString();
		static mscorlib::System::OperatingSystem* get_OSVersion();
		static mscorlib::System::Version* CreateVersionFromString(mscorlib::System::String* info);
		static mscorlib::System::String* get_StackTrace();
		static int32_t get_TickCount();
		static mscorlib::System::String* get_UserDomainName();
		static mscorlib::System::String* get_UserName();
		static void Exit(int32_t exitCode);
		static mscorlib::System::String* ExpandEnvironmentVariables(mscorlib::System::String* name);
		static IL2CPP::Array<mscorlib::System::String*>* GetCommandLineArgs();
		static mscorlib::System::String* internalGetEnvironmentVariable_native(intptr_t variable);
		static mscorlib::System::String* internalGetEnvironmentVariable(mscorlib::System::String* variable);
		static mscorlib::System::String* GetEnvironmentVariable(mscorlib::System::String* variable);
		static mscorlib::System::Collections::Hashtable* GetEnvironmentVariablesNoCase();
		static mscorlib::System::String* GetFolderPath(mscorlib::System::Environment_SpecialFolder folder);
		static mscorlib::System::String* GetWindowsFolderPath(int32_t folder);
		static mscorlib::System::String* GetFolderPath(mscorlib::System::Environment_SpecialFolder folder, mscorlib::System::Environment_SpecialFolderOption option);
		static mscorlib::System::String* ReadXdgUserDir(mscorlib::System::String* config_dir, mscorlib::System::String* home_dir, mscorlib::System::String* key, mscorlib::System::String* fallback);
		static mscorlib::System::String* UnixGetFolderPath(mscorlib::System::Environment_SpecialFolder folder, mscorlib::System::Environment_SpecialFolderOption option);
		static void SetEnvironmentVariable(mscorlib::System::String* variable, mscorlib::System::String* value);
		static void InternalSetEnvironmentVariable(mscorlib::System::String* variable, mscorlib::System::String* value);
		static void FailFast(mscorlib::System::String* message);
		static void FailFast(mscorlib::System::String* message, mscorlib::System::Exception* exception);
		static bool get_Is64BitProcess();
		static int32_t get_ProcessorCount();
		static bool get_IsRunningOnWindows();
		static IL2CPP::Array<mscorlib::System::String*>* GetEnvironmentVariableNames();
		static mscorlib::System::String* GetMachineConfigPath();
		static mscorlib::System::String* internalGetHome();
		static int32_t GetPageSize();
		static bool get_IsUnix();
		static mscorlib::System::String* GetStackTrace(mscorlib::System::Exception* e, bool needFileInfo);
	};
}

