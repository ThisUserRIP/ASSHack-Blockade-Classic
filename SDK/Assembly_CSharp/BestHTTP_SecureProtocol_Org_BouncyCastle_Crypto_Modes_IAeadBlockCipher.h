#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct IAeadBlockCipher
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_AlgorithmName();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetBlockSize();
		void ProcessAadByte(uint8_t input);
		void ProcessAadBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		IL2CPP::Array<uint8_t>* GetMac();
		int32_t GetUpdateOutputSize(int32_t len);
		int32_t GetOutputSize(int32_t len);
		void Reset();
	};
}

