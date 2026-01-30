#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "Rewired_Utils_Classes_Data_SerializedObject_Entry.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_Entry; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct IndexedDictionary_2; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_XmlInfo; };
#include "Rewired_Utils_Classes_Data_SerializedObject_ObjectType.h"
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic::Dictionary_2_System::Type_System::Collections { template <typename TKey, typename TValue> struct Dictionary_2_System_Type_System_Collections_Generic_Dictionary_2; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "Rewired_Utils_Classes_Data_SerializedObject_Field.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_Field; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Rewired_Utils_Classes_Data_SerializedObject_FieldOptions.h"
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Globalization_NumberStyles.h"
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::IndexedDictionary_2<mscorlib::System::String, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Entry>* VQMhZQDASheOCbgZqwtApNxjzvE;
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* XKmBFSziHMYmJHkHBUliryxAIFU;
		mscorlib::System::Type* JDiMHgYdAepfXipmvAqweSMqbqQ;
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_ObjectType MkgykHqCicnQorVnajHQyXedArC;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2_System::Type_System::Collections::Dictionary_2_System_Type_System_Collections_Generic_Dictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Reflection::FieldInfo>>* JvPWkJjqCvsfBqUrrCSOcwBsNlr;
			mscorlib::System::Collections::Generic::Dictionary_2_System::Type_System::Collections::Dictionary_2_System_Type_System_Collections_Generic_Dictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Reflection::PropertyInfo>>* jYMGwRkuHZAwnmrszyceIUOnJLo;
			mscorlib::System::Func_2<mscorlib::System::Reflection::FieldInfo, mscorlib::System::Boolean>* CliIySgnMlqtNdJpEJAMyPXLWxJ;
			mscorlib::System::Func_2<mscorlib::System::Reflection::FieldInfo, mscorlib::System::String>* cavDohXxnmjmZcjteDXMghmhABZ;
			mscorlib::System::Func_2<mscorlib::System::Reflection::PropertyInfo, mscorlib::System::Boolean>* DrUjSrvOxLDXkesAFEQnjitFPsBC;
			mscorlib::System::Func_2<mscorlib::System::Reflection::PropertyInfo, mscorlib::System::String>* tmJvzrvFPjPHWuyzTePtqcnENTm;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t capacity);
		void _ctor(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_ObjectType objectType);
		void _ctor(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_ObjectType objectType, int32_t capacity);
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_ObjectType objectType);
		bool get_allowDuplicateKeys();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_ObjectType get_objectType();
		void set_objectType(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_ObjectType value);
		mscorlib::System::Type* get_type();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* get_xmlInfo();
		void set_xmlInfo(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlInfo* value);
		int32_t get_count();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field get_Item(int32_t index);
		template <typename T> void Add(mscorlib::System::String* fieldName, T* value, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions options)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", GetGenericTypeName<T>(), "Rewired.Utils.Classes.Data.SerializedObject/FieldOptions" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)fieldName;
			params[1] = (intptr_t)value;
			params[2] = (intptr_t)&options;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Add(mscorlib::System::Type* type, mscorlib::System::String* fieldName, mscorlib::System::Object* value, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_FieldOptions options);
		void Add(mscorlib::System::String* fieldName, mscorlib::System::Object* value);
		bool Remove(mscorlib::System::String* fieldName);
		bool Contains(mscorlib::System::String* fieldName);
		mscorlib::System::Type* GetDataType(mscorlib::System::String* fieldName);
		bool TryGetOriginalValue(mscorlib::System::String* fieldName, mscorlib::System::Object& value);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field GetEntry(mscorlib::System::String* fieldName);
		mscorlib::System::Object* GetOriginalValue(mscorlib::System::String* fieldName);
		mscorlib::System::Object* GetOriginalValue(int32_t index);
		template <typename T> T* GetOriginalValue(mscorlib::System::String* fieldName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOriginalValue", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)fieldName;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetOriginalValue(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOriginalValue", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> bool TryGetDeserializedValue(mscorlib::System::String* fieldName, T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetDeserializedValue", std::vector<std::string> { "System.String", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fieldName;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> bool TryGetDeserializedValue(int32_t index, T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetDeserializedValue", std::vector<std::string> { "System.Int32", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&index;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> bool TryGetDeserializedValueByRef(mscorlib::System::String* fieldName, T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetDeserializedValueByRef", std::vector<std::string> { "System.String", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fieldName;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		template <typename T> bool TryGetDeserializedValueByRef(int32_t index, T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetDeserializedValueByRef", std::vector<std::string> { "System.Int32", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&index;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::String* ToXmlString(bool writeDocumentTag);
		mscorlib::System::String* ToJsonString();
		mscorlib::System::String* ToString();
		void WriteXml(System_Xml::System::Xml::XmlWriter* writer);
		void WriteXml_Value(System_Xml::System::Xml::XmlWriter* writer);
		bool Rewired_Utils_Interfaces_IExportToXml_get_writesOwnElementTag();
		void Rewired_Utils_Interfaces_IExportToXml_WriteXml(System_Xml::System::Xml::XmlWriter* writer);
		void Rewired_Utils_Interfaces_IExportToJson_WriteJson(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>* appendValueDelegate);
		void Rewired_Utils_Interfaces_IAddValue_System_Object__Add(mscorlib::System::Object* value);
		void Rewired_Utils_Interfaces_IAddKeyValue_System_String_System_Object__Add(mscorlib::System::String* key, mscorlib::System::Object* value);
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_Field>* System_Collections_Generic_IEnumerable_Rewired_Utils_Classes_Data_SerializedObject_Field__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		template <typename T> static bool TryConvertOrCreateObject(mscorlib::System::Object* obj, T& result, mscorlib::System::Globalization::NumberStyles numberStyle, mscorlib::System::Globalization::CultureInfo* cultureInfo)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryConvertOrCreateObject", std::vector<std::string> { "System.Object", GetGenericTypeName<T>() + (std::string)"&", "System.Globalization.NumberStyles", "System.Globalization.CultureInfo" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)&result;
			params[2] = (intptr_t)&numberStyle;
			params[3] = (intptr_t)cultureInfo;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		static bool TryConvertOrCreateObject(mscorlib::System::Type* targetType, mscorlib::System::Object* obj, mscorlib::System::Object& result, mscorlib::System::Globalization::NumberStyles numberStyle, mscorlib::System::Globalization::CultureInfo* cultureInfo);
		static bool TryCreateObject(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject, mscorlib::System::Object& result, mscorlib::System::Globalization::NumberStyles numberStyle, mscorlib::System::Globalization::CultureInfo* cultureInfo);
		static Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* FromJson(mscorlib::System::Type* type, mscorlib::System::String* jsonString);
		static Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* FromXml(mscorlib::System::Type* type, mscorlib::System::String* xmlString);
		static bool GOgwCpGMzTjpMkxzOMAyhKtwKaz(mscorlib::System::Reflection::FieldInfo* A_0);
		static mscorlib::System::String* pBgFvbywBsoRCrvGQvIiKEPvemY(mscorlib::System::Reflection::FieldInfo* A_0);
		static bool WxTkhvPlTmCIViWTFsTnRnCBfwik(mscorlib::System::Reflection::PropertyInfo* A_0);
		static mscorlib::System::String* JSgOTWxqFcTPXUdnBJQwDEoJFIKP(mscorlib::System::Reflection::PropertyInfo* A_0);
		static void _cctor();
	};
}

