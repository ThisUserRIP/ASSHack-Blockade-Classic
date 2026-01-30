#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Ionic_Zlib_InflateManager_InflateManagerMode.h"
namespace Ionic_Zip::Ionic::Zlib { struct ZlibCodec; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Ionic_Zip::Ionic::Zlib { struct InflateBlocks; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Ionic_Zlib_FlushType.h"

namespace Ionic_Zip::Ionic::Zlib
{
	struct InflateManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Ionic_Zip::Ionic::Zlib::InflateManager_InflateManagerMode mode;
		Ionic_Zip::Ionic::Zlib::ZlibCodec* _codec;
		int32_t method;
		uint32_t computedCheck;
		uint32_t expectedCheck;
		int32_t marker;
		bool _handleRfc1950HeaderBytes;
		int32_t wbits;
		Ionic_Zip::Ionic::Zlib::InflateBlocks* blocks;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* mark;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_HandleRfc1950HeaderBytes();
		void _ctor(bool expectRfc1950HeaderBytes);
		int32_t Reset();
		int32_t End();
		int32_t Initialize(Ionic_Zip::Ionic::Zlib::ZlibCodec* codec, int32_t w);
		int32_t Inflate(Ionic_Zip::Ionic::Zlib::FlushType flush);
		static void _cctor();
	};
}

