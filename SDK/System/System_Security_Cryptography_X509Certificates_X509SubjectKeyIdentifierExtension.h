#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509Extension.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Security_Cryptography_AsnDecodeStatus.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography { struct AsnEncodedData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Security::Cryptography::X509Certificates { struct PublicKey; };
#include "System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierHashAlgorithm.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509SubjectKeyIdentifierExtension : System::Security::Cryptography::X509Certificates::X509Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _subjectKeyIdentifier;
		mscorlib::System::String* _ski;
		System::Security::Cryptography::AsnDecodeStatus _status;
		struct StaticFields
		{
			mscorlib::System::String* oid;
			mscorlib::System::String* friendlyName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical);
		void _ctor(IL2CPP::Array<uint8_t>* subjectKeyIdentifier, bool critical);
		void _ctor(mscorlib::System::String* subjectKeyIdentifier, bool critical);
		void _ctor(System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical);
		void _ctor(System::Security::Cryptography::X509Certificates::PublicKey* key, System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical);
		mscorlib::System::String* get_SubjectKeyIdentifier();
		void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
		static uint8_t FromHexChar(wchar_t c);
		static uint8_t FromHexChars(wchar_t c1, wchar_t c2);
		static IL2CPP::Array<uint8_t>* FromHex(mscorlib::System::String* hex);
		System::Security::Cryptography::AsnDecodeStatus Decode(IL2CPP::Array<uint8_t>* extension);
		IL2CPP::Array<uint8_t>* Encode();
		mscorlib::System::String* ToString(bool multiLine);
	};
}

