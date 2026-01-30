#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509ChainImpl.h"
#include "System_Security_Cryptography_X509Certificates_StoreLocation.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainElementCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainPolicy; };
#include "System_Security_Cryptography_X509Certificates_X509ChainStatus.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainStatus; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainElement; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2Collection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Store; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509ChainImplMono : System::Security::Cryptography::X509Certificates::X509ChainImpl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::StoreLocation location;
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements;
		System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy;
		IL2CPP::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status;
		mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* working_public_key;
		System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction;
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* roots;
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* cas;
		System::Security::Cryptography::X509Certificates::X509Store* root_store;
		System::Security::Cryptography::X509Certificates::X509Store* ca_store;
		System::Security::Cryptography::X509Certificates::X509Store* user_root_store;
		System::Security::Cryptography::X509Certificates::X509Store* user_ca_store;
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection;
		struct StaticFields
		{
			IL2CPP::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(bool useMachineContext);
		bool get_IsValid();
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
		void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
		void Reset();
		static void _cctor();
	};
}

