#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "Rewired_Utils_ReflectionTools_BindingFlags.h"
namespace mscorlib::System::Reflection { struct PropertyInfo; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Delegate; };

namespace Rewired_Core::Rewired::Utils
{
	struct ReflectionTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool IsValueType(mscorlib::System::Type* type);
		static bool IsEnum(mscorlib::System::Type* type);
		static mscorlib::System::Type* GetUnderlyingEnumType(mscorlib::System::Type* enumType);
		static bool IsClass(mscorlib::System::Type* type);
		static bool IsPrimitive(mscorlib::System::Type* type);
		static bool IsArray(mscorlib::System::Type* type);
		static bool DoesTypeImplement(mscorlib::System::Type* type, mscorlib::System::Type* baseOrInterfaceType);
		static bool IsGenericType(mscorlib::System::Type* type);
		static IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments(mscorlib::System::Type* type);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::FieldInfo>* GetFields(mscorlib::System::Type* type);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::FieldInfo>* GetFields(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::ReflectionTools_BindingFlags bindingFlags);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>* GetProperties(mscorlib::System::Type* type);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::PropertyInfo>* GetProperties(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::ReflectionTools_BindingFlags bindingFlags);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::MethodInfo>* GetMethods(mscorlib::System::Type* type);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Reflection::MethodInfo>* GetMethods(mscorlib::System::Type* type, Rewired_Core::Rewired::Utils::ReflectionTools_BindingFlags bindingFlags);
		static bool IsDefined(mscorlib::System::Type* type, mscorlib::System::Type* attributeType, bool inherit);
		template <typename T> static T* GetAttribute(mscorlib::System::Type* type, bool inherit)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAttribute", std::vector<std::string> { "System.Type", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)type;
			params[1] = (intptr_t)&inherit;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static bool IsAssemblyLoaded(mscorlib::System::String* assemblyName, bool useShortName, bool ignoreCase);
		static mscorlib::System::Type* GetTypeInUnityEditorAssembly(mscorlib::System::String* classPath, bool ignoreCase);
		static mscorlib::System::Type* GetTypeInUnityBuildAssembly(mscorlib::System::String* classPath, bool ignoreCase);
		static mscorlib::System::Type* lpimtbDKbbDioVJWDCHQxXjcHIX(mscorlib::System::String* A_0, bool A_1, bool A_2);
		static mscorlib::System::Type* GetTypeInAssembly(mscorlib::System::String* classPath, mscorlib::System::String* assemblyName, bool ignoreCase);
		template <typename T, typename TRet> static TRet* GetPrivateField(T* obj, mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrivateField", std::vector<std::string> { GetGenericTypeName<T>(), "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = TRet::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TRet>(returnValue);;
		}
		template <typename T, typename TRet> static TRet* GetPrivateProperty(T* obj, mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPrivateProperty", std::vector<std::string> { GetGenericTypeName<T>(), "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = TRet::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TRet>(returnValue);;
		}
		template <typename T> static void SetPrivateField(T* obj, mscorlib::System::String* name, mscorlib::System::Object* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPrivateField", std::vector<std::string> { GetGenericTypeName<T>(), "System.String", "System.Object" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)name;
			params[2] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> static void SetPrivateProperty(T* obj, mscorlib::System::String* name, mscorlib::System::Object* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPrivateProperty", std::vector<std::string> { GetGenericTypeName<T>(), "System.String", "System.Object" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)name;
			params[2] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T, typename TRet> static TRet* CallPrivateMethod(T* obj, mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Object*>* param)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallPrivateMethod", std::vector<std::string> { GetGenericTypeName<T>(), "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = TRet::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)obj;
			params[1] = (intptr_t)name;
			params[2] = (intptr_t)param;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TRet>(returnValue);;
		}
		static mscorlib::System::Reflection::MethodInfo* GetMethodInfo(mscorlib::System::Delegate* delegate);
	};
}

