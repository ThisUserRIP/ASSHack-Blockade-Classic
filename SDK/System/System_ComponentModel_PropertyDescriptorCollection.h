#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IComparer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct ICollection; };

namespace System::System::ComponentModel
{
	struct PropertyDescriptorCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* cachedFoundProperties;
		bool cachedIgnoreCase;
		IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* properties;
		int32_t propCount;
		IL2CPP::Array<mscorlib::System::String*>* namedSort;
		mscorlib::System::Collections::IComparer* comparer;
		bool propsOwned;
		bool needSort;
		bool readOnly;
		struct StaticFields
		{
			System::ComponentModel::PropertyDescriptorCollection* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* properties);
		void _ctor(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* properties, bool readOnly);
		void _ctor(IL2CPP::Array<System::ComponentModel::PropertyDescriptor*>* properties, int32_t propCount, IL2CPP::Array<mscorlib::System::String*>* namedSort, mscorlib::System::Collections::IComparer* comparer);
		int32_t get_Count();
		System::ComponentModel::PropertyDescriptor* get_Item(int32_t index);
		System::ComponentModel::PropertyDescriptor* get_Item(mscorlib::System::String* name);
		int32_t Add(System::ComponentModel::PropertyDescriptor* value);
		void Clear();
		bool Contains(System::ComponentModel::PropertyDescriptor* value);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		void EnsurePropsOwned();
		void EnsureSize(int32_t sizeNeeded);
		System::ComponentModel::PropertyDescriptor* Find(mscorlib::System::String* name, bool ignoreCase);
		int32_t IndexOf(System::ComponentModel::PropertyDescriptor* value);
		void Insert(int32_t index, System::ComponentModel::PropertyDescriptor* value);
		void Remove(System::ComponentModel::PropertyDescriptor* value);
		void RemoveAt(int32_t index);
		System::ComponentModel::PropertyDescriptorCollection* Sort();
		System::ComponentModel::PropertyDescriptorCollection* Sort(IL2CPP::Array<mscorlib::System::String*>* names);
		System::ComponentModel::PropertyDescriptorCollection* Sort(IL2CPP::Array<mscorlib::System::String*>* names, mscorlib::System::Collections::IComparer* comparer);
		System::ComponentModel::PropertyDescriptorCollection* Sort(mscorlib::System::Collections::IComparer* comparer);
		void InternalSort(IL2CPP::Array<mscorlib::System::String*>* names);
		void InternalSort(mscorlib::System::Collections::IComparer* sorter);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t System_Collections_ICollection_get_Count();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		void System_Collections_IDictionary_Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void System_Collections_IDictionary_Clear();
		bool System_Collections_IDictionary_Contains(mscorlib::System::Object* key);
		mscorlib::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
		bool System_Collections_IDictionary_get_IsFixedSize();
		bool System_Collections_IDictionary_get_IsReadOnly();
		mscorlib::System::Object* System_Collections_IDictionary_get_Item(mscorlib::System::Object* key);
		void System_Collections_IDictionary_set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
		mscorlib::System::Collections::ICollection* System_Collections_IDictionary_get_Values();
		void System_Collections_IDictionary_Remove(mscorlib::System::Object* key);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		int32_t System_Collections_IList_Add(mscorlib::System::Object* value);
		void System_Collections_IList_Clear();
		bool System_Collections_IList_Contains(mscorlib::System::Object* value);
		int32_t System_Collections_IList_IndexOf(mscorlib::System::Object* value);
		void System_Collections_IList_Insert(int32_t index, mscorlib::System::Object* value);
		bool System_Collections_IList_get_IsReadOnly();
		bool System_Collections_IList_get_IsFixedSize();
		void System_Collections_IList_Remove(mscorlib::System::Object* value);
		void System_Collections_IList_RemoveAt(int32_t index);
		mscorlib::System::Object* System_Collections_IList_get_Item(int32_t index);
		void System_Collections_IList_set_Item(int32_t index, mscorlib::System::Object* value);
		static void _cctor();
	};
}

