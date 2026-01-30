#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SHA384.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct SHA384Managed : mscorlib::System::Security::Cryptography::SHA384
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _buffer;
		uint64_t _count;
		IL2CPP::Array<uint64_t>* _stateSHA384;
		IL2CPP::Array<uint64_t>* _W;
		struct StaticFields
		{
			IL2CPP::Array<uint64_t>* _K;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Initialize();
		void HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void InitializeState();
		void _HashData(IL2CPP::Array<uint8_t>* partIn, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* _EndHash();
		static void SHATransform(uint64_t* expandedBuffer, uint64_t* state, uint8_t* block);
		static uint64_t RotateRight(uint64_t x, int32_t n);
		static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);
		static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);
		static uint64_t Sigma_0(uint64_t x);
		static uint64_t Sigma_1(uint64_t x);
		static uint64_t sigma_0(uint64_t x);
		static uint64_t sigma_1(uint64_t x);
		static void SHA384Expand(uint64_t* x);
		static void _cctor();
	};
}

