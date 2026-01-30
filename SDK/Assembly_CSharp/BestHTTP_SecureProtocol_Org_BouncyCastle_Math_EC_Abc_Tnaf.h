#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_SByte.h"
namespace mscorlib::System { struct SByte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc { struct ZTauElement; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc { struct SimpleBigDecimal; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct AbstractF2mPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct AbstractF2mCurve; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECFieldElement; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc
{
	struct Tnaf : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* MinusOne;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* MinusTwo;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* MinusThree;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Four;
			int8_t Width;
			int8_t Pow2Width;
			IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* Alpha0;
			IL2CPP::Array<IL2CPP::Array<int8_t>*>* Alpha0Tnaf;
			IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* Alpha1;
			IL2CPP::Array<IL2CPP::Array<int8_t>*>* Alpha1Tnaf;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Norm(int8_t mu, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Norm(int8_t mu, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* u, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* v);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda0, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda1, int8_t mu);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* k, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* s, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* vm, int8_t a, int32_t m, int32_t c);
		static IL2CPP::Array<int8_t>* TauAdicNaf(int8_t mu, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p);
		static int8_t GetMu(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);
		static int8_t GetMu(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* curveA);
		static int8_t GetMu(int32_t curveA);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* GetLucas(int8_t mu, int32_t k, bool doV);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* GetTw(int8_t mu, int32_t w);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* GetSi(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* GetSi(int32_t fieldSize, int32_t curveA, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* cofactor);
		static int32_t GetShiftsForCofactor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* h);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* k, int32_t m, int8_t a, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*>* s, int8_t mu, int8_t c);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyRTnaf(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* k);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyTnaf(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, IL2CPP::Array<int8_t>* u);
		static IL2CPP::Array<int8_t>* TauAdicWNaf(int8_t mu, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t width, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* pow2w, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* tw, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* alpha);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>* GetPreComp(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);
		void _ctor();
		static void _cctor();
	};
}

