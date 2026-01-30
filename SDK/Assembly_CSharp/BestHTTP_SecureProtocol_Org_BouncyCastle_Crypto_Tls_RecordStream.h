#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsProtocol; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCompression; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsCipher; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct RecordStream_SequenceNumber; };
namespace mscorlib::System::IO { struct MemoryStream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsHandshakeHash; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO { struct BaseOutputStream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ProtocolVersion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct RecordStream : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol* mHandler;
		mscorlib::System::IO::Stream* mInput;
		mscorlib::System::IO::Stream* mOutput;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* mPendingCompression;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* mReadCompression;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* mWriteCompression;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mPendingCipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mReadCipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* mWriteCipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* mReadSeqNo;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream_SequenceNumber* mWriteSeqNo;
		mscorlib::System::IO::MemoryStream* mBuffer;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mHandshakeHash;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream* mHandshakeHashUpdater;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mReadVersion;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* mWriteVersion;
		bool mRestrictReadVersion;
		int32_t mPlaintextLimit;
		int32_t mCompressedLimit;
		int32_t mCiphertextLimit;
		struct StaticFields
		{
			int32_t DEFAULT_PLAINTEXT_LIMIT;
			int32_t TLS_HEADER_SIZE;
			int32_t TLS_HEADER_TYPE_OFFSET;
			int32_t TLS_HEADER_VERSION_OFFSET;
			int32_t TLS_HEADER_LENGTH_OFFSET;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsProtocol* handler, mscorlib::System::IO::Stream* input, mscorlib::System::IO::Stream* output);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		int32_t GetPlaintextLimit();
		void SetPlaintextLimit(int32_t plaintextLimit);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ReadVersion();
		void set_ReadVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value);
		void SetWriteVersion(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion);
		void SetRestrictReadVersion(bool enabled);
		void SetPendingConnectionState(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCompression* tlsCompression, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* tlsCipher);
		void SentWriteCipherSpec();
		void ReceivedReadCipherSpec();
		void FinaliseHandshake();
		void CheckRecordHeader(IL2CPP::Array<uint8_t>* recordHeader);
		bool ReadRecord();
		IL2CPP::Array<uint8_t>* DecodeAndVerify(uint8_t type, mscorlib::System::IO::Stream* input, int32_t len);
		void WriteRecord(uint8_t type, IL2CPP::Array<uint8_t>* plaintext, int32_t plaintextOffset, int32_t plaintextLength);
		void NotifyHelloComplete();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* get_HandshakeHash();
		mscorlib::System::IO::Stream* get_HandshakeHashUpdater();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* PrepareToFinish();
		void SafeClose();
		void Flush();
		IL2CPP::Array<uint8_t>* GetBufferContents();
		static void CheckType(uint8_t type, uint8_t alertDescription);
		static void CheckLength(int32_t length, int32_t limit, uint8_t alertDescription);
	};
}

