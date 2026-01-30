#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Microsoft_Win32_Win32Native.h"
namespace mscorlib::Microsoft::Win32 { struct Win32Native; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Microsoft::Win32
{
	struct Win32Native_WIN32_FIND_DATA : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t dwFileAttributes;
		mscorlib::System::String* cFileName;
		void _ctor();
	};
}

