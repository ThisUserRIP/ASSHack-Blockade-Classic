#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509Extension.h"
namespace System::System::Security::Cryptography { struct OidCollection; };
#include "System_Security_Cryptography_AsnDecodeStatus.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography { struct AsnEncodedData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509EnhancedKeyUsageExtension : System::Security::Cryptography::X509Certificates::X509Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::OidCollection* _enhKeyUsage;
		System::Security::Cryptography::AsnDecodeStatus _status;
		void _ctor(System::Security::Cryptography::AsnEncodedData* encodedEnhancedKeyUsages, bool critical);
		void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
		System::Security::Cryptography::AsnDecodeStatus Decode(IL2CPP::Array<uint8_t>* extension);
		mscorlib::System::String* ToString(bool multiLine);
	};
}

