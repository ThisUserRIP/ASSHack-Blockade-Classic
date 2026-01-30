#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_Hashtable.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct ICollection; };

namespace mscorlib::System::Collections
{
	struct Hashtable_SyncHashtable : mscorlib::System::Collections::Hashtable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _table;
		void _ctor(mscorlib::System::Collections::Hashtable* table);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t get_Count();
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Object* get_SyncRoot();
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		bool Contains(mscorlib::System::Object* key);
		bool ContainsKey(mscorlib::System::Object* key);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		mscorlib::System::Object* Clone();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		void Remove(mscorlib::System::Object* key);
		void OnDeserialization(mscorlib::System::Object* sender);
	};
}

