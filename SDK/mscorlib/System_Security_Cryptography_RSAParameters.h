#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSAParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* Exponent;
		IL2CPP::Array<uint8_t>* Modulus;
		IL2CPP::Array<uint8_t>* P;
		IL2CPP::Array<uint8_t>* Q;
		IL2CPP::Array<uint8_t>* DP;
		IL2CPP::Array<uint8_t>* DQ;
		IL2CPP::Array<uint8_t>* InverseQ;
		IL2CPP::Array<uint8_t>* D;
	};
}

