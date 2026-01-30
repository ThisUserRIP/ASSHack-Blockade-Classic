#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct NaccacheSternKeyParameters; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct NaccacheSternEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool forEncryption;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* key;
		IL2CPP::Array<mscorlib::System::Collections::IList*>* lookup;
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		void set_Debug(bool value);
		int32_t GetInputBlockSize();
		int32_t GetOutputBlockSize();
		IL2CPP::Array<uint8_t>* ProcessBlock(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t length);
		IL2CPP::Array<uint8_t>* Encrypt(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* plain);
		IL2CPP::Array<uint8_t>* AddCryptedBlocks(IL2CPP::Array<uint8_t>* block1, IL2CPP::Array<uint8_t>* block2);
		IL2CPP::Array<uint8_t>* ProcessData(IL2CPP::Array<uint8_t>* data);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* chineseRemainder(mscorlib::System::Collections::IList* congruences, mscorlib::System::Collections::IList* primes);
		void _ctor();
	};
}

