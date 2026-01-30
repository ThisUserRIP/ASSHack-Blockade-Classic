#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Components_PlayerController.h"
namespace Rewired_Core::Rewired::Components { struct PlayerController; };
namespace mscorlib::System { struct String; };
#include "Rewired_PlayerController_Element_TypeWithSource.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_AxisCoordinateMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Element_Definition; };

namespace Rewired_Core::Rewired::Components
{
	struct PlayerController_ElementWithSourceInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		Rewired_Core::Rewired::PlayerController_Element_TypeWithSource _elementType;
		bool _enabled;
		int32_t _actionId;
		Rewired_Core::Rewired::AxisCoordinateMode _coordinateMode;
		float _absoluteToRelativeSensitivity;
		float _repeatRate;
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		Rewired_Core::Rewired::PlayerController_Element_TypeWithSource get_elementType();
		void set_elementType(Rewired_Core::Rewired::PlayerController_Element_TypeWithSource value);
		bool get_enabled();
		void set_enabled(bool value);
		int32_t get_actionId();
		void set_actionId(int32_t value);
		Rewired_Core::Rewired::AxisCoordinateMode get_coordinateMode();
		void set_coordinateMode(Rewired_Core::Rewired::AxisCoordinateMode value);
		float get_absoluteSourceSensitivity();
		void set_absoluteSourceSensitivity(float value);
		float get_repeatRate();
		void set_repeatRate(float value);
		Rewired_Core::Rewired::PlayerController_Element_Definition* ToDefinition();
		void _ctor();
	};
}

