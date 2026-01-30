#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	struct Gost28147Mac : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t bufOff;
		IL2CPP::Array<uint8_t>* buf;
		IL2CPP::Array<uint8_t>* mac;
		bool firstStep;
		IL2CPP::Array<int32_t>* workingKey;
		IL2CPP::Array<uint8_t>* macIV;
		IL2CPP::Array<uint8_t>* S;
		struct StaticFields
		{
			int32_t blockSize;
			int32_t macSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static IL2CPP::Array<int32_t>* GenerateWorkingKey(IL2CPP::Array<uint8_t>* userKey);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetMacSize();
		int32_t gost28147_mainStep(int32_t n1, int32_t key);
		void gost28147MacFunc(IL2CPP::Array<int32_t>* workingKey, IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		static int32_t bytesToint(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		static void intTobytes(int32_t num, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		static IL2CPP::Array<uint8_t>* CM5func(IL2CPP::Array<uint8_t>* buf, int32_t bufOff, IL2CPP::Array<uint8_t>* mac);
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
	};
}

