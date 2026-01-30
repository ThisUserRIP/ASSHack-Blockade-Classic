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
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc7748
{
	struct X448 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t PointSize;
			int32_t ScalarSize;
			uint32_t C_A;
			uint32_t C_A24;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool CalculateAgreement(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint8_t>* u, int32_t uOff, IL2CPP::Array<uint8_t>* r, int32_t rOff);
		static uint32_t Decode32(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void DecodeScalar(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint32_t>* n);
		static void GeneratePrivateKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, IL2CPP::Array<uint8_t>* k);
		static void GeneratePublicKey(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint8_t>* r, int32_t rOff);
		static void PointDouble(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Precompute();
		static void ScalarMult(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint8_t>* u, int32_t uOff, IL2CPP::Array<uint8_t>* r, int32_t rOff);
		static void ScalarMultBase(IL2CPP::Array<uint8_t>* k, int32_t kOff, IL2CPP::Array<uint8_t>* r, int32_t rOff);
		void _ctor();
	};
}

