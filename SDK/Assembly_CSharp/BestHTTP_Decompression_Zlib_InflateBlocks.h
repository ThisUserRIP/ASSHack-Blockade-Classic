#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BestHTTP_Decompression_Zlib_InflateBlocks_InflateBlockMode.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct InflateCodes; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct InfTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct InflateBlocks : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::InflateBlocks_InflateBlockMode mode;
		int32_t left;
		int32_t table;
		int32_t index;
		IL2CPP::Array<int32_t>* blens;
		IL2CPP::Array<int32_t>* bb;
		IL2CPP::Array<int32_t>* tb;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::InflateCodes* codes;
		int32_t last;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* _codec;
		int32_t bitk;
		int32_t bitb;
		IL2CPP::Array<int32_t>* hufts;
		IL2CPP::Array<uint8_t>* window;
		int32_t end;
		int32_t readAt;
		int32_t writeAt;
		mscorlib::System::Object* checkfn;
		uint32_t check;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::InfTree* inftree;
		struct StaticFields
		{
			int32_t MANY;
			IL2CPP::Array<int32_t>* border;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* codec, mscorlib::System::Object* checkfn, int32_t w);
		uint32_t Reset();
		int32_t Process(int32_t r);
		void Free();
		void SetDictionary(IL2CPP::Array<uint8_t>* d, int32_t start, int32_t n);
		int32_t SyncPoint();
		int32_t Flush(int32_t r);
		static void _cctor();
	};
}

