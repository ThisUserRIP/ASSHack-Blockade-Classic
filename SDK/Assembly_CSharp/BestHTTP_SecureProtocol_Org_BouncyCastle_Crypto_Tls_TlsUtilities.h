#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ProtocolVersion; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct SignatureAndHashAlgorithm; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSignerCredentials; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSession; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct SessionParameters; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509CertificateStructure; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsHandshakeHash; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSigner; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* EmptyBytes;
			IL2CPP::Array<int16_t>* EmptyShorts;
			IL2CPP::Array<int32_t>* EmptyInts;
			IL2CPP::Array<int64_t>* EmptyLongs;
			IL2CPP::Array<uint8_t>* SSL_CLIENT;
			IL2CPP::Array<uint8_t>* SSL_SERVER;
			IL2CPP::Array<IL2CPP::Array<uint8_t>*>* SSL3_CONST;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void CheckUint8(int32_t i);
		static void CheckUint8(int64_t i);
		static void CheckUint16(int32_t i);
		static void CheckUint16(int64_t i);
		static void CheckUint24(int32_t i);
		static void CheckUint24(int64_t i);
		static void CheckUint32(int64_t i);
		static void CheckUint48(int64_t i);
		static void CheckUint64(int64_t i);
		static bool IsValidUint8(int32_t i);
		static bool IsValidUint8(int64_t i);
		static bool IsValidUint16(int32_t i);
		static bool IsValidUint16(int64_t i);
		static bool IsValidUint24(int32_t i);
		static bool IsValidUint24(int64_t i);
		static bool IsValidUint32(int64_t i);
		static bool IsValidUint48(int64_t i);
		static bool IsValidUint64(int64_t i);
		static bool IsSsl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		static bool IsTlsV11(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);
		static bool IsTlsV11(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		static bool IsTlsV12(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version);
		static bool IsTlsV12(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		static void WriteUint8(uint8_t i, mscorlib::System::IO::Stream* output);
		static void WriteUint8(uint8_t i, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint16(int32_t i, mscorlib::System::IO::Stream* output);
		static void WriteUint16(int32_t i, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint24(int32_t i, mscorlib::System::IO::Stream* output);
		static void WriteUint24(int32_t i, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint32(int64_t i, mscorlib::System::IO::Stream* output);
		static void WriteUint32(int64_t i, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint48(int64_t i, mscorlib::System::IO::Stream* output);
		static void WriteUint48(int64_t i, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint64(int64_t i, mscorlib::System::IO::Stream* output);
		static void WriteUint64(int64_t i, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteOpaque8(IL2CPP::Array<uint8_t>* buf, mscorlib::System::IO::Stream* output);
		static void WriteOpaque16(IL2CPP::Array<uint8_t>* buf, mscorlib::System::IO::Stream* output);
		static void WriteOpaque24(IL2CPP::Array<uint8_t>* buf, mscorlib::System::IO::Stream* output);
		static void WriteUint8Array(IL2CPP::Array<uint8_t>* uints, mscorlib::System::IO::Stream* output);
		static void WriteUint8Array(IL2CPP::Array<uint8_t>* uints, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint8ArrayWithUint8Length(IL2CPP::Array<uint8_t>* uints, mscorlib::System::IO::Stream* output);
		static void WriteUint8ArrayWithUint8Length(IL2CPP::Array<uint8_t>* uints, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint16Array(IL2CPP::Array<int32_t>* uints, mscorlib::System::IO::Stream* output);
		static void WriteUint16Array(IL2CPP::Array<int32_t>* uints, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteUint16ArrayWithUint16Length(IL2CPP::Array<int32_t>* uints, mscorlib::System::IO::Stream* output);
		static void WriteUint16ArrayWithUint16Length(IL2CPP::Array<int32_t>* uints, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static uint8_t DecodeUint8(IL2CPP::Array<uint8_t>* buf);
		static IL2CPP::Array<uint8_t>* DecodeUint8ArrayWithUint8Length(IL2CPP::Array<uint8_t>* buf);
		static IL2CPP::Array<uint8_t>* EncodeOpaque8(IL2CPP::Array<uint8_t>* buf);
		static IL2CPP::Array<uint8_t>* EncodeUint8(uint8_t val);
		static IL2CPP::Array<uint8_t>* EncodeUint8ArrayWithUint8Length(IL2CPP::Array<uint8_t>* uints);
		static IL2CPP::Array<uint8_t>* EncodeUint16ArrayWithUint16Length(IL2CPP::Array<int32_t>* uints);
		static uint8_t ReadUint8(mscorlib::System::IO::Stream* input);
		static uint8_t ReadUint8(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static int32_t ReadUint16(mscorlib::System::IO::Stream* input);
		static int32_t ReadUint16(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static int32_t ReadUint24(mscorlib::System::IO::Stream* input);
		static int32_t ReadUint24(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static int64_t ReadUint32(mscorlib::System::IO::Stream* input);
		static int64_t ReadUint32(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static int64_t ReadUint48(mscorlib::System::IO::Stream* input);
		static int64_t ReadUint48(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static IL2CPP::Array<uint8_t>* ReadAllOrNothing(int32_t length, mscorlib::System::IO::Stream* input);
		static IL2CPP::Array<uint8_t>* ReadFully(int32_t length, mscorlib::System::IO::Stream* input);
		static void ReadFully(IL2CPP::Array<uint8_t>* buf, mscorlib::System::IO::Stream* input);
		static IL2CPP::Array<uint8_t>* ReadOpaque8(mscorlib::System::IO::Stream* input);
		static IL2CPP::Array<uint8_t>* ReadOpaque16(mscorlib::System::IO::Stream* input);
		static IL2CPP::Array<uint8_t>* ReadOpaque24(mscorlib::System::IO::Stream* input);
		static IL2CPP::Array<uint8_t>* ReadUint8Array(int32_t count, mscorlib::System::IO::Stream* input);
		static IL2CPP::Array<int32_t>* ReadUint16Array(int32_t count, mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ReadVersion(mscorlib::System::IO::Stream* input);
		static int32_t ReadVersionRaw(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static int32_t ReadVersionRaw(mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ReadAsn1Object(IL2CPP::Array<uint8_t>* encoding);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ReadDerObject(IL2CPP::Array<uint8_t>* encoding);
		static void WriteGmtUnixTime(IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static void WriteVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, mscorlib::System::IO::Stream* output);
		static void WriteVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* version, IL2CPP::Array<uint8_t>* buf, int32_t offset);
		static mscorlib::System::Collections::IList* GetAllSignatureAlgorithms();
		static mscorlib::System::Collections::IList* GetDefaultDssSignatureAlgorithms();
		static mscorlib::System::Collections::IList* GetDefaultECDsaSignatureAlgorithms();
		static mscorlib::System::Collections::IList* GetDefaultRsaSignatureAlgorithms();
		static IL2CPP::Array<uint8_t>* GetExtensionData(mscorlib::System::Collections::IDictionary* extensions, int32_t extensionType);
		static mscorlib::System::Collections::IList* GetDefaultSupportedSignatureAlgorithms();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* GetSignatureAndHashAlgorithm(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* signerCredentials);
		static bool HasExpectedEmptyExtensionData(mscorlib::System::Collections::IDictionary* extensions, int32_t extensionType, uint8_t alertDescription);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* ImportSession(IL2CPP::Array<uint8_t>* sessionID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters);
		static bool IsSignatureAlgorithmsExtensionAllowed(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* clientVersion);
		static void AddSignatureAlgorithmsExtension(mscorlib::System::Collections::IDictionary* extensions, mscorlib::System::Collections::IList* supportedSignatureAlgorithms);
		static mscorlib::System::Collections::IList* GetSignatureAlgorithmsExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* CreateSignatureAlgorithmsExtension(mscorlib::System::Collections::IList* supportedSignatureAlgorithms);
		static mscorlib::System::Collections::IList* ReadSignatureAlgorithmsExtension(IL2CPP::Array<uint8_t>* extensionData);
		static void EncodeSupportedSignatureAlgorithms(mscorlib::System::Collections::IList* supportedSignatureAlgorithms, bool allowAnonymous, mscorlib::System::IO::Stream* output);
		static mscorlib::System::Collections::IList* ParseSupportedSignatureAlgorithms(bool allowAnonymous, mscorlib::System::IO::Stream* input);
		static void VerifySupportedSignatureAlgorithm(mscorlib::System::Collections::IList* supportedSignatureAlgorithms, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAlgorithm);
		static IL2CPP::Array<uint8_t>* PRF(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, IL2CPP::Array<uint8_t>* secret, mscorlib::System::String* asciiLabel, IL2CPP::Array<uint8_t>* seed, int32_t size);
		static IL2CPP::Array<uint8_t>* PRF_legacy(IL2CPP::Array<uint8_t>* secret, mscorlib::System::String* asciiLabel, IL2CPP::Array<uint8_t>* seed, int32_t size);
		static IL2CPP::Array<uint8_t>* PRF_legacy(IL2CPP::Array<uint8_t>* secret, IL2CPP::Array<uint8_t>* label, IL2CPP::Array<uint8_t>* labelSeed, int32_t size);
		static IL2CPP::Array<uint8_t>* Concat(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		static void HMacHash(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, IL2CPP::Array<uint8_t>* secret, IL2CPP::Array<uint8_t>* seed, IL2CPP::Array<uint8_t>* output);
		static void ValidateKeyUsage(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c, int32_t keyUsageBits);
		static IL2CPP::Array<uint8_t>* CalculateKeyBlock(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t size);
		static IL2CPP::Array<uint8_t>* CalculateKeyBlock_Ssl(IL2CPP::Array<uint8_t>* master_secret, IL2CPP::Array<uint8_t>* random, int32_t size);
		static IL2CPP::Array<uint8_t>* CalculateMasterSecret(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, IL2CPP::Array<uint8_t>* pre_master_secret);
		static IL2CPP::Array<uint8_t>* CalculateMasterSecret_Ssl(IL2CPP::Array<uint8_t>* pre_master_secret, IL2CPP::Array<uint8_t>* random);
		static IL2CPP::Array<uint8_t>* CalculateVerifyData(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, mscorlib::System::String* asciiLabel, IL2CPP::Array<uint8_t>* handshakeHash);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreateHash(uint8_t hashAlgorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreateHash(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CloneHash(uint8_t hashAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* hash);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreatePrfHash(int32_t prfAlgorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ClonePrfHash(int32_t prfAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* hash);
		static uint8_t GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOidForHashAlgorithm(uint8_t hashAlgorithm);
		static int16_t GetClientCertificateType(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);
		static void TrackHashAlgorithms(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, mscorlib::System::Collections::IList* supportedSignatureAlgorithms);
		static bool HasSigningCapability(uint8_t clientCertificateType);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateTlsSigner(uint8_t clientCertificateType);
		static IL2CPP::Array<IL2CPP::Array<uint8_t>*>* GenSsl3Const();
		static mscorlib::System::Collections::IList* VectorOfOne(mscorlib::System::Object* obj);
		static int32_t GetCipherType(int32_t ciphersuite);
		static int32_t GetEncryptionAlgorithm(int32_t ciphersuite);
		static int32_t GetKeyExchangeAlgorithm(int32_t ciphersuite);
		static int32_t GetMacAlgorithm(int32_t ciphersuite);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* GetMinimumVersion(int32_t ciphersuite);
		static bool IsAeadCipherSuite(int32_t ciphersuite);
		static bool IsBlockCipherSuite(int32_t ciphersuite);
		static bool IsStreamCipherSuite(int32_t ciphersuite);
		static bool IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, mscorlib::System::Collections::IList* sigAlgs);
		static bool IsValidCipherSuiteForVersion(int32_t cipherSuite, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* serverVersion);
		static mscorlib::System::Collections::IList* GetUsableSignatureAlgorithms(mscorlib::System::Collections::IList* sigHashAlgs);
		void _ctor();
		static void _cctor();
	};
}

