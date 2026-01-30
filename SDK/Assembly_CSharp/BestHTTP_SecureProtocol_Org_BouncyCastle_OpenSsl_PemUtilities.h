#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_OpenSsl_PemUtilities_PemBaseAlg.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_OpenSsl_PemUtilities_PemMode.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	struct PemUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void _cctor();
		static void ParseDekAlgName(mscorlib::System::String* dekAlgName, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg& baseAlg, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode& mode);
		static IL2CPP::Array<uint8_t>* Crypt(bool encrypt, IL2CPP::Array<uint8_t>* bytes, IL2CPP::Array<wchar_t>* password, mscorlib::System::String* dekAlgName, IL2CPP::Array<uint8_t>* iv);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(IL2CPP::Array<wchar_t>* password, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg baseAlg, IL2CPP::Array<uint8_t>* salt);
		void _ctor();
	};
}

