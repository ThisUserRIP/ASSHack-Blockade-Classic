#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_ECCurve.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { struct IFiniteField; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECFieldElement; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	struct AbstractF2mCurve : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* si;
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Inverse(int32_t m, IL2CPP::Array<int32_t>* ks, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* BuildField(int32_t m, int32_t k1, int32_t k2, int32_t k3);
		void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3);
		bool IsValidFieldElement(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* y, bool withCompression);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int32_t yTilde, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* X1);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* SolveQuadraticEquation(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* beta);
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* GetSi();
		bool get_IsKoblitz();
	};
}

