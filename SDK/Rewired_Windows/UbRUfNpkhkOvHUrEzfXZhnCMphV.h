#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "ygqoEDXHsRwsxBouiGomDoOuGVCn.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Windows { struct fVLMUiXAcftmsHRlVVfksDNTQyg; };
#include "..\Rewired_Core\Rewired_InputSource.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Rewired_Windows
{
	struct UbRUfNpkhkOvHUrEzfXZhnCMphV
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_JoystickId();
		Rewired_Windows::ygqoEDXHsRwsxBouiGomDoOuGVCn get_JoystickSourceType();
		intptr_t get_JoystickSourceHandle();
		IL2CPP::Array<bool>* get_Buttons();
		IL2CPP::Array<int32_t>* get_HatValues();
		int32_t get_ButtonCount();
		int32_t get_AxisCount();
		int32_t get_HatCount();
		bool get_HasElements();
		bool get_SupportsVibration();
		int32_t get_VibrationMotorCount();
		Rewired_Windows::fVLMUiXAcftmsHRlVVfksDNTQyg* get_AxesState();
		Rewired_Core::Rewired::InputSource get_InputSource();
		void UpdateValue(intptr_t A_1, int32_t A_2, int32_t A_3, int32_t A_4, double A_5);
		void SetJoystickId(int32_t A_1);
	};
}

