#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509Extension.h"
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_X509Certificates_X509KeyUsageFlags.h"
#include "System_Security_Cryptography_AsnDecodeStatus.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography { struct AsnEncodedData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509KeyUsageExtension : System::Security::Cryptography::X509Certificates::X509Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _keyUsages;
		System::Security::Cryptography::AsnDecodeStatus _status;
		struct StaticFields
		{
			mscorlib::System::String* oid;
			mscorlib::System::String* friendlyName;
			System::Security::Cryptography::X509Certificates::X509KeyUsageFlags all;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical);
		void _ctor(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical);
		System::Security::Cryptography::X509Certificates::X509KeyUsageFlags get_KeyUsages();
		void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
		System::Security::Cryptography::X509Certificates::X509KeyUsageFlags GetValidFlags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags);
		System::Security::Cryptography::AsnDecodeStatus Decode(IL2CPP::Array<uint8_t>* extension);
		IL2CPP::Array<uint8_t>* Encode();
		mscorlib::System::String* ToString(bool multiLine);
	};
}

