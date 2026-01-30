#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager_CompressFunc; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct DeflateManager_Config; };
#include "BestHTTP_Decompression_Zlib_CompressionLevel.h"
#include "BestHTTP_Decompression_Zlib_CompressionStrategy.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZTree; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_Decompression_Zlib_BlockState.h"
#include "BestHTTP_Decompression_Zlib_FlushType.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct DeflateManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_CompressFunc* DeflateFunction;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* _codec;
		int32_t status;
		IL2CPP::Array<uint8_t>* pending;
		int32_t nextPending;
		int32_t pendingCount;
		int8_t data_type;
		int32_t last_flush;
		int32_t w_size;
		int32_t w_bits;
		int32_t w_mask;
		IL2CPP::Array<uint8_t>* window;
		int32_t window_size;
		IL2CPP::Array<int16_t>* prev;
		IL2CPP::Array<int16_t>* head;
		int32_t ins_h;
		int32_t hash_size;
		int32_t hash_bits;
		int32_t hash_mask;
		int32_t hash_shift;
		int32_t block_start;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::DeflateManager_Config* config;
		int32_t match_length;
		int32_t prev_match;
		int32_t match_available;
		int32_t strstart;
		int32_t match_start;
		int32_t lookahead;
		int32_t prev_length;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel compressionLevel;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy compressionStrategy;
		IL2CPP::Array<int16_t>* dyn_ltree;
		IL2CPP::Array<int16_t>* dyn_dtree;
		IL2CPP::Array<int16_t>* bl_tree;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZTree* treeLiterals;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZTree* treeDistances;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZTree* treeBitLengths;
		IL2CPP::Array<int16_t>* bl_count;
		IL2CPP::Array<int32_t>* heap;
		int32_t heap_len;
		int32_t heap_max;
		IL2CPP::Array<int8_t>* depth;
		int32_t _lengthOffset;
		int32_t lit_bufsize;
		int32_t last_lit;
		int32_t _distanceOffset;
		int32_t opt_len;
		int32_t static_len;
		int32_t matches;
		int32_t last_eob_len;
		int16_t bi_buf;
		int32_t bi_valid;
		bool Rfc1950BytesEmitted;
		bool _WantRfc1950HeaderBytes;
		struct StaticFields
		{
			int32_t MEM_LEVEL_MAX;
			int32_t MEM_LEVEL_DEFAULT;
			IL2CPP::Array<mscorlib::System::String*>* _ErrorMessage;
			int32_t PRESET_DICT;
			int32_t INIT_STATE;
			int32_t BUSY_STATE;
			int32_t FINISH_STATE;
			int32_t Z_DEFLATED;
			int32_t STORED_BLOCK;
			int32_t STATIC_TREES;
			int32_t DYN_TREES;
			int32_t Z_BINARY;
			int32_t Z_ASCII;
			int32_t Z_UNKNOWN;
			int32_t Buf_size;
			int32_t MIN_MATCH;
			int32_t MAX_MATCH;
			int32_t MIN_LOOKAHEAD;
			int32_t HEAP_SIZE;
			int32_t END_BLOCK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _InitializeLazyMatch();
		void _InitializeTreeData();
		void _InitializeBlocks();
		void pqdownheap(IL2CPP::Array<int16_t>* tree, int32_t k);
		static bool _IsSmaller(IL2CPP::Array<int16_t>* tree, int32_t n, int32_t m, IL2CPP::Array<int8_t>* depth);
		void scan_tree(IL2CPP::Array<int16_t>* tree, int32_t max_code);
		int32_t build_bl_tree();
		void send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes);
		void send_tree(IL2CPP::Array<int16_t>* tree, int32_t max_code);
		void put_bytes(IL2CPP::Array<uint8_t>* p, int32_t start, int32_t len);
		void send_code(int32_t c, IL2CPP::Array<int16_t>* tree);
		void send_bits(int32_t value, int32_t length);
		void _tr_align();
		bool _tr_tally(int32_t dist, int32_t lc);
		void send_compressed_block(IL2CPP::Array<int16_t>* ltree, IL2CPP::Array<int16_t>* dtree);
		void set_data_type();
		void bi_flush();
		void bi_windup();
		void copy_block(int32_t buf, int32_t len, bool header);
		void flush_block_only(bool eof);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::BlockState DeflateNone(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		void _tr_stored_block(int32_t buf, int32_t stored_len, bool eof);
		void _tr_flush_block(int32_t buf, int32_t stored_len, bool eof);
		void _fillWindow();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::BlockState DeflateFast(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		Assembly_CSharp::BestHTTP::Decompression::Zlib::BlockState DeflateSlow(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		int32_t longest_match(int32_t cur_match);
		bool get_WantRfc1950HeaderBytes();
		void set_WantRfc1950HeaderBytes(bool value);
		int32_t Initialize(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* codec, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level);
		int32_t Initialize(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* codec, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, int32_t bits);
		int32_t Initialize(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* codec, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, int32_t bits, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy compressionStrategy);
		int32_t Initialize(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* codec, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, int32_t windowBits, int32_t memLevel, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy strategy);
		void Reset();
		int32_t End();
		void SetDeflater();
		int32_t SetParams(Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionLevel level, Assembly_CSharp::BestHTTP::Decompression::Zlib::CompressionStrategy strategy);
		int32_t SetDictionary(IL2CPP::Array<uint8_t>* dictionary);
		int32_t Deflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		static void _cctor();
	};
}

