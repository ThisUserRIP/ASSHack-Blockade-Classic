#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct StaticTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager; };

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct ZTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int16_t>* dyn_tree;
		int32_t max_code;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::StaticTree* staticTree;
		struct StaticFields
		{
			int32_t HEAP_SIZE;
			IL2CPP::Array<int32_t>* ExtraLengthBits;
			IL2CPP::Array<int32_t>* ExtraDistanceBits;
			IL2CPP::Array<int32_t>* extra_blbits;
			IL2CPP::Array<int8_t>* bl_order;
			int32_t Buf_size;
			IL2CPP::Array<int8_t>* _dist_code;
			IL2CPP::Array<int8_t>* LengthCode;
			IL2CPP::Array<int32_t>* LengthBase;
			IL2CPP::Array<int32_t>* DistanceBase;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t DistanceCode(int32_t dist);
		void gen_bitlen(Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager* s);
		void build_tree(Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager* s);
		static void gen_codes(IL2CPP::Array<int16_t>* tree, int32_t max_code, IL2CPP::Array<int16_t>* bl_count);
		static int32_t bi_reverse(int32_t code, int32_t len);
		void _ctor();
		static void _cctor();
	};
}

