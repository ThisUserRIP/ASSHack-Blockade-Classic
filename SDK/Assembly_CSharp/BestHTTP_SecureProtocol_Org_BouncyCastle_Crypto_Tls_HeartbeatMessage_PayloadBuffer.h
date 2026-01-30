#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_MemoryStream.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Tls_HeartbeatMessage.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct HeartbeatMessage; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct HeartbeatMessage_PayloadBuffer : mscorlib::System::IO::MemoryStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* ToTruncatedByteArray(int32_t payloadLength);
		void _ctor();
	};
}

