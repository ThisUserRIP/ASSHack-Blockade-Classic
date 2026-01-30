#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZlibBaseStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "BestHTTP_Decompression_Zlib_CompressionMode.h"
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"
#include "BestHTTP_Decompression_Zlib_FlushType.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct GZipStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> LastModified;
		int32_t _headerByteCount;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibBaseStream* _baseStream;
		bool _disposed;
		bool _firstReadDone;
		mscorlib::System::String* _FileName;
		mscorlib::System::String* _Comment;
		int32_t _Crc32;
		struct StaticFields
		{
			mscorlib::System::DateTime _unixEpoch;
			mscorlib::System::Text::Encoding* iso8859dash1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_Comment();
		void set_Comment(mscorlib::System::String* value);
		mscorlib::System::String* get_FileName();
		void set_FileName(mscorlib::System::String* value);
		int32_t get_Crc32();
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, bool leaveOpen);
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, bool leaveOpen);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType get_FlushMode();
		void set_FlushMode(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType value);
		int32_t get_BufferSize();
		void set_BufferSize(int32_t value);
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
		int32_t EmitHeader();
		static void _cctor();
	};
}

