#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct InflateManager; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"
#include "BestHTTP_Decompression_Zlib_CompressionStrategy.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_Decompression_Zlib_CompressionMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_Decompression_Zlib_FlushType.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct ZlibCodec : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* InputBuffer;
		int32_t NextIn;
		int32_t AvailableBytesIn;
		int64_t TotalBytesIn;
		IL2CPP::Array<uint8_t>* OutputBuffer;
		int32_t NextOut;
		int32_t AvailableBytesOut;
		int64_t TotalBytesOut;
		mscorlib::System::String* Message;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager* dstate;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::InflateManager* istate;
		uint32_t _Adler32;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel CompressLevel;
		int32_t WindowBits;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy Strategy;
		int32_t get_Adler32();
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionMode mode);
		int32_t InitializeInflate();
		int32_t InitializeInflate(bool expectRfc1950Header);
		int32_t InitializeInflate(int32_t windowBits);
		int32_t InitializeInflate(int32_t windowBits, bool expectRfc1950Header);
		int32_t Inflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		int32_t EndInflate();
		int32_t SyncInflate();
		int32_t InitializeDeflate();
		int32_t InitializeDeflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level);
		int32_t InitializeDeflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, bool wantRfc1950Header);
		int32_t InitializeDeflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, int32_t bits);
		int32_t InitializeDeflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, int32_t bits, bool wantRfc1950Header);
		int32_t _InternalInitializeDeflate(bool wantRfc1950Header);
		int32_t Deflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		int32_t EndDeflate();
		void ResetDeflate();
		int32_t SetDeflateParams(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy strategy);
		int32_t SetDictionary(IL2CPP::Array<uint8_t>* dictionary);
		void flush_pending();
		int32_t read_buf(IL2CPP::Array<uint8_t>* buf, int32_t start, int32_t size);
	};
}

