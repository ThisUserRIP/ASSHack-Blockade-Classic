#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct GlobalJavaObjectRef; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaClass; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidJavaObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AndroidJNIModule::UnityEngine::GlobalJavaObjectRef* m_jobject;
		UnityEngine_AndroidJNIModule::UnityEngine::GlobalJavaObjectRef* m_jclass;
		struct StaticFields
		{
			bool enableDebugPrints;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* className, IL2CPP::Array<mscorlib::System::Object*>* args);
		void Dispose();
		void Call(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args);
		void CallStatic(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args);
		template <typename FieldType> void Set(mscorlib::System::String* fieldName, FieldType* val)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Set", std::vector<std::string> { "System.String", GetGenericTypeName<FieldType>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = FieldType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fieldName;
			params[1] = (intptr_t)val;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		intptr_t GetRawObject();
		intptr_t GetRawClass();
		template <typename ReturnType> ReturnType* Call(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Call", std::vector<std::string> { "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ReturnType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<ReturnType>(returnValue);;
		}
		template <typename ReturnType> ReturnType* CallStatic(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CallStatic", std::vector<std::string> { "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ReturnType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<ReturnType>(returnValue);;
		}
		void DebugPrint(mscorlib::System::String* msg);
		void _AndroidJavaObject(mscorlib::System::String* className, IL2CPP::Array<mscorlib::System::Object*>* args);
		void _ctor(intptr_t jobject);
		void _ctor();
		void Finalize();
		void Dispose(bool disposing);
		void _Call(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args);
		template <typename ReturnType> ReturnType* _Call(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_Call", std::vector<std::string> { "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ReturnType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<ReturnType>(returnValue);;
		}
		template <typename FieldType> void _Set(mscorlib::System::String* fieldName, FieldType* val)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_Set", std::vector<std::string> { "System.String", GetGenericTypeName<FieldType>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = FieldType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)fieldName;
			params[1] = (intptr_t)val;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _CallStatic(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args);
		template <typename ReturnType> ReturnType* _CallStatic(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_CallStatic", std::vector<std::string> { "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ReturnType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<ReturnType>(returnValue);;
		}
		static UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(intptr_t jobject);
		static UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(intptr_t jclass);
		intptr_t _GetRawObject();
		intptr_t _GetRawClass();
		static void _cctor();
	};
}

