#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_Custom_CustomInputSource_Element.h"
#include "Rewired_Platforms_Custom_CustomInputSource.h"
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Platforms::Custom
{
	struct CustomInputSource_Button : Rewired_Core::Rewired::Platforms::Custom::CustomInputSource_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool value;
		void _ctor();
	};
}

