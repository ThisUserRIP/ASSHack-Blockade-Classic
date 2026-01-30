#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IFormatProvider; };
namespace Assembly_CSharp::LitJson { struct ExporterFunc; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace Assembly_CSharp::LitJson { struct ImporterFunc; };
namespace mscorlib::System::Collections::Generic::IDictionary_2_System::Type_System::Collections { template <typename TKey, typename TValue> struct IDictionary_2_System_Type_System_Collections_Generic_IDictionary_2; };
#include "LitJson_ArrayMetadata.h"
namespace Assembly_CSharp::LitJson { struct ArrayMetadata; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "LitJson_ObjectMetadata.h"
namespace Assembly_CSharp::LitJson { struct ObjectMetadata; };
#include "LitJson_PropertyMetadata.h"
namespace Assembly_CSharp::LitJson { struct PropertyMetadata; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Assembly_CSharp::LitJson { struct JsonWriter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace Assembly_CSharp::LitJson { struct JsonReader; };
namespace Assembly_CSharp::LitJson { struct IJsonWrapper; };
namespace Assembly_CSharp::LitJson { struct WrapperFactory; };
namespace Assembly_CSharp::LitJson { struct JsonData; };
namespace mscorlib::System::IO { struct TextReader; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Assembly_CSharp::LitJson { template <typename T> struct ExporterFunc_1; };
namespace Assembly_CSharp::LitJson { template <typename TJson, typename TValue> struct ImporterFunc_2; };

namespace Assembly_CSharp::LitJson
{
	struct JsonMapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t max_nesting_depth;
			mscorlib::System::IFormatProvider* datetime_format;
			mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ExporterFunc>* base_exporters_table;
			mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ExporterFunc>* custom_exporters_table;
			mscorlib::System::Collections::Generic::IDictionary_2_System::Type_System::Collections::IDictionary_2_System_Type_System_Collections_Generic_IDictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ImporterFunc>>* base_importers_table;
			mscorlib::System::Collections::Generic::IDictionary_2_System::Type_System::Collections::IDictionary_2_System_Type_System_Collections_Generic_IDictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ImporterFunc>>* custom_importers_table;
			mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ArrayMetadata>* array_metadata;
			mscorlib::System::Object* array_metadata_lock;
			mscorlib::System::Collections::Generic::IDictionary_2_System::Type_System::Collections::IDictionary_2_System_Type_System_Collections_Generic_IDictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, mscorlib::System::Reflection::MethodInfo>>* conv_ops;
			mscorlib::System::Object* conv_ops_lock;
			mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ObjectMetadata>* object_metadata;
			mscorlib::System::Object* object_metadata_lock;
			mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::IList_1<Assembly_CSharp::LitJson::PropertyMetadata>>* type_properties;
			mscorlib::System::Object* type_properties_lock;
			Assembly_CSharp::LitJson::JsonWriter* static_writer;
			mscorlib::System::Object* static_writer_lock;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static bool HasInterface(mscorlib::System::Type* type, mscorlib::System::String* name);
		static IL2CPP::Array<mscorlib::System::Reflection::PropertyInfo*>* GetPublicInstanceProperties(mscorlib::System::Type* type);
		static void AddArrayMetadata(mscorlib::System::Type* type);
		static void AddObjectMetadata(mscorlib::System::Type* type);
		static void AddTypeProperties(mscorlib::System::Type* type);
		static mscorlib::System::Reflection::MethodInfo* GetConvOp(mscorlib::System::Type* t1, mscorlib::System::Type* t2);
		static mscorlib::System::Object* ReadValue(mscorlib::System::Type* inst_type, Assembly_CSharp::LitJson::JsonReader* reader);
		static Assembly_CSharp::LitJson::IJsonWrapper* ReadValue(Assembly_CSharp::LitJson::WrapperFactory* factory, Assembly_CSharp::LitJson::JsonReader* reader);
		static void ReadSkip(Assembly_CSharp::LitJson::JsonReader* reader);
		static void RegisterBaseExporters();
		static void RegisterBaseImporters();
		static void RegisterImporter(mscorlib::System::Collections::Generic::IDictionary_2_System::Type_System::Collections::IDictionary_2_System_Type_System_Collections_Generic_IDictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::Type, Assembly_CSharp::LitJson::ImporterFunc>>* table, mscorlib::System::Type* json_type, mscorlib::System::Type* value_type, Assembly_CSharp::LitJson::ImporterFunc* importer);
		static void WriteValue(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer, bool writer_is_private, int32_t depth);
		static mscorlib::System::String* ToJson(mscorlib::System::Object* obj);
		static void ToJson(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		static Assembly_CSharp::LitJson::JsonData* ToObject(Assembly_CSharp::LitJson::JsonReader* reader);
		static Assembly_CSharp::LitJson::JsonData* ToObject(mscorlib::System::IO::TextReader* reader);
		static Assembly_CSharp::LitJson::JsonData* ToObject(mscorlib::System::String* json);
		template <typename T> static T* ToObject(Assembly_CSharp::LitJson::JsonReader* reader)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToObject", std::vector<std::string> { "LitJson.JsonReader" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)reader;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* ToObject(mscorlib::System::IO::TextReader* reader)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToObject", std::vector<std::string> { "System.IO.TextReader" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)reader;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> static T* ToObject(mscorlib::System::String* json)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToObject", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)json;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static mscorlib::System::Object* ToObject(mscorlib::System::Type* toType, mscorlib::System::String* json);
		static Assembly_CSharp::LitJson::IJsonWrapper* ToWrapper(Assembly_CSharp::LitJson::WrapperFactory* factory, Assembly_CSharp::LitJson::JsonReader* reader);
		static Assembly_CSharp::LitJson::IJsonWrapper* ToWrapper(Assembly_CSharp::LitJson::WrapperFactory* factory, mscorlib::System::String* json);
		template <typename T> static void RegisterExporter(Assembly_CSharp::LitJson::ExporterFunc_1<T>* exporter)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterExporter", std::vector<std::string> { "LitJson.ExporterFunc`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)exporter;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TJson, typename TValue> static void RegisterImporter(Assembly_CSharp::LitJson::ImporterFunc_2<TJson, TValue>* importer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterImporter", std::vector<std::string> { "LitJson.ImporterFunc`2<TJson,TValue>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TJson::GetIl2CppType();
			typeArguments->vector[1] = TValue::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)importer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void UnregisterExporters();
		static void UnregisterImporters();
		void _ctor();
	};
}

