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
namespace Ionic_Zip::Ionic::Zlib { struct InflateBlocks; };
namespace Ionic_Zip::Ionic::Zlib { struct ZlibCodec; };

namespace Ionic_Zip::Ionic::Zlib
{
	struct InflateCodes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mode;
		int32_t len;
		IL2CPP::Array<int32_t>* tree;
		int32_t tree_index;
		int32_t need;
		int32_t lit;
		int32_t bitsToGet;
		int32_t dist;
		uint8_t lbits;
		uint8_t dbits;
		IL2CPP::Array<int32_t>* ltree;
		int32_t ltree_index;
		IL2CPP::Array<int32_t>* dtree;
		int32_t dtree_index;
		void _ctor();
		void Init(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index);
		int32_t Process(Ionic_Zip::Ionic::Zlib::InflateBlocks* blocks, int32_t r);
		int32_t InflateFast(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index, Ionic_Zip::Ionic::Zlib::InflateBlocks* s, Ionic_Zip::Ionic::Zlib::ZlibCodec* z);
	};
}

