#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_ControllerTemplate.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::Rewired
{
	struct FlightPedalsTemplate : Rewired_Core::Rewired::ControllerTemplate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Guid typeGuid;
			int32_t elementId_leftPedal;
			int32_t elementId_rightPedal;
			int32_t elementId_slide;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IFlightPedalsTemplate_get_leftPedal();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IFlightPedalsTemplate_get_rightPedal();
		Rewired_Core::Rewired::IControllerTemplateAxis* Rewired_IFlightPedalsTemplate_get_slide();
		void _ctor(mscorlib::System::Object* payload);
		static void _cctor();
	};
}

