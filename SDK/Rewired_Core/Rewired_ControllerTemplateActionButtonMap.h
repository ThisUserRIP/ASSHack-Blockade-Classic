#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerTemplateActionElementMap.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElementSource; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplateActionButtonMap : Rewired_Core::Rewired::ControllerTemplateActionElementMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Pole oXtVlsEtNcstXLjDidTkmRTxuXr;
		void _ctor(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
		void _ctor(int32_t templateElementIdentifierId, Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		void _ctor(int32_t elementIdentifierId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, bool enabled);
		Rewired_Core::Rewired::Pole get_axisContribution();
		void Export(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		void Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		void Clear();
		int32_t CreateAEMsFromSource(Rewired_Core::Rewired::IControllerTemplateElementSource* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		Rewired_Core::Rewired::ActionElementMap* xhUCiqphBVMDierfEoHjyeWfiuN(Rewired_Core::Rewired::IControllerElementTarget* A_1, Rewired_Core::Rewired::Pole A_2);
	};
}

