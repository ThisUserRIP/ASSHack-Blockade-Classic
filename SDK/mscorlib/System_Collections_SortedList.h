#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System::Collections { struct SortedList_KeyList; };
namespace mscorlib::System::Collections { struct SortedList_ValueList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IList; };

namespace mscorlib::System::Collections
{
	struct SortedList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* keys;
		IL2CPP::Array<mscorlib::System::Object*>* values;
		int32_t _size;
		int32_t version;
		mscorlib::System::Collections::IComparer* comparer;
		mscorlib::System::Collections::SortedList_KeyList* keyList;
		mscorlib::System::Collections::SortedList_ValueList* valueList;
		mscorlib::System::Object* _syncRoot;
		struct StaticFields
		{
			int32_t _defaultCapacity;
			IL2CPP::Array<mscorlib::System::Object*>* emptyArray;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init();
		void _ctor(int32_t initialCapacity);
		void _ctor(mscorlib::System::Collections::IComparer* comparer);
		void _ctor(mscorlib::System::Collections::IComparer* comparer, int32_t capacity);
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		int32_t get_Capacity();
		void set_Capacity(int32_t value);
		int32_t get_Count();
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		void Clear();
		mscorlib::System::Object* Clone();
		bool Contains(mscorlib::System::Object* key);
		bool ContainsKey(mscorlib::System::Object* key);
		bool ContainsValue(mscorlib::System::Object* value);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		void EnsureCapacity(int32_t min);
		mscorlib::System::Object* GetByIndex(int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Object* GetKey(int32_t index);
		mscorlib::System::Collections::IList* GetKeyList();
		mscorlib::System::Collections::IList* GetValueList();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		int32_t IndexOfKey(mscorlib::System::Object* key);
		int32_t IndexOfValue(mscorlib::System::Object* value);
		void Insert(int32_t index, mscorlib::System::Object* key, mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
		void Remove(mscorlib::System::Object* key);
		static mscorlib::System::Collections::SortedList* Synchronized(mscorlib::System::Collections::SortedList* list);
		static void _cctor();
	};
}

