#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct DSAParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* P;
		IL2CPP::Array<uint8_t>* Q;
		IL2CPP::Array<uint8_t>* G;
		IL2CPP::Array<uint8_t>* Y;
		IL2CPP::Array<uint8_t>* J;
		IL2CPP::Array<uint8_t>* X;
		IL2CPP::Array<uint8_t>* Seed_;
		int32_t Counter;
	};
}

