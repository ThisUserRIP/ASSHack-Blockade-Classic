#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MulticastDelegate.h"
#include "System_Console_WindowsConsole.h"
namespace mscorlib::System { struct Console_WindowsConsole; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace mscorlib::System
{
	struct Console_WindowsConsole_WindowsCancelHandler : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(int32_t keyCode);
		mscorlib::System::IAsyncResult* BeginInvoke(int32_t keyCode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		bool EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

