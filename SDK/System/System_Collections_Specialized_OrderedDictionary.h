#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEqualityComparer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System::System::Collections::Specialized
{
	struct OrderedDictionary : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* _objectsArray;
		mscorlib::System::Collections::Hashtable* _objectsTable;
		int32_t _initialCapacity;
		mscorlib::System::Collections::IEqualityComparer* _comparer;
		bool _readOnly;
		mscorlib::System::Object* _syncRoot;
		mscorlib::System::Runtime::Serialization::SerializationInfo* _siInfo;
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(int32_t capacity, mscorlib::System::Collections::IEqualityComparer* comparer);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t get_Count();
		bool System_Collections_IDictionary_get_IsFixedSize();
		bool get_IsReadOnly();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ArrayList* get_objectsArray();
		mscorlib::System::Collections::Hashtable* get_objectsTable();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Collections::ICollection* get_Values();
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		bool Contains(mscorlib::System::Object* key);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t IndexOfKey(mscorlib::System::Object* key);
		void OnDeserialization(mscorlib::System::Object* sender);
		void Remove(mscorlib::System::Object* key);
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
	};
}

