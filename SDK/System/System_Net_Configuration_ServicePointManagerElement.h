#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Net_Security_EncryptionPolicy.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct ServicePointManagerElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		bool get_CheckCertificateName();
		void set_CheckCertificateName(bool value);
		bool get_CheckCertificateRevocationList();
		void set_CheckCertificateRevocationList(bool value);
		int32_t get_DnsRefreshTimeout();
		void set_DnsRefreshTimeout(int32_t value);
		bool get_EnableDnsRoundRobin();
		void set_EnableDnsRoundRobin(bool value);
		System::Net::Security::EncryptionPolicy get_EncryptionPolicy();
		void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value);
		bool get_Expect100Continue();
		void set_Expect100Continue(bool value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		bool get_UseNagleAlgorithm();
		void set_UseNagleAlgorithm(bool value);
		void PostDeserialize();
	};
}

