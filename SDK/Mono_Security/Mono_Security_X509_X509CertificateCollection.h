#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Collections_CollectionBase.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Mono_Security::Mono::Security::X509 { struct X509Certificate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Mono_Security::Mono::Security::X509 { struct X509CertificateCollection_X509CertificateEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Mono_Security::Mono::Security::X509
{
	struct X509CertificateCollection : mscorlib::System::Collections::CollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		Mono_Security::Mono::Security::X509::X509Certificate* get_Item(int32_t index);
		int32_t Add(Mono_Security::Mono::Security::X509::X509Certificate* value);
		Mono_Security::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		int32_t GetHashCode();
	};
}

