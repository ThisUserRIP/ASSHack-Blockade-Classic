#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_AbstractFpPoint.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECCurve; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECFieldElement; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECPoint; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	struct FpPoint : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractFpPoint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* curve, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* y);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* curve, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* curve, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* y, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Detach();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t index);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Add(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Twice();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* b);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t e);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Two(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Three(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Four(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Eight(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* DoubleProductFromSquares(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* a, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* b, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* aSquared, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* bSquared);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Negate();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Z, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* ZSquared);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::FpPoint* TwiceJacobianModified(bool calculateW);
	};
}

