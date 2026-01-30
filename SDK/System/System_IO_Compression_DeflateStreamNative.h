#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::IO::Compression { struct DeflateStreamNative_UnmanagedReadOrWrite; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System::IO::Compression { struct DeflateStreamNative_SafeDeflateStreamHandle; };
#include "..\mscorlib\System_Runtime_InteropServices_GCHandle.h"
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IO_Compression_CompressionMode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };

namespace System::System::IO::Compression
{
	struct DeflateStreamNative : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder;
		mscorlib::System::IO::Stream* base_stream;
		System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* z_stream;
		mscorlib::System::Runtime::InteropServices::GCHandle data;
		bool disposed;
		IL2CPP::Array<uint8_t>* io_buffer;
		void _ctor();
		static System::IO::Compression::DeflateStreamNative* Create(mscorlib::System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool gzip);
		void Finalize();
		void Dispose(bool disposing);
		void Flush();
		int32_t ReadZStream(intptr_t buffer, int32_t length);
		void WriteZStream(intptr_t buffer, int32_t length);
		static int32_t UnmanagedRead(intptr_t buffer, int32_t length, intptr_t data);
		int32_t UnmanagedRead(intptr_t buffer, int32_t length);
		static int32_t UnmanagedWrite(intptr_t buffer, int32_t length, intptr_t data);
		int32_t UnmanagedWrite(intptr_t buffer, int32_t length);
		static void CheckResult(int32_t result, mscorlib::System::String* where);
		static System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::DeflateStreamNative_UnmanagedReadOrWrite* feeder, intptr_t data);
		static int32_t CloseZStream(intptr_t stream);
		static int32_t Flush(System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream);
		static int32_t ReadZStream(System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, intptr_t buffer, int32_t length);
		static int32_t WriteZStream(System::IO::Compression::DeflateStreamNative_SafeDeflateStreamHandle* stream, intptr_t buffer, int32_t length);
	};
}

