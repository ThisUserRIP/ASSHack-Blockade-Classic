#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Collections_Hashtable_bucket.h"
namespace mscorlib::System::Collections { struct Hashtable_bucket; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Collections { struct IEqualityComparer; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IHashCodeProvider; };
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };

namespace mscorlib::System::Collections
{
	struct Hashtable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Collections::Hashtable_bucket>* buckets;
		int32_t count;
		int32_t occupancy;
		int32_t loadsize;
		float loadFactor;
		int32_t version;
		bool isWriterInProgress;
		mscorlib::System::Collections::ICollection* keys;
		mscorlib::System::Collections::ICollection* values;
		mscorlib::System::Collections::IEqualityComparer* _keycomparer;
		mscorlib::System::Object* _syncRoot;
		struct StaticFields
		{
			int32_t HashPrime;
			int32_t InitialSize;
			mscorlib::System::String* LoadFactorName;
			mscorlib::System::String* VersionName;
			mscorlib::System::String* ComparerName;
			mscorlib::System::String* HashCodeProviderName;
			mscorlib::System::String* HashSizeName;
			mscorlib::System::String* KeysName;
			mscorlib::System::String* ValuesName;
			mscorlib::System::String* KeyComparerName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(bool trash);
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(int32_t capacity, float loadFactor);
		void _ctor(int32_t capacity, float loadFactor, mscorlib::System::Collections::IHashCodeProvider* hcp, mscorlib::System::Collections::IComparer* comparer);
		void _ctor(int32_t capacity, float loadFactor, mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(mscorlib::System::Collections::IHashCodeProvider* hcp, mscorlib::System::Collections::IComparer* comparer);
		void _ctor(mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(int32_t capacity, mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(mscorlib::System::Collections::IDictionary* d);
		void _ctor(mscorlib::System::Collections::IDictionary* d, float loadFactor);
		void _ctor(mscorlib::System::Collections::IDictionary* d, float loadFactor, mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		uint32_t InitHash(mscorlib::System::Object* key, int32_t hashsize, uint32_t& seed, uint32_t& incr);
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		mscorlib::System::Object* Clone();
		bool Contains(mscorlib::System::Object* key);
		bool ContainsKey(mscorlib::System::Object* key);
		void CopyKeys(mscorlib::System::Array* array, int32_t arrayIndex);
		void CopyEntries(mscorlib::System::Array* array, int32_t arrayIndex);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		void CopyValues(mscorlib::System::Array* array, int32_t arrayIndex);
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void expand();
		void rehash();
		void UpdateVersion();
		void rehash(int32_t newsize, bool forceNewHashCode);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		int32_t GetHash(mscorlib::System::Object* key);
		bool get_IsReadOnly();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		bool KeyEquals(mscorlib::System::Object* item, mscorlib::System::Object* key);
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		void Insert(mscorlib::System::Object* key, mscorlib::System::Object* nvalue, bool add);
		void putEntry(IL2CPP::Array<mscorlib::System::Collections::Hashtable_bucket>* newBuckets, mscorlib::System::Object* key, mscorlib::System::Object* nvalue, int32_t hashcode);
		void Remove(mscorlib::System::Object* key);
		mscorlib::System::Object* get_SyncRoot();
		int32_t get_Count();
		static mscorlib::System::Collections::Hashtable* Synchronized(mscorlib::System::Collections::Hashtable* table);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void OnDeserialization(mscorlib::System::Object* sender);
	};
}

