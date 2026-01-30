#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct CcmBlockCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
		IL2CPP::Array<uint8_t>* macBlock;
		bool forEncryption;
		IL2CPP::Array<uint8_t>* nonce;
		IL2CPP::Array<uint8_t>* initialAssociatedText;
		int32_t macSize;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* keyParam;
		mscorlib::System::IO::MemoryStream* associatedText;
		mscorlib::System::IO::MemoryStream* data;
		struct StaticFields
		{
			int32_t BlockSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetBlockSize();
		void ProcessAadByte(uint8_t input);
		void ProcessAadBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void Reset();
		IL2CPP::Array<uint8_t>* GetMac();
		int32_t GetUpdateOutputSize(int32_t len);
		int32_t GetOutputSize(int32_t len);
		IL2CPP::Array<uint8_t>* ProcessPacket(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen);
		int32_t ProcessPacket(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t CalculateMac(IL2CPP::Array<uint8_t>* data, int32_t dataOff, int32_t dataLen, IL2CPP::Array<uint8_t>* macBlock);
		int32_t GetAssociatedTextLength();
		bool HasAssociatedText();
		static void _cctor();
	};
}

