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
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	struct OcbBlockCipher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher;
		bool forEncryption;
		int32_t macSize;
		IL2CPP::Array<uint8_t>* initialAssociatedText;
		mscorlib::System::Collections::IList* L;
		IL2CPP::Array<uint8_t>* L_Asterisk;
		IL2CPP::Array<uint8_t>* L_Dollar;
		IL2CPP::Array<uint8_t>* KtopInput;
		IL2CPP::Array<uint8_t>* Stretch;
		IL2CPP::Array<uint8_t>* OffsetMAIN_0;
		IL2CPP::Array<uint8_t>* hashBlock;
		IL2CPP::Array<uint8_t>* mainBlock;
		int32_t hashBlockPos;
		int32_t mainBlockPos;
		int64_t hashBlockCount;
		int64_t mainBlockCount;
		IL2CPP::Array<uint8_t>* OffsetHASH;
		IL2CPP::Array<uint8_t>* Sum;
		IL2CPP::Array<uint8_t>* OffsetMAIN;
		IL2CPP::Array<uint8_t>* Checksum;
		IL2CPP::Array<uint8_t>* macBlock;
		struct StaticFields
		{
			int32_t BLOCK_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t ProcessNonce(IL2CPP::Array<uint8_t>* N);
		int32_t GetBlockSize();
		IL2CPP::Array<uint8_t>* GetMac();
		int32_t GetOutputSize(int32_t len);
		int32_t GetUpdateOutputSize(int32_t len);
		void ProcessAadByte(uint8_t input);
		void ProcessAadBytes(IL2CPP::Array<uint8_t>* input, int32_t off, int32_t len);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void Clear(IL2CPP::Array<uint8_t>* bs);
		IL2CPP::Array<uint8_t>* GetLSub(int32_t n);
		void ProcessHashBlock();
		void ProcessMainBlock(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset(bool clearMac);
		void UpdateHASH(IL2CPP::Array<uint8_t>* LSub);
		static IL2CPP::Array<uint8_t>* OCB_double(IL2CPP::Array<uint8_t>* block);
		static void OCB_extend(IL2CPP::Array<uint8_t>* block, int32_t pos);
		static int32_t OCB_ntz(int64_t x);
		static int32_t ShiftLeft(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint8_t>* output);
		static void Xor(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint8_t>* val);
	};
}

