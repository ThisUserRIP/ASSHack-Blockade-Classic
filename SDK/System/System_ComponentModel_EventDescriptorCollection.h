#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IComparer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct EventDescriptorCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System::ComponentModel::EventDescriptor*>* events;
		IL2CPP::Array<mscorlib::System::String*>* namedSort;
		mscorlib::System::Collections::IComparer* comparer;
		bool eventsOwned;
		bool needSort;
		int32_t eventCount;
		bool readOnly;
		struct StaticFields
		{
			System::ComponentModel::EventDescriptorCollection* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<System::ComponentModel::EventDescriptor*>* events);
		void _ctor(IL2CPP::Array<System::ComponentModel::EventDescriptor*>* events, bool readOnly);
		void _ctor(IL2CPP::Array<System::ComponentModel::EventDescriptor*>* events, int32_t eventCount, IL2CPP::Array<mscorlib::System::String*>* namedSort, mscorlib::System::Collections::IComparer* comparer);
		int32_t get_Count();
		System::ComponentModel::EventDescriptor* get_Item(int32_t index);
		System::ComponentModel::EventDescriptor* get_Item(mscorlib::System::String* name);
		int32_t Add(System::ComponentModel::EventDescriptor* value);
		void Clear();
		bool Contains(System::ComponentModel::EventDescriptor* value);
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		void EnsureEventsOwned();
		void EnsureSize(int32_t sizeNeeded);
		System::ComponentModel::EventDescriptor* Find(mscorlib::System::String* name, bool ignoreCase);
		int32_t IndexOf(System::ComponentModel::EventDescriptor* value);
		void Insert(int32_t index, System::ComponentModel::EventDescriptor* value);
		void Remove(System::ComponentModel::EventDescriptor* value);
		void RemoveAt(int32_t index);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		System::ComponentModel::EventDescriptorCollection* Sort();
		System::ComponentModel::EventDescriptorCollection* Sort(IL2CPP::Array<mscorlib::System::String*>* names);
		System::ComponentModel::EventDescriptorCollection* Sort(IL2CPP::Array<mscorlib::System::String*>* names, mscorlib::System::Collections::IComparer* comparer);
		System::ComponentModel::EventDescriptorCollection* Sort(mscorlib::System::Collections::IComparer* comparer);
		void InternalSort(IL2CPP::Array<mscorlib::System::String*>* names);
		void InternalSort(mscorlib::System::Collections::IComparer* sorter);
		int32_t System_Collections_ICollection_get_Count();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Object* System_Collections_IList_get_Item(int32_t index);
		void System_Collections_IList_set_Item(int32_t index, mscorlib::System::Object* value);
		int32_t System_Collections_IList_Add(mscorlib::System::Object* value);
		void System_Collections_IList_Clear();
		bool System_Collections_IList_Contains(mscorlib::System::Object* value);
		int32_t System_Collections_IList_IndexOf(mscorlib::System::Object* value);
		void System_Collections_IList_Insert(int32_t index, mscorlib::System::Object* value);
		void System_Collections_IList_Remove(mscorlib::System::Object* value);
		void System_Collections_IList_RemoveAt(int32_t index);
		bool System_Collections_IList_get_IsReadOnly();
		bool System_Collections_IList_get_IsFixedSize();
		static void _cctor();
	};
}

