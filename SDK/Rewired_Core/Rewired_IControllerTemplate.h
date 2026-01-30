#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
#include "Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller* get_controller();
		mscorlib::System::String* get_name();
		mscorlib::System::Guid get_typeGuid();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::IControllerTemplateElement>* get_elements();
		int32_t get_elementCount();
		Rewired_Core::Rewired::IControllerTemplateElement* GetElement(int32_t id);
		template <typename T> T* GetElement(int32_t id)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&id;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		int32_t GetElementTargets(Rewired_Core::Rewired::ControllerElementTarget target, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>* results);
	};
}

