#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Player_ControllerHelper.h"
namespace Rewired_Core::Rewired { struct Player_ControllerHelper; };
namespace Rewired_Core::Rewired { struct Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct Player_ControllerHelper_TZoNXevHUTdPPGNpVPmigLKtHbF
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME* get_Item(int32_t index);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		int32_t get_Count();
		bool Contains(Rewired_Core::Rewired::Controller* A_1);
		bool Contains(int32_t A_1);
		void RemoveController(int32_t A_1);
		void RemoveController(Rewired_Core::Rewired::Controller* A_1);
		void RemoveAt(int32_t A_1);
		Rewired_Core::Rewired::Controller* GetController(int32_t A_1);
		Rewired_Core::Rewired::Controller* GetControllerWithTag(mscorlib::System::String* A_1);
		int32_t IndexOf(Rewired_Core::Rewired::Controller* A_1);
		int32_t IndexOf(int32_t A_1);
		int32_t IndexOfTag(mscorlib::System::String* A_1);
		void Clear();
		Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME* GetEntry(int32_t A_1);
		Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME* GetEntry(Rewired_Core::Rewired::Controller* A_1);
		void AddEntry(Rewired_Core::Rewired::Player_ControllerHelper_MFYGQsOsrjZrDgPqrCdaQXeEgME* A_1);
	};
}

