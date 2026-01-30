#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct INativeCertificateHelper; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509CertificateImpl; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::Mono::Security::X509 { struct X509Certificate; };
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h"

namespace mscorlib::System::Security::Cryptography::X509Certificates
{
	struct X509Helper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Security::Cryptography::X509Certificates::INativeCertificateHelper* nativeHelper;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InstallNativeHelper(mscorlib::System::Security::Cryptography::X509Certificates::INativeCertificateHelper* helper);
		static mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(IL2CPP::Array<uint8_t>* rawData);
		static mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
		static bool IsValid(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
		static void ThrowIfContextInvalid(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
		static mscorlib::System::Exception* GetInvalidContextException();
		static mscorlib::Mono::Security::X509::X509Certificate* ImportPkcs12(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password);
		static IL2CPP::Array<uint8_t>* PEM(mscorlib::System::String* type, IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* ConvertData(IL2CPP::Array<uint8_t>* data);
		static mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* ImportCore(IL2CPP::Array<uint8_t>* rawData);
		static mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
		static mscorlib::System::String* ToHexString(IL2CPP::Array<uint8_t>* data);
	};
}

