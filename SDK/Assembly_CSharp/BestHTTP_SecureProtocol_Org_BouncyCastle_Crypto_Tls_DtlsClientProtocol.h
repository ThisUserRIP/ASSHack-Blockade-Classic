#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_DtlsProtocol.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsTransport; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsClient; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DatagramTransport; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsClientProtocol_ClientHandshakeState; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsRecordLayer; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DigitallySigned; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ProtocolVersion; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct DtlsClientProtocol : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsProtocol
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* secureRandom);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Connect(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* client, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport);
		void AbortClientHandshake(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, uint8_t alertDescription);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ClientHandshake(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer);
		IL2CPP::Array<uint8_t>* GenerateCertificateVerify(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify);
		IL2CPP::Array<uint8_t>* GenerateClientHello(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClient* client);
		IL2CPP::Array<uint8_t>* GenerateClientKeyExchange(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state);
		void InvalidateSession(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state);
		void ProcessCertificateRequest(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		void ProcessCertificateStatus(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		IL2CPP::Array<uint8_t>* ProcessHelloVerifyRequest(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		void ProcessNewSessionTicket(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* ProcessServerCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		void ProcessServerHello(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		void ProcessServerKeyExchange(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		void ProcessServerSupplementalData(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, IL2CPP::Array<uint8_t>* body);
		void ReportServerVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol_ClientHandshakeState* state, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* server_version);
		static IL2CPP::Array<uint8_t>* PatchClientHelloWithCookie(IL2CPP::Array<uint8_t>* clientHelloBody, IL2CPP::Array<uint8_t>* cookie);
	};
}

