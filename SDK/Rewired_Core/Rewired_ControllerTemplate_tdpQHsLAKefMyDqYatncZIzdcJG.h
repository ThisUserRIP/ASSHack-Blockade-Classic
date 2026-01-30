#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerTemplate.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
#include "Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElementSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::IControllerTemplate* mMDlSZNQItaeWkrYWjJXeWZyHTD;
		int32_t OPPOtDNHGlrPGeLpHmQhFxdvEAr;
		mscorlib::System::String* zChKajbhRtCfjSPFRgSGEUIuXlt;
		Rewired_Core::Rewired::ControllerTemplateElementType JDiMHgYdAepfXipmvAqweSMqbqQ;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplateElementType elementType);
		int32_t get_id();
		mscorlib::System::String* get_descriptiveName();
		Rewired_Core::Rewired::ControllerTemplateElementType get_type();
		Rewired_Core::Rewired::IControllerTemplate* get_parent();
		int32_t get_elementCount();
		Rewired_Core::Rewired::IControllerTemplateElement* GetElement(int32_t A_1);
		int32_t GetElementTargets(Rewired_Core::Rewired::ControllerElementTarget A_1, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>& A_2);
		Rewired_Core::Rewired::IControllerTemplateElementSource* get_source();
		bool get_exists();
	};
}

