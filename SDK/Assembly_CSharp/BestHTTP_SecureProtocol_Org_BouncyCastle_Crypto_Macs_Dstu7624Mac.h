#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct Dstu7624Engine; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	struct Dstu7624Mac : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t macSize;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine;
		int32_t blockSize;
		IL2CPP::Array<uint8_t>* c;
		IL2CPP::Array<uint8_t>* cTemp;
		IL2CPP::Array<uint8_t>* kDelta;
		IL2CPP::Array<uint8_t>* buf;
		int32_t bufOff;
		void _ctor(int32_t blockSizeBits, int32_t q);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetMacSize();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		void processBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void Xor(IL2CPP::Array<uint8_t>* c, int32_t cOff, IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* xorResult);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
	};
}

