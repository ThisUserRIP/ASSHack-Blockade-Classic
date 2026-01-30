#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerTemplate_HWYeSWWlUMDAiOaBmaLRRmtVgPv.h"
#include "Rewired_ControllerTemplate.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerTemplateElementType.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_fCjxDNlkBRcPyVPkWeCofpZfsps : Rewired_Core::Rewired::ControllerTemplate_HWYeSWWlUMDAiOaBmaLRRmtVgPv
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t DtFzOaKNqlUneEEzyQFkleKFmEK;
			int32_t efKCQVLiiGrmfwbebFQIkZStOlgo;
			int32_t sdfgttzzCnouGxblyAPFDDrihjci;
			int32_t HrpjTLpTWknzhLhPdbvlOMbadHNK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplateElementType elementType, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_horizontal();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_vertical();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_depth();
	};
}

