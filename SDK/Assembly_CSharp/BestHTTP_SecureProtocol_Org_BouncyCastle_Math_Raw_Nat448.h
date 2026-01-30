#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	struct Nat448 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Copy64(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* z);
		static void Copy64(IL2CPP::Array<uint64_t>* x, int32_t xOff, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static IL2CPP::Array<uint64_t>* Create64();
		static IL2CPP::Array<uint64_t>* CreateExt64();
		static bool Eq64(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y);
		static IL2CPP::Array<uint64_t>* FromBigInteger64(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static bool IsOne64(IL2CPP::Array<uint64_t>* x);
		static bool IsZero64(IL2CPP::Array<uint64_t>* x);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(IL2CPP::Array<uint64_t>* x);
		void _ctor();
	};
}

