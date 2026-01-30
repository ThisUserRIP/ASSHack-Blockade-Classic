#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct RC564Engine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _noRounds;
		IL2CPP::Array<int64_t>* _S;
		bool forEncryption;
		struct StaticFields
		{
			int32_t wordSize;
			int32_t bytesPerWord;
			int64_t P64;
			int64_t Q64;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void SetKey(IL2CPP::Array<uint8_t>* key);
		int32_t EncryptBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t DecryptBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int64_t RotateLeft(int64_t x, int64_t y);
		int64_t RotateRight(int64_t x, int64_t y);
		int64_t BytesToWord(IL2CPP::Array<uint8_t>* src, int32_t srcOff);
		void WordToBytes(int64_t word, IL2CPP::Array<uint8_t>* dst, int32_t dstOff);
		static void _cctor();
	};
}

