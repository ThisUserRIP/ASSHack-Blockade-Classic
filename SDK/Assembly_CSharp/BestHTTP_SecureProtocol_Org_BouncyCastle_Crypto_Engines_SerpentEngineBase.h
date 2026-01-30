#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct SerpentEngineBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool encrypting;
		IL2CPP::Array<int32_t>* wKey;
		int32_t X0;
		int32_t X1;
		int32_t X2;
		int32_t X3;
		struct StaticFields
		{
			int32_t BlockSize;
			int32_t ROUNDS;
			int32_t PHI;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init(bool encrypting, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		static int32_t RotateLeft(int32_t x, int32_t bits);
		static int32_t RotateRight(int32_t x, int32_t bits);
		void Sb0(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib0(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb1(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib1(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb2(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib2(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb3(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib3(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb4(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib4(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb5(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib5(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb6(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib6(int32_t a, int32_t b, int32_t c, int32_t d);
		void Sb7(int32_t a, int32_t b, int32_t c, int32_t d);
		void Ib7(int32_t a, int32_t b, int32_t c, int32_t d);
		void LT();
		void InverseLT();
		IL2CPP::Array<int32_t>* MakeWorkingKey(IL2CPP::Array<uint8_t>* key);
		void EncryptBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void DecryptBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		static void _cctor();
	};
}

