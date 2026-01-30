#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct HkdfParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* ikm;
		bool skipExpand;
		IL2CPP::Array<uint8_t>* salt;
		IL2CPP::Array<uint8_t>* info;
		void _ctor(IL2CPP::Array<uint8_t>* ikm, bool skip, IL2CPP::Array<uint8_t>* salt, IL2CPP::Array<uint8_t>* info);
		void _ctor(IL2CPP::Array<uint8_t>* ikm, IL2CPP::Array<uint8_t>* salt, IL2CPP::Array<uint8_t>* info);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* SkipExtractParameters(IL2CPP::Array<uint8_t>* ikm, IL2CPP::Array<uint8_t>* info);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::HkdfParameters* DefaultParameters(IL2CPP::Array<uint8_t>* ikm);
		IL2CPP::Array<uint8_t>* GetIkm();
		bool get_SkipExtract();
		IL2CPP::Array<uint8_t>* GetSalt();
		IL2CPP::Array<uint8_t>* GetInfo();
	};
}

