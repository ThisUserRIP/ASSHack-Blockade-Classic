#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "BestHTTP_Decompression_Zlib_InflateManager_InflateManagerMode.h"
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::Decompression::Zlib { struct InflateBlocks; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_Decompression_Zlib_FlushType.h"

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct InflateManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Decompression::Zlib::InflateManager_InflateManagerMode mode;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* _codec;
		int32_t method;
		uint32_t computedCheck;
		uint32_t expectedCheck;
		int32_t marker;
		bool _handleRfc1950HeaderBytes;
		int32_t wbits;
		Assembly_CSharp::BestHTTP::Decompression::Zlib::InflateBlocks* blocks;
		struct StaticFields
		{
			int32_t PRESET_DICT;
			int32_t Z_DEFLATED;
			IL2CPP::Array<uint8_t>* mark;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_HandleRfc1950HeaderBytes();
		void set_HandleRfc1950HeaderBytes(bool value);
		void _ctor();
		void _ctor(bool expectRfc1950HeaderBytes);
		int32_t Reset();
		int32_t End();
		int32_t Initialize(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* codec, int32_t w);
		int32_t Inflate(Assembly_CSharp::BestHTTP::Decompression::Zlib::FlushType flush);
		int32_t SetDictionary(IL2CPP::Array<uint8_t>* dictionary);
		int32_t Sync();
		int32_t SyncPoint(Assembly_CSharp::BestHTTP::Decompression::Zlib::ZlibCodec* z);
		static void _cctor();
	};
}

