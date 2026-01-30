#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct IControllerTemplateMapMapping_Internal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::IControllerElementTarget*>* GetTargets();
	};
}

