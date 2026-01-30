#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_CollectionBase.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection_X509CertificateEnumerator; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509CertificateCollection : mscorlib::System::Collections::CollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* get_Item(int32_t index);
		void AddRange(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);
		System::Security::Cryptography::X509Certificates::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator();
		int32_t GetHashCode();
	};
}

