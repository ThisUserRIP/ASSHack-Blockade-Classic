#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic::Dictionary_2_System::Type_System::Collections { template <typename TKey, typename TValue> struct Dictionary_2_System_Type_System_Collections_Generic_Dictionary_2; };
namespace mscorlib::System::Reflection { struct PropertyInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Libraries::TinyJson
{
	struct JsonParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::System::Collections::Generic::Stack_1<mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>>* splitArrayPool;
			mscorlib::System::Text::StringBuilder* CzUJebMzRMfjfBmtAYdMtANPNxw;
			mscorlib::System::Collections::Generic::Dictionary_2_System::Type_System::Collections::Dictionary_2_System_Type_System_Collections_Generic_Dictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Reflection::FieldInfo>>* JvPWkJjqCvsfBqUrrCSOcwBsNlr;
			mscorlib::System::Collections::Generic::Dictionary_2_System::Type_System::Collections::Dictionary_2_System_Type_System_Collections_Generic_Dictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Reflection::PropertyInfo>>* jYMGwRkuHZAwnmrszyceIUOnJLo;
			mscorlib::System::Func_2<mscorlib::System::Reflection::FieldInfo, mscorlib::System::Boolean>* CliIySgnMlqtNdJpEJAMyPXLWxJ;
			mscorlib::System::Func_2<mscorlib::System::Reflection::FieldInfo, mscorlib::System::String>* cavDohXxnmjmZcjteDXMghmhABZ;
			mscorlib::System::Func_2<mscorlib::System::Reflection::PropertyInfo, mscorlib::System::Boolean>* DrUjSrvOxLDXkesAFEQnjitFPsBC;
			mscorlib::System::Func_2<mscorlib::System::Reflection::PropertyInfo, mscorlib::System::String>* tmJvzrvFPjPHWuyzTePtqcnENTm;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		template <typename T> static bool TryFromJson(mscorlib::System::String* json, T& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryFromJson", std::vector<std::string> { "System.String", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)json;
			params[1] = (intptr_t)&value;
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
		template <typename T> static bool TryFromJson(mscorlib::System::String* json, T& value, mscorlib::System::Type* preferredAnonymousObjectType)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryFromJson", std::vector<std::string> { "System.String", GetGenericTypeName<T>() + (std::string)"&", "System.Type" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)json;
			params[1] = (intptr_t)&value;
			params[2] = (intptr_t)preferredAnonymousObjectType;
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
		template <typename T> static T* FromJson(mscorlib::System::String* json)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromJson", std::vector<std::string> { "System.String" });
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
		template <typename T> static T* FromJson(mscorlib::System::String* json, mscorlib::System::Type* preferredAnonymousObjectType)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromJson", std::vector<std::string> { "System.String", "System.Type" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)json;
			params[1] = (intptr_t)preferredAnonymousObjectType;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static mscorlib::System::Object* FromJson(mscorlib::System::Type* type, mscorlib::System::String* json);
		static mscorlib::System::Object* FromJson(mscorlib::System::Type* type, mscorlib::System::String* json, mscorlib::System::Type* preferredAnonymousObjectType);
		static mscorlib::System::Object* NVfqpnhnwfMRTieFXIFCXjYQejXe(mscorlib::System::Type* A_0, mscorlib::System::String* A_1, mscorlib::System::Type* A_2, bool& A_3);
		static mscorlib::System::Object* QLOgIrTjTaFeeHVAaAyWTxZZgOOH(mscorlib::System::String* A_0, mscorlib::System::Type* A_1, bool& A_2);
		static mscorlib::System::Object* XvYftQnxaHgwrDWHMnduBVXpdWx(mscorlib::System::Type* A_0, mscorlib::System::String* A_1, mscorlib::System::Type* A_2);
		static int32_t juhLwiMsNnrTeiiKHqwhHuMuzkG(bool A_0, int32_t A_1, mscorlib::System::String* A_2);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* SGeGVCgtbIsTYNiAgRKlEjJHsrfQ(mscorlib::System::String* A_0);
		static bool wNCPrLclxKkSvMacTqeLDAokUng(mscorlib::System::Reflection::FieldInfo* A_0);
		static mscorlib::System::String* IgnmovDOhVaDooDMtaSrnrlwAnUC(mscorlib::System::Reflection::FieldInfo* A_0);
		static bool aRAMYHxJlOsulWJaqEQjfjMLdgR(mscorlib::System::Reflection::PropertyInfo* A_0);
		static mscorlib::System::String* gyJCdniIoegdghSGfsRlnFAaDAhP(mscorlib::System::Reflection::PropertyInfo* A_0);
		static void _cctor();
	};
}

