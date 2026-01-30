#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerElementType.h"
#include "Rewired_ElementAssignmentType.h"
#include "Rewired_ControllerType.h"
#include "Rewired_AxisRange.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerTemplateElementType.h"
namespace mscorlib::System { struct Object; };
#include "Rewired_ControllerTemplateElementSourceType.h"

namespace Rewired_Core
{
	struct GGuSMFhGiJGhMabIvMdzegNeOJXt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Rewired_Core::Rewired::ControllerElementType xfuLSseImYIOzVBLbGJmyopAuGh(Rewired_Core::Rewired::ElementAssignmentType A_0);
		static Rewired_Core::Rewired::ElementAssignmentType YOudNJqLbcDqijRzxwYoBFCwHRV(Rewired_Core::Rewired::ControllerType A_0, Rewired_Core::Rewired::ControllerElementType A_1, Rewired_Core::Rewired::AxisRange A_2);
		static Rewired_Core::Rewired::AxisRange UiHpVOyaSnxGpDPJAKjXfmTrDKT(Rewired_Core::Rewired::Pole A_0);
		template <typename T> static mscorlib::System::Type* rslTErjAJttQpYcCkPyxALmBvdg()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rslTErjAJttQpYcCkPyxALmBvdg");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Type*)returnValue;
		}
		static mscorlib::System::Type* rslTErjAJttQpYcCkPyxALmBvdg(mscorlib::System::Type* A_0);
		static mscorlib::System::Type* NyAFwsmBShtjbNKnVsrZxnlwcxW(Rewired_Core::Rewired::ControllerType A_0);
		static mscorlib::System::Type* IlbECWrxOhUdCrIMEBokSuNfFFf(Rewired_Core::Rewired::ControllerType A_0);
		static Rewired_Core::Rewired::ControllerType LchKlJWGZGAgGvpfgCmppXPXSPs(mscorlib::System::Type* A_0);
		template <typename T> static Rewired_Core::Rewired::ControllerType LchKlJWGZGAgGvpfgCmppXPXSPs()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LchKlJWGZGAgGvpfgCmppXPXSPs");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Rewired_Core::Rewired::ControllerType ret;
				std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
				return ret;
			}
			return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
		}
		static Rewired_Core::Rewired::ControllerType dTXUgCRUZmcMWjQISETpgaPnBSMi(mscorlib::System::Type* A_0);
		template <typename T> static Rewired_Core::Rewired::ControllerType dTXUgCRUZmcMWjQISETpgaPnBSMi()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dTXUgCRUZmcMWjQISETpgaPnBSMi");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Rewired_Core::Rewired::ControllerType ret;
				std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
				return ret;
			}
			return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
		}
		static bool zkINjLmhYkHHIIOHrAnANuLrCLK(mscorlib::System::Type* A_0, Rewired_Core::Rewired::ControllerType& A_1);
		template <typename T> static bool zkINjLmhYkHHIIOHrAnANuLrCLK(Rewired_Core::Rewired::ControllerType& A_0)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zkINjLmhYkHHIIOHrAnANuLrCLK", std::vector<std::string> { "Rewired.ControllerType&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_0;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		static Rewired_Core::Rewired::ControllerType dZXBNuhinVetSzwwRKawhEcykRx(mscorlib::System::Type* A_0);
		template <typename T> static Rewired_Core::Rewired::ControllerType dZXBNuhinVetSzwwRKawhEcykRx()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dZXBNuhinVetSzwwRKawhEcykRx");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Rewired_Core::Rewired::ControllerType ret;
				std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ControllerType));
				return ret;
			}
			return static_cast<Rewired_Core::Rewired::ControllerType>(*(Rewired_Core::Rewired::ControllerType*)il2cpp_object_unbox(returnValue));
		}
		static bool rWQapOtWfZhPThFVxOaoMWVCNCmi(Rewired_Core::Rewired::ControllerTemplateElementType A_0, Rewired_Core::Rewired::ControllerElementType A_1);
		static Rewired_Core::Rewired::ControllerElementType OhhDRDHkXNpIhPemdcsjzZsqAjV(mscorlib::System::Object* A_0);
		static Rewired_Core::Rewired::ControllerElementType OhhDRDHkXNpIhPemdcsjzZsqAjV(Rewired_Core::Rewired::ControllerTemplateElementType A_0);
		static Rewired_Core::Rewired::ControllerTemplateElementSourceType wwHfRYACYkoNCIWbZheMPMJBSgeP(Rewired_Core::Rewired::ControllerTemplateElementType A_0, bool A_1);
		static Rewired_Core::Rewired::ControllerTemplateElementType mvubwtkieBfjoFqTCortNCOBVUx(Rewired_Core::Rewired::ControllerElementType A_0, bool A_1);
	};
}

