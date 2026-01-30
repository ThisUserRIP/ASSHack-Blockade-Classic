#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct KCcmBlockCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine;
		int32_t macSize;
		bool forEncryption;
		IL2CPP::Array<uint8_t>* initialAssociatedText;
		IL2CPP::Array<uint8_t>* mac;
		IL2CPP::Array<uint8_t>* macBlock;
		IL2CPP::Array<uint8_t>* nonce;
		IL2CPP::Array<uint8_t>* G1;
		IL2CPP::Array<uint8_t>* buffer;
		IL2CPP::Array<uint8_t>* s;
		IL2CPP::Array<uint8_t>* counter;
		mscorlib::System::IO::MemoryStream* associatedText;
		mscorlib::System::IO::MemoryStream* data;
		int32_t Nb_;
		struct StaticFields
		{
			int32_t BYTES_IN_INT;
			int32_t BITS_IN_BYTE;
			int32_t MAX_MAC_BIT_LENGTH;
			int32_t MIN_MAC_BIT_LENGTH;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void setNb(int32_t Nb);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetBlockSize();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		void ProcessAadByte(uint8_t input);
		void ProcessAadBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		void ProcessAAD(IL2CPP::Array<uint8_t>* assocText, int32_t assocOff, int32_t assocLen, int32_t dataLen);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t inLen, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessPacket(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void CalculateMac(IL2CPP::Array<uint8_t>* authText, int32_t authOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		IL2CPP::Array<uint8_t>* GetMac();
		int32_t GetUpdateOutputSize(int32_t len);
		int32_t GetOutputSize(int32_t len);
		void Reset();
		void intToBytes(int32_t num, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		uint8_t getFlag(bool authTextPresents, int32_t macSize);
		static void _cctor();
	};
}

