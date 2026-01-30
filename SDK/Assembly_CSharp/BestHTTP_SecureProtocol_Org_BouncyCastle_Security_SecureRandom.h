#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Random.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { struct IRandomGenerator; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { struct DigestRandomGenerator; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	struct SecureRandom : mscorlib::System::Random_
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator;
		struct StaticFields
		{
			int64_t counter;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* master;
			double DoubleScale;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int64_t NextCounterValue();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* get_Master();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* CreatePrng(mscorlib::System::String* digestName, bool autoSeed);
		static IL2CPP::Array<uint8_t>* GetNextBytes(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* secureRandom, int32_t length);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* GetInstance(mscorlib::System::String* algorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* GetInstance(mscorlib::System::String* algorithm, bool autoSeed);
		static IL2CPP::Array<uint8_t>* GetSeed(int32_t length);
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* seed);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator);
		IL2CPP::Array<uint8_t>* GenerateSeed(int32_t length);
		void SetSeed(IL2CPP::Array<uint8_t>* seed);
		void SetSeed(int64_t seed);
		int32_t Next();
		int32_t Next(int32_t maxValue);
		int32_t Next(int32_t minValue, int32_t maxValue);
		void NextBytes(IL2CPP::Array<uint8_t>* buf);
		void NextBytes(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		double NextDouble();
		int32_t NextInt();
		int64_t NextLong();
		static void _cctor();
	};
}

