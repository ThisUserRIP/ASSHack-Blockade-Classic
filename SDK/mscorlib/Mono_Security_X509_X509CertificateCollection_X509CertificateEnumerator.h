#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_X509_X509CertificateCollection.h"
namespace mscorlib::Mono::Security::X509 { struct X509CertificateCollection; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Mono::Security::X509 { struct X509Certificate; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::Mono::Security::X509
{
	struct X509CertificateCollection_X509CertificateEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IEnumerator* enumerator;
		void _ctor(mscorlib::Mono::Security::X509::X509CertificateCollection* mappings);
		mscorlib::Mono::Security::X509::X509Certificate* get_Current();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		bool System_Collections_IEnumerator_MoveNext();
		void System_Collections_IEnumerator_Reset();
		bool MoveNext();
	};
}

