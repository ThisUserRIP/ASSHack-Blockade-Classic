#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimePropertyInfo.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Reflection_MonoPropertyInfo.h"
namespace mscorlib::System::Reflection { struct MonoPropertyInfo; };
#include "System_Reflection_PInfo.h"
namespace mscorlib::System::Reflection { struct MonoProperty_GetterAdapter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Reflection_PropertyAttributes.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Reflection { template <typename T, typename R> struct MonoProperty_Getter_2; };
namespace mscorlib::System::Reflection { template <typename R> struct MonoProperty_StaticGetter_1; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace mscorlib::System::Reflection
{
	struct MonoProperty : mscorlib::System::Reflection::RuntimePropertyInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t klass;
		intptr_t prop;
		mscorlib::System::Reflection::MonoPropertyInfo info;
		mscorlib::System::Reflection::PInfo cached;
		mscorlib::System::Reflection::MonoProperty_GetterAdapter* cached_getter;
		void CachePropertyInfo(mscorlib::System::Reflection::PInfo flags);
		mscorlib::System::Reflection::PropertyAttributes get_Attributes();
		bool get_CanRead();
		bool get_CanWrite();
		mscorlib::System::Type* get_PropertyType();
		mscorlib::System::Type* get_ReflectedType();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* GetAccessors(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* GetIndexParameters();
		mscorlib::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
		mscorlib::System::Object* GetConstantValue();
		mscorlib::System::Object* GetRawConstantValue();
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		template <typename T, typename R> static mscorlib::System::Object* GetterAdapterFrame(mscorlib::System::Reflection::MonoProperty_Getter_2<T, R>* getter, mscorlib::System::Object* obj)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetterAdapterFrame", std::vector<std::string> { "System.Reflection.MonoProperty/Getter`2<T,R>", "System.Object" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T::GetIl2CppType();
			typeArguments->vector[1] = R::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)getter;
			params[1] = (intptr_t)obj;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		template <typename R> static mscorlib::System::Object* StaticGetterAdapterFrame(mscorlib::System::Reflection::MonoProperty_StaticGetter_1<R>* getter, mscorlib::System::Object* obj)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StaticGetterAdapterFrame", std::vector<std::string> { "System.Reflection.MonoProperty/StaticGetter`1<R>", "System.Object" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = R::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)getter;
			params[1] = (intptr_t)obj;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		static mscorlib::System::Reflection::MonoProperty_GetterAdapter* CreateGetterDelegate(mscorlib::System::Reflection::MethodInfo* method);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* index);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* index, mscorlib::System::Globalization::CultureInfo* culture);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* index, mscorlib::System::Globalization::CultureInfo* culture);
		IL2CPP::Array<mscorlib::System::Type*>* GetOptionalCustomModifiers();
		IL2CPP::Array<mscorlib::System::Type*>* GetRequiredCustomModifiers();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		void _ctor();
	};
}

