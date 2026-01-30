#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct CertificateRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* mCertificateTypes;
		mscorlib::System::Collections::IList* mSupportedSignatureAlgorithms;
		mscorlib::System::Collections::IList* mCertificateAuthorities;
		void _ctor(IL2CPP::Array<uint8_t>* certificateTypes, mscorlib::System::Collections::IList* supportedSignatureAlgorithms, mscorlib::System::Collections::IList* certificateAuthorities);
		IL2CPP::Array<uint8_t>* get_CertificateTypes();
		mscorlib::System::Collections::IList* get_SupportedSignatureAlgorithms();
		mscorlib::System::Collections::IList* get_CertificateAuthorities();
		void Encode(mscorlib::System::IO::Stream* output);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* Parse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context, mscorlib::System::IO::Stream* input);
	};
}

