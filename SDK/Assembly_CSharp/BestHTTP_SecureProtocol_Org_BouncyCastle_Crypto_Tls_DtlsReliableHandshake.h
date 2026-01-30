#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsRecordLayer; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsHandshakeHash; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DtlsReliableHandshake_Message; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct DtlsReliableHandshake : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* mRecordLayer;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* mHandshakeHash;
		mscorlib::System::Collections::IDictionary* mCurrentInboundFlight;
		mscorlib::System::Collections::IDictionary* mPreviousInboundFlight;
		mscorlib::System::Collections::IList* mOutboundFlight;
		bool mSending;
		int32_t mMessageSeq;
		int32_t mNextReceiveSeq;
		struct StaticFields
		{
			int32_t MaxReceiveAhead;
			int32_t MessageHeaderLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* transport);
		void NotifyHelloComplete();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* get_HandshakeHash();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* PrepareToFinish();
		void SendMessage(uint8_t msg_type, IL2CPP::Array<uint8_t>* body);
		IL2CPP::Array<uint8_t>* ReceiveMessageBody(uint8_t msg_type);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* ReceiveMessage();
		void Finish();
		void ResetHandshakeMessagesDigest();
		int32_t BackOff(int32_t timeoutMillis);
		void CheckInboundFlight();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* GetPendingMessage();
		void PrepareInboundFlight(mscorlib::System::Collections::IDictionary* nextFlight);
		bool ProcessRecord(int32_t windowSize, int32_t epoch, IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		void ResendOutboundFlight();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* UpdateHandshakeMessagesDigest(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* message);
		void WriteMessage(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* message);
		void WriteHandshakeFragment(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake_Message* message, int32_t fragment_offset, int32_t fragment_length);
		static bool CheckAll(mscorlib::System::Collections::IDictionary* inboundFlight);
		static void ResetAll(mscorlib::System::Collections::IDictionary* inboundFlight);
	};
}

