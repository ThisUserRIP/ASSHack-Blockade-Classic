#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct Gost28147Engine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* workingKey;
		bool forEncryption;
		IL2CPP::Array<uint8_t>* S;
		struct StaticFields
		{
			int32_t BlockSize;
			IL2CPP::Array<uint8_t>* Sbox_Default;
			IL2CPP::Array<uint8_t>* ESbox_Test;
			IL2CPP::Array<uint8_t>* ESbox_A;
			IL2CPP::Array<uint8_t>* ESbox_B;
			IL2CPP::Array<uint8_t>* ESbox_C;
			IL2CPP::Array<uint8_t>* ESbox_D;
			IL2CPP::Array<uint8_t>* DSbox_Test;
			IL2CPP::Array<uint8_t>* DSbox_A;
			mscorlib::System::Collections::IDictionary* sBoxes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static void AddSBox(mscorlib::System::String* sBoxName, IL2CPP::Array<uint8_t>* sBox);
		void _ctor();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		IL2CPP::Array<int32_t>* generateWorkingKey(bool forEncryption, IL2CPP::Array<uint8_t>* userKey);
		int32_t Gost28147_mainStep(int32_t n1, int32_t key);
		void Gost28147Func(IL2CPP::Array<int32_t>* workingKey, IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		static int32_t bytesToint(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff);
		static void intTobytes(int32_t num, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		static IL2CPP::Array<uint8_t>* GetSBox(mscorlib::System::String* sBoxName);
		static mscorlib::System::String* GetSBoxName(IL2CPP::Array<uint8_t>* sBox);
	};
}

