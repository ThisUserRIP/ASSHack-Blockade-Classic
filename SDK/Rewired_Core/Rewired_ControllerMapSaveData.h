#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapSaveData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller* _controller;
		Rewired_Core::Rewired::ControllerMap* _map;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		Rewired_Core::Rewired::ControllerMap* get_map();
		int32_t get_categoryId();
		int32_t get_layoutId();
		mscorlib::System::Type* get_mapType();
		mscorlib::System::String* get_mapTypeString();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		mscorlib::System::String* get_controllerHardwareIdentifier();
		template <typename T> T* GetMap()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void _ctor(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::ControllerMap* map);
		template <typename T> static T* zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::Controller* A_0, Rewired_Core::Rewired::ControllerMap* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zTufJcQfUjAbtihMoqeFKhxXYGv");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static Rewired_Core::Rewired::ControllerMapSaveData* zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::Controller* A_0, Rewired_Core::Rewired::ControllerMap* A_1);
	};
}

