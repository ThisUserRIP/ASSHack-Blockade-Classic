#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_SortedList.h"
namespace mscorlib::System::Collections { struct SortedList; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IList; };

namespace mscorlib::System::Collections
{
	struct SortedList_SyncSortedList : mscorlib::System::Collections::SortedList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::SortedList* _list;
		mscorlib::System::Object* _root;
		void _ctor(mscorlib::System::Collections::SortedList* list);
		int32_t get_Count();
		mscorlib::System::Object* get_SyncRoot();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		int32_t get_Capacity();
		void Clear();
		mscorlib::System::Object* Clone();
		bool Contains(mscorlib::System::Object* key);
		bool ContainsKey(mscorlib::System::Object* key);
		bool ContainsValue(mscorlib::System::Object* key);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Object* GetByIndex(int32_t index);
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Object* GetKey(int32_t index);
		mscorlib::System::Collections::IList* GetKeyList();
		mscorlib::System::Collections::IList* GetValueList();
		int32_t IndexOfKey(mscorlib::System::Object* key);
		int32_t IndexOfValue(mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
		void Remove(mscorlib::System::Object* key);
	};
}

