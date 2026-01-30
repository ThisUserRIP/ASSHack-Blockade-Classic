#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncTaskCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* TrueTask;
			mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* FalseTask;
			IL2CPP::Array<mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>*>* Int32Tasks;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>*>* CreateInt32Tasks();
		template <typename TResult> static mscorlib::System::Threading::Tasks::Task_1<TResult>* CreateCacheableTask(TResult* result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCacheableTask", std::vector<std::string> { GetGenericTypeName<TResult>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)result;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static void _cctor();
	};
}

