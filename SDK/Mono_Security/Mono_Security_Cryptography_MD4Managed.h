#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Cryptography_MD4.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Security::Cryptography
{
	struct MD4Managed : Mono_Security::Mono::Security::Cryptography::MD4
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* state;
		IL2CPP::Array<uint8_t>* buffer;
		IL2CPP::Array<uint32_t>* count;
		IL2CPP::Array<uint32_t>* x;
		IL2CPP::Array<uint8_t>* digest;
		void _ctor();
		void Initialize();
		void HashCore(IL2CPP::Array<uint8_t>* array, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		IL2CPP::Array<uint8_t>* Padding(int32_t nLength);
		uint32_t F(uint32_t x, uint32_t y, uint32_t z);
		uint32_t G(uint32_t x, uint32_t y, uint32_t z);
		uint32_t H(uint32_t x, uint32_t y, uint32_t z);
		uint32_t ROL(uint32_t x, uint8_t n);
		void FF(uint32_t& a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);
		void GG(uint32_t& a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);
		void HH(uint32_t& a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);
		void Encode(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint32_t>* input);
		void Decode(IL2CPP::Array<uint32_t>* output, IL2CPP::Array<uint8_t>* input, int32_t index);
		void MD4Transform(IL2CPP::Array<uint32_t>* state, IL2CPP::Array<uint8_t>* block, int32_t index);
	};
}

