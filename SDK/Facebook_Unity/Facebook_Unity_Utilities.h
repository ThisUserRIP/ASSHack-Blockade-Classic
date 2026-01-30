#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct AccessToken; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
namespace Facebook_Unity::Facebook::Unity { struct Product; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Facebook_Unity::Facebook::Unity { struct Purchase; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facebook_Unity::Facebook::Unity
{
	struct Utilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static bool TryGetValue(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary, mscorlib::System::String* key, T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetValue", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<System.String,System.Object>", "System.String", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)dictionary;
			params[1] = (intptr_t)key;
			params[2] = (intptr_t)&value;
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
		static int64_t TotalSeconds(mscorlib::System::DateTime dateTime);
		template <typename T> static T* GetValueOrDefault(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary, mscorlib::System::String* key, bool logWarning)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValueOrDefault", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<System.String,System.Object>", "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)dictionary;
			params[1] = (intptr_t)key;
			params[2] = (intptr_t)&logWarning;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static mscorlib::System::String* ToCommaSeparateList(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* list);
		static mscorlib::System::String* AbsoluteUrlOrEmptyString(System::System::Uri* uri);
		static mscorlib::System::String* GetUserAgent(mscorlib::System::String* productName, mscorlib::System::String* productVersion);
		static mscorlib::System::String* ToJson(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary);
		template <typename T1, typename T2> static void AddAllKVPFrom(mscorlib::System::Collections::Generic::IDictionary_2<T1, T2>* dest, mscorlib::System::Collections::Generic::IDictionary_2<T1, T2>* source)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAllKVPFrom", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<T1,T2>", "System.Collections.Generic.IDictionary`2<T1,T2>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)dest;
			params[1] = (intptr_t)source;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static Facebook_Unity::Facebook::Unity::AccessToken* ParseAccessTokenFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static mscorlib::System::String* ToStringNullOk(mscorlib::System::Object* obj);
		static mscorlib::System::String* FormatToString(mscorlib::System::String* baseString, mscorlib::System::String* className, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* propertiesAndValues);
		static mscorlib::System::DateTime ParseExpirationDateFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static mscorlib::System::Nullable_1<mscorlib::System::DateTime> ParseLastRefreshFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static mscorlib::System::Collections::Generic::ICollection_1<mscorlib::System::String>* ParsePermissionFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static mscorlib::System::Collections::Generic::IList_1<Facebook_Unity::Facebook::Unity::Product>* ParseCatalogFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static mscorlib::System::Collections::Generic::IList_1<Facebook_Unity::Facebook::Unity::Purchase>* ParsePurchasesFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static Facebook_Unity::Facebook::Unity::Purchase* ParsePurchaseFromResult(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
		static mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* ParseStringDictionaryFromString(mscorlib::System::String* input);
		static mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* ParseInnerStringDictionary(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary, mscorlib::System::String* key);
		static mscorlib::System::DateTime FromTimestamp(int32_t timestamp);
	};
}

