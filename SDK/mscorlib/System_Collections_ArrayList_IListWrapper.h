#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_ArrayList.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct IList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IComparer; };

namespace mscorlib::System::Collections
{
	struct ArrayList_IListWrapper : mscorlib::System::Collections::ArrayList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* _list;
		void _ctor(mscorlib::System::Collections::IList* list);
		void set_Capacity(int32_t value);
		int32_t get_Count();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		mscorlib::System::Object* get_SyncRoot();
		int32_t Add(mscorlib::System::Object* obj);
		void AddRange(mscorlib::System::Collections::ICollection* c);
		void Clear();
		mscorlib::System::Object* Clone();
		bool Contains(mscorlib::System::Object* obj);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		void CopyTo(int32_t index, mscorlib::System::Array* array, int32_t arrayIndex, int32_t count);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t IndexOf(mscorlib::System::Object* value);
		void Insert(int32_t index, mscorlib::System::Object* obj);
		void InsertRange(int32_t index, mscorlib::System::Collections::ICollection* c);
		void Remove(mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
		void RemoveRange(int32_t index, int32_t count);
		void Reverse(int32_t index, int32_t count);
		void Sort(int32_t index, int32_t count, mscorlib::System::Collections::IComparer* comparer);
		IL2CPP::Array<mscorlib::System::Object*>* ToArray();
		mscorlib::System::Array* ToArray(mscorlib::System::Type* type);
	};
}

