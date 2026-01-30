#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Components_PlayerController.h"
namespace Rewired_Core::Rewired::Components { struct PlayerController; };
namespace mscorlib::System { struct String; };
#include "Rewired_PlayerController_Element_Type.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Components { struct PlayerController_ElementWithSourceInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Element_Definition; };

namespace Rewired_Core::Rewired::Components
{
	struct PlayerController_ElementInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		Rewired_Core::Rewired::PlayerController_Element_Type _elementType;
		bool _enabled;
		IL2CPP::Array<Rewired_Core::Rewired::Components::PlayerController_ElementWithSourceInfo*>* _elements;
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		Rewired_Core::Rewired::PlayerController_Element_Type get_elementType();
		void set_elementType(Rewired_Core::Rewired::PlayerController_Element_Type value);
		bool get_enabled();
		void set_enabled(bool value);
		IL2CPP::Array<Rewired_Core::Rewired::Components::PlayerController_ElementWithSourceInfo*>* get_elements();
		void set_elements(IL2CPP::Array<Rewired_Core::Rewired::Components::PlayerController_ElementWithSourceInfo*>* value);
		Rewired_Core::Rewired::PlayerController_Element_Definition* ToDefinition();
		void _ctor();
	};
}

