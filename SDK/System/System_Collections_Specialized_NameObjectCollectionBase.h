#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct IEqualityComparer; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System::System::Collections::Specialized { struct NameObjectCollectionBase_NameObjectEntry; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct StringComparer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct DBNull; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System { struct Array; };

namespace System::System::Collections::Specialized
{
	struct NameObjectCollectionBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _readOnly;
		mscorlib::System::Collections::ArrayList* _entriesArray;
		mscorlib::System::Collections::IEqualityComparer* _keyComparer;
		mscorlib::System::Collections::Hashtable* _entriesTable;
		System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* _nullKeyEntry;
		mscorlib::System::Runtime::Serialization::SerializationInfo* _serializationInfo;
		int32_t _version;
		mscorlib::System::Object* _syncRoot;
		struct StaticFields
		{
			mscorlib::System::StringComparer* defaultComparer;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(int32_t capacity, mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(mscorlib::System::DBNull* dummy);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void OnDeserialization(mscorlib::System::Object* sender);
		void Reset();
		void Reset(int32_t capacity);
		System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* FindEntry(mscorlib::System::String* key);
		bool get_IsReadOnly();
		void BaseAdd(mscorlib::System::String* name, mscorlib::System::Object* value);
		void BaseRemove(mscorlib::System::String* name);
		mscorlib::System::Object* BaseGet(mscorlib::System::String* name);
		void BaseSet(mscorlib::System::String* name, mscorlib::System::Object* value);
		mscorlib::System::Object* BaseGet(int32_t index);
		mscorlib::System::String* BaseGetKey(int32_t index);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t get_Count();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		bool System_Collections_ICollection_get_IsSynchronized();
		IL2CPP::Array<mscorlib::System::String*>* BaseGetAllKeys();
		static void _cctor();
	};
}

