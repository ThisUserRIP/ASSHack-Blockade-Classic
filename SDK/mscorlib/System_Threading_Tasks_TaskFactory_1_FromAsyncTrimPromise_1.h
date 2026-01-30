#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_Task_1.h"
#include "System_Threading_Tasks_TaskFactory_1.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskFactory_1; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Threading::Tasks
{
	template <typename TResult, typename TInstance> struct TaskFactory_1_FromAsyncTrimPromise_1 : mscorlib::System::Threading::Tasks::Task_1<TResult>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TInstance::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(mscorlib::System::Threading::Tasks::TaskFactory_1<TResult>::GetIl2CppClass(), "FromAsyncTrimPromise`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		TInstance m_thisRef;
		mscorlib::System::Func_3<TInstance, mscorlib::System::IAsyncResult, TResult>* m_endMethod;
		struct StaticFields
		{
			mscorlib::System::AsyncCallback* s_completeFromAsyncResult;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(TInstance* thisRef, mscorlib::System::Func_3<TInstance, mscorlib::System::IAsyncResult, TResult>* endMethod)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<TInstance>(), "System.Func`3<TInstance,System.IAsyncResult,TResult>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)thisRef;
			params[1] = (intptr_t)endMethod;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void CompleteFromAsyncResult(mscorlib::System::IAsyncResult* asyncResult)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteFromAsyncResult", std::vector<std::string> { "System.IAsyncResult" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)asyncResult;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Complete(TInstance* thisRef, mscorlib::System::Func_3<TInstance, mscorlib::System::IAsyncResult, TResult>* endMethod, mscorlib::System::IAsyncResult* asyncResult, bool requiresSynchronization)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { GetGenericTypeName<TInstance>(), "System.Func`3<TInstance,System.IAsyncResult,TResult>", "System.IAsyncResult", "System.Boolean" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)thisRef;
			params[1] = (intptr_t)endMethod;
			params[2] = (intptr_t)asyncResult;
			params[3] = (intptr_t)&requiresSynchronization;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void _cctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

