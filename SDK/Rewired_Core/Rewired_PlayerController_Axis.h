#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_ElementWithSource.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_AxisCoordinateMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Axis_Definition; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Axis : Rewired_Core::Rewired::PlayerController_ElementWithSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float udRlVFginPkVyIYogllEbWbjQQS;
		Rewired_Core::Rewired::AxisCoordinateMode UBOFuuuSvPCjvhJGmcKGEoKbqqer;
		struct StaticFields
		{
			float fSkHPTFzwGwVYnBiiQIOfbTXIsR;
			Rewired_Core::Rewired::AxisCoordinateMode defaultAxisCoordinateMode;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_Axis_Definition* definition);
		float get_absoluteToRelativeSensitivity();
		void set_absoluteToRelativeSensitivity(float value);
		Rewired_Core::Rewired::AxisCoordinateMode get_coordinateMode();
		float get_value();
		float get_valueRaw();
	};
}

