#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_CompoundElement.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Axis2D_Definition; };
namespace Rewired_Core::Rewired { struct PlayerController_Element_Definition; };
namespace Rewired_Core::Rewired { struct PlayerController_Axis; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Axis2D : Rewired_Core::Rewired::PlayerController_CompoundElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t EXpUUKKXxhXZzvROsGKwAssmaqn;
			int32_t YuwYtNhDqAxfEllOScvIEOnMWCpC;
			int32_t KxLsryzTkdSFGrCIJtElrZjvLPR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_Axis2D_Definition* definition, IL2CPP::Array<Rewired_Core::Rewired::PlayerController_Element_Definition*>* definitions);
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_Axis2D_Definition* definition);
		Rewired_Core::Rewired::PlayerController_Axis* get_xAxis();
		Rewired_Core::Rewired::PlayerController_Axis* get_yAxis();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valueRaw();
	};
}

