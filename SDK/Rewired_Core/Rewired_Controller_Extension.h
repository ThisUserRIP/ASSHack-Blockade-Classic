#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired::Interfaces { struct IControllerExtensionSource; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Rewired_UpdateLoopType.h"

namespace Rewired_Core::Rewired
{
	struct Controller_Extension : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller* mKKQaygHMiNBDQEDxjDWbHpPMDyY;
		Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* iRvUtWKJYFKiGcFQZzgNVetDeHZ;
		int32_t _reInputId;
		bool get_isJoystickConnected();
		bool get_enabled();
		Rewired_Core::Rewired::Controller* get_controller();
		void _ctor(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* source);
		void _ctor(Rewired_Core::Rewired::Controller_Extension* source);
		template <typename T> T* GetController()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetController");
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
		void SetController(Rewired_Core::Rewired::Controller* controller);
		Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* GetSource();
		void SetSource(Rewired_Core::Rewired::Controller_Extension* extension);
		void MaRLhKVmpyDntAAviiSnvrSuegkt(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1);
		void Clear();
		void SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* source);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		Rewired_Core::Rewired::Controller_Extension* Clone();
	};
}

