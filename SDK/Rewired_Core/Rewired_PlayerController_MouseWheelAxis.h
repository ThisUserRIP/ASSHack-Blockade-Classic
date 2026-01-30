#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Axis.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_AxisCoordinateMode.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseWheelAxis_Definition; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_MouseWheelAxis : Rewired_Core::Rewired::PlayerController_Axis
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float YmpUwGqnJuCYBxtTXlamlKicVXM;
		double kzQitZyCdErNVlnnQexgXezoDAX;
		float iRcvttLizKvcvJSNnLwNaMgdcRd;
		struct StaticFields
		{
			float defaultRepeatRate;
			Rewired_Core::Rewired::AxisCoordinateMode defaultAxisCoordinateMode;
			float wJoXPmvCzblTWnOkBEcvCGAmaLi;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_MouseWheelAxis_Definition* definition);
		float get_repeatRate();
		void set_repeatRate(float value);
		float get_value();
		void Update();
		void EnabledStateChanged(bool state);
		float kQUFeLsrDcqGoOszFRDiOewMAXS();
		void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
	};
}

