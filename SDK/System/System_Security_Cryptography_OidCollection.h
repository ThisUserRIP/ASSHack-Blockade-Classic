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
namespace System::System::Security::Cryptography { struct Oid; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System::System::Security::Cryptography
{
	struct OidCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* m_list;
		void _ctor();
		int32_t Add(System::Security::Cryptography::Oid* oid);
		System::Security::Cryptography::Oid* get_Item(int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
	};
}

