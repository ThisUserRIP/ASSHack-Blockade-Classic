#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct InfTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* hn;
		IL2CPP::Array<int32_t>* v;
		IL2CPP::Array<int32_t>* c;
		IL2CPP::Array<int32_t>* r;
		IL2CPP::Array<int32_t>* u;
		IL2CPP::Array<int32_t>* x;
		struct StaticFields
		{
			int32_t MANY;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
			int32_t fixed_bl;
			int32_t fixed_bd;
			IL2CPP::Array<int32_t>* fixed_tl;
			IL2CPP::Array<int32_t>* fixed_td;
			IL2CPP::Array<int32_t>* cplens;
			IL2CPP::Array<int32_t>* cplext;
			IL2CPP::Array<int32_t>* cpdist;
			IL2CPP::Array<int32_t>* cpdext;
			int32_t BMAX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t huft_build(IL2CPP::Array<int32_t>* b, int32_t bindex, int32_t n, int32_t s, IL2CPP::Array<int32_t>* d, IL2CPP::Array<int32_t>* e, IL2CPP::Array<int32_t>* t, IL2CPP::Array<int32_t>* m, IL2CPP::Array<int32_t>* hp, IL2CPP::Array<int32_t>* hn, IL2CPP::Array<int32_t>* v);
		int32_t inflate_trees_bits(IL2CPP::Array<int32_t>* c, IL2CPP::Array<int32_t>* bb, IL2CPP::Array<int32_t>* tb, IL2CPP::Array<int32_t>* hp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		int32_t inflate_trees_dynamic(int32_t nl, int32_t nd, IL2CPP::Array<int32_t>* c, IL2CPP::Array<int32_t>* bl, IL2CPP::Array<int32_t>* bd, IL2CPP::Array<int32_t>* tl, IL2CPP::Array<int32_t>* td, IL2CPP::Array<int32_t>* hp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		static int32_t inflate_trees_fixed(IL2CPP::Array<int32_t>* bl, IL2CPP::Array<int32_t>* bd, IL2CPP::Array<IL2CPP::Array<int32_t>*>* tl, IL2CPP::Array<IL2CPP::Array<int32_t>*>* td, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* z);
		void initWorkArea(int32_t vsize);
		void _ctor();
		static void _cctor();
	};
}

