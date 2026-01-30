#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::Microsoft::Win32 { struct Win32Native_WIN32_FIND_DATA; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct SearchResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* fullPath;
		mscorlib::System::String* userPath;
		mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData;
		void _ctor(mscorlib::System::String* fullPath, mscorlib::System::String* userPath, mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* findData);
		mscorlib::System::String* get_UserPath();
		mscorlib::Microsoft::Win32::Win32Native_WIN32_FIND_DATA* get_FindData();
	};
}

