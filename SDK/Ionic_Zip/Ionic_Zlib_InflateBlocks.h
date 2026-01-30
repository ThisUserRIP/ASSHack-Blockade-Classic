#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Ionic_Zlib_InflateBlocks_InflateBlockMode.h"
namespace Ionic_Zip::Ionic::Zlib { struct InflateCodes; };
namespace Ionic_Zip::Ionic::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Ionic_Zip::Ionic::Zlib { struct InfTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Ionic_Zip::Ionic::Zlib
{
	struct InflateBlocks : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Ionic_Zip::Ionic::Zlib::InflateBlocks_InflateBlockMode mode;
		int32_t left;
		int32_t table;
		int32_t index;
		IL2CPP::Array<int32_t>* blens;
		IL2CPP::Array<int32_t>* bb;
		IL2CPP::Array<int32_t>* tb;
		Ionic_Zip::Ionic::Zlib::InflateCodes* codes;
		int32_t last;
		Ionic_Zip::Ionic::Zlib::ZlibCodec* _codec;
		int32_t bitk;
		int32_t bitb;
		IL2CPP::Array<int32_t>* hufts;
		IL2CPP::Array<uint8_t>* window;
		int32_t end;
		int32_t readAt;
		int32_t writeAt;
		mscorlib::System::Object* checkfn;
		uint32_t check;
		Ionic_Zip::Ionic::Zlib::InfTree* inftree;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* border;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Ionic_Zip::Ionic::Zlib::ZlibCodec* codec, mscorlib::System::Object* checkfn, int32_t w);
		uint32_t Reset();
		int32_t Process(int32_t r);
		void Free();
		int32_t Flush(int32_t r);
		static void _cctor();
	};
}

