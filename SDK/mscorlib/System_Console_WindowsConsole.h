#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Console.h"
namespace mscorlib::System { struct Console; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Console_WindowsConsole_WindowsCancelHandler; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Console_WindowsConsole : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool ctrlHandlerAdded;
			mscorlib::System::Console_WindowsConsole_WindowsCancelHandler* cancelHandler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t GetConsoleCP();
		static int32_t GetConsoleOutputCP();
		static bool DoWindowsConsoleCancelEvent(int32_t keyCode);
		static int32_t GetInputCodePage();
		static int32_t GetOutputCodePage();
		static void _cctor();
	};
}

