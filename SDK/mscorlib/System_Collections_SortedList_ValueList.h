#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_SortedList.h"
namespace mscorlib::System::Collections { struct SortedList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System::Collections
{
	struct SortedList_ValueList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::SortedList* sortedList;
		void _ctor(mscorlib::System::Collections::SortedList* sortedList);
		int32_t get_Count();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		int32_t Add(mscorlib::System::Object* key);
		void Clear();
		bool Contains(mscorlib::System::Object* value);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		void Insert(int32_t index, mscorlib::System::Object* value);
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t IndexOf(mscorlib::System::Object* value);
		void Remove(mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
	};
}

