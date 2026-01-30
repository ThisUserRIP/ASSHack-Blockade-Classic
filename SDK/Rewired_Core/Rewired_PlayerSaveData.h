#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct JoystickMapSaveData; };
namespace Rewired_Core::Rewired { struct KeyboardMapSaveData; };
namespace Rewired_Core::Rewired { struct MouseMapSaveData; };
namespace Rewired_Core::Rewired { struct CustomControllerMapSaveData; };
namespace Rewired_Core::Rewired { struct InputBehavior; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerMapSaveData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired
{
	struct PlayerSaveData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::JoystickMapSaveData*>* pLhnymUeFaazAldMppVtkmtbMJb;
		IL2CPP::Array<Rewired_Core::Rewired::KeyboardMapSaveData*>* ZZVchEwOszrVxXcOWYKWRSirWpB;
		IL2CPP::Array<Rewired_Core::Rewired::MouseMapSaveData*>* lSyxZXGTVmzFUYROTmSFciCxpl;
		IL2CPP::Array<Rewired_Core::Rewired::CustomControllerMapSaveData*>* pNLdEFqkmAMyzcVrqlyEReIeiTH;
		IL2CPP::Array<Rewired_Core::Rewired::InputBehavior*>* WqVGwTvMXpuIaYEWcmUCutJMlPJ;
		IL2CPP::Array<Rewired_Core::Rewired::JoystickMapSaveData*>* get_joystickMapSaveData();
		IL2CPP::Array<Rewired_Core::Rewired::KeyboardMapSaveData*>* get_keyboardMapSaveData();
		IL2CPP::Array<Rewired_Core::Rewired::MouseMapSaveData*>* get_mouseMapSaveData();
		IL2CPP::Array<Rewired_Core::Rewired::CustomControllerMapSaveData*>* get_customControllerMapSaveData();
		IL2CPP::Array<Rewired_Core::Rewired::InputBehavior*>* get_inputBehaviors();
		int32_t get_joystickMapCount();
		int32_t get_keyboardMapCount();
		int32_t get_mouseMapCount();
		int32_t get_customControllerMapCount();
		int32_t get_inputBehaviorCount();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMapSaveData>* get_AllControllerMapSaveData();
		void _ctor(IL2CPP::Array<Rewired_Core::Rewired::JoystickMapSaveData*>* joystickMapSaveData, IL2CPP::Array<Rewired_Core::Rewired::KeyboardMapSaveData*>* keyboardMapSaveData, IL2CPP::Array<Rewired_Core::Rewired::MouseMapSaveData*>* mouseMapSaveData, IL2CPP::Array<Rewired_Core::Rewired::CustomControllerMapSaveData*>* customControllerMapSaveData, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* inputBehaviors);
	};
}

