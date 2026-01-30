#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Security::Cryptography { struct Oid; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Security::Cryptography
{
	struct AsnEncodedData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::Oid* _oid;
		IL2CPP::Array<uint8_t>* _raw;
		void _ctor();
		void _ctor(System::Security::Cryptography::Oid* oid, IL2CPP::Array<uint8_t>* rawData);
		void set_Oid(System::Security::Cryptography::Oid* value);
		IL2CPP::Array<uint8_t>* get_RawData();
		void set_RawData(IL2CPP::Array<uint8_t>* value);
		void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
		mscorlib::System::String* ToString(bool multiLine);
		mscorlib::System::String* Default(bool multiLine);
		mscorlib::System::String* BasicConstraintsExtension(bool multiLine);
		mscorlib::System::String* EnhancedKeyUsageExtension(bool multiLine);
		mscorlib::System::String* KeyUsageExtension(bool multiLine);
		mscorlib::System::String* SubjectKeyIdentifierExtension(bool multiLine);
		mscorlib::System::String* SubjectAltName(bool multiLine);
		mscorlib::System::String* NetscapeCertType(bool multiLine);
	};
}

