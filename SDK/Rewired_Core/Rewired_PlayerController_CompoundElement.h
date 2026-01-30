#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Element.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
namespace Rewired_Core::Rewired { struct PlayerController_Element; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_CompoundElement_Definition; };
namespace Rewired_Core::Rewired { struct PlayerController_Element_Definition; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Rewired_Core::Rewired
{
	struct PlayerController_CompoundElement : Rewired_Core::Rewired::PlayerController_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Element>* limitbLPQHBEREoTlrBWoQCATCG;
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_CompoundElement_Definition* definition, IL2CPP::Array<Rewired_Core::Rewired::PlayerController_Element_Definition*>* elementDefinitions);
		int32_t get_elementCount();
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
		void mKgbCcfRQAcazSQTYCKAMDlyCzOb(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Element>* A_1);
		void PpjIXoIAPvXitJiZFfGrcxhBUoyV(Rewired_Core::Rewired::PlayerController_Element* A_1);
	};
}

