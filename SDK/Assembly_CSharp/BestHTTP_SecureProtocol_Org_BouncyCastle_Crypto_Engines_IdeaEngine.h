#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct IdeaEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* workingKey;
		struct StaticFields
		{
			int32_t BLOCK_SIZE;
			int32_t MASK;
			int32_t BASE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		int32_t BytesToWord(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void WordToBytes(int32_t word, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t Mul(int32_t x, int32_t y);
		void IdeaFunc(IL2CPP::Array<int32_t>* workingKey, IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		IL2CPP::Array<int32_t>* ExpandKey(IL2CPP::Array<uint8_t>* uKey);
		int32_t MulInv(int32_t x);
		int32_t AddInv(int32_t x);
		IL2CPP::Array<int32_t>* InvertKey(IL2CPP::Array<int32_t>* inKey);
		IL2CPP::Array<int32_t>* GenerateWorkingKey(bool forEncryption, IL2CPP::Array<uint8_t>* userKey);
		static void _cctor();
	};
}

