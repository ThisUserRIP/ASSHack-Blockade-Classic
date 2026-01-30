#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Ionic_Zip::Ionic::Zlib { struct DeflateManager_CompressFunc; };
namespace mscorlib::System { struct String; };
namespace Ionic_Zip::Ionic::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Ionic_Zip::Ionic::Zlib { struct DeflateManager_Config; };
#include "Ionic_Zlib_CompressionLevel.h"
#include "Ionic_Zlib_CompressionStrategy.h"
namespace Ionic_Zip::Ionic::Zlib { struct Tree; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Ionic_Zlib_BlockState.h"
#include "Ionic_Zlib_FlushType.h"

namespace Ionic_Zip::Ionic::Zlib
{
	struct DeflateManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Ionic_Zip::Ionic::Zlib::DeflateManager_CompressFunc* DeflateFunction;
		Ionic_Zip::Ionic::Zlib::ZlibCodec* _codec;
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
		Ionic_Zip::Ionic::Zlib::DeflateManager_Config* config;
		int32_t match_length;
		int32_t prev_match;
		int32_t match_available;
		int32_t strstart;
		int32_t match_start;
		int32_t lookahead;
		int32_t prev_length;
		Ionic_Zip::Ionic::Zlib::CompressionLevel compressionLevel;
		Ionic_Zip::Ionic::Zlib::CompressionStrategy compressionStrategy;
		IL2CPP::Array<int16_t>* dyn_ltree;
		IL2CPP::Array<int16_t>* dyn_dtree;
		IL2CPP::Array<int16_t>* bl_tree;
		Ionic_Zip::Ionic::Zlib::Tree* treeLiterals;
		Ionic_Zip::Ionic::Zlib::Tree* treeDistances;
		Ionic_Zip::Ionic::Zlib::Tree* treeBitLengths;
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
		Ionic_Zip::Ionic::Zlib::BlockState DeflateNone(Ionic_Zip::Ionic::Zlib::FlushType flush);
		void _tr_stored_block(int32_t buf, int32_t stored_len, bool eof);
		void _tr_flush_block(int32_t buf, int32_t stored_len, bool eof);
		void _fillWindow();
		Ionic_Zip::Ionic::Zlib::BlockState DeflateFast(Ionic_Zip::Ionic::Zlib::FlushType flush);
		Ionic_Zip::Ionic::Zlib::BlockState DeflateSlow(Ionic_Zip::Ionic::Zlib::FlushType flush);
		int32_t longest_match(int32_t cur_match);
		bool get_WantRfc1950HeaderBytes();
		void set_WantRfc1950HeaderBytes(bool value);
		int32_t Initialize(Ionic_Zip::Ionic::Zlib::ZlibCodec* codec, Ionic_Zip::Ionic::Zlib::CompressionLevel level, int32_t bits, Ionic_Zip::Ionic::Zlib::CompressionStrategy compressionStrategy);
		int32_t Initialize(Ionic_Zip::Ionic::Zlib::ZlibCodec* codec, Ionic_Zip::Ionic::Zlib::CompressionLevel level, int32_t windowBits, int32_t memLevel, Ionic_Zip::Ionic::Zlib::CompressionStrategy strategy);
		void Reset();
		void SetDeflater();
		int32_t Deflate(Ionic_Zip::Ionic::Zlib::FlushType flush);
		static void _cctor();
	};
}

