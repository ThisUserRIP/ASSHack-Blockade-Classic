#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509CertificateImpl.h"
namespace mscorlib::Mono::Security::X509 { struct X509Certificate; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509CertificateImpl; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace mscorlib::System::Security::Cryptography::X509Certificates
{
	struct X509CertificateImplMono : mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::Security::X509::X509Certificate* x509;
		void _ctor(mscorlib::Mono::Security::X509::X509Certificate* x509);
		bool get_IsValid();
		mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
		mscorlib::System::String* GetIssuerName(bool legacyV1Mode);
		mscorlib::System::String* GetSubjectName(bool legacyV1Mode);
		IL2CPP::Array<uint8_t>* GetRawCertData();
		IL2CPP::Array<uint8_t>* GetCertHash(bool lazy);
		mscorlib::System::DateTime GetValidFrom();
		mscorlib::System::DateTime GetValidUntil();
		bool Equals(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result);
		IL2CPP::Array<uint8_t>* GetSerialNumber();
		mscorlib::System::String* ToString(bool full);
		void Dispose(bool disposing);
	};
}

