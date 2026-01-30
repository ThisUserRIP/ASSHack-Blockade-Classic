#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct ThreefishEngine; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { struct SkeinEngine_Parameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { struct SkeinEngine_UBI; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct SkeinParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct SkeinEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* threefish;
		int32_t outputSizeBytes;
		IL2CPP::Array<uint64_t>* chain;
		IL2CPP::Array<uint64_t>* initialState;
		IL2CPP::Array<uint8_t>* key;
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>* preMessageParameters;
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>* postMessageParameters;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine_UBI* ubi;
		IL2CPP::Array<uint8_t>* singleByte;
		struct StaticFields
		{
			int32_t SKEIN_256;
			int32_t SKEIN_512;
			int32_t SKEIN_1024;
			int32_t PARAM_TYPE_KEY;
			int32_t PARAM_TYPE_CONFIG;
			int32_t PARAM_TYPE_MESSAGE;
			int32_t PARAM_TYPE_OUTPUT;
			mscorlib::System::Collections::IDictionary* INITIAL_STATES;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static void InitialState(int32_t blockSize, int32_t outputSize, IL2CPP::Array<uint64_t>* state);
		static int32_t VariantIdentifier(int32_t blockSizeBytes, int32_t outputSizeBytes);
		void _ctor(int32_t blockSizeBits, int32_t outputSizeBits);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine);
		static IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>* Clone(IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>* data, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine_Parameter*>* existing);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		int32_t get_OutputSize();
		int32_t get_BlockSize();
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);
		void InitParams(mscorlib::System::Collections::IDictionary* parameters);
		void CreateInitialState();
		void Reset();
		void UbiComplete(int32_t type, IL2CPP::Array<uint8_t>* value);
		void UbiInit(int32_t type);
		void UbiFinal();
		void CheckInitialised();
		void Update(uint8_t inByte);
		void Update(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void Output(uint64_t outputSequence, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff, int32_t outputBytes);
	};
}

