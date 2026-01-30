#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_ConsoleKeyInfo.h"
namespace mscorlib::System { struct ConsoleKeyInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Handles.h"
namespace mscorlib::System { struct ConsoleScreenBufferInfo; };
namespace mscorlib::System { struct ConsoleScreenBufferInfo; };
namespace mscorlib::System { struct InputRecord; };
namespace mscorlib::System { struct InputRecord; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct WindowsConsoleDriver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t inputHandle;
		intptr_t outputHandle;
		int16_t defaultAttribute;
		void _ctor();
		mscorlib::System::ConsoleKeyInfo ReadKey(bool intercept);
		static bool IsModifierKey(int16_t virtualKeyCode);
		static intptr_t GetStdHandle(mscorlib::System::Handles handle);
		static bool GetConsoleScreenBufferInfo(intptr_t handle, mscorlib::System::ConsoleScreenBufferInfo& info);
		static bool ReadConsoleInput(intptr_t handle, mscorlib::System::InputRecord& record, int32_t length, int32_t& nread);
	};
}

