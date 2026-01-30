#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_ControllerTemplateSpecialElementMapping.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct ControllerTemplateStick6DMapping : Rewired_Core::Rewired::Data::Mapping::ControllerTemplateSpecialElementMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t eid_positionX;
		int32_t eid_positionY;
		int32_t eid_positionZ;
		int32_t eid_rotationX;
		int32_t eid_rotationY;
		int32_t eid_rotationZ;
		void _ctor();
	};
}

