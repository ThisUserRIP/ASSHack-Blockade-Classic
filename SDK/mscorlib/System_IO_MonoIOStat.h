#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_FileAttributes.h"
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::System::IO
{
	struct MonoIOStat
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::FileAttributes fileAttributes;
		int64_t Length;
		int64_t CreationTime;
		int64_t LastAccessTime;
		int64_t LastWriteTime;
	};
}

