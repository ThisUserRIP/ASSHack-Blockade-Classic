#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickTemplateMap; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Data::Mapping { struct IHardwareControllerTemplateMap; };
namespace Rewired_Core::Rewired::Data::Mapping { struct IHardwareControllerMap; };
namespace Rewired_Core::Rewired { struct ControllerTemplateElementIdentifier; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
#include "Rewired_InputPlatform.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform; };

namespace Rewired_Core::Rewired::Data
{
	struct ControllerDataFiles : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* defaultHardwareJoystickMap;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*>* hardwareJoystickMaps;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>* joystickTemplates;
		bool iNPFwDuoIihFHlHTXAoSFYUnMpBt;
		mscorlib::System::Guid get_defaultHardwareJoystickMapGuid();
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>* get_JoystickTemplates();
		void set_JoystickTemplates(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap*>* value);
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*>* get_HardwareJoystickMaps();
		void set_HardwareJoystickMaps(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap*>* value);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* get_DefaultHardwareJoystickMap();
		void set_DefaultHardwareJoystickMap(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* value);
		void _ctor();
		IL2CPP::Array<mscorlib::System::String*>* GetJoystickNames();
		IL2CPP::Array<mscorlib::System::String*>* GetEditorJoystickNames();
		IL2CPP::Array<mscorlib::System::Guid>* GetJoystickGuids();
		IL2CPP::Array<mscorlib::System::String*>* GetJoystickTemplateNames();
		IL2CPP::Array<mscorlib::System::Guid>* GetJoystickTemplateGuids();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* GetHardwareJoystickMap(mscorlib::System::Guid guid);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap* GetJoystickTemplate(mscorlib::System::Guid guid);
		Rewired_Core::Rewired::Data::Mapping::IHardwareControllerTemplateMap* GetControllerTemplate(mscorlib::System::Guid guid);
		Rewired_Core::Rewired::Data::Mapping::IHardwareControllerMap* GetHardwareJoystickOrTemplateMap(mscorlib::System::Guid guid);
		Rewired_Core::Rewired::ControllerTemplateElementIdentifier* UoGAUvRQFvakkjSBnCcWcYgbmVC(mscorlib::System::Guid A_1, int32_t A_2);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* cajCiYDpvCMJMdWKiKNtJiQeWiPX(mscorlib::System::Guid A_1, Rewired_Core::Rewired::InputSource A_2);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* URoyLjqeSYnQccNXGDiccZwWSzyT(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* mfwpFClxbTIGZBPakLtsJuVqnnV(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* A_1, Rewired_Core::Rewired::BridgedControllerHWInfo* A_2, bool A_3, Rewired_Core::Rewired::InputPlatform& A_4, int32_t& A_5, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& A_6);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* RTQPIaGabJewyaYjBjNDWpmhrCk(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1, mscorlib::System::String* A_2);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* tztwuCTPyWatmfuDKRIvCOPrBbRq(Rewired_Core::Rewired::BridgedControllerHWInfo* A_1);
		void zVVESbHndqhjCEhsBsUsYFGGtQc();
	};
}

