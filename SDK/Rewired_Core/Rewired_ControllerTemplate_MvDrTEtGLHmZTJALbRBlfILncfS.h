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
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_MvDrTEtGLHmZTJALbRBlfILncfS : Rewired_Core::Rewired::ControllerTemplate_HWYeSWWlUMDAiOaBmaLRRmtVgPv
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t TEoezQkCRBLCqfBfMRwsiZRJuwg;
			int32_t bKEgMMcgNlYjbMxBGJmwOutTzgd;
			int32_t KXyQTfWniemwQhloooXmbELjWzL;
			int32_t COGaVbpbmrdYeWDWxBWPkUnpQhg;
			int32_t ghcCfBsevrTaTjKJmFFwassSZtc;
			int32_t ORIDllAfNTDqypoOmIMTzqtikaub;
			int32_t SzQdEqphadtoXnBHmhvEWhnSuIW;
			int32_t lgtNbZthvMEPlZlquRalrkIKZQw;
			int32_t HrpjTLpTWknzhLhPdbvlOMbadHNK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, IL2CPP::Array<Rewired_Core::Rewired::ControllerTemplate_tdpQHsLAKefMyDqYatncZIzdcJG*>* elements);
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* up, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* upRight, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* right, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* downRight, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* down, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* downLeft, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* left, Rewired_Core::Rewired::ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf* upLeft);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_value();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateButton* get_up();
		Rewired_Core::Rewired::IControllerTemplateButton* get_upRight();
		Rewired_Core::Rewired::IControllerTemplateButton* get_right();
		Rewired_Core::Rewired::IControllerTemplateButton* get_downRight();
		Rewired_Core::Rewired::IControllerTemplateButton* get_down();
		Rewired_Core::Rewired::IControllerTemplateButton* get_downLeft();
		Rewired_Core::Rewired::IControllerTemplateButton* get_left();
		Rewired_Core::Rewired::IControllerTemplateButton* get_upLeft();
	};
}

