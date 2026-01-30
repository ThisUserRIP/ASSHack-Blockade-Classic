#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm { struct IGcmMultiplier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm { struct IGcmExponentiator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct GcmBlockCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* ctrBlock;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* multiplier;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* exp;
		bool forEncryption;
		bool initialised;
		int32_t macSize;
		IL2CPP::Array<uint8_t>* lastKey;
		IL2CPP::Array<uint8_t>* nonce;
		IL2CPP::Array<uint8_t>* initialAssociatedText;
		IL2CPP::Array<uint8_t>* H;
		IL2CPP::Array<uint8_t>* J0;
		IL2CPP::Array<uint8_t>* bufBlock;
		IL2CPP::Array<uint8_t>* macBlock;
		IL2CPP::Array<uint8_t>* S;
		IL2CPP::Array<uint8_t>* S_at;
		IL2CPP::Array<uint8_t>* S_atPre;
		IL2CPP::Array<uint8_t>* counter;
		uint32_t blocksRemaining;
		int32_t bufOff;
		uint64_t totalLength;
		IL2CPP::Array<uint8_t>* atBlock;
		int32_t atBlockPos;
		uint64_t atLength;
		uint64_t atLengthPre;
		struct StaticFields
		{
			int32_t BlockSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* c);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* c, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m);
		mscorlib::System::String* get_AlgorithmName();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		int32_t GetBlockSize();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		IL2CPP::Array<uint8_t>* GetMac();
		int32_t GetOutputSize(int32_t len);
		int32_t GetUpdateOutputSize(int32_t len);
		void ProcessAadByte(uint8_t input);
		void ProcessAadBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		void InitCipher();
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void Reset(bool clearMac);
		void ProcessBlock(IL2CPP::Array<uint8_t>* buf, int32_t bufOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void ProcessPartial(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void gHASH(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b, int32_t len);
		void gHASHBlock(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b);
		void gHASHBlock(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b, int32_t off);
		void gHASHPartial(IL2CPP::Array<uint8_t>* Y, IL2CPP::Array<uint8_t>* b, int32_t off, int32_t len);
		void GetNextCtrBlock(IL2CPP::Array<uint8_t>* block);
		void CheckStatus();
	};
}

