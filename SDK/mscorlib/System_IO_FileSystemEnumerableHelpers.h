#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Microsoft::Win32 { struct Win32Native_WIN32_FIND_DATA; };

namespace mscorlib::System::IO
{
	struct FileSystemEnumerableHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool IsDir(mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* data);
		static bool IsFile(mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* data);
	};
}

