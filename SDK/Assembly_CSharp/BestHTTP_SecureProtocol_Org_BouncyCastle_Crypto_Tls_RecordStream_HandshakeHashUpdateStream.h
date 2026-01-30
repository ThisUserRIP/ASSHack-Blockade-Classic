#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_BaseOutputStream.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_RecordStream.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct RecordStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct RecordStream_HandshakeHashUpdateStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::RecordStream* mOuter);
		void Write(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
	};
}

