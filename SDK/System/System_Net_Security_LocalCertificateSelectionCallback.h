#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace mscorlib::System { struct String; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::System::Net::Security
{
	struct LocalCertificateSelectionCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(mscorlib::System::Object* sender, mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::Object* sender, mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

