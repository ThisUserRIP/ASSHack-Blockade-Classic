#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes { struct SicBlockCipher; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct EaxBlockCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::SicBlockCipher* cipher;
		bool forEncryption;
		int32_t blockSize;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac;
		IL2CPP::Array<uint8_t>* nonceMac;
		IL2CPP::Array<uint8_t>* associatedTextMac;
		IL2CPP::Array<uint8_t>* macBlock;
		int32_t macSize;
		IL2CPP::Array<uint8_t>* bufBlock;
		int32_t bufOff;
		bool cipherInitialized;
		IL2CPP::Array<uint8_t>* initialAssociatedText;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		mscorlib::System::String* get_AlgorithmName();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		int32_t GetBlockSize();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		void InitCipher();
		void CalculateMac();
		void Reset();
		void Reset(bool clearMac);
		void ProcessAadByte(uint8_t input);
		void ProcessAadBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		IL2CPP::Array<uint8_t>* GetMac();
		int32_t GetUpdateOutputSize(int32_t len);
		int32_t GetOutputSize(int32_t len);
		int32_t Process(uint8_t b, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		bool VerifyMac(IL2CPP::Array<uint8_t>* mac, int32_t off);
	};
}

