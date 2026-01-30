#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZlibCodec; };
#include "BestHTTP_Decompression_Zlib_ZlibBaseStream_StreamMode.h"
#include "BestHTTP_Decompression_Zlib_FlushType.h"
#include "BestHTTP_Decompression_Zlib_ZlibStreamFlavor.h"
#include "BestHTTP_Decompression_Zlib_CompressionMode.h"
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };
#include "BestHTTP_Decompression_Zlib_CompressionStrategy.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Crc { struct CRC32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct ZlibBaseStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* _z;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibBaseStream_StreamMode _streamMode;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType _flushMode;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibStreamFlavor _flavor;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode _compressionMode;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel _level;
		bool _leaveOpen;
		IL2CPP::Array<uint8_t>* _workingBuffer;
		int32_t _bufferSize;
		int32_t windowBitsMax;
		IL2CPP::Array<uint8_t>* _buf1;
		mscorlib::System::IO::Stream* _stream;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy Strategy;
		Assembly_CSharp::BestHTTP::Decompression::Crc::CRC32* crc;
		mscorlib::System::String* _GzipFileName;
		mscorlib::System::String* _GzipComment;
		mscorlib::System::DateTime _GzipMtime;
		int32_t _gzipHeaderByteCount;
		bool nomoreinput;
		int32_t get_Crc32();
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode compressionMode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibStreamFlavor flavor, bool leaveOpen);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode compressionMode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibStreamFlavor flavor, bool leaveOpen, int32_t windowBits);
		bool get__wantCompress();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* get_z();
		IL2CPP::Array<uint8_t>* get_workingBuffer();
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void finish();
		void end();
		void Close();
		void Flush();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		mscorlib::System::String* ReadZeroTerminatedString();
		int32_t _ReadAndValidateGzipHeader();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
	};
}

