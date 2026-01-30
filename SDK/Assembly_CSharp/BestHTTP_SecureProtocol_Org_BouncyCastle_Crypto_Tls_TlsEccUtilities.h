#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct ECDomainParameters; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct ECPublicKeyParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECCurve; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct ECPrivateKeyParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricCipherKeyPair; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { struct ECFieldElement; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsEccUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* CurveNames;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void AddSupportedEllipticCurvesExtension(mscorlib::System::Collections::IDictionary* extensions, IL2CPP::Array<int32_t>* namedCurves);
		static void AddSupportedPointFormatsExtension(mscorlib::System::Collections::IDictionary* extensions, IL2CPP::Array<uint8_t>* ecPointFormats);
		static IL2CPP::Array<int32_t>* GetSupportedEllipticCurvesExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* GetSupportedPointFormatsExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* CreateSupportedEllipticCurvesExtension(IL2CPP::Array<int32_t>* namedCurves);
		static IL2CPP::Array<uint8_t>* CreateSupportedPointFormatsExtension(IL2CPP::Array<uint8_t>* ecPointFormats);
		static IL2CPP::Array<int32_t>* ReadSupportedEllipticCurvesExtension(IL2CPP::Array<uint8_t>* extensionData);
		static IL2CPP::Array<uint8_t>* ReadSupportedPointFormatsExtension(IL2CPP::Array<uint8_t>* extensionData);
		static mscorlib::System::String* GetNameOfNamedCurve(int32_t namedCurve);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(int32_t namedCurve);
		static bool HasAnySupportedNamedCurves();
		static bool ContainsEccCipherSuites(IL2CPP::Array<int32_t>* cipherSuites);
		static bool IsEccCipherSuite(int32_t cipherSuite);
		static bool AreOnSameCurve(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* a, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* b);
		static bool IsSupportedNamedCurve(int32_t namedCurve);
		static bool IsCompressionPreferred(IL2CPP::Array<uint8_t>* ecPointFormats, uint8_t compressionFormat);
		static IL2CPP::Array<uint8_t>* SerializeECFieldElement(int32_t fieldSize, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static IL2CPP::Array<uint8_t>* SerializeECPoint(IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* point);
		static IL2CPP::Array<uint8_t>* SerializeECPublicKey(IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* keyParameters);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* DeserializeECFieldElement(int32_t fieldSize, IL2CPP::Array<uint8_t>* encoding);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* curve, IL2CPP::Array<uint8_t>* encoding);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* DeserializeECPublicKey(IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params, IL2CPP::Array<uint8_t>* encoding);
		static IL2CPP::Array<uint8_t>* CalculateECDHBasicAgreement(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* publicKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privateKey);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams, mscorlib::System::IO::Stream* output);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralServerKeyExchange(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, IL2CPP::Array<int32_t>* namedCurves, IL2CPP::Array<uint8_t>* ecPointFormats, mscorlib::System::IO::Stream* output);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key);
		static int32_t ReadECExponent(int32_t fieldSize, mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadECFieldElement(int32_t fieldSize, mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadECParameter(mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ReadECParameters(IL2CPP::Array<int32_t>* namedCurves, IL2CPP::Array<uint8_t>* ecPointFormats, mscorlib::System::IO::Stream* input);
		static void CheckNamedCurve(IL2CPP::Array<int32_t>* namedCurves, int32_t namedCurve);
		static void WriteECExponent(int32_t k, mscorlib::System::IO::Stream* output);
		static void WriteECFieldElement(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* x, mscorlib::System::IO::Stream* output);
		static void WriteECFieldElement(int32_t fieldSize, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x, mscorlib::System::IO::Stream* output);
		static void WriteECParameter(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x, mscorlib::System::IO::Stream* output);
		static void WriteExplicitECParameters(IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParameters, mscorlib::System::IO::Stream* output);
		static void WriteECPoint(IL2CPP::Array<uint8_t>* ecPointFormats, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* point, mscorlib::System::IO::Stream* output);
		static void WriteNamedECParameters(int32_t namedCurve, mscorlib::System::IO::Stream* output);
		void _ctor();
		static void _cctor();
	};
}

