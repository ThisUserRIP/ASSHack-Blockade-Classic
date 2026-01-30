#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "LitJson_JsonType.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::LitJson { struct JsonWriter; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };

namespace Assembly_CSharp::LitJson
{
	struct JsonMockWrapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsArray();
		bool get_IsBoolean();
		bool get_IsDouble();
		bool get_IsInt();
		bool get_IsLong();
		bool get_IsObject();
		bool get_IsString();
		bool GetBoolean();
		double GetDouble();
		int32_t GetInt();
		Assembly_CSharp::LitJson::JsonType GetJsonType();
		int64_t GetLong();
		mscorlib::System::String* GetString();
		void SetBoolean(bool val);
		void SetDouble(double val);
		void SetInt(int32_t val);
		void SetJsonType(Assembly_CSharp::LitJson::JsonType type);
		void SetLong(int64_t val);
		void SetString(mscorlib::System::String* val);
		mscorlib::System::String* ToJson();
		void ToJson(Assembly_CSharp::LitJson::JsonWriter* writer);
		bool System_Collections_IList_get_IsFixedSize();
		bool System_Collections_IList_get_IsReadOnly();
		mscorlib::System::Object* System_Collections_IList_get_Item(int32_t index);
		void System_Collections_IList_set_Item(int32_t index, mscorlib::System::Object* value);
		int32_t System_Collections_IList_Add(mscorlib::System::Object* value);
		void System_Collections_IList_Clear();
		bool System_Collections_IList_Contains(mscorlib::System::Object* value);
		int32_t System_Collections_IList_IndexOf(mscorlib::System::Object* value);
		void System_Collections_IList_Insert(int32_t i, mscorlib::System::Object* v);
		void System_Collections_IList_Remove(mscorlib::System::Object* value);
		void System_Collections_IList_RemoveAt(int32_t index);
		int32_t System_Collections_ICollection_get_Count();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		bool System_Collections_IDictionary_get_IsFixedSize();
		bool System_Collections_IDictionary_get_IsReadOnly();
		mscorlib::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
		mscorlib::System::Collections::ICollection* System_Collections_IDictionary_get_Values();
		mscorlib::System::Object* System_Collections_IDictionary_get_Item(mscorlib::System::Object* key);
		void System_Collections_IDictionary_set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void System_Collections_IDictionary_Add(mscorlib::System::Object* k, mscorlib::System::Object* v);
		void System_Collections_IDictionary_Clear();
		bool System_Collections_IDictionary_Contains(mscorlib::System::Object* key);
		void System_Collections_IDictionary_Remove(mscorlib::System::Object* key);
		mscorlib::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
		mscorlib::System::Object* LitJson_IOrderedDictionary_get_Item(int32_t idx);
		void LitJson_IOrderedDictionary_set_Item(int32_t idx, mscorlib::System::Object* value);
		mscorlib::System::Collections::IDictionaryEnumerator* LitJson_IOrderedDictionary_GetEnumerator();
		void LitJson_IOrderedDictionary_Insert(int32_t i, mscorlib::System::Object* k, mscorlib::System::Object* v);
		void LitJson_IOrderedDictionary_RemoveAt(int32_t i);
		void _ctor();
	};
}

