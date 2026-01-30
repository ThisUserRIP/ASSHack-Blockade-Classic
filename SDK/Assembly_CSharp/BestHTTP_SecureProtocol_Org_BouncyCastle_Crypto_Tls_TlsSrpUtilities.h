#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsSrpUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void AddSrpExtension(mscorlib::System::Collections::IDictionary* extensions, IL2CPP::Array<uint8_t>* identity);
		static IL2CPP::Array<uint8_t>* GetSrpExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* CreateSrpExtension(IL2CPP::Array<uint8_t>* identity);
		static IL2CPP::Array<uint8_t>* ReadSrpExtension(IL2CPP::Array<uint8_t>* extensionData);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadSrpParameter(mscorlib::System::IO::Stream* input);
		static void WriteSrpParameter(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x, mscorlib::System::IO::Stream* output);
		static bool IsSrpCipherSuite(int32_t cipherSuite);
		void _ctor();
	};
}

