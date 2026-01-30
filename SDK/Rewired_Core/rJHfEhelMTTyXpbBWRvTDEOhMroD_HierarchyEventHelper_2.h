#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "rJHfEhelMTTyXpbBWRvTDEOhMroD.h"
namespace Rewired_Core { struct rJHfEhelMTTyXpbBWRvTDEOhMroD; };
namespace Rewired_Core { template <typename T, typename TArgs> struct rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2_QdkvHSPvsjPXhBuyoSCQxnGhbSj.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Rewired_Core
{
	template <typename THandler, typename TValue> struct rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(THandler::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TValue::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD::GetIl2CppClass(), "HierarchyEventHelper`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<THandler, TValue>* kLMbCSUrzAAGDdXtdgEJvNNxlaL;
		mscorlib::System::Collections::Generic::List_1<THandler>* WHFiuNqDdOGTqiXuUBbykJbyWse;
		Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2_QdkvHSPvsjPXhBuyoSCQxnGhbSj<THandler, TValue> KphseItwfdGDvFtgTbbzyMcWVNy;
		void _ctor(Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<THandler, TValue>* executeDelegate)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "rJHfEhelMTTyXpbBWRvTDEOhMroD/EventFunction`2<THandler,TValue>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)executeDelegate;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<THandler, TValue>* executeDelegate, Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2_QdkvHSPvsjPXhBuyoSCQxnGhbSj<THandler, TValue> executeOn)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "rJHfEhelMTTyXpbBWRvTDEOhMroD/EventFunction`2<THandler,TValue>", "rJHfEhelMTTyXpbBWRvTDEOhMroD/HierarchyEventHelper`2/QdkvHSPvsjPXhBuyoSCQxnGhbSj<THandler,TValue>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)executeDelegate;
			params[1] = (intptr_t)&executeOn;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ExecuteOnAll(TValue* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteOnAll", std::vector<std::string> { GetGenericTypeName<TValue>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void GetHandlers(UnityEngine_CoreModule::UnityEngine::Transform* transform)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHandlers", std::vector<std::string> { "UnityEngine.Transform" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)transform;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

