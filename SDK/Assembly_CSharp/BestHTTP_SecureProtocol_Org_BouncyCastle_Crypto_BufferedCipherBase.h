#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	struct BufferedCipherBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* EmptyBuffer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_AlgorithmName();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		int32_t GetBlockSize();
		int32_t GetOutputSize(int32_t inputLen);
		int32_t GetUpdateOutputSize(int32_t inputLen);
		IL2CPP::Array<uint8_t>* ProcessByte(uint8_t input);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		IL2CPP::Array<uint8_t>* ProcessBytes(IL2CPP::Array<uint8_t>* input);
		IL2CPP::Array<uint8_t>* ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		IL2CPP::Array<uint8_t>* DoFinal();
		IL2CPP::Array<uint8_t>* DoFinal(IL2CPP::Array<uint8_t>* input);
		IL2CPP::Array<uint8_t>* DoFinal(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void _ctor();
		static void _cctor();
	};
}

