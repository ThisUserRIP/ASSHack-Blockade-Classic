#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IComparer; };

namespace mscorlib::System::Collections
{
	struct ArrayList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* _items;
		int32_t _size;
		int32_t _version;
		mscorlib::System::Object* _syncRoot;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Object*>* emptyArray;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(mscorlib::System::Collections::ICollection* c);
		void set_Capacity(int32_t value);
		int32_t get_Count();
		bool get_IsFixedSize();
		bool get_IsReadOnly();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		static mscorlib::System::Collections::ArrayList* Adapter(mscorlib::System::Collections::IList* list);
		int32_t Add(mscorlib::System::Object* value);
		void AddRange(mscorlib::System::Collections::ICollection* c);
		void Clear();
		mscorlib::System::Object* Clone();
		bool Contains(mscorlib::System::Object* item);
		void CopyTo(mscorlib::System::Array* array);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		void CopyTo(int32_t index, mscorlib::System::Array* array, int32_t arrayIndex, int32_t count);
		void EnsureCapacity(int32_t min);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t IndexOf(mscorlib::System::Object* value);
		void Insert(int32_t index, mscorlib::System::Object* value);
		void InsertRange(int32_t index, mscorlib::System::Collections::ICollection* c);
		static mscorlib::System::Collections::ArrayList* ReadOnly(mscorlib::System::Collections::ArrayList* list);
		void Remove(mscorlib::System::Object* obj);
		void RemoveAt(int32_t index);
		void RemoveRange(int32_t index, int32_t count);
		void Reverse();
		void Reverse(int32_t index, int32_t count);
		void Sort(mscorlib::System::Collections::IComparer* comparer);
		void Sort(int32_t index, int32_t count, mscorlib::System::Collections::IComparer* comparer);
		IL2CPP::Array<mscorlib::System::Object*>* ToArray();
		mscorlib::System::Array* ToArray(mscorlib::System::Type* type);
		static void _cctor();
	};
}

