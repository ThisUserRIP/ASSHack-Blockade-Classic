#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct SecurityParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t entity;
		int32_t cipherSuite;
		uint8_t compressionAlgorithm;
		int32_t prfAlgorithm;
		int32_t verifyDataLength;
		IL2CPP::Array<uint8_t>* masterSecret;
		IL2CPP::Array<uint8_t>* clientRandom;
		IL2CPP::Array<uint8_t>* serverRandom;
		IL2CPP::Array<uint8_t>* sessionHash;
		IL2CPP::Array<uint8_t>* pskIdentity;
		IL2CPP::Array<uint8_t>* srpIdentity;
		int16_t maxFragmentLength;
		bool truncatedHMac;
		bool encryptThenMac;
		bool extendedMasterSecret;
		void Clear();
		int32_t get_Entity();
		int32_t get_CipherSuite();
		uint8_t get_CompressionAlgorithm();
		int32_t get_PrfAlgorithm();
		int32_t get_VerifyDataLength();
		IL2CPP::Array<uint8_t>* get_MasterSecret();
		IL2CPP::Array<uint8_t>* get_ClientRandom();
		IL2CPP::Array<uint8_t>* get_ServerRandom();
		IL2CPP::Array<uint8_t>* get_SessionHash();
		IL2CPP::Array<uint8_t>* get_PskIdentity();
		IL2CPP::Array<uint8_t>* get_SrpIdentity();
		bool get_IsExtendedMasterSecret();
		void _ctor();
	};
}

