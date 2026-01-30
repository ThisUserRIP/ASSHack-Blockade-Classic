#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Events_UnityEventBase.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0, typename T1> struct UnityAction_2; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct BaseInvokableCall; };

namespace UnityEngine_CoreModule::UnityEngine::Events
{
	template <typename T0, typename T1> struct UnityEvent_2 : UnityEngine_CoreModule::UnityEngine::Events::UnityEventBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T0::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T1::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Events", "UnityEvent`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		IL2CPP::Array<mscorlib::System::Object*>* m_InvokeArray;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddListener(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<T0, T1>* call)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddListener", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<T0,T1>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)call;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void RemoveListener(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<T0, T1>* call)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveListener", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<T0,T1>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)call;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Reflection::MethodInfo* FindMethod_Impl(mscorlib::System::String* name, mscorlib::System::Type* targetObjType)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindMethod_Impl", std::vector<std::string> { "System.String", "System.Type" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)name;
			params[1] = (intptr_t)targetObjType;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Reflection::MethodInfo*)returnValue;
		}
		UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetDelegate(mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* theFunction)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDelegate", std::vector<std::string> { "System.Object", "System.Reflection.MethodInfo" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)target;
			params[1] = (intptr_t)theFunction;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall*)returnValue;
		}
		static UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<T0, T1>* action)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDelegate", std::vector<std::string> { "UnityEngine.Events.UnityAction`2<T0,T1>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)action;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (UnityEngine_CoreModule::UnityEngine::Events::BaseInvokableCall*)returnValue;
		}
		void Invoke(T0* arg0, T1* arg1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { GetGenericTypeName<T0>(), GetGenericTypeName<T1>() });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)arg0;
			params[1] = (intptr_t)arg1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

