#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Mono::Security { struct ASN1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace mscorlib::Mono::Security::X509
{
	struct X501 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* countryName;
			IL2CPP::Array<uint8_t>* organizationName;
			IL2CPP::Array<uint8_t>* organizationalUnitName;
			IL2CPP::Array<uint8_t>* commonName;
			IL2CPP::Array<uint8_t>* localityName;
			IL2CPP::Array<uint8_t>* stateOrProvinceName;
			IL2CPP::Array<uint8_t>* streetAddress;
			IL2CPP::Array<uint8_t>* domainComponent;
			IL2CPP::Array<uint8_t>* userid;
			IL2CPP::Array<uint8_t>* email;
			IL2CPP::Array<uint8_t>* dnQualifier;
			IL2CPP::Array<uint8_t>* title;
			IL2CPP::Array<uint8_t>* surname;
			IL2CPP::Array<uint8_t>* givenName;
			IL2CPP::Array<uint8_t>* initial;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* ToString(mscorlib::Mono::Security::ASN1* seq);
		static mscorlib::System::String* ToString(mscorlib::Mono::Security::ASN1* seq, bool reversed, mscorlib::System::String* separator, bool quotes);
		static void AppendEntry(mscorlib::System::Text::StringBuilder* sb, mscorlib::Mono::Security::ASN1* entry, bool quotes);
		static void _cctor();
	};
}

