#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_BufferedCipherBase.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct IesEngine; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	struct BufferedIesCipher : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedCipherBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine* engine;
		bool forEncryption;
		mscorlib::System::IO::MemoryStream* buffer;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::IesEngine* engine);
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetBlockSize();
		int32_t GetOutputSize(int32_t inputLen);
		int32_t GetUpdateOutputSize(int32_t inputLen);
		IL2CPP::Array<uint8_t>* ProcessByte(uint8_t input);
		IL2CPP::Array<uint8_t>* ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		IL2CPP::Array<uint8_t>* DoFinal();
		IL2CPP::Array<uint8_t>* DoFinal(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		void Reset();
	};
}

