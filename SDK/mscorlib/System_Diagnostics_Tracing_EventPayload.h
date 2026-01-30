#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
#include "System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventPayload : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* m_names;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* m_values;
		void _ctor(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* payloadNames, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>* payloadValues);
		mscorlib::System::Collections::Generic::ICollection_1<mscorlib::System::String>* get_Keys();
		mscorlib::System::Collections::Generic::ICollection_1<mscorlib::System::Object>* get_Values();
		mscorlib::System::Object* get_Item(mscorlib::System::String* key);
		void set_Item(mscorlib::System::String* key, mscorlib::System::Object* value);
		void Add(mscorlib::System::String* key, mscorlib::System::Object* value);
		void Add(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Object> payloadEntry);
		void Clear();
		bool Contains(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Object> entry);
		bool ContainsKey(mscorlib::System::String* key);
		int32_t get_Count();
		bool get_IsReadOnly();
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Object>>* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void CopyTo(IL2CPP::Array<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Object>>* payloadEntries, int32_t count);
		bool Remove(mscorlib::System::String* key);
		bool Remove(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::Object> entry);
		bool TryGetValue(mscorlib::System::String* key, mscorlib::System::Object& value);
	};
}

