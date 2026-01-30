#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace mscorlib::System::Threading
{
	struct Interlocked : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t CompareExchange(int32_t& location1, int32_t value, int32_t comparand);
		static int32_t CompareExchange(int32_t& location1, int32_t value, int32_t comparand, bool& succeeded);
		static mscorlib::System::Object* CompareExchange(mscorlib::System::Object& location1, mscorlib::System::Object* value, mscorlib::System::Object* comparand);
		static float CompareExchange(float& location1, float value, float comparand);
		static int32_t Decrement(int32_t& location);
		static int32_t Increment(int32_t& location);
		static int64_t Increment(int64_t& location);
		static int32_t Exchange(int32_t& location1, int32_t value);
		static mscorlib::System::Object* Exchange(mscorlib::System::Object& location1, mscorlib::System::Object* value);
		static float Exchange(float& location1, float value);
		static int64_t CompareExchange(int64_t& location1, int64_t value, int64_t comparand);
		static intptr_t CompareExchange(intptr_t& location1, intptr_t value, intptr_t comparand);
		static double CompareExchange(double& location1, double value, double comparand);
		template <typename T> static T* CompareExchange(T& location1, T* value, T* comparand)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareExchange", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", GetGenericTypeName<T>(), GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&location1;
			params[1] = (intptr_t)value;
			params[2] = (intptr_t)comparand;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static int64_t Exchange(int64_t& location1, int64_t value);
		static intptr_t Exchange(intptr_t& location1, intptr_t value);
		static double Exchange(double& location1, double value);
		template <typename T> static T* Exchange(T& location1, T* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Exchange", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&location1;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static int64_t Read(int64_t& location);
		static int32_t Add(int32_t& location1, int32_t value);
		static int64_t Add(int64_t& location1, int64_t value);
	};
}

