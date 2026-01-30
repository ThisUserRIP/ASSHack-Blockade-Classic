#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	struct CMac : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* ZEROES;
		IL2CPP::Array<uint8_t>* mac;
		IL2CPP::Array<uint8_t>* buf;
		int32_t bufOff;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
		int32_t macSize;
		IL2CPP::Array<uint8_t>* L;
		IL2CPP::Array<uint8_t>* Lu;
		IL2CPP::Array<uint8_t>* Lu2;
		struct StaticFields
		{
			uint8_t CONSTANT_128;
			uint8_t CONSTANT_64;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t macSizeInBits);
		mscorlib::System::String* get_AlgorithmName();
		static int32_t ShiftLeft(IL2CPP::Array<uint8_t>* block, IL2CPP::Array<uint8_t>* output);
		static IL2CPP::Array<uint8_t>* DoubleLu(IL2CPP::Array<uint8_t>* input);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetMacSize();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void Reset();
	};
}

