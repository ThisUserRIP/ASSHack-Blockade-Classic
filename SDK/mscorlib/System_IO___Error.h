#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::IO
{
	struct __Error : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void EndOfFile();
		static void FileNotOpen();
		static void StreamIsClosed();
		static void MemoryStreamNotExpandable();
		static void ReaderClosed();
		static void ReadNotSupported();
		static void SeekNotSupported();
		static void WrongAsyncResult();
		static void EndReadCalledTwice();
		static void EndWriteCalledTwice();
		static mscorlib::System::String* GetDisplayablePath(mscorlib::System::String* path, bool isInvalidPath);
		static void WinIOError(int32_t errorCode, mscorlib::System::String* maybeFullPath);
		static void WriteNotSupported();
		static void WriterClosed();
	};
}

