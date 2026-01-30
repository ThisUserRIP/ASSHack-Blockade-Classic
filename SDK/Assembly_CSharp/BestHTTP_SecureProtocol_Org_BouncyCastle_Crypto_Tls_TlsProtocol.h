#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ByteQueue; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct RecordStream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsSession; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct SessionParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct SecurityParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ByteQueueStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct AbstractTlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsPeer; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::IO { struct MemoryStream; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { struct IRandomGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsKeyExchange; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsHandshakeHash; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsProtocol : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueue* mApplicationDataQueue;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueue* mAlertQueue;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueue* mHandshakeQueue;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream* mRecordStream;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsStream* mTlsStream;
		bool mClosed;
		bool mFailedWithError;
		bool mAppDataReady;
		bool mAppDataSplitEnabled;
		int32_t mAppDataSplitMode;
		IL2CPP::Array<uint8_t>* mExpectedVerifyData;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSession* mTlsSession;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* mSessionParameters;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* mSecurityParameters;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;
		IL2CPP::Array<int32_t>* mOfferedCipherSuites;
		IL2CPP::Array<uint8_t>* mOfferedCompressionMethods;
		mscorlib::System::Collections::IDictionary* mClientExtensions;
		mscorlib::System::Collections::IDictionary* mServerExtensions;
		int16_t mConnectionState;
		bool mResumedSession;
		bool mReceivedChangeCipherSpec;
		bool mSecureRenegotiation;
		bool mAllowCertificateStatus;
		bool mExpectSessionTicket;
		bool mBlocking;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* mInputBuffers;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueueStream* mOutputBuffer;
		struct StaticFields
		{
			int16_t CS_START;
			int16_t CS_CLIENT_HELLO;
			int16_t CS_SERVER_HELLO;
			int16_t CS_SERVER_SUPPLEMENTAL_DATA;
			int16_t CS_SERVER_CERTIFICATE;
			int16_t CS_CERTIFICATE_STATUS;
			int16_t CS_SERVER_KEY_EXCHANGE;
			int16_t CS_CERTIFICATE_REQUEST;
			int16_t CS_SERVER_HELLO_DONE;
			int16_t CS_CLIENT_SUPPLEMENTAL_DATA;
			int16_t CS_CLIENT_CERTIFICATE;
			int16_t CS_CLIENT_KEY_EXCHANGE;
			int16_t CS_CERTIFICATE_VERIFY;
			int16_t CS_CLIENT_FINISHED;
			int16_t CS_SERVER_SESSION_TICKET;
			int16_t CS_SERVER_FINISHED;
			int16_t CS_END;
			int16_t ADS_MODE_1_Nsub1;
			int16_t ADS_MODE_0_N;
			int16_t ADS_MODE_0_N_FIRSTONLY;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* secureRandom);
		void _ctor(mscorlib::System::IO::Stream* input, mscorlib::System::IO::Stream* output, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* secureRandom);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* secureRandom);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer();
		void HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription);
		void HandleAlertWarningMessage(uint8_t alertDescription);
		void HandleChangeCipherSpecMessage();
		void HandleClose(bool user_canceled);
		void HandleException(uint8_t alertDescription, mscorlib::System::String* message, mscorlib::System::Exception* cause);
		void HandleFailure();
		void HandleHandshakeMessage(uint8_t type, mscorlib::System::IO::MemoryStream* buf);
		void ApplyMaxFragmentLengthExtension();
		void CheckReceivedChangeCipherSpec(bool expected);
		void CleanupHandshake();
		void BlockForHandshake();
		void CompleteHandshake();
		void ProcessRecord(uint8_t protocol, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		void ProcessHandshakeQueue(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueue* queue);
		void ProcessApplicationDataQueue();
		void ProcessAlertQueue();
		void ProcessChangeCipherSpec(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		int32_t ApplicationDataAvailable();
		int32_t ReadApplicationData(IL2CPP::Array<uint8_t>* buf, int32_t offset, int32_t len);
		void SafeCheckRecordHeader(IL2CPP::Array<uint8_t>* recordHeader);
		void SafeReadRecord();
		void SafeWriteRecord(uint8_t type, IL2CPP::Array<uint8_t>* buf, int32_t offset, int32_t len);
		void WriteData(IL2CPP::Array<uint8_t>* buf, int32_t offset, int32_t len);
		void SetAppDataSplitMode(int32_t appDataSplitMode);
		void WriteHandshakeMessage(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		mscorlib::System::IO::Stream* get_Stream();
		void CloseInput();
		void OfferInput(IL2CPP::Array<uint8_t>* input);
		int32_t GetAvailableInputBytes();
		int32_t ReadInput(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t length);
		void OfferOutput(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t length);
		int32_t GetAvailableOutputBytes();
		int32_t ReadOutput(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t length);
		void InvalidateSession();
		void ProcessFinishedMessage(mscorlib::System::IO::MemoryStream* buf);
		void RaiseAlertFatal(uint8_t alertDescription, mscorlib::System::String* message, mscorlib::System::Exception* cause);
		void RaiseAlertWarning(uint8_t alertDescription, mscorlib::System::String* message);
		void SendCertificateMessage(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* certificate);
		void SendChangeCipherSpecMessage();
		void SendFinishedMessage();
		void SendSupplementalDataMessage(mscorlib::System::Collections::IList* supplementalData);
		IL2CPP::Array<uint8_t>* CreateVerifyData(bool isServer);
		void Close();
		void Flush();
		bool get_IsClosed();
		int16_t ProcessMaxFragmentLengthExtension(mscorlib::System::Collections::IDictionary* clientExtensions, mscorlib::System::Collections::IDictionary* serverExtensions, uint8_t alertDescription);
		void RefuseRenegotiation();
		static void AssertEmpty(mscorlib::System::IO::MemoryStream* buf);
		static IL2CPP::Array<uint8_t>* CreateRandomBlock(bool useGmtUnixTime, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* randomGenerator);
		static IL2CPP::Array<uint8_t>* CreateRenegotiationInfo(IL2CPP::Array<uint8_t>* renegotiated_connection);
		static void EstablishMasterSecret(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* keyExchange);
		static IL2CPP::Array<uint8_t>* GetCurrentPrfHash(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* handshakeHash, IL2CPP::Array<uint8_t>* sslSender);
		static mscorlib::System::Collections::IDictionary* ReadExtensions(mscorlib::System::IO::MemoryStream* input);
		static mscorlib::System::Collections::IList* ReadSupplementalDataMessage(mscorlib::System::IO::MemoryStream* input);
		static void WriteExtensions(mscorlib::System::IO::Stream* output, mscorlib::System::Collections::IDictionary* extensions);
		static void WriteSelectedExtensions(mscorlib::System::IO::Stream* output, mscorlib::System::Collections::IDictionary* extensions, bool selectEmpty);
		static void WriteSupplementalData(mscorlib::System::IO::Stream* output, mscorlib::System::Collections::IList* supplementalData);
		static int32_t GetPrfAlgorithm(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, int32_t ciphersuite);
	};
}

