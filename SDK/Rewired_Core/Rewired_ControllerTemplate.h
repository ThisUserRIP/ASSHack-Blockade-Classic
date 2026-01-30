#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct ADictionary_2; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired { struct ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
#include "Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };
#include "Rewired_ControllerTemplateElementType.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxisSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButtonSource; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired { struct ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* zChKajbhRtCfjSPFRgSGEUIuXlt;
		mscorlib::System::Guid ANNEKwQJTPLZEiQlSBOGgbPotLZ;
		Rewired_Core::Rewired::Controller* mKKQaygHMiNBDQEDxjDWbHpPMDyY;
		Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::IControllerTemplateElement>* VKOYGfbwkoyGrYKOSlWXYHZRgaH;
		Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::String, Rewired_Core::Rewired::IControllerTemplateElement>* vHllEeKNvDFTnYmLbNBtTKLIgkH;
		IL2CPP::Array<Rewired_Core::Rewired::IControllerTemplateElement*>* limitbLPQHBEREoTlrBWoQCATCG;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::IControllerTemplateElement>* BVfiWcyjQaipjiuPedRfeAYWjXl;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		void _ctor(mscorlib::System::Object* payload);
		void _ctor(Rewired_Core::Rewired::ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV* initializer);
		Rewired_Core::Rewired::IControllerTemplateElement* GetElement(int32_t id);
		template <typename T> T* GetElement(int32_t id)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&id;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::Controller* Rewired_IControllerTemplate_get_controller();
		mscorlib::System::String* Rewired_IControllerTemplate_get_name();
		mscorlib::System::Guid Rewired_IControllerTemplate_get_typeGuid();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::IControllerTemplateElement>* Rewired_IControllerTemplate_get_elements();
		int32_t Rewired_IControllerTemplate_get_elementCount();
		Rewired_Core::Rewired::IControllerTemplateElement* Rewired_IControllerTemplate_GetElement(int32_t A_1);
		template <typename T> T* Rewired_IControllerTemplate_GetElement(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.IControllerTemplate.GetElement");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		int32_t Rewired_IControllerTemplate_GetElementTargets(Rewired_Core::Rewired::ControllerElementTarget A_1, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>* A_2);
		int32_t ziVELYcPyqmIBITpTaRfALomcHlD(Rewired_Core::Rewired::ControllerElementTarget A_1, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>& A_2);
		static mscorlib::System::Type* GetInterfaceType(Rewired_Core::Rewired::ControllerTemplateElementType elementType);
		static mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV>* CbuLhsnBDhiigAKiKseSiAPfrMRe(Rewired_Core::Rewired::Controller* A_0, Rewired_Core::Rewired::IControllerTemplateAxisSource* A_1);
		static mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV>* CbuLhsnBDhiigAKiKseSiAPfrMRe(Rewired_Core::Rewired::Controller* A_0, Rewired_Core::Rewired::IControllerTemplateButtonSource* A_1);
		static mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV>* CbuLhsnBDhiigAKiKseSiAPfrMRe(Rewired_Core::Rewired::Controller* A_0, Rewired_Core::Rewired::IControllerElementTarget* A_1);
		static Rewired_Core::Rewired::IControllerTemplateElement* kihdXdeKpKeLZccapUSVoXoSIpV(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::IControllerTemplateElement>* A_0, int32_t A_1);
		static Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* PJQDDEQXXITXHBmutmZXydmfrTs(Rewired_Core::Rewired::IControllerTemplate* A_0, Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::IControllerTemplateElement>* A_1, int32_t A_2);
		static Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* sZPPZVTpQZeOeEYCFTkZhjroQpF(Rewired_Core::Rewired::IControllerTemplate* A_0, Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::IControllerTemplateElement>* A_1, int32_t A_2);
	};
}

