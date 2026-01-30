#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Array; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };

namespace mscorlib::System::Collections
{
	struct EmptyReadOnlyDictionaryInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t get_Count();
		mscorlib::System::Object* get_SyncRoot();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		bool Contains(mscorlib::System::Object* key);
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		void Remove(mscorlib::System::Object* key);
	};
}

