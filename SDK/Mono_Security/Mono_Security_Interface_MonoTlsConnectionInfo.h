#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_Interface_CipherSuiteCode.h"
#include "Mono_Security_Interface_TlsProtocols.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::Interface
{
	struct MonoTlsConnectionInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::CipherSuiteCode _CipherSuiteCode_k__BackingField;
		Mono_Security::Mono::Security::Interface::TlsProtocols _ProtocolVersion_k__BackingField;
		mscorlib::System::String* _PeerDomainName_k__BackingField;
		Mono_Security::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode();
		void set_CipherSuiteCode(Mono_Security::Mono::Security::Interface::CipherSuiteCode value);
		Mono_Security::Mono::Security::Interface::TlsProtocols get_ProtocolVersion();
		void set_ProtocolVersion(Mono_Security::Mono::Security::Interface::TlsProtocols value);
		void set_PeerDomainName(mscorlib::System::String* value);
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

