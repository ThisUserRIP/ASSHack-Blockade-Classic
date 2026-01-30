#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct GeneralDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* xBuf;
		int32_t xBufOff;
		int64_t byteCount;
		struct StaticFields
		{
			int32_t BYTE_LENGTH;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GeneralDigest* t);
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		void Finish();
		void Reset();
		int32_t GetByteLength();
		void ProcessWord(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void ProcessLength(int64_t bitLength);
		void ProcessBlock();
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* t);
	};
}

