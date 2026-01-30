#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct InfBlocks; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct InfCodes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mode;
		int32_t len;
		IL2CPP::Array<int32_t>* tree;
		int32_t tree_index;
		int32_t need;
		int32_t lit;
		int32_t get;
		int32_t dist;
		uint8_t lbits;
		uint8_t dbits;
		IL2CPP::Array<int32_t>* ltree;
		int32_t ltree_index;
		IL2CPP::Array<int32_t>* dtree;
		int32_t dtree_index;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* inflate_mask;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
			int32_t START;
			int32_t LEN;
			int32_t LENEXT;
			int32_t DIST;
			int32_t DISTEXT;
			int32_t COPY;
			int32_t LIT;
			int32_t WASH;
			int32_t END;
			int32_t BADCODE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void init(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		int32_t proc(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);
		void free(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		int32_t inflate_fast(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		static void _cctor();
	};
}

