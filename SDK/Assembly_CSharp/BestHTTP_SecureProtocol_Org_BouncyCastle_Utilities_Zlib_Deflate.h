#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct Deflate_Config; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZTree; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct Deflate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm;
		int32_t status;
		IL2CPP::Array<uint8_t>* pending_buf;
		int32_t pending_buf_size;
		int32_t pending_out;
		int32_t pending;
		int32_t noheader;
		uint8_t data_type;
		uint8_t method;
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
		int32_t match_length;
		int32_t prev_match;
		int32_t match_available;
		int32_t strstart;
		int32_t match_start;
		int32_t lookahead;
		int32_t prev_length;
		int32_t max_chain_length;
		int32_t max_lazy_match;
		int32_t level;
		int32_t strategy;
		int32_t good_match;
		int32_t nice_match;
		IL2CPP::Array<int16_t>* dyn_ltree;
		IL2CPP::Array<int16_t>* dyn_dtree;
		IL2CPP::Array<int16_t>* bl_tree;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZTree* l_desc;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZTree* d_desc;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZTree* bl_desc;
		IL2CPP::Array<int16_t>* bl_count;
		IL2CPP::Array<int32_t>* heap;
		int32_t heap_len;
		int32_t heap_max;
		IL2CPP::Array<uint8_t>* depth;
		int32_t l_buf;
		int32_t lit_bufsize;
		int32_t last_lit;
		int32_t d_buf;
		int32_t opt_len;
		int32_t static_len;
		int32_t matches;
		int32_t last_eob_len;
		uint32_t bi_buf;
		int32_t bi_valid;
		struct StaticFields
		{
			int32_t MAX_MEM_LEVEL;
			int32_t Z_DEFAULT_COMPRESSION;
			int32_t MAX_WBITS;
			int32_t DEF_MEM_LEVEL;
			int32_t STORED;
			int32_t FAST;
			int32_t SLOW;
			IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>* config_table;
			IL2CPP::Array<mscorlib::System::String*>* z_errmsg;
			int32_t NeedMore;
			int32_t BlockDone;
			int32_t FinishStarted;
			int32_t FinishDone;
			int32_t PRESET_DICT;
			int32_t Z_FILTERED;
			int32_t Z_HUFFMAN_ONLY;
			int32_t Z_DEFAULT_STRATEGY;
			int32_t Z_NO_FLUSH;
			int32_t Z_PARTIAL_FLUSH;
			int32_t Z_SYNC_FLUSH;
			int32_t Z_FULL_FLUSH;
			int32_t Z_FINISH;
			int32_t Z_OK;
			int32_t Z_STREAM_END;
			int32_t Z_NEED_DICT;
			int32_t Z_ERRNO;
			int32_t Z_STREAM_ERROR;
			int32_t Z_DATA_ERROR;
			int32_t Z_MEM_ERROR;
			int32_t Z_BUF_ERROR;
			int32_t Z_VERSION_ERROR;
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
			int32_t REP_3_6;
			int32_t REPZ_3_10;
			int32_t REPZ_11_138;
			int32_t MIN_MATCH;
			int32_t MAX_MATCH;
			int32_t MIN_LOOKAHEAD;
			int32_t MAX_BITS;
			int32_t D_CODES;
			int32_t BL_CODES;
			int32_t LENGTH_CODES;
			int32_t LITERALS;
			int32_t L_CODES;
			int32_t HEAP_SIZE;
			int32_t END_BLOCK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void lm_init();
		void tr_init();
		void init_block();
		void pqdownheap(IL2CPP::Array<int16_t>* tree, int32_t k);
		static bool smaller(IL2CPP::Array<int16_t>* tree, int32_t n, int32_t m, IL2CPP::Array<uint8_t>* depth);
		void scan_tree(IL2CPP::Array<int16_t>* tree, int32_t max_code);
		int32_t build_bl_tree();
		void send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes);
		void send_tree(IL2CPP::Array<int16_t>* tree, int32_t max_code);
		void put_byte(IL2CPP::Array<uint8_t>* p, int32_t start, int32_t len);
		void put_byte(uint8_t c);
		void put_short(int32_t w);
		void putShortMSB(int32_t b);
		void send_code(int32_t c, IL2CPP::Array<int16_t>* tree);
		void send_bits(int32_t val, int32_t length);
		void _tr_align();
		bool _tr_tally(int32_t dist, int32_t lc);
		void compress_block(IL2CPP::Array<int16_t>* ltree, IL2CPP::Array<int16_t>* dtree);
		void set_data_type();
		void bi_flush();
		void bi_windup();
		void copy_block(int32_t buf, int32_t len, bool header);
		void flush_block_only(bool eof);
		int32_t deflate_stored(int32_t flush);
		void _tr_stored_block(int32_t buf, int32_t stored_len, bool eof);
		void _tr_flush_block(int32_t buf, int32_t stored_len, bool eof);
		void fill_window();
		int32_t deflate_fast(int32_t flush);
		int32_t deflate_slow(int32_t flush);
		int32_t longest_match(int32_t cur_match);
		int32_t deflateInit(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t bits);
		int32_t deflateInit(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level);
		int32_t deflateInit2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t method, int32_t windowBits, int32_t memLevel, int32_t strategy);
		int32_t deflateReset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm);
		int32_t deflateEnd();
		int32_t deflateParams(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t _level, int32_t _strategy);
		int32_t deflateSetDictionary(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, IL2CPP::Array<uint8_t>* dictionary, int32_t dictLength);
		int32_t deflate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t flush);
	};
}

