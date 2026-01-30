#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	struct Interleave : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint64_t M32;
			uint64_t M64;
			uint64_t M64R;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t Expand8to16(uint32_t x);
		static uint32_t Expand16to32(uint32_t x);
		static uint64_t Expand32to64(uint32_t x);
		static void Expand64To128(uint64_t x, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static void Expand64To128Rev(uint64_t x, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static uint32_t Shuffle(uint32_t x);
		static uint64_t Shuffle(uint64_t x);
		static uint32_t Shuffle2(uint32_t x);
		static uint32_t Unshuffle(uint32_t x);
		static uint64_t Unshuffle(uint64_t x);
		static uint32_t Unshuffle2(uint32_t x);
		void _ctor();
	};
}

