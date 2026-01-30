#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_RIPEMD160.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct RIPEMD160Managed : mscorlib::System::Security::Cryptography::RIPEMD160
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _buffer;
		int64_t _count;
		IL2CPP::Array<uint32_t>* _stateMD160;
		IL2CPP::Array<uint32_t>* _blockDWords;
		void _ctor();
		void Initialize();
		void HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void InitializeState();
		void _HashData(IL2CPP::Array<uint8_t>* partIn, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* _EndHash();
		static void MDTransform(uint32_t* blockDWords, uint32_t* state, uint8_t* block);
		static uint32_t F(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t G(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t H(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t I(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t J(uint32_t x, uint32_t y, uint32_t z);
	};
}

