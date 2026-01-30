#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateAxisSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_splitAxis();
		Rewired_Core::Rewired::IControllerElementTarget* get_fullTarget();
		Rewired_Core::Rewired::IControllerElementTarget* get_positiveTarget();
		Rewired_Core::Rewired::IControllerElementTarget* get_negativeTarget();
	};
}

