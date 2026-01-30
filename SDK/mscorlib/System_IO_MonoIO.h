#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Exception; };
#include "System_IO_MonoIOError.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "System_IO_FileAttributes.h"
#include "System_IO_MonoFileType.h"
namespace mscorlib::System::Runtime::InteropServices { struct SafeHandle; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct MonoIOStat; };
namespace mscorlib::System::IO { struct MonoIOStat; };
#include "System_IO_FileMode.h"
#include "System_IO_FileAccess.h"
#include "System_IO_FileShare.h"
#include "System_IO_FileOptions.h"
#include "System_Int32.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_IO_SeekOrigin.h"
#include "System_Char.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct MonoIO : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			intptr_t InvalidHandle;
			bool dump_handles;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Exception* GetException(mscorlib::System::IO::MonoIOError error);
		static mscorlib::System::Exception* GetException(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError error);
		static bool CreateDirectory(wchar_t* path, mscorlib::System::IO::MonoIOError& error);
		static bool CreateDirectory(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static bool RemoveDirectory(wchar_t* path, mscorlib::System::IO::MonoIOError& error);
		static bool RemoveDirectory(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static mscorlib::System::String* GetCurrentDirectory(mscorlib::System::IO::MonoIOError& error);
		static bool CopyFile(wchar_t* path, wchar_t* dest, bool overwrite, mscorlib::System::IO::MonoIOError& error);
		static bool CopyFile(mscorlib::System::String* path, mscorlib::System::String* dest, bool overwrite, mscorlib::System::IO::MonoIOError& error);
		static bool DeleteFile(wchar_t* path, mscorlib::System::IO::MonoIOError& error);
		static bool DeleteFile(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static mscorlib::System::IO::FileAttributes GetFileAttributes(wchar_t* path, mscorlib::System::IO::MonoIOError& error);
		static mscorlib::System::IO::FileAttributes GetFileAttributes(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static bool SetFileAttributes(wchar_t* path, mscorlib::System::IO::FileAttributes attrs, mscorlib::System::IO::MonoIOError& error);
		static bool SetFileAttributes(mscorlib::System::String* path, mscorlib::System::IO::FileAttributes attrs, mscorlib::System::IO::MonoIOError& error);
		static mscorlib::System::IO::MonoFileType GetFileType(intptr_t handle, mscorlib::System::IO::MonoIOError& error);
		static mscorlib::System::IO::MonoFileType GetFileType(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, mscorlib::System::IO::MonoIOError& error);
		static intptr_t FindFirstFile(wchar_t* pathWithPattern, mscorlib::System::String& fileName, int32_t& fileAttr, int32_t& error);
		static intptr_t FindFirstFile(mscorlib::System::String* pathWithPattern, mscorlib::System::String& fileName, int32_t& fileAttr, int32_t& error);
		static bool FindNextFile(intptr_t hnd, mscorlib::System::String& fileName, int32_t& fileAttr, int32_t& error);
		static bool FindCloseFile(intptr_t hnd);
		static bool Exists(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static bool ExistsFile(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static bool ExistsDirectory(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static bool ExistsSymlink(mscorlib::System::String* path, mscorlib::System::IO::MonoIOError& error);
		static bool GetFileStat(wchar_t* path, mscorlib::System::IO::MonoIOStat& stat, mscorlib::System::IO::MonoIOError& error);
		static bool GetFileStat(mscorlib::System::String* path, mscorlib::System::IO::MonoIOStat& stat, mscorlib::System::IO::MonoIOError& error);
		static intptr_t Open(wchar_t* filename, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, mscorlib::System::IO::FileOptions options, mscorlib::System::IO::MonoIOError& error);
		static intptr_t Open(mscorlib::System::String* filename, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, mscorlib::System::IO::FileOptions options, mscorlib::System::IO::MonoIOError& error);
		static bool Close(intptr_t handle, mscorlib::System::IO::MonoIOError& error);
		static int32_t Read(intptr_t handle, IL2CPP::Array<uint8_t>* dest, int32_t dest_offset, int32_t count, mscorlib::System::IO::MonoIOError& error);
		static int32_t Read(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, IL2CPP::Array<uint8_t>* dest, int32_t dest_offset, int32_t count, mscorlib::System::IO::MonoIOError& error);
		static int32_t Write(intptr_t handle, IL2CPP::Array<uint8_t>* src, int32_t src_offset, int32_t count, mscorlib::System::IO::MonoIOError& error);
		static int32_t Write(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, IL2CPP::Array<uint8_t>* src, int32_t src_offset, int32_t count, mscorlib::System::IO::MonoIOError& error);
		static int64_t Seek(intptr_t handle, int64_t offset, mscorlib::System::IO::SeekOrigin origin, mscorlib::System::IO::MonoIOError& error);
		static int64_t Seek(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, mscorlib::System::IO::SeekOrigin origin, mscorlib::System::IO::MonoIOError& error);
		static int64_t GetLength(intptr_t handle, mscorlib::System::IO::MonoIOError& error);
		static int64_t GetLength(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, mscorlib::System::IO::MonoIOError& error);
		static bool SetLength(intptr_t handle, int64_t length, mscorlib::System::IO::MonoIOError& error);
		static bool SetLength(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t length, mscorlib::System::IO::MonoIOError& error);
		static intptr_t get_ConsoleOutput();
		static intptr_t get_ConsoleInput();
		static intptr_t get_ConsoleError();
		static bool DuplicateHandle(intptr_t source_process_handle, intptr_t source_handle, intptr_t target_process_handle, intptr_t& target_handle, int32_t access, int32_t inherit, int32_t options, mscorlib::System::IO::MonoIOError& error);
		static wchar_t get_VolumeSeparatorChar();
		static wchar_t get_DirectorySeparatorChar();
		static wchar_t get_AltDirectorySeparatorChar();
		static wchar_t get_PathSeparator();
		static void DumpHandles();
		static bool RemapPath(mscorlib::System::String* path, mscorlib::System::String& newPath);
		static void _cctor();
	};
}

