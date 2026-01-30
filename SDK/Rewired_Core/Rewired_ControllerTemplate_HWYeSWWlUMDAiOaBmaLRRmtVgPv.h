#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG.h"
#include "Rewired_ControllerTemplate.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElementSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
#include "Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_HWYeSWWlUMDAiOaBmaLRRmtVgPv : Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t bUexmfxpMRkcYngUpWryUlrwAuj;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* limitbLPQHBEREoTlrBWoQCATCG;
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplateElementType elementType, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements);
		bool get_exists();
		Rewired_Core::Rewired::IControllerTemplateElementSource* get_source();
		int32_t get_elementCount();
		Rewired_Core::Rewired::IControllerTemplateElement* GetElement(int32_t A_1);
		int32_t GetElementTargets(Rewired_Core::Rewired::ControllerElementTarget A_1, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>& A_2);
	};
}

