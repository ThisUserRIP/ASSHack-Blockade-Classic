#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DatagramTransport; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsPeer; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ByteQueue; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ProtocolVersion; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsEpoch; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsHandshakeRetransmit; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCipher; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct DtlsRecordLayer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* mTransport;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* mPeer;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ByteQueue* mRecordQueue;
		bool mClosed;
		bool mFailed;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion;
		bool mInHandshake;
		int32_t mPlaintextLimit;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mCurrentEpoch;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mPendingEpoch;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mReadEpoch;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mWriteEpoch;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* mRetransmit;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* mRetransmitEpoch;
		int64_t mRetransmitExpiry;
		struct StaticFields
		{
			int32_t RECORD_HEADER_LENGTH;
			int32_t MAX_FRAGMENT_LENGTH;
			int64_t TCP_MSL;
			int64_t RETRANSMIT_TIMEOUT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer, uint8_t contentType);
		void SetPlaintextLimit(int32_t plaintextLimit);
		int32_t get_ReadEpoch();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion();
		void set_ReadVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);
		void SetWriteVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion);
		void InitPendingEpoch(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* pendingCipher);
		void HandshakeSuccessful(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* retransmit);
		void ResetWriteEpoch();
		int32_t GetReceiveLimit();
		int32_t GetSendLimit();
		int32_t Receive(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len, int32_t waitMillis);
		void Send(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		void Close();
		void Failed();
		void Fail(uint8_t alertDescription);
		void Warn(uint8_t alertDescription, mscorlib::System::String* message);
		void CloseTransport();
		void RaiseAlert(uint8_t alertLevel, uint8_t alertDescription, mscorlib::System::String* message, mscorlib::System::Exception* cause);
		int32_t ReceiveRecord(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len, int32_t waitMillis);
		void SendRecord(uint8_t contentType, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		static int64_t GetMacSequenceNumber(int32_t epoch, int64_t sequence_number);
	};
}

