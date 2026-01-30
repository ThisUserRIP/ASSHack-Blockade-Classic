#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct DesEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* workingKey;
		struct StaticFields
		{
			int32_t BLOCK_SIZE;
			IL2CPP::Array<int16_t>* bytebit;
			IL2CPP::Array<int32_t>* bigbyte;
			IL2CPP::Array<uint8_t>* pc1;
			IL2CPP::Array<uint8_t>* totrot;
			IL2CPP::Array<uint8_t>* pc2;
			IL2CPP::Array<uint32_t>* SP1;
			IL2CPP::Array<uint32_t>* SP2;
			IL2CPP::Array<uint32_t>* SP3;
			IL2CPP::Array<uint32_t>* SP4;
			IL2CPP::Array<uint32_t>* SP5;
			IL2CPP::Array<uint32_t>* SP6;
			IL2CPP::Array<uint32_t>* SP7;
			IL2CPP::Array<uint32_t>* SP8;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		IL2CPP::Array<int32_t>* GetWorkingKey();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		static IL2CPP::Array<int32_t>* GenerateWorkingKey(bool encrypting, IL2CPP::Array<uint8_t>* key);
		static void DesFunc(IL2CPP::Array<int32_t>* wKey, IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void _ctor();
		static void _cctor();
	};
}

