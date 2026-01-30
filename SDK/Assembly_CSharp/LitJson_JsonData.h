#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "LitJson_JsonType.h"
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Assembly_CSharp::LitJson { struct JsonWriter; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::LitJson { struct IJsonWrapper; };

namespace Assembly_CSharp::LitJson
{
	struct JsonData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IList_1<Assembly_CSharp::LitJson::JsonData>* inst_array;
		bool inst_boolean;
		double inst_double;
		int32_t inst_int;
		int64_t inst_long;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, Assembly_CSharp::LitJson::JsonData>* inst_object;
		mscorlib::System::String* inst_string;
		mscorlib::System::String* json;
		Assembly_CSharp::LitJson::JsonType type;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, Assembly_CSharp::LitJson::JsonData>>* object_list;
		int32_t get_Count();
		bool get_IsArray();
		bool get_IsBoolean();
		bool get_IsDouble();
		bool get_IsInt();
		bool get_IsLong();
		bool get_IsObject();
		bool get_IsString();
		mscorlib::System::Collections::Generic::ICollection_1<mscorlib::System::String>* get_Keys();
		int32_t System_Collections_ICollection_get_Count();
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		bool System_Collections_IDictionary_get_IsFixedSize();
		bool System_Collections_IDictionary_get_IsReadOnly();
		mscorlib::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
		mscorlib::System::Collections::ICollection* System_Collections_IDictionary_get_Values();
		bool LitJson_IJsonWrapper_get_IsArray();
		bool LitJson_IJsonWrapper_get_IsBoolean();
		bool LitJson_IJsonWrapper_get_IsDouble();
		bool LitJson_IJsonWrapper_get_IsInt();
		bool LitJson_IJsonWrapper_get_IsLong();
		bool LitJson_IJsonWrapper_get_IsObject();
		bool LitJson_IJsonWrapper_get_IsString();
		bool System_Collections_IList_get_IsFixedSize();
		bool System_Collections_IList_get_IsReadOnly();
		mscorlib::System::Object* System_Collections_IDictionary_get_Item(mscorlib::System::Object* key);
		void System_Collections_IDictionary_set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Object* LitJson_IOrderedDictionary_get_Item(int32_t idx);
		void LitJson_IOrderedDictionary_set_Item(int32_t idx, mscorlib::System::Object* value);
		mscorlib::System::Object* System_Collections_IList_get_Item(int32_t index);
		void System_Collections_IList_set_Item(int32_t index, mscorlib::System::Object* value);
		Assembly_CSharp::LitJson::JsonData* get_Item(mscorlib::System::String* prop_name);
		void set_Item(mscorlib::System::String* prop_name, Assembly_CSharp::LitJson::JsonData* value);
		Assembly_CSharp::LitJson::JsonData* get_Item(int32_t index);
		void set_Item(int32_t index, Assembly_CSharp::LitJson::JsonData* value);
		void _ctor();
		void _ctor(bool boolean);
		void _ctor(double number);
		void _ctor(int32_t number);
		void _ctor(int64_t number);
		void _ctor(mscorlib::System::Object* obj);
		void _ctor(mscorlib::System::String* str);
		static Assembly_CSharp::LitJson::JsonData* op_Implicit(bool data);
		static Assembly_CSharp::LitJson::JsonData* op_Implicit(double data);
		static Assembly_CSharp::LitJson::JsonData* op_Implicit(int32_t data);
		static Assembly_CSharp::LitJson::JsonData* op_Implicit(int64_t data);
		static Assembly_CSharp::LitJson::JsonData* op_Implicit(mscorlib::System::String* data);
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		void System_Collections_IDictionary_Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void System_Collections_IDictionary_Clear();
		bool System_Collections_IDictionary_Contains(mscorlib::System::Object* key);
		mscorlib::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
		void System_Collections_IDictionary_Remove(mscorlib::System::Object* key);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		bool LitJson_IJsonWrapper_GetBoolean();
		double LitJson_IJsonWrapper_GetDouble();
		int32_t LitJson_IJsonWrapper_GetInt();
		int64_t LitJson_IJsonWrapper_GetLong();
		mscorlib::System::String* LitJson_IJsonWrapper_GetString();
		void LitJson_IJsonWrapper_SetBoolean(bool val);
		void LitJson_IJsonWrapper_SetDouble(double val);
		void LitJson_IJsonWrapper_SetInt(int32_t val);
		void LitJson_IJsonWrapper_SetLong(int64_t val);
		void LitJson_IJsonWrapper_SetString(mscorlib::System::String* val);
		mscorlib::System::String* LitJson_IJsonWrapper_ToJson();
		void LitJson_IJsonWrapper_ToJson(Assembly_CSharp::LitJson::JsonWriter* writer);
		int32_t System_Collections_IList_Add(mscorlib::System::Object* value);
		void System_Collections_IList_Clear();
		bool System_Collections_IList_Contains(mscorlib::System::Object* value);
		int32_t System_Collections_IList_IndexOf(mscorlib::System::Object* value);
		void System_Collections_IList_Insert(int32_t index, mscorlib::System::Object* value);
		void System_Collections_IList_Remove(mscorlib::System::Object* value);
		void System_Collections_IList_RemoveAt(int32_t index);
		mscorlib::System::Collections::IDictionaryEnumerator* LitJson_IOrderedDictionary_GetEnumerator();
		void LitJson_IOrderedDictionary_Insert(int32_t idx, mscorlib::System::Object* key, mscorlib::System::Object* value);
		void LitJson_IOrderedDictionary_RemoveAt(int32_t idx);
		mscorlib::System::Collections::ICollection* EnsureCollection();
		mscorlib::System::Collections::IDictionary* EnsureDictionary();
		mscorlib::System::Collections::IList* EnsureList();
		Assembly_CSharp::LitJson::JsonData* ToJsonData(mscorlib::System::Object* obj);
		static void WriteJson(Assembly_CSharp::LitJson::IJsonWrapper* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		int32_t Add(mscorlib::System::Object* value);
		void Clear();
		bool Equals(Assembly_CSharp::LitJson::JsonData* x);
		Assembly_CSharp::LitJson::JsonType GetJsonType();
		void SetJsonType(Assembly_CSharp::LitJson::JsonType type);
		mscorlib::System::String* ToJson();
		void ToJson(Assembly_CSharp::LitJson::JsonWriter* writer);
		mscorlib::System::String* ToString();
	};
}

