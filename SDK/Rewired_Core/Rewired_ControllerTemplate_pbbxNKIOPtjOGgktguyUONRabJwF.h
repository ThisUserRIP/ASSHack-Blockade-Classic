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
namespace Rewired_Core::Rewired { struct ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG; };
namespace Rewired_Core::Rewired { struct ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_pbbxNKIOPtjOGgktguyUONRabJwF : Rewired_Core::Rewired::ControllerTemplate_HWYeSWWlUMDAiOaBmaLRRmtVgPv
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t kZINLaMtgzkUBMeAGNYMiOubKhU;
			int32_t zmfygnAgRhcbpumAiUNReafcMMC;
			int32_t HrpjTLpTWknzhLhPdbvlOMbadHNK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements);
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* axis, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* zeroDetentButton);
		float get_value();
		float get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateAxis* get_throttle();
		Rewired_Core::Rewired::IControllerTemplateButton* get_minDetent();
	};
}

