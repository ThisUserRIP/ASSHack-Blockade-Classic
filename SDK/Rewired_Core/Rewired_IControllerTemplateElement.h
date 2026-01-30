#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElementSource; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_id();
		mscorlib::System::String* get_descriptiveName();
		Rewired_Core::Rewired::ControllerTemplateElementType get_type();
		bool get_exists();
		Rewired_Core::Rewired::IControllerTemplateElementSource* get_source();
	};
}

