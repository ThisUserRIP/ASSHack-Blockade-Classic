#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace Ionic_Zip::Ionic::Zlib { struct DeflateManager; };
namespace Ionic_Zip::Ionic::Zlib { struct InflateManager; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "Ionic_Zlib_CompressionLevel.h"
#include "Ionic_Zlib_CompressionStrategy.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Ionic_Zlib_FlushType.h"

namespace Ionic_Zip::Ionic::Zlib
{
	struct ZlibCodec : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* InputBuffer;
		int32_t NextIn;
		int32_t AvailableBytesIn;
		int64_t TotalBytesIn;
		IL2CPP::Array<uint8_t>* OutputBuffer;
		int32_t NextOut;
		int32_t AvailableBytesOut;
		int64_t TotalBytesOut;
		mscorlib::System::String* Message;
		Ionic_Zip::Ionic::Zlib::DeflateManager* dstate;
		Ionic_Zip::Ionic::Zlib::InflateManager* istate;
		uint32_t _Adler32;
		Ionic_Zip::Ionic::Zlib::CompressionLevel CompressLevel;
		int32_t WindowBits;
		Ionic_Zip::Ionic::Zlib::CompressionStrategy Strategy;
		void _ctor();
		int32_t InitializeInflate(bool expectRfc1950Header);
		int32_t InitializeInflate(int32_t windowBits, bool expectRfc1950Header);
		int32_t Inflate(Ionic_Zip::Ionic::Zlib::FlushType flush);
		int32_t EndInflate();
		int32_t InitializeDeflate(Ionic_Zip::Ionic::Zlib::CompressionLevel level, bool wantRfc1950Header);
		int32_t _InternalInitializeDeflate(bool wantRfc1950Header);
		int32_t Deflate(Ionic_Zip::Ionic::Zlib::FlushType flush);
		int32_t EndDeflate();
		void flush_pending();
		int32_t read_buf(IL2CPP::Array<uint8_t>* buf, int32_t start, int32_t size);
	};
}

