#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_CollectionBase.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Mono::Security { struct ASN1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::Mono::Security::X509
{
	struct X509ExtensionCollection : mscorlib::System::Collections::CollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool readOnly;
		void _ctor();
		void _ctor(mscorlib::Mono::Security::ASN1* asn1);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

