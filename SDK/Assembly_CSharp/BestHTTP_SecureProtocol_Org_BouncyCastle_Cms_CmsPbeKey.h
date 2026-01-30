#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct KeyParameter; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsPbeKey : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<wchar_t>* password;
		IL2CPP::Array<uint8_t>* salt;
		int32_t iterationCount;
		void _ctor(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount);
		void _ctor(mscorlib::System::String* password, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);
		void _ctor(IL2CPP::Array<wchar_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount);
		void _ctor(IL2CPP::Array<wchar_t>* password, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyDerivationAlgorithm);
		void Finalize();
		mscorlib::System::String* get_Password();
		IL2CPP::Array<uint8_t>* get_Salt();
		IL2CPP::Array<uint8_t>* GetSalt();
		int32_t get_IterationCount();
		mscorlib::System::String* get_Algorithm();
		mscorlib::System::String* get_Format();
		IL2CPP::Array<uint8_t>* GetEncoded();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetEncoded(mscorlib::System::String* algorithmOid);
	};
}

