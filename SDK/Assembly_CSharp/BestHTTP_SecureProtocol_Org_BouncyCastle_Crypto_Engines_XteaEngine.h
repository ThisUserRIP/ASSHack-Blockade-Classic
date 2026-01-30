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
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct XteaEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* _S;
		IL2CPP::Array<uint32_t>* _sum0;
		IL2CPP::Array<uint32_t>* _sum1;
		bool _initialised;
		bool _forEncryption;
		struct StaticFields
		{
			int32_t rounds;
			int32_t block_size;
			int32_t delta;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void Reset();
		void setKey(IL2CPP::Array<uint8_t>* key);
		int32_t encryptBlock(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t decryptBlock(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
	};
}

