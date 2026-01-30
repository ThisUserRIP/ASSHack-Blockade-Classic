#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	struct VmpcMac : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t g;
		uint8_t n;
		IL2CPP::Array<uint8_t>* P;
		uint8_t s;
		IL2CPP::Array<uint8_t>* T;
		IL2CPP::Array<uint8_t>* workingIV;
		IL2CPP::Array<uint8_t>* workingKey;
		uint8_t x1;
		uint8_t x2;
		uint8_t x3;
		uint8_t x4;
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetMacSize();
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		void initKey(IL2CPP::Array<uint8_t>* keyBytes, IL2CPP::Array<uint8_t>* ivBytes);
		void Reset();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		void _ctor();
	};
}

