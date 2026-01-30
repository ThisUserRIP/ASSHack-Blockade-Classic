#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "Rewired_Utils_SafeDelegate_1.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Action_2_System { template <typename T1, typename T2> struct Action_2_System_Object_System_Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired::Utils { template <typename T, typename T2> struct SafeAction_2; };

namespace Rewired_Core::Rewired::Utils
{
	template <typename T, typename T2> struct SafeAction_2 : Rewired_Core::Rewired::Utils::SafeDelegate_1<mscorlib::System::Action_2<T, T2>>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T2::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "SafeAction`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		T iEhLitoBJiwGKDnAoagGFocdjjCg;
		T2 NCBCPuaXFAfOMXZlucUBEQzJnDsm;
		struct StaticFields
		{
			mscorlib::System::Action_2_System::Action_2_System_Object_System_Action_2<mscorlib::System::Object, mscorlib::System::Action_2<T, T2>>* ogDlcwjNkeeUurPUNvUSobnPRWK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Action_1<mscorlib::System::Exception>* exceptionHandler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Action`1<System.Exception>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)exceptionHandler;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* source)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Utils.SafeAction`2<T,T2>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)source;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Invoke(T* arg0, T2* arg1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { GetGenericTypeName<T>(), GetGenericTypeName<T2>() });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)arg0;
			params[1] = (intptr_t)arg1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Object* Clone()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		static mscorlib::System::Action_2_System::Action_2_System_Object_System_Action_2<mscorlib::System::Object, mscorlib::System::Action_2<T, T2>>* BOiEgTxeHGQPSSmzxrYgmpCvFML()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BOiEgTxeHGQPSSmzxrYgmpCvFML");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Action_2_System::Action_2_System_Object_System_Action_2<mscorlib::System::Object, mscorlib::System::Action_2<T, T2>>*)returnValue;
		}
		static void SoFByphuoXNGmWMeuLgtGSzkjuHv(mscorlib::System::Object* A_0, mscorlib::System::Action_2<T, T2>* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SoFByphuoXNGmWMeuLgtGSzkjuHv");
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* op_Addition(Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* eventList, mscorlib::System::Action_2<T, T2>* listener)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.SafeAction`2<T,T2>", "System.Action`2<T,T2>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)eventList;
			params[1] = (intptr_t)listener;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>*)returnValue;
		}
		Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* Rewired_Core::Rewired::Utils::operator+(Rewired_Core::Rewired::Utils::SafeAction_2<T&, T2&>& eventList, mscorlib::System::Action_2<T&, T2&>& listener)
		{
			return Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>::op_Addition(eventList, listener);
		}
		static Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* op_Subtraction(Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* eventList, mscorlib::System::Action_2<T, T2>* listener)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.SafeAction`2<T,T2>", "System.Action`2<T,T2>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)eventList;
			params[1] = (intptr_t)listener;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>*)returnValue;
		}
		Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* Rewired_Core::Rewired::Utils::operator-(Rewired_Core::Rewired::Utils::SafeAction_2<T&, T2&>& eventList, mscorlib::System::Action_2<T&, T2&>& listener)
		{
			return Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>::op_Subtraction(eventList, listener);
		}
		static mscorlib::System::Action_2<T, T2>* op_Implicit(Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* obj)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "Rewired.Utils.SafeAction`2<T,T2>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)obj;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Action_2<T, T2>*)returnValue;
		}
		static Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* op_Implicit(mscorlib::System::Action_2<T, T2>* obj)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Action`2<T,T2>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)obj;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>*)returnValue;
		}
	};
	Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* operator+(Rewired_Core::Rewired::Utils::SafeAction_2<T&, T2&>& eventList, mscorlib::System::Action_2<T&, T2&>& listener);
	Rewired_Core::Rewired::Utils::SafeAction_2<T, T2>* operator-(Rewired_Core::Rewired::Utils::SafeAction_2<T&, T2&>& eventList, mscorlib::System::Action_2<T&, T2&>& listener);
}

