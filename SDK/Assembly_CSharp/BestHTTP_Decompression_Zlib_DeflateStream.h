#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZlibBaseStream; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_Decompression_Zlib_CompressionMode.h"
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BestHTTP_Decompression_Zlib_FlushType.h"
#include "BestHTTP_Decompression_Zlib_CompressionStrategy.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct DeflateStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibBaseStream* _baseStream;
		mscorlib::System::IO::Stream* _innerStream;
		bool _disposed;
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, bool leaveOpen);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, bool leaveOpen);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, bool leaveOpen, int32_t windowBits);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType get_FlushMode();
		void set_FlushMode(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType value);
		int32_t get_BufferSize();
		void set_BufferSize(int32_t value);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy get_Strategy();
		void set_Strategy(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy value);
		int64_t get_TotalIn();
		int64_t get_TotalOut();
		void Dispose(bool disposing);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		void Flush();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
	};
}

