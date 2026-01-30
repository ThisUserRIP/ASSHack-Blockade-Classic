#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaRunnable; };
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaProxy; };
namespace mscorlib::System { struct Array; };
#include "UnityEngine_jvalue.h"
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct jvalue; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidJNIHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static intptr_t GetConstructorID(intptr_t javaClass, mscorlib::System::String* signature);
		static intptr_t GetMethodID(intptr_t javaClass, mscorlib::System::String* methodName, mscorlib::System::String* signature, bool isStatic);
		static intptr_t GetFieldID(intptr_t javaClass, mscorlib::System::String* fieldName, mscorlib::System::String* signature, bool isStatic);
		static intptr_t CreateJavaRunnable(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaRunnable* jrunnable);
		static intptr_t CreateJavaProxy(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaProxy* proxy);
		static intptr_t ConvertToJNIArray(mscorlib::System::Array* array);
		static IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* CreateJNIArgArray(IL2CPP::Array<mscorlib::System::Object*>* args);
		static void DeleteJNIArgArray(IL2CPP::Array<mscorlib::System::Object*>* args, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::jvalue>* jniArgs);
		static intptr_t GetConstructorID(intptr_t jclass, IL2CPP::Array<mscorlib::System::Object*>* args);
		static intptr_t GetMethodID(intptr_t jclass, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args, bool isStatic);
		template <typename ArrayType> static ArrayType* ConvertFromJNIArray(intptr_t array)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertFromJNIArray", std::vector<std::string> { "System.IntPtr" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ArrayType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&array;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<ArrayType>(returnValue);;
		}
		template <typename ReturnType> static intptr_t GetMethodID(intptr_t jclass, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args, bool isStatic)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMethodID", std::vector<std::string> { "System.IntPtr", "System.String", "System.Object[]", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ReturnType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&jclass;
			params[1] = (intptr_t)methodName;
			params[2] = (intptr_t)args;
			params[3] = (intptr_t)&isStatic;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				intptr_t ret;
				std::memset(&ret, 0, sizeof(intptr_t));
				return ret;
			}
			return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
		}
		template <typename FieldType> static intptr_t GetFieldID(intptr_t jclass, mscorlib::System::String* fieldName, bool isStatic)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFieldID", std::vector<std::string> { "System.IntPtr", "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = FieldType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&jclass;
			params[1] = (intptr_t)fieldName;
			params[2] = (intptr_t)&isStatic;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				intptr_t ret;
				std::memset(&ret, 0, sizeof(intptr_t));
				return ret;
			}
			return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
		}
	};
}

