#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509ChainImpl.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainElementCollection; };
#include "Mono_Unity_UnityTls_unitytls_x509list_ref.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list_ref; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainPolicy; };
#include "System_Security_Cryptography_X509Certificates_X509ChainStatus.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainStatus; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Security_Cryptography_X509Certificates_X509ChainStatusFlags.h"

namespace System::Mono::Unity
{
	struct X509ChainImplUnityTls : System::Security::Cryptography::X509Certificates::X509ChainImpl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements;
		System::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain;
		System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy;
		mscorlib::System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509ChainStatus>* chainStatusList;
		void _ctor(System::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain);
		bool get_IsValid();
		System::Mono::Unity::UnityTls_unitytls_x509list_ref get_NativeCertificateChain();
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
		void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
		void AddStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags errorCode);
		void Reset();
		void Dispose(bool disposing);
	};
}

