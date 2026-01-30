#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct Deflate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct Inflate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct Adler32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct ZStream : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* next_in;
		int32_t next_in_index;
		int32_t avail_in;
		int64_t total_in;
		IL2CPP::Array<uint8_t>* next_out;
		int32_t next_out_index;
		int32_t avail_out;
		int64_t total_out;
		mscorlib::System::String* msg;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate* dstate;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Inflate* istate;
		int32_t data_type;
		int64_t adler;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Adler32* _adler;
		struct StaticFields
		{
			int32_t MAX_WBITS;
			int32_t DEF_WBITS;
			int32_t Z_NO_FLUSH;
			int32_t Z_PARTIAL_FLUSH;
			int32_t Z_SYNC_FLUSH;
			int32_t Z_FULL_FLUSH;
			int32_t Z_FINISH;
			int32_t MAX_MEM_LEVEL;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t inflateInit();
		int32_t inflateInit(bool nowrap);
		int32_t inflateInit(int32_t w);
		int32_t inflateInit(int32_t w, bool nowrap);
		int32_t inflate(int32_t f);
		int32_t inflateEnd();
		int32_t inflateSync();
		int32_t inflateSetDictionary(IL2CPP::Array<uint8_t>* dictionary, int32_t dictLength);
		int32_t deflateInit(int32_t level);
		int32_t deflateInit(int32_t level, bool nowrap);
		int32_t deflateInit(int32_t level, int32_t bits);
		int32_t deflateInit(int32_t level, int32_t bits, bool nowrap);
		int32_t deflate(int32_t flush);
		int32_t deflateEnd();
		int32_t deflateParams(int32_t level, int32_t strategy);
		int32_t deflateSetDictionary(IL2CPP::Array<uint8_t>* dictionary, int32_t dictLength);
		void flush_pending();
		int32_t read_buf(IL2CPP::Array<uint8_t>* buf, int32_t start, int32_t size);
		void free();
		void _ctor();
	};
}

