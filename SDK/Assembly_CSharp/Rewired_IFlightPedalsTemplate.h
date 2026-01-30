#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };

namespace Assembly_CSharp::Rewired
{
	struct IFlightPedalsTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_leftPedal();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_rightPedal();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_slide();
	};
}

