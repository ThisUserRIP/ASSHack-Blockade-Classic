#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_Primes.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct Primes; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math
{
	struct Primes_MROutput : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool mProvablyComposite;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mFactor;
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Primes_MROutput* ProbablyPrime();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Primes_MROutput* ProvablyCompositeWithFactor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* factor);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Primes_MROutput* ProvablyCompositeNotPrimePower();
		void _ctor(bool provablyComposite, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* factor);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Factor();
		bool get_IsProvablyComposite();
		bool get_IsNotPrimePower();
	};
}

