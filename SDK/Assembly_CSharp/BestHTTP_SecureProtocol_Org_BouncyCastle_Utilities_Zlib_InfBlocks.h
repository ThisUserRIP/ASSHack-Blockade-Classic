#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct InfCodes; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct InfTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct InfBlocks : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mode;
		int32_t left;
		int32_t table;
		int32_t index;
		IL2CPP::Array<int32_t>* blens;
		IL2CPP::Array<int32_t>* bb;
		IL2CPP::Array<int32_t>* tb;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfCodes* codes;
		int32_t last;
		int32_t bitk;
		int32_t bitb;
		IL2CPP::Array<int32_t>* hufts;
		IL2CPP::Array<uint8_t>* window;
		int32_t end;
		int32_t read;
		int32_t write;
		mscorlib::System::Object* checkfn;
		int64_t check;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfTree* inftree;
		struct StaticFields
		{
			int32_t MANY;
			IL2CPP::Array<int32_t>* inflate_mask;
			IL2CPP::Array<int32_t>* border;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
			int32_t TYPE;
			int32_t LENS;
			int32_t STORED;
			int32_t TABLE;
			int32_t BTREE;
			int32_t DTREE;
			int32_t CODES;
			int32_t DRY;
			int32_t DONE;
			int32_t BAD;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, mscorlib::System::Object* checkfn, int32_t w);
		void reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, IL2CPP::Array<int64_t>* c);
		int32_t proc(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);
		void free(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		void set_dictionary(IL2CPP::Array<uint8_t>* d, int32_t start, int32_t n);
		int32_t sync_point();
		int32_t inflate_flush(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);
		static void _cctor();
	};
}

