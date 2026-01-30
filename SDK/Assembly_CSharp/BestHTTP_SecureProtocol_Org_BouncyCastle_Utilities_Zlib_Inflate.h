#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct InfBlocks; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct Inflate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mode;
		int32_t method;
		IL2CPP::Array<int64_t>* was;
		int64_t need;
		int32_t marker;
		int32_t nowrap;
		int32_t wbits;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* blocks;
		struct StaticFields
		{
			int32_t MAX_WBITS;
			int32_t PRESET_DICT;
			int32_t Z_NO_FLUSH;
			int32_t Z_PARTIAL_FLUSH;
			int32_t Z_SYNC_FLUSH;
			int32_t Z_FULL_FLUSH;
			int32_t Z_FINISH;
			int32_t Z_DEFLATED;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
			int32_t METHOD;
			int32_t FLAG;
			int32_t DICT4;
			int32_t DICT3;
			int32_t DICT2;
			int32_t DICT1;
			int32_t DICT0;
			int32_t BLOCKS;
			int32_t CHECK4;
			int32_t CHECK3;
			int32_t CHECK2;
			int32_t CHECK1;
			int32_t DONE;
			int32_t BAD;
			IL2CPP::Array<uint8_t>* mark;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t inflateReset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		int32_t inflateEnd(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		int32_t inflateInit(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t w);
		int32_t inflate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t f);
		int32_t inflateSetDictionary(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, IL2CPP::Array<uint8_t>* dictionary, int32_t dictLength);
		int32_t inflateSync(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		int32_t inflateSyncPoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		void _ctor();
		static void _cctor();
	};
}

