#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_AbstractECMultiplier.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	struct NafR2LMultiplier : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* k);
		void _ctor();
	};
}

