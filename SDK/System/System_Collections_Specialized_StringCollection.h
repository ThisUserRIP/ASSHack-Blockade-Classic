#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Collections::Specialized
{
	struct StringCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* data;
		mscorlib::System::String* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::String* value);
		int32_t get_Count();
		bool System_Collections_IList_get_IsReadOnly();
		bool System_Collections_IList_get_IsFixedSize();
		int32_t Add(mscorlib::System::String* value);
		void Clear();
		bool Contains(mscorlib::System::String* value);
		void CopyTo(IL2CPP::Array<mscorlib::System::String*>* array, int32_t index);
		int32_t IndexOf(mscorlib::System::String* value);
		void Insert(int32_t index, mscorlib::System::String* value);
		bool get_IsSynchronized();
		void Remove(mscorlib::System::String* value);
		void RemoveAt(int32_t index);
		mscorlib::System::Object* get_SyncRoot();
		mscorlib::System::Object* System_Collections_IList_get_Item(int32_t index);
		void System_Collections_IList_set_Item(int32_t index, mscorlib::System::Object* value);
		int32_t System_Collections_IList_Add(mscorlib::System::Object* value);
		bool System_Collections_IList_Contains(mscorlib::System::Object* value);
		int32_t System_Collections_IList_IndexOf(mscorlib::System::Object* value);
		void System_Collections_IList_Insert(int32_t index, mscorlib::System::Object* value);
		void System_Collections_IList_Remove(mscorlib::System::Object* value);
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void _ctor();
	};
}

