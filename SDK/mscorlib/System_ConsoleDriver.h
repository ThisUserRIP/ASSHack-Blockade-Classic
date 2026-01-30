#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct IConsoleDriver; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_ConsoleKeyInfo.h"
namespace mscorlib::System { struct ConsoleKeyInfo; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System
{
	struct ConsoleDriver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::IConsoleDriver* driver;
			bool is_console;
			bool called_isatty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static mscorlib::System::IConsoleDriver* CreateNullConsoleDriver();
		static mscorlib::System::IConsoleDriver* CreateWindowsConsoleDriver();
		static mscorlib::System::IConsoleDriver* CreateTermInfoDriver(mscorlib::System::String* term);
		static mscorlib::System::ConsoleKeyInfo ReadKey(bool intercept);
		static bool get_IsConsole();
		static bool Isatty(intptr_t handle);
		static int32_t InternalKeyAvailable(int32_t ms_timeout);
		static bool TtySetup(mscorlib::System::String* keypadXmit, mscorlib::System::String* teardown, IL2CPP::Array<uint8_t>& control_characters, int32_t& address);
		static bool SetEcho(bool wantEcho);
	};
}

