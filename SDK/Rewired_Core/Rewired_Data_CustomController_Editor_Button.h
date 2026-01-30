#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_CustomController_Editor_Element.h"
#include "Rewired_Data_CustomController_Editor.h"
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor_Element; };

namespace Rewired_Core::Rewired::Data
{
	struct CustomController_Editor_Button : Rewired_Core::Rewired::Data::CustomController_Editor_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, int32_t elementIdentifierId);
		void _ctor(Rewired_Core::Rewired::Data::CustomController_Editor_Button* source);
		Rewired_Core::Rewired::Data::CustomController_Editor_Element* Clone();
	};
}

