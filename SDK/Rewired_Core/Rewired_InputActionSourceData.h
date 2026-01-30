#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "Rewired_ControllerType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct CbSqnpUljjGcKCHaqzzDFjxgWjMc; };

namespace Rewired_Core::Rewired
{
	struct InputActionSourceData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller* mKKQaygHMiNBDQEDxjDWbHpPMDyY;
		Rewired_Core::Rewired::ControllerMap* kcZEkeCkwsbDlVpCQYkhfRfbrAbY;
		Rewired_Core::Rewired::ActionElementMap* lLCFujSindnlCSPSvrWNcjkuTDa;
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		Rewired_Core::Rewired::ActionElementMap* get_actionElementMap();
		mscorlib::System::String* get_elementIdentifierName();
		void _ctor(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		void _ctor(Rewired_Core::CbSqnpUljjGcKCHaqzzDFjxgWjMc* working);
	};
}

