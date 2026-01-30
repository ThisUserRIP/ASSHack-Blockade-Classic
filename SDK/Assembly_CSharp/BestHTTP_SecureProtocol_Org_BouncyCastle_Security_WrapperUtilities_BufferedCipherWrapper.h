#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Security_WrapperUtilities.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct WrapperUtilities; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBufferedCipher; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	struct WrapperUtilities_BufferedCipherWrapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* cipher;
		bool forWrapping;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* cipher);
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forWrapping, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		IL2CPP::Array<uint8_t>* Wrap(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		IL2CPP::Array<uint8_t>* Unwrap(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
	};
}

