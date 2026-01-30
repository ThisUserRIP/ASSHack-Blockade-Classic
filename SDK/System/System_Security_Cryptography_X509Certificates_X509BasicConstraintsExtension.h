#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509Extension.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Security_Cryptography_AsnDecodeStatus.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography { struct AsnEncodedData; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509BasicConstraintsExtension : System::Security::Cryptography::X509Certificates::X509Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _certificateAuthority;
		bool _hasPathLengthConstraint;
		int32_t _pathLengthConstraint;
		System::Security::Cryptography::AsnDecodeStatus _status;
		struct StaticFields
		{
			mscorlib::System::String* oid;
			mscorlib::System::String* friendlyName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical);
		void _ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical);
		bool get_CertificateAuthority();
		bool get_HasPathLengthConstraint();
		int32_t get_PathLengthConstraint();
		void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
		System::Security::Cryptography::AsnDecodeStatus Decode(IL2CPP::Array<uint8_t>* extension);
		IL2CPP::Array<uint8_t>* Encode();
		mscorlib::System::String* ToString(bool multiLine);
	};
}

