#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC.h"
namespace Rewired_Core::Rewired { struct InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct InputMapper_Context; };
#include "Rewired_ControllerType.h"
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
#include "Rewired_ModifierKeyFlags.h"
#include "Rewired_AxisRange.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };

namespace Rewired_Core::Rewired
{
	struct InputMapper_WDnBiHUGdsXsQNDubFDrHHiNnDjC_FjGIUwCiZXHvGXcNttCPFqxNBTU : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Player* NBJGKWAdnpIXZRDqoFalAxzujWXb;
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		Rewired_Core::Rewired::InputMapper_Context* WuUQgKxOlinLswafgeVhdrRvVbyC;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		Rewired_Core::Rewired::ControllerPollingInfo CrQLoTGUETgYGMwGAEJhyBZoszG;
		Rewired_Core::Rewired::ModifierKeyFlags deaGiZFJXRrbPFRSkqGfRgMEBKAj;
		Rewired_Core::Rewired::Player* get_player();
		int32_t get_actionId();
		Rewired_Core::Rewired::InputMapper_Context* get_mappingContext();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		int32_t get_controllerId();
		Rewired_Core::Rewired::ControllerPollingInfo get_pollingInfo();
		Rewired_Core::Rewired::ModifierKeyFlags get_modifierKeyFlags();
		Rewired_Core::Rewired::AxisRange get_axisRange();
		mscorlib::System::String* get_elementName();
		void _ctor();
		void pKLNoWCgVUqlRfCsOXaDmHUNbICB(Rewired_Core::Rewired::Player* A_1, Rewired_Core::Rewired::InputMapper_Context* A_2);
		void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
		Rewired_Core::Rewired::ElementAssignment klvAJWXhkZwGcxxTJQlXigJJVCF(Rewired_Core::Rewired::ControllerPollingInfo A_1);
		Rewired_Core::Rewired::ElementAssignment klvAJWXhkZwGcxxTJQlXigJJVCF(Rewired_Core::Rewired::ControllerPollingInfo A_1, Rewired_Core::Rewired::ModifierKeyFlags A_2);
		Rewired_Core::Rewired::ElementAssignment klvAJWXhkZwGcxxTJQlXigJJVCF();
	};
}

