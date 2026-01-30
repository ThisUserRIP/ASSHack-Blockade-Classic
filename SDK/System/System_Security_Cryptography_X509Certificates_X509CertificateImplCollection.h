#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509CertificateImpl; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509CertificateImplCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl>* list;
		void _ctor();
		void _ctor(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* other);
		int32_t get_Count();
		mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Item(int32_t index);
		void Add(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, bool takeOwnership);
		System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* Clone();
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
	};
}

