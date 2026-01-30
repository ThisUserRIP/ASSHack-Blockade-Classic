#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerTemplate.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate; };
namespace Rewired_Core::Rewired { struct Controller_Element; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller_Element* ELGZXkYmGMkqLRMAZDPajRatNLEV;
		Rewired_Core::Rewired::IControllerElementTarget* WzOxoriEmhWTekHkNjzWpAiwMXi;
		void _ctor(Rewired_Core::Rewired::IControllerElementTarget* target, Rewired_Core::Rewired::Controller_Element* element);
		bool get_boolValue();
		bool get_boolValuePrev();
		bool get_justPressed();
		bool get_justReleased();
		float get_floatValue();
		float get_floatValuePrev();
		static Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV* twJJKosqyrSZiCjABgFSjvrNDCq();
	};
}

