#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct StaticTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct Deflate; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct ZTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int16_t>* dyn_tree;
		int32_t max_code;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* stat_desc;
		struct StaticFields
		{
			int32_t MAX_BITS;
			int32_t BL_CODES;
			int32_t D_CODES;
			int32_t LITERALS;
			int32_t LENGTH_CODES;
			int32_t L_CODES;
			int32_t HEAP_SIZE;
			int32_t MAX_BL_BITS;
			int32_t END_BLOCK;
			int32_t REP_3_6;
			int32_t REPZ_3_10;
			int32_t REPZ_11_138;
			IL2CPP::Array<int32_t>* extra_lbits;
			IL2CPP::Array<int32_t>* extra_dbits;
			IL2CPP::Array<int32_t>* extra_blbits;
			IL2CPP::Array<uint8_t>* bl_order;
			int32_t Buf_size;
			int32_t DIST_CODE_LEN;
			IL2CPP::Array<uint8_t>* _dist_code;
			IL2CPP::Array<uint8_t>* _length_code;
			IL2CPP::Array<int32_t>* base_length;
			IL2CPP::Array<int32_t>* base_dist;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t d_code(int32_t dist);
		void gen_bitlen(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate* s);
		void build_tree(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate* s);
		static void gen_codes(IL2CPP::Array<int16_t>* tree, int32_t max_code, IL2CPP::Array<int16_t>* bl_count);
		static int32_t bi_reverse(int32_t code, int32_t len);
		void _ctor();
		static void _cctor();
	};
}

