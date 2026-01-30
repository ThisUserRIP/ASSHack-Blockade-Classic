#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IList; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System::Collections
{
	struct CollectionBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* list;
		void _ctor();
		mscorlib::System::Collections::ArrayList* get_InnerList();
		mscorlib::System::Collections::IList* get_List();
		int32_t get_Count();
		void Clear();
		void RemoveAt(int32_t index);
		bool System_Collections_IList_get_IsReadOnly();
		bool System_Collections_IList_get_IsFixedSize();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Object* System_Collections_IList_get_Item(int32_t index);
		void System_Collections_IList_set_Item(int32_t index, mscorlib::System::Object* value);
		bool System_Collections_IList_Contains(mscorlib::System::Object* value);
		int32_t System_Collections_IList_Add(mscorlib::System::Object* value);
		void System_Collections_IList_Remove(mscorlib::System::Object* value);
		int32_t System_Collections_IList_IndexOf(mscorlib::System::Object* value);
		void System_Collections_IList_Insert(int32_t index, mscorlib::System::Object* value);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		void OnSet(int32_t index, mscorlib::System::Object* oldValue, mscorlib::System::Object* newValue);
		void OnInsert(int32_t index, mscorlib::System::Object* value);
		void OnClear();
		void OnRemove(int32_t index, mscorlib::System::Object* value);
		void OnValidate(mscorlib::System::Object* value);
		void OnSetComplete(int32_t index, mscorlib::System::Object* oldValue, mscorlib::System::Object* newValue);
		void OnInsertComplete(int32_t index, mscorlib::System::Object* value);
		void OnClearComplete();
		void OnRemoveComplete(int32_t index, mscorlib::System::Object* value);
	};
}

