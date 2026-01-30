#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct Salsa20Engine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t rounds;
		int32_t index;
		IL2CPP::Array<uint32_t>* engineState;
		IL2CPP::Array<uint32_t>* x;
		IL2CPP::Array<uint8_t>* keyStream;
		bool initialised;
		uint32_t cW0;
		uint32_t cW1;
		uint32_t cW2;
		struct StaticFields
		{
			int32_t DEFAULT_ROUNDS;
			int32_t StateSize;
			IL2CPP::Array<uint32_t>* TAU_SIGMA;
			IL2CPP::Array<uint8_t>* sigma;
			IL2CPP::Array<uint8_t>* tau;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void PackTauOrSigma(int32_t keyLength, IL2CPP::Array<uint32_t>* state, int32_t stateOffset);
		void _ctor();
		void _ctor(int32_t rounds);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t get_NonceSize();
		mscorlib::System::String* get_AlgorithmName();
		uint8_t ReturnByte(uint8_t input);
		void AdvanceCounter();
		void ProcessBytes(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void Reset();
		void ResetCounter();
		void SetKey(IL2CPP::Array<uint8_t>* keyBytes, IL2CPP::Array<uint8_t>* ivBytes);
		void GenerateKeyStream(IL2CPP::Array<uint8_t>* output);
		static void SalsaCore(int32_t rounds, IL2CPP::Array<uint32_t>* input, IL2CPP::Array<uint32_t>* x);
		static uint32_t R(uint32_t x, int32_t y);
		void ResetLimitCounter();
		bool LimitExceeded();
		bool LimitExceeded(uint32_t len);
		static void _cctor();
	};
}

