#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainElement; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509ChainElementCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* _list;
		void _ctor();
		int32_t get_Count();
		bool get_IsSynchronized();
		System::Security::Cryptography::X509Certificates::X509ChainElement* get_Item(int32_t index);
		mscorlib::System::Object* get_SyncRoot();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void Add(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
		void Clear();
	};
}

