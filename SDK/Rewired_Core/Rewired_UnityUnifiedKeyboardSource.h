#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
#include "Rewired_ControllerElementType.h"

namespace Rewired_Core::Rewired
{
	struct UnityUnifiedKeyboardSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		struct StaticFields
		{
			int32_t UYTYbsOfpcmbNOtkxyDZRAQJBoP;
			Rewired_Core::Rewired::HardwareControllerMap_Game* JHkEmQBNBOsqhcOJuHEepQppKdP;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::InputSource get_inputSource();
		Rewired_Core::Rewired::HardwareControllerMap_Game* get_hardwareMap();
		int32_t get_buttonCount();
		Rewired_Core::Rewired::Controller_Extension* get_controllerExtension();
		void _ctor();
		void UpdateInputData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void Clear();
		static Rewired_Core::Rewired::HardwareControllerMap_Game* BiJZqWFRxxbSFNZTlExhTArkqep();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
		static Rewired_Core::Rewired::ControllerElementType GetHardwareElementType(int32_t elementIdentifierId);
	};
}

