#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_Sockets_IPProtectionLevel.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Net_Security_EncryptionPolicy.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::Configuration
{
	struct SettingsSectionInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool HttpListenerUnescapeRequestUrl;
		System::Net::Sockets::IPProtectionLevel IPProtectionLevel;
		bool _UseNagleAlgorithm_k__BackingField;
		bool _Expect100Continue_k__BackingField;
		bool _CheckCertificateName_k__BackingField;
		int32_t _DnsRefreshTimeout_k__BackingField;
		bool _EnableDnsRoundRobin_k__BackingField;
		bool _CheckCertificateRevocationList_k__BackingField;
		System::Net::Security::EncryptionPolicy _EncryptionPolicy_k__BackingField;
		struct StaticFields
		{
			System::Net::Configuration::SettingsSectionInternal* instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::Net::Configuration::SettingsSectionInternal* get_Section();
		bool get_UseNagleAlgorithm();
		void set_UseNagleAlgorithm(bool value);
		bool get_Expect100Continue();
		void set_Expect100Continue(bool value);
		bool get_CheckCertificateName();
		void set_CheckCertificateName(bool value);
		int32_t get_DnsRefreshTimeout();
		void set_DnsRefreshTimeout(int32_t value);
		bool get_EnableDnsRoundRobin();
		void set_EnableDnsRoundRobin(bool value);
		bool get_CheckCertificateRevocationList();
		void set_CheckCertificateRevocationList(bool value);
		System::Net::Security::EncryptionPolicy get_EncryptionPolicy();
		void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value);
		bool get_Ipv6Enabled();
		void _ctor();
		static void _cctor();
	};
}

