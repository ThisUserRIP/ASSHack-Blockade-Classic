#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Ionic_Zip::Ionic::Crc
{
	struct CRC32 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t dwPolynomial;
		int64_t _TotalBytesRead;
		bool reverseBits;
		IL2CPP::Array<uint32_t>* crc32Table;
		uint32_t _register;
		int64_t get_TotalBytesRead();
		int32_t get_Crc32Result();
		void SlurpBlock(IL2CPP::Array<uint8_t>* block, int32_t offset, int32_t count);
		static uint32_t ReverseBits(uint32_t data);
		static uint8_t ReverseBits(uint8_t data);
		void GenerateLookupTable();
		void _ctor();
		void _ctor(bool reverseBits);
		void _ctor(int32_t polynomial, bool reverseBits);
	};
}

