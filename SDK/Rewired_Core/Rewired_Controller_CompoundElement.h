#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_CompoundControllerElementType.h"
namespace Rewired_Core::Rewired { struct Controller_CompoundElement_CjnfUHTWIjJOtoVafmSoHGMbdeQ; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Controller_Element; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Rewired_Core::Rewired
{
	struct Controller_CompoundElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		mscorlib::System::String* zChKajbhRtCfjSPFRgSGEUIuXlt;
		Rewired_Core::Rewired::CompoundControllerElementType JDiMHgYdAepfXipmvAqweSMqbqQ;
		int32_t bUexmfxpMRkcYngUpWryUlrwAuj;
		IL2CPP::Array<Rewired_Core::Rewired::Controller_CompoundElement_CjnfUHTWIjJOtoVafmSoHGMbdeQ*>* oHCxGkpsYonEgneuogTrkjbrNBoM;
		Rewired_Core::Rewired::Controller* mKKQaygHMiNBDQEDxjDWbHpPMDyY;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		int32_t get_id();
		mscorlib::System::String* get_name();
		Rewired_Core::Rewired::CompoundControllerElementType get_type();
		bool get_hasElements();
		int32_t get_elementCount();
		int32_t get_elementCapacity();
		Rewired_Core::Rewired::ControllerElementIdentifier* get_elementIdentifier();
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, Rewired_Core::Rewired::CompoundControllerElementType type);
		Rewired_Core::Rewired::Controller_Element* nJFFpBXwPcBDucQEfJvHyrjqEpqh(int32_t A_1);
		template <typename T> T* nJFFpBXwPcBDucQEfJvHyrjqEpqh(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nJFFpBXwPcBDucQEfJvHyrjqEpqh");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* rYHENwSQzqpMkFjIgZdkZTlfhcd(int32_t A_1, int32_t& A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rYHENwSQzqpMkFjIgZdkZTlfhcd", std::vector<std::string> { "System.Int32", "System.Int32&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		bool PpjIXoIAPvXitJiZFfGrcxhBUoyV(Rewired_Core::Rewired::Controller_Element* A_1, int32_t A_2);
		bool zTfgpEJrmicUevDlqkPubWJCRwNd(Rewired_Core::Rewired::Controller_Element* A_1);
		void juaLSFcMUWYsFdOSeXVWVwbopql();
		int32_t kihdXdeKpKeLZccapUSVoXoSIpV(Rewired_Core::Rewired::Controller_Element* A_1);
		bool isIcfuJnrjgurOrSlgjrgcEXwAfN(Rewired_Core::Rewired::Controller_Element* A_1, int32_t A_2, int32_t A_3);
		bool BfwiglEiRZMkSIjWIRWXucyTkHPm(int32_t A_1);
		int32_t WLfLGtOugpmnGXdYFnEFqAkRxKo();
	};
}

