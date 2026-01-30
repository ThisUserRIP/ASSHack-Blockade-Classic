#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities
{
	struct Pack : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static void UInt16_To_BE(uint16_t n, IL2CPP::Array<uint8_t>* bs);
		static void UInt16_To_BE(uint16_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint16_t BE_To_UInt16(IL2CPP::Array<uint8_t>* bs);
		static uint16_t BE_To_UInt16(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static IL2CPP::Array<uint8_t>* UInt32_To_BE(uint32_t n);
		static void UInt32_To_BE(uint32_t n, IL2CPP::Array<uint8_t>* bs);
		static void UInt32_To_BE(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static IL2CPP::Array<uint8_t>* UInt32_To_BE(IL2CPP::Array<uint32_t>* ns);
		static void UInt32_To_BE(IL2CPP::Array<uint32_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint32_t BE_To_UInt32(IL2CPP::Array<uint8_t>* bs);
		static uint32_t BE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void BE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint32_t>* ns);
		static IL2CPP::Array<uint8_t>* UInt64_To_BE(uint64_t n);
		static void UInt64_To_BE(uint64_t n, IL2CPP::Array<uint8_t>* bs);
		static void UInt64_To_BE(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static IL2CPP::Array<uint8_t>* UInt64_To_BE(IL2CPP::Array<uint64_t>* ns);
		static void UInt64_To_BE(IL2CPP::Array<uint64_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint64_t BE_To_UInt64(IL2CPP::Array<uint8_t>* bs);
		static uint64_t BE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void BE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint64_t>* ns);
		static void UInt16_To_LE(uint16_t n, IL2CPP::Array<uint8_t>* bs);
		static void UInt16_To_LE(uint16_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint16_t LE_To_UInt16(IL2CPP::Array<uint8_t>* bs);
		static uint16_t LE_To_UInt16(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static IL2CPP::Array<uint8_t>* UInt32_To_LE(uint32_t n);
		static void UInt32_To_LE(uint32_t n, IL2CPP::Array<uint8_t>* bs);
		static void UInt32_To_LE(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static IL2CPP::Array<uint8_t>* UInt32_To_LE(IL2CPP::Array<uint32_t>* ns);
		static void UInt32_To_LE(IL2CPP::Array<uint32_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint32_t LE_To_UInt32(IL2CPP::Array<uint8_t>* bs);
		static uint32_t LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint32_t>* ns);
		static void LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t bOff, IL2CPP::Array<uint32_t>* ns, int32_t nOff, int32_t count);
		static IL2CPP::Array<uint32_t>* LE_To_UInt32(IL2CPP::Array<uint8_t>* bs, int32_t off, int32_t count);
		static IL2CPP::Array<uint8_t>* UInt64_To_LE(uint64_t n);
		static void UInt64_To_LE(uint64_t n, IL2CPP::Array<uint8_t>* bs);
		static void UInt64_To_LE(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static IL2CPP::Array<uint8_t>* UInt64_To_LE(IL2CPP::Array<uint64_t>* ns);
		static void UInt64_To_LE(IL2CPP::Array<uint64_t>* ns, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void UInt64_To_LE(IL2CPP::Array<uint64_t>* ns, int32_t nsOff, int32_t nsLen, IL2CPP::Array<uint8_t>* bs, int32_t bsOff);
		static uint64_t LE_To_UInt64(IL2CPP::Array<uint8_t>* bs);
		static uint64_t LE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void LE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint64_t>* ns);
		static void LE_To_UInt64(IL2CPP::Array<uint8_t>* bs, int32_t bsOff, IL2CPP::Array<uint64_t>* ns, int32_t nsOff, int32_t nsLen);
	};
}

