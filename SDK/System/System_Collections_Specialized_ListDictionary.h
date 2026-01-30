#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Collections::Specialized { struct ListDictionary_DictionaryNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Collections::Specialized
{
	struct ListDictionary : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Collections::Specialized::ListDictionary_DictionaryNode* head;
		int32_t version;
		int32_t count;
		mscorlib::System::Collections::IComparer* comparer;
		mscorlib::System::Object* _syncRoot;
		void _ctor();
		void _ctor(mscorlib::System::Collections::IComparer* comparer);
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		int32_t get_Count();
		mscorlib::System::Collections::ICollection* get_Keys();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		mscorlib::System::Collections::ICollection* get_Values();
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		bool Contains(mscorlib::System::Object* key);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void Remove(mscorlib::System::Object* key);
	};
}

