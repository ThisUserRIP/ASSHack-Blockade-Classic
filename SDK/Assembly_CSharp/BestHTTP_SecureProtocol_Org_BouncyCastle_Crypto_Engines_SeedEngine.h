#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct SeedEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* wKey;
		bool forEncryption;
		struct StaticFields
		{
			int32_t BlockSize;
			IL2CPP::Array<uint32_t>* SS0;
			IL2CPP::Array<uint32_t>* SS1;
			IL2CPP::Array<uint32_t>* SS2;
			IL2CPP::Array<uint32_t>* SS3;
			IL2CPP::Array<uint32_t>* KC;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* inBuf, int32_t inOff, IL2CPP::Array<uint8_t>* outBuf, int32_t outOff);
		void Reset();
		IL2CPP::Array<int32_t>* createWorkingKey(IL2CPP::Array<uint8_t>* inKey);
		int32_t extractW1(int64_t lVal);
		int32_t extractW0(int64_t lVal);
		int64_t rotateLeft8(int64_t x);
		int64_t rotateRight8(int64_t x);
		int64_t bytesToLong(IL2CPP::Array<uint8_t>* src, int32_t srcOff);
		void longToBytes(IL2CPP::Array<uint8_t>* dest, int32_t destOff, int64_t value);
		int32_t G(int32_t x);
		int64_t F(int32_t ki0, int32_t ki1, int64_t r);
		int32_t phaseCalc1(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1);
		int32_t phaseCalc2(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1);
		void _ctor();
		static void _cctor();
	};
}

