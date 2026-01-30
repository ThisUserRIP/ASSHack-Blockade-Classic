#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerElementType.h"
namespace Rewired_Core::Rewired { struct Controller_Element_RfZgOKJyUEvABlTkTjIsDPexAojI; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct Controller_Element : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		mscorlib::System::String* name;
		Rewired_Core::Rewired::ControllerElementType type;
		Rewired_Core::Rewired::Controller_Element_RfZgOKJyUEvABlTkTjIsDPexAojI* oCfLMZnuYPTRmulFjcpGamEIMrd;
		int32_t FTaOhRCIXwaYaCCoSUvhhbMQgOq;
		Rewired_Core::Rewired::Controller* mKKQaygHMiNBDQEDxjDWbHpPMDyY;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		Rewired_Core::Rewired::ControllerElementIdentifier* get_elementIdentifier();
		bool get_isMemberElement();
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerElementType type);
		void Reset();
		void knZDpxkWRGxFqQwzfTCDRlGqcpse();
		void PLzYqkMescyJxpmYcFBCCTfCZmd();
	};
}

