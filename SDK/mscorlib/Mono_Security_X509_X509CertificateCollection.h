#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_CollectionBase.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Mono::Security::X509 { struct X509Certificate; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::Mono::Security::X509 { struct X509CertificateCollection_X509CertificateEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::Mono::Security::X509
{
	struct X509CertificateCollection : mscorlib::System::Collections::CollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::Mono::Security::X509::X509Certificate* get_Item(int32_t index);
		int32_t Add(mscorlib::Mono::Security::X509::X509Certificate* value);
		mscorlib::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		int32_t GetHashCode();
	};
}

