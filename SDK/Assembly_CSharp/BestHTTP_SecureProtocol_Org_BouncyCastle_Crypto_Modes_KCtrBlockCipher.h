#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct KCtrBlockCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* IV;
		IL2CPP::Array<uint8_t>* ofbV;
		IL2CPP::Array<uint8_t>* ofbOutV;
		bool initialised;
		int32_t byteCount;
		int32_t blockSize;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		uint8_t ReturnByte(uint8_t input);
		void ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		uint8_t CalculateByte(uint8_t b);
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void incrementCounterAt(int32_t pos);
		void checkCounter();
	};
}

