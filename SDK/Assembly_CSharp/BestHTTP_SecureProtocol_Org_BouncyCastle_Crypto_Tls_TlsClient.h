#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsClientContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSession; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ProtocolVersion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsKeyExchange; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsAuthentication; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct NewSessionTicket; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsClient
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_HostNames();
		void set_HostNames(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsClientContext* context);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* GetSessionToResume();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientHelloRecordLayerVersion();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();
		bool get_IsFallback();
		IL2CPP::Array<int32_t>* GetCipherSuites();
		IL2CPP::Array<uint8_t>* GetCompressionMethods();
		mscorlib::System::Collections::IDictionary* GetClientExtensions();
		void NotifyServerVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* selectedVersion);
		void NotifySessionID(IL2CPP::Array<uint8_t>* sessionID);
		void NotifySelectedCipherSuite(int32_t selectedCipherSuite);
		void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod);
		void ProcessServerExtensions(mscorlib::System::Collections::IDictionary* serverExtensions);
		void ProcessServerSupplementalData(mscorlib::System::Collections::IList* serverSupplementalData);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();
		mscorlib::System::Collections::IList* GetClientSupplementalData();
		void NotifyNewSessionTicket(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket);
	};
}

