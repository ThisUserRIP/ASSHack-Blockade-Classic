#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace Ionic_Zip::Ionic::Zlib { struct ZlibCodec; };
#include "Ionic_Zlib_ZlibBaseStream_StreamMode.h"
#include "Ionic_Zlib_FlushType.h"
#include "Ionic_Zlib_ZlibStreamFlavor.h"
#include "Ionic_Zlib_CompressionMode.h"
#include "Ionic_Zlib_CompressionLevel.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };
#include "Ionic_Zlib_CompressionStrategy.h"
namespace Ionic_Zip::Ionic::Crc { struct CRC32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Ionic_Zip::Ionic::Zlib
{
	struct ZlibBaseStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Ionic_Zip::Ionic::Zlib::ZlibCodec* _z;
		Ionic_Zip::Ionic::Zlib::ZlibBaseStream_StreamMode _streamMode;
		Ionic_Zip::Ionic::Zlib::FlushType _flushMode;
		Ionic_Zip::Ionic::Zlib::ZlibStreamFlavor _flavor;
		Ionic_Zip::Ionic::Zlib::CompressionMode _compressionMode;
		Ionic_Zip::Ionic::Zlib::CompressionLevel _level;
		bool _leaveOpen;
		IL2CPP::Array<uint8_t>* _workingBuffer;
		int32_t _bufferSize;
		IL2CPP::Array<uint8_t>* _buf1;
		mscorlib::System::IO::Stream* _stream;
		Ionic_Zip::Ionic::Zlib::CompressionStrategy Strategy;
		Ionic_Zip::Ionic::Crc::CRC32* crc;
		mscorlib::System::String* _GzipFileName;
		mscorlib::System::String* _GzipComment;
		mscorlib::System::DateTime _GzipMtime;
		int32_t _gzipHeaderByteCount;
		bool nomoreinput;
		int32_t get_Crc32();
		void _ctor(mscorlib::System::IO::Stream* stream, Ionic_Zip::Ionic::Zlib::CompressionMode compressionMode, Ionic_Zip::Ionic::Zlib::CompressionLevel level, Ionic_Zip::Ionic::Zlib::ZlibStreamFlavor flavor, bool leaveOpen);
		bool get__wantCompress();
		Ionic_Zip::Ionic::Zlib::ZlibCodec* get_z();
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
		static IL2CPP::Array<uint8_t>* UncompressBuffer(IL2CPP::Array<uint8_t>* compressed, mscorlib::System::IO::Stream* decompressor);
	};
}

